/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-present Facebook, Inc. (http://www.facebook.com)  |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

/*
IR function inliner

Inlining functions at the IR level can be complex, particularly when dealing
with async callees. All inlined regions are setup the same way, though later
optimization passes may attempt to elide elements of this inititalization,
particularly the SpillFrame and DefinlineFP. Below is an annotated version of
this setup.

  StStk ...  # Stores initiated for parameters as if this was an ordinary call.

  SpillFrame # Standard spill of an ActRec prior to making a call. The StoreElim
             # pass will attempt to elide these spills.

  #
  # This is where this module starts to emit instructions, the stores and spills
  # are generated by passing arguments and emitting FCall* instructions, prior
  # to having made a decision about inlining.
  #

  LdStk ...     # The inliner first loads all of the arguments off of the stack,
                # effectively popping them. These loads and the preceding
                # stores are generally elided by load and store elimination.

  BeginInlining # Has no side-effects, sets up memory effects for the inlined
                # frame. Most importantly it marks any values on the callee
                # stack from before the call as dead.

  DefInlineFP   # This instruction sets up the inlined frame, redefining the
                # fp SSATmp to refer to the callee frame. In most cases the DCE
                # or partial-DCE passes are able to elide this instruction.

  StLoc ...     # At this point the arguments are stored back to the frame
                # locations for their corresponding locals in the callee. N.B.
                # that in memory these are the same addresses as the stack
                # locations above.

While initializing the frame we also attempt to extract the type and SSATmp for
the context, which is stored in the extra-data for DefInlineFP so that, while
generating the inlined function, frame-state has access to the context.

Once the inlined function returns, the callee must be torn down and the return
value moved into the caller. The sequence for this is annotated below.

  tx := LdLoc ... # Locals are decref'ed inline. A GenericRetDecRefs is never
  DecRef tx       # emitted for inlined regions, in the hopes that IncRefs from
  ...             # pushing arguments will cancel DecRefs from the return.

  ty := LdCtx     # The context is DecRef'ed
  DecRef ty

  tz := LdStk     # The InlineReturn instruction will kill the callee frame
  InlineReturn    # making any frame or stack locations therein invalid, so
  StStk tz        # we load the return value before killing the frame and store
                  # it back to its proper location once the return is complete
                  # so that the value is live in the caller.

We also support inlining of async functions. Returning from an inlined region
is handled differently depending on whether or not the caller entered the
region using FCall with an async eager offset. If the offset was specified,
the execution continues at that offset. Otherwise the result is wrapped in
a StaticWaitHandle and the execution continues at the next opcode.

Async functions may also exit by suspending. The suspend block is annotated
below:

tCallee := DefLabel   # The callee region may suspend from multiple locations,
                      # but after constructing the waithandle they must all
                      # branch to a common suspend block which will continue
                      # execution of the caller at the opcode following FCall,
                      # usually an Await.

InlineSuspend         # This instruction behaves identically to InlineReturn,
                      # killing the callee region. Note that in this case we
                      # do not DecRef locals or context as these have been moved
                      # into the waithandle.

If a FCall with an async eager offset was followed by an Await, this HHIR
sequence follows the InlineSuspend:

tState := LdWhState   # Check the state of the waithandle representing the
JmpZero succeeded     # suspended callee. It may have finished in meanwhile due
EqInt 1               # to ability of surprise hooks to execute arbitrary Hack
JmpNZero failed       # code, so side-exit if that's the case.

tCaller := CreateAFWH # An AFWH is constructed for the caller, as Await must
                      # suspend if waithandle is not finished.

CheckSurpriseFlags    # The caller suspend hook is entered if requested.

RetCtrl               # Control is returned, suspending the caller. In the case
                      # of nested inlined FCall instructions this return would
                      # simply be a branch to the suspend block for the next
                      # most nested callee.

Calls to async functions without async eager offset use an analogous suspend
block which side-exits rather than continuing at the next opcode. This is done
so that the fast path through the callee will return only StaticWaitHandles
which may be elided by the DCE and simplifier passes.

Inlined regions maintain the following invariants, which later optimization
passes may depend on (most notably DCE and partial-DCE):

  - Every callee region must contain a single BeginInlining
  - Every callee region must contain exactly one of InlineReturn or
    InlineReturnNoFrame. This is why suspend blocks must use InlineSuspend.
  - No block may be reachable by both InlineReturn and InlineSuspend.
  - BeginInlining must dominate every instruction within the callee.
  - Excluding side-exits and early returns, InlineReturn must post-dominate
    every instruction in the callee.
  - The callee must contain a return or await.

When a callee contains awaits, these will be implemented as either an await of
the nested callee (in the case of FCall) or a return from the callee and
side-exit from the caller, unless the callee does not contain a return (e.g.
the caller was profiled as always suspending), in which case the callee will
return the waithandle to the caller rather than side-exiting in the case of a
FCall without async eager offset.

Below is an unmaintainable diagram of a pair of an async function inlined into a
pair of callers with and without (*) async eager offset respectively,


Outer:                                 | Inner:
  ...                                  |   ...
  FCall "Inner" aeo1 or FCall "Inner"  |   FCall "Other" aeo2
  Await                                |   Await
 aeo1:                                 |  aeo2:
  ...                                  |   ...

          ...
           |
           v
+-------------------+
| SpillFrame        |
| ...               |
| BeginInlining     |
| DefInlineFP       |
| StLoc             |
| ...               |
+-------------------+
           |
           v
+-------------------+
| ...               |
| tx = Call "Other" |
| ty = LdTVAux tx   |
| JmpNZero ty       | -> +---------------------+
+-------------------+    | ta = CreateAWFH tx  |
           |             | SuspendHook         |
           v             | StStk ta            |
+-------------------+    | Jmp suspendTarget   |--- or (*) ----+
| StStk tx          |    +---------------------+               |
| ... // aeo2       |               |                          v
| Jmp returnTarget  |               v               +---------------------+
+-------------------+    +---------------------+    | tb = LdStk          |
           |             | tb = LdStk          |    | InlineSuspend       |
           v             | InlineSuspend       |    | StStk tb            |
+-------------------+    | StStk tb            |    +---------------------+
| DecRef Locals     |    | tc = LdStk          |               |
| DecRef This       |    | te = LdWhState tc   |               v
| tr = LdStk        |    | JmpZero te          |--------->*Side Exit*
| InlineReturn      |    +---------------------+
| StStk tr          |               |
| CreateSSWH (*)    |               v
+-------------------+    +---------------------+
           |             | td = CreateAFWH tc  |
           v             | SuspendHook         |
          ...            | RetCtrl td          |
                         +---------------------+
*/

#include "hphp/runtime/vm/jit/irgen-inlining.h"

#include "hphp/runtime/vm/jit/analysis.h"
#include "hphp/runtime/vm/jit/mutation.h"

#include "hphp/runtime/vm/jit/irgen-call.h"
#include "hphp/runtime/vm/jit/irgen-control.h"
#include "hphp/runtime/vm/jit/irgen-exit.h"
#include "hphp/runtime/vm/jit/irgen-func-prologue.h"
#include "hphp/runtime/vm/jit/irgen-sprop-global.h"

#include "hphp/runtime/vm/hhbc-codec.h"
#include "hphp/runtime/vm/resumable.h"

namespace HPHP { namespace jit { namespace irgen {

bool isInlining(const IRGS& env) {
  return env.inlineState.depth > 0;
}

uint16_t inlineDepth(const IRGS& env) {
  return env.inlineState.depth;
}

void beginInlining(IRGS& env,
                   const Func* target,
                   const FCallArgs& fca,
                   SSATmp* ctx,
                   Type ctxType,
                   Op writeArOpc,
                   SrcKey startSk,
                   Offset callBcOffset,
                   InlineReturnTarget returnTarget,
                   int cost,
                   bool conjure) {
  assertx(callBcOffset >= 0 && "callBcOffset before beginning of caller");
  // curFunc is null when called from conjureBeginInlining
  assertx((!curFunc(env) ||
          curFunc(env)->base() + callBcOffset < curFunc(env)->past()) &&
         "callBcOffset past end of caller");

  FTRACE(1, "[[[ begin inlining: {}\n", target->fullName()->data());

  // The VM stack-pointer is conceptually pointing to the last
  // parameter, so we need to add numArgs to get to the ActRec
  assertx(!fca.hasUnpack());
  IRSPRelOffset calleeAROff = spOffBCFromIRSP(env) + fca.numArgs;

  ctx = [&] () -> SSATmp* {
    if (!target->implCls()) {
      return nullptr;
    }
    auto ty = ctxType;
    if (!target->isClosureBody()) {
      if (target->isStaticInPrologue() ||
          (!hasThis(env) &&
           isFCallClsMethod(writeArOpc))) {
        assertx(!ty.maybe(TObj));
        if (ty.hasConstVal(TCctx)) {
          ty = Type::ExactCls(ty.cctxVal().cls());
        } else if (!ty.hasConstVal(TCls)) {
          if (!ty.maybe(TCls)) ty = TCls;
          ty &= Type::SubCls(target->cls());
        }
      } else {
        if (target->attrs() & AttrRequiresThis ||
            isFCallObjMethod(writeArOpc) ||
            ty <= TObj) {
          ty &= thisTypeFromFunc(target);
        }
      }
    }
    if (ctx && !ctx->isA(TNullptr)) {
      if (ctx->type() <= ty) {
        return ctx;
      }
      if (ctx->type().maybe(ty)) {
        return gen(env, AssertType, ty, ctx);
      }
      if (ctx->type() <= TCctx && ty <= TCls) {
        return gen(env, AssertType, ty, gen(env, LdClsCctx, ctx));
      }
    }
    if (ty <= TObj) {
      return gen(env, LdARCtx, ty, IRSPRelOffsetData{calleeAROff}, sp(env));
    }
    if (ty <= TCls) {
      auto const cctx =
        gen(env, LdARCtx, TCctx, IRSPRelOffsetData{calleeAROff}, sp(env));
      return gen(env, AssertType, ty, gen(env, LdClsCctx, cctx));
    }
    return nullptr;
  }();

  // If the ctx was extracted from SpillFrame it may be a TCls, otherwise it
  // will be a TCtx (= TObj | TCctx) read from the stack
  assertx(!ctx || (ctx->type() <= (TCtx | TCls) && target->implCls()));

  jit::vector<SSATmp*> params{fca.numArgs};
  for (unsigned i = 0; i < fca.numArgs; ++i) {
    params[fca.numArgs - i - 1] = popF(env);
  }

  // NB: Now that we've popped the callee's arguments off the stack
  // and thus modified the caller's frame state, we're committed to
  // inlining. If we bail out from now on, the caller's frame state
  // will be as if the arguments don't exist on the stack (even though
  // they do).

  if (RuntimeOption::EvalHHIRGenerateAsserts) {
    gen(env, DbgAssertARFunc, IRSPRelOffsetData{calleeAROff},
        sp(env), cns(env, target));
  }

  gen(
    env,
    BeginInlining,
    BeginInliningData{calleeAROff - 1, target, cost},
    sp(env)
  );

  DefInlineFPData data;
  data.target        = target;
  data.callBCOff     = callBcOffset;
  data.ctx           = target->isClosureBody() ? nullptr : ctx;
  data.retSPOff      = offsetFromFP(env, calleeAROff) - kNumActRecCells;
  data.spOffset      = calleeAROff;
  data.numNonDefault = fca.numArgs;
  data.asyncEagerReturn = returnTarget.asyncEagerOffset != kInvalidOffset;

  assertx(startSk.func() == target &&
          startSk.offset() == target->getEntryForNumArgs(fca.numArgs) &&
          startSk.resumeMode() == ResumeMode::None);

  env.inlineState.depth++;
  env.inlineState.costStack.emplace_back(env.inlineState.cost);
  env.inlineState.returnTarget.emplace_back(returnTarget);
  env.inlineState.bcStateStack.emplace_back(env.bcState);
  env.inlineState.cost += cost;
  env.inlineState.stackDepth += target->maxStackCells();
  env.bcState = startSk;
  updateMarker(env);

  auto const calleeFP = gen(env, DefInlineFP, data, sp(env), fp(env));

  for (unsigned i = 0; i < fca.numArgs; ++i) {
    stLocRaw(env, i, calleeFP, params[i]);
  }
  emitPrologueLocals(env, fca.numArgs, target, ctx);

  updateMarker(env);
  env.irb->exceptionStackBoundary();
  emitCalleeDynamicCallCheck(env);

  if (data.ctx && data.ctx->isA(TObj)) {
    assertx(startSk.hasThis());
  } else if (data.ctx && !data.ctx->type().maybe(TObj)) {
    assertx(!startSk.hasThis());
  } else if (target->cls()) {
    env.bcState =
      SrcKey{startSk.func(), startSk.offset(), SrcKey::PrologueTag{}};
    updateMarker(env);

    auto sideExit = [&] (bool hasThis) {
      hint(env, Block::Hint::Unlikely);
      auto const sk =
        SrcKey { startSk.func(), startSk.offset(), ResumeMode::None, hasThis };
      gen(
        env,
        ReqBindJmp,
        ReqBindJmpData {
          sk,
          FPInvOffset { startSk.func()->numSlotsInFrame() },
          spOffBCFromIRSP(env),
          TransFlags{}
        },
        sp(env),
        fp(env)
      );
    };

    ifThenElse(
      env,
      [&] (Block* taken) {
        auto const maybeThis = gen(env, LdCtx, fp(env));
        gen(env, CheckCtxThis, taken, maybeThis);
      },
      [&] {
        if (!startSk.hasThis()) {
          sideExit(true);
        }
      },
      [&] {
        if (startSk.hasThis()) {
          sideExit(false);
        }
      }
    );

    env.bcState = startSk;
    updateMarker(env);
  }
}

void conjureBeginInlining(IRGS& env,
                          const Func* func,
                          SrcKey startSk,
                          Type thisType,
                          const std::vector<Type>& args,
                          InlineReturnTarget returnTarget) {
  auto conjure = [&](Type t) {
    return t.admitsSingleVal() ? cns(env, t) : gen(env, Conjure, t);
  };

  always_assert(isFCall(env.context.callerFPushOp));
  auto const numParams = static_cast<uint32_t>(args.size());

  // Push space for out parameters
  for (auto i = 0; i < func->numInOutParams(); i++) {
    push(env, cns(env, TUninit));
  }

  allocActRec(env);
  for (auto const argType : args) {
    push(env, conjure(argType));
  }
  auto const ctx = thisType != TBottom ? conjure(thisType) : nullptr;

  auto const arInfo = ActRecInfo {
    offsetFromIRSP(env, BCSPRelOffset{static_cast<int32_t>(numParams)}),
    numParams
  };
  gen(env, SpillFrame, arInfo, sp(env), cns(env, func), ctx,
      cns(env, TNullptr), cns(env, false), cns(env, TNullptr));

  beginInlining(
    env,
    func,
    FCallArgs(FCallArgs::Flags::None, numParams, 1, nullptr, kInvalidOffset,
              false),
    ctx,
    ctx ? ctx->type() : TCtx,
    env.context.callerFPushOp,
    startSk,
    0 /* callBcOffset */,
    returnTarget,
    9, /* cost */
    true
  );
}

namespace {
struct InlineFrame {
  SrcKey bcState;
  InlineReturnTarget target;
};

InlineFrame popInlineFrame(IRGS& env) {
  always_assert(env.inlineState.depth > 0);
  always_assert(env.inlineState.returnTarget.size() > 0);
  always_assert(env.inlineState.bcStateStack.size() > 0);

  InlineFrame inlineFrame {
    env.bcState,
    env.inlineState.returnTarget.back()
  };

  // Pop the inlined frame in our IRGS.  Be careful between here and the
  // updateMarker() below, where the caller state isn't entirely set up.
  env.inlineState.depth--;
  env.inlineState.cost = env.inlineState.costStack.back();
  env.inlineState.costStack.pop_back();
  env.inlineState.stackDepth -= inlineFrame.bcState.func()->maxStackCells();
  env.inlineState.returnTarget.pop_back();
  env.bcState = env.inlineState.bcStateStack.back();
  env.inlineState.bcStateStack.pop_back();
  updateMarker(env);

  return inlineFrame;
}

void pushInlineFrame(IRGS& env, const InlineFrame& inlineFrame) {
  // No need to preserve and update cost, as we are not going to recursively
  // inline anything during a single Jmp opcode we are restoring the state for.
  env.inlineState.depth++;
  env.inlineState.costStack.emplace_back(env.inlineState.cost);
  env.inlineState.returnTarget.emplace_back(inlineFrame.target);
  env.inlineState.bcStateStack.emplace_back(env.bcState);
  env.inlineState.stackDepth += inlineFrame.bcState.func()->maxStackCells();
  env.bcState = inlineFrame.bcState;
  updateMarker(env);
}

InlineFrame implInlineReturn(IRGS& env, bool suspend) {
  assertx(!curFunc(env)->isPseudoMain());
  assertx(resumeMode(env) == ResumeMode::None);

  auto const& fs = env.irb->fs();

  // The offset of our caller's FP relative to our own.
  auto const callerFPOff =
    // Offset of the (unchanged) vmsp relative to our fp...
    - fs.irSPOff()
    // ...plus the offset of our parent's fp relative to vmsp.
    + FPInvOffset{0}.to<IRSPRelOffset>(fs.callerIRSPOff()).offset;

  // Return to the caller function.
  if (suspend) {
    gen(env, InlineSuspend, FPRelOffsetData { callerFPOff }, fp(env));
  } else {
    gen(env, InlineReturn, FPRelOffsetData { callerFPOff }, fp(env));
  }

  return popInlineFrame(env);
}

void implReturnBlock(IRGS& env, const RegionDesc& calleeRegion) {
  auto const rt = env.inlineState.returnTarget.back();

  // The IR instructions should be associated with one of the return bytecodes,
  // which should be one of the predecessors of this block.
  auto const curBlock = env.irb->curBlock();
  always_assert(curBlock && !curBlock->preds().empty());
  auto const bcContext = curBlock->preds().front().inst()->bcctx();
  env.bcState.setOffset(bcContext.marker.sk().offset());

  // At this point, env.profTransID and env.region are already set with the
  // caller's information.  We temporarily reset both of these with the callee's
  // information, so that the HHIR instructions emitted for the RetC have their
  // markers associated with the callee.  This is necessary to successfully look
  // up any profile data associated with them.
  auto const callerProfTransID = env.profTransID;
  auto const callerRegion      = env.region;
  SCOPE_EXIT{
    env.profTransID = callerProfTransID;
    env.region      = callerRegion;
  };
  auto const calleeTransID = bcContext.marker.profTransID();
  env.profTransID = calleeTransID;
  env.region = &calleeRegion;
  updateMarker(env);
  env.irb->resetCurIROff(bcContext.iroff + 1);

  decRefLocalsInline(env);
  decRefThis(env);

  auto const callee = curFunc(env);

  auto const nret = callee->numInOutParams() + 1;
  jit::vector<SSATmp*> retVals{nret, nullptr};
  for (auto& v : retVals) v = pop(env, DataTypeGeneric);

  implInlineReturn(env, false);

  // Pop the NullUninit values from the stack.
  for (uint32_t idx = 0; idx < nret - 1; ++idx) pop(env);

  if (!callee->isAsyncFunction()) {
    // Non-async function. Just push the result on the stack.
    if (nret > 1) {
      for (int32_t idx = nret - 2; idx >= 0; --idx) {
        auto const val = retVals[idx];
        push(env, gen(env, AssertType, callOutType(callee, idx), val));
      }
    }
    push(env, gen(env, AssertType, callReturnType(callee), retVals.back()));
    return;
  }

  assertx(nret == 1);
  auto const retVal =
    gen(env, AssertType, awaitedCallReturnType(callee), retVals.back());
  if (rt.asyncEagerOffset == kInvalidOffset) {
    // Async eager return was not requested. Box the returned value and
    // continue execution at the next opcode.
    push(env, gen(env, CreateSSWH, retVal));
  } else {
    // Async eager return was requested. Continue execution at the async eager
    // offset with the unboxed value.
    push(env, retVal);
    jmpImpl(env, bcOff(env) + rt.asyncEagerOffset);
  }
}

bool implSuspendBlock(IRGS& env, bool exitOnAwait) {
  auto const rt = env.inlineState.returnTarget.back();
  // Start a new IR block to hold the remainder of this block.
  auto const did_start = env.irb->startBlock(rt.suspendTarget, false);
  if (!did_start) return false;

  // We strive to inline regions which will mostly eagerly terminate.
  if (exitOnAwait) hint(env, Block::Hint::Unlikely);

  assertx(curFunc(env)->isAsyncFunction());
  auto const label = env.unit.defLabel(1, env.irb->nextBCContext());
  auto const wh = label->dst(0);
  rt.suspendTarget->push_back(label);
  retypeDests(label, &env.unit);

  auto const inlineFrame = implInlineReturn(env, exitOnAwait);
  SCOPE_EXIT { if (exitOnAwait) pushInlineFrame(env, inlineFrame); };

  push(env, wh);
  if (exitOnAwait) {
    if (rt.asyncEagerOffset == kInvalidOffset) {
      gen(env, Jmp, makeExit(env, nextBcOff(env)));
    } else {
      jmpImpl(env, nextBcOff(env));
    }
  }
  return true;
}

////////////////////////////////////////////////////////////////////////////////
}

void implInlineReturn(IRGS& env) {
  implInlineReturn(env, false);
}

bool endInlining(IRGS& env, const RegionDesc& calleeRegion) {
  auto const rt = env.inlineState.returnTarget.back();

  if (env.irb->canStartBlock(rt.callerTarget)) {
    implSuspendBlock(env, true);
  } else {
    return implSuspendBlock(env, false);
  }

  auto const did_start = env.irb->startBlock(rt.callerTarget, false);
  always_assert(did_start);

  implReturnBlock(env, calleeRegion);

  FTRACE(1, "]]] end inlining: {}\n", curFunc(env)->fullName()->data());
  return true;
}

bool conjureEndInlining(IRGS& env, const RegionDesc& calleeRegion,
                        bool builtin) {
  if (!builtin) {
    if (!endInlining(env, calleeRegion)) return false;
  }
  gen(env, ConjureUse, pop(env));
  gen(env, EndBlock, ASSERT_REASON);
  return true;
}

void retFromInlined(IRGS& env) {
  gen(env, Jmp, env.inlineState.returnTarget.back().callerTarget);
}

void suspendFromInlined(IRGS& env, SSATmp* waitHandle) {
  gen(env, Jmp, env.inlineState.returnTarget.back().suspendTarget, waitHandle);
}

//////////////////////////////////////////////////////////////////////

}}}
