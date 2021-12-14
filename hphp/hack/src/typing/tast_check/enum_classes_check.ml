(*
 * Copyright (c) 2021, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree.
 *
 *)

open Hh_prelude
open Aast
open Typing_defs
module Env = Tast_env

let handler =
  object
    inherit Tast_visitor.handler_base

    method! at_expr env expr =
      let _ctx = Env.get_ctx env in
      let (ty, pos, expr_) = expr in
      match (expr_, get_node ty) with
      | (FunctionPointer _, Tfun fun_ty) ->
        let params = fun_ty.ft_params in
        let err_opt =
          Option.map ~f:(fun Typing_defs.{ fp_pos = decl_pos; _ } ->
              Typing_error.(
                wellformedness
                @@ Primary.Wellformedness.Fn_ptr_with_via_label
                     { pos; decl_pos }))
          @@ List.find
               ~f:(fun fp ->
                 Typing_defs_flags.(is_set fp_flags_via_label fp.fp_flags))
               params
        in
        Option.iter err_opt ~f:(fun err -> Errors.add_typing_error err)
      | _ -> ()

    method! at_class_ env c =
      let tcopt = Env.get_tcopt env in
      let enabled = tcopt.GlobalOptions.po_enable_enum_classes in
      let is_enum_class = Aast.is_enum_class c in
      let pos = fst c.Aast.c_name in
      if (not enabled) && is_enum_class then
        Errors.add_typing_error
          Typing_error.(enum @@ Primary.Enum.Enum_classes_reserved_syntax pos)
  end
