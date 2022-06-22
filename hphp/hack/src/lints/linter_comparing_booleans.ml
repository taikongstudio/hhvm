(*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)
let as_lvar_and_literal ((_, _, lhs) : Tast.expr) ((_, _, rhs) : Tast.expr) :
    (string * bool) option =
  match (lhs, rhs) with
  | (Aast.Lvar (_, id), Aast.True) -> Some (Local_id.get_name id, true)
  | (Aast.Lvar (_, id), Aast.False) -> Some (Local_id.get_name id, false)
  | _ -> None

let which_boolean_literal ((_ty, _pos, expr_) : Tast.expr) =
  match expr_ with
  | Aast.True -> Some true
  | Aast.False -> Some false
  | _ -> None

let is_boolean_variable ((ty, _pos, _expr_) : Tast.expr) =
  Typing_defs.is_prim Aast.Tbool ty

let checking_the_expression exp1 exp2 =
  if is_boolean_variable exp1 then
    as_lvar_and_literal exp1 exp2
  else
    None

let handler =
  object
    inherit Tast_visitor.handler_base

    method! at_stmt _env (pos, stmt) =
      match stmt with
      | Aast.If ((_ty, _pos, e), _, _) ->
        (match e with
        | Aast.Binop (op, exp1, exp2) ->
          (match op with
          | Ast_defs.Eqeq
          | Ast_defs.Eqeqeq ->
            (match checking_the_expression exp1 exp2 with
            | Some (name, boolean_var) ->
              Lints_errors.comparing_booleans pos name boolean_var
            | None ->
              (match checking_the_expression exp2 exp1 with
              | Some (name, boolean_var) ->
                Lints_errors.comparing_booleans pos name boolean_var
              | None -> ()))
          | _ -> ())
        | _ -> ())
      | _ -> ()
  end
