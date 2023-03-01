// Copyright (c) Meta Platforms, Inc. and affiliates.
//
// This source code is licensed under the MIT license found in the
// LICENSE file in the "hack" directory of this source tree.
use std::ops::ControlFlow;

use naming_special_names_rust as sn;
use oxidized::aast_defs::ClassId;
use oxidized::aast_defs::ClassId_;
use oxidized::aast_defs::Class_;
use oxidized::aast_defs::Expr;
use oxidized::aast_defs::Expr_;
use oxidized::aast_defs::FunDef;
use oxidized::aast_defs::Method_;
use oxidized::ast_defs::ClassishKind;
use oxidized::ast_defs::Id;
use oxidized::naming_error::NamingError;
use oxidized::naming_phase_error::NamingPhaseError;
use oxidized::nast_check_error::NastCheckError;

use crate::config::Config;
use crate::Pass;

#[derive(Clone, Default)]
pub struct ValidateIllegalNamePass {
    func_name: Option<String>,
    classish_kind: Option<ClassishKind>,
}

impl ValidateIllegalNamePass {
    fn is_current_func(&self, nm: &str) -> bool {
        if let Some(cur_nm) = &self.func_name {
            return cur_nm == nm;
        }
        false
    }

    fn in_trait(&self) -> bool {
        self.classish_kind
            .map_or(false, |ck| ck == ClassishKind::Ctrait)
    }
}

impl Pass for ValidateIllegalNamePass {
    fn on_ty_class__top_down<Ex, En>(
        &mut self,
        elem: &mut Class_<Ex, En>,
        _cfg: &Config,
        errs: &mut Vec<NamingPhaseError>,
    ) -> ControlFlow<(), ()>
    where
        Ex: Default,
    {
        self.classish_kind = Some(elem.kind);
        elem.typeconsts
            .iter()
            .for_each(|tc| check_illegal_member_variable_class(&tc.name, errs));
        elem.consts
            .iter()
            .for_each(|cc| check_illegal_member_variable_class(&cc.id, errs));
        ControlFlow::Continue(())
    }

    fn on_ty_fun_def_top_down<Ex, En>(
        &mut self,
        elem: &mut FunDef<Ex, En>,
        _cfg: &Config,
        errs: &mut Vec<NamingPhaseError>,
    ) -> ControlFlow<(), ()>
    where
        Ex: Default,
    {
        self.func_name = Some(elem.name.name().to_string());
        let lower_name = elem.name.name().to_ascii_lowercase();
        let lower_norm = lower_name
            .strip_prefix('/')
            .unwrap_or(&lower_name)
            .to_string();
        if lower_norm == sn::members::__CONSTRUCT || lower_norm == "using" {
            errs.push(NamingPhaseError::NastCheck(
                NastCheckError::IllegalFunctionName {
                    pos: elem.name.pos().clone(),
                    name: elem.name.name().to_string(),
                },
            ))
        }
        ControlFlow::Continue(())
    }

    fn on_ty_method__top_down<Ex, En>(
        &mut self,
        elem: &mut Method_<Ex, En>,
        _cfg: &Config,
        errs: &mut Vec<NamingPhaseError>,
    ) -> ControlFlow<(), ()>
    where
        Ex: Default,
    {
        self.func_name = Some(elem.name.name().to_string());
        if elem.name.name() == sn::members::__DESTRUCT {
            errs.push(NamingPhaseError::NastCheck(
                NastCheckError::IllegalDestructor(elem.name.pos().clone()),
            ))
        }
        ControlFlow::Continue(())
    }

    fn on_ty_expr__bottom_up<Ex, En>(
        &mut self,
        elem: &mut Expr_<Ex, En>,
        _cfg: &Config,
        errs: &mut Vec<NamingPhaseError>,
    ) -> ControlFlow<(), ()>
    where
        Ex: Default,
    {
        match elem {
            Expr_::Id(box id)
                if id.name() == sn::pseudo_consts::G__CLASS__ && self.classish_kind.is_none() =>
            {
                errs.push(NamingPhaseError::Naming(NamingError::IllegalCLASS(
                    id.pos().clone(),
                )))
            }

            Expr_::Id(box id) if id.name() == sn::pseudo_consts::G__TRAIT__ && !self.in_trait() => {
                errs.push(NamingPhaseError::Naming(NamingError::IllegalTRAIT(
                    id.pos().clone(),
                )))
            }

            // TODO[mjt] Check if this will have already been elaborated to `CIparent`
            Expr_::ClassConst(box (
                ClassId(_, _, ClassId_::CIexpr(Expr(_, _, Expr_::Id(box id)))),
                (_, meth_name),
            )) if id.name() == sn::classes::PARENT && self.is_current_func(meth_name) => (),

            Expr_::ClassConst(box (_, (pos, meth_name)))
                if is_magic(meth_name) && !self.is_current_func(meth_name) =>
            {
                errs.push(NamingPhaseError::NastCheck(NastCheckError::Magic {
                    pos: pos.clone(),
                    meth_name: meth_name.clone(),
                }))
            }

            Expr_::ObjGet(box (_, Expr(_, _, Expr_::Id(box id)), _, _)) if is_magic(id.name()) => {
                errs.push(NamingPhaseError::NastCheck(NastCheckError::Magic {
                    pos: id.pos().clone(),
                    meth_name: id.name().to_string(),
                }))
            }

            Expr_::MethodCaller(box (_, (pos, meth_name))) if is_magic(meth_name) => {
                errs.push(NamingPhaseError::NastCheck(NastCheckError::Magic {
                    pos: pos.clone(),
                    meth_name: meth_name.clone(),
                }))
            }
            _ => (),
        }
        ControlFlow::Continue(())
    }
}

fn check_illegal_member_variable_class(id: &Id, errs: &mut Vec<NamingPhaseError>) {
    if id.name().to_ascii_lowercase() == sn::members::M_CLASS {
        errs.push(NamingPhaseError::Naming(
            NamingError::IllegalMemberVariableClass(id.pos().clone()),
        ))
    }
}

fn is_magic(nm: &str) -> bool {
    nm != sn::members::__TO_STRING && sn::members::AS_LOWERCASE_SET.contains(nm)
}
