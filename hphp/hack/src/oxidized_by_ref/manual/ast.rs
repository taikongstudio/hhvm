// Copyright (c) Facebook, Inc. and its affiliates.
//
// This source code is licensed under the MIT license found in the
// LICENSE file in the "hack" directory of this source tree.

use crate::aast;
use crate::aast_defs;
use crate::ast_defs;

pub use aast::*;
pub use aast_defs::*;
pub use ast_defs::*;

// Expressions have no type annotation.
type Ex = ();

// Function bodies have no annotation.
type Fb = ();

// Toplevel definitions and methods have no "environment" annotation.
type En = ();

// Type hints have no annotation.
type Hi = ();

pub type Afield<'a> = aast::Afield<'a, Ex, Fb, En, Hi>;
pub type AsExpr<'a> = aast::AsExpr<'a, Ex, Fb, En, Hi>;
pub type Block<'a> = aast::Block<'a, Ex, Fb, En, Hi>;
pub type CaField<'a> = aast::CaField<'a, Ex, Fb, En, Hi>;
pub type Case<'a> = aast::Case<'a, Ex, Fb, En, Hi>;
pub type Catch<'a> = aast::Catch<'a, Ex, Fb, En, Hi>;
pub type Class_<'a> = aast::Class_<'a, Ex, Fb, En, Hi>;
pub type ClassAttr<'a> = aast::ClassAttr<'a, Ex, Fb, En, Hi>;
pub type ClassConst<'a> = aast::ClassConst<'a, Ex, Fb, En, Hi>;
pub type ClassGetExpr<'a> = aast::ClassGetExpr<'a, Ex, Fb, En, Hi>;
pub type ClassId<'a> = aast::ClassId<'a, Ex, Fb, En, Hi>;
pub type ClassId_<'a> = aast::ClassId_<'a, Ex, Fb, En, Hi>;
pub type ClassTypeconstDef<'a> = aast::ClassTypeconstDef<'a, Ex, Fb, En, Hi>;
pub type ClassVar<'a> = aast::ClassVar<'a, Ex, Fb, En, Hi>;
pub type CollectionTarg<'a> = aast::CollectionTarg<'a, Hi>;
pub type Def<'a> = aast::Def<'a, Ex, Fb, En, Hi>;
pub type Expr<'a> = aast::Expr<'a, Ex, Fb, En, Hi>;
pub type Expr_<'a> = aast::Expr_<'a, Ex, Fb, En, Hi>;
pub type Field<'a> = aast::Field<'a, Ex, Fb, En, Hi>;
pub type FileAttribute<'a> = aast::FileAttribute<'a, Ex, Fb, En, Hi>;
pub type Fun_<'a> = aast::Fun_<'a, Ex, Fb, En, Hi>;
pub type FuncBody<'a> = aast::FuncBody<'a, Ex, Fb, En, Hi>;
pub type FunDef<'a> = aast::FunDef<'a, Ex, Fb, En, Hi>;
pub type FunParam<'a> = aast::FunParam<'a, Ex, Fb, En, Hi>;
pub type FunVariadicity<'a> = aast::FunVariadicity<'a, Ex, Fb, En, Hi>;
pub type Gconst<'a> = aast::Gconst<'a, Ex, Fb, En, Hi>;
pub type Method_<'a> = aast::Method_<'a, Ex, Fb, En, Hi>;
pub type Program<'a> = aast::Program<'a, Ex, Fb, En, Hi>;
pub type RecordDef<'a> = aast::RecordDef<'a, Ex, Fb, En, Hi>;
pub type Stmt<'a> = aast::Stmt<'a, Ex, Fb, En, Hi>;
pub type Stmt_<'a> = aast::Stmt_<'a, Ex, Fb, En, Hi>;
pub type Targ<'a> = aast::Targ<'a, Hi>;
pub type Tparam<'a> = aast::Tparam<'a, Ex, Fb, En, Hi>;
pub type Typedef<'a> = aast::Typedef<'a, Ex, Fb, En, Hi>;
pub type TypeHint<'a> = aast::TypeHint<'a, Hi>;
pub type UserAttribute<'a> = aast::UserAttribute<'a, Ex, Fb, En, Hi>;
pub type UsingStmt<'a> = aast::UsingStmt<'a, Ex, Fb, En, Hi>;
pub type XhpAttr<'a> = aast::XhpAttr<'a, Ex, Fb, En, Hi>;
pub type XhpAttribute<'a> = aast::XhpAttribute<'a, Ex, Fb, En, Hi>;
