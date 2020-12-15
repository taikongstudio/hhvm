/**
 * Copyright (c) 2016, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the MIT license found in the
 * LICENSE file in the "hack" directory of this source tree. An additional
 * directory.
 *
 **
 *
 * THIS FILE IS @generated; DO NOT EDIT IT
 * To regenerate this file, run
 *
 *   buck run //hphp/hack/src:generate_full_fidelity
 *
 **
 *
 */
use crate::{syntax_kind::SyntaxKind, lexable_token::LexableToken};
use super::{syntax::Syntax, syntax_variant_generated::SyntaxVariant};

impl<T: LexableToken, V> Syntax<'_, T, V> {
    pub fn kind(&self) -> SyntaxKind {
        match &self.children {
            SyntaxVariant::Missing => SyntaxKind::Missing,
            SyntaxVariant::Token (t) => SyntaxKind::Token(t.kind()),
            SyntaxVariant::SyntaxList (_) => SyntaxKind::SyntaxList,
            SyntaxVariant::EndOfFile {..} => SyntaxKind::EndOfFile,
            SyntaxVariant::Script {..} => SyntaxKind::Script,
            SyntaxVariant::QualifiedName {..} => SyntaxKind::QualifiedName,
            SyntaxVariant::SimpleTypeSpecifier {..} => SyntaxKind::SimpleTypeSpecifier,
            SyntaxVariant::LiteralExpression {..} => SyntaxKind::LiteralExpression,
            SyntaxVariant::PrefixedStringExpression {..} => SyntaxKind::PrefixedStringExpression,
            SyntaxVariant::PrefixedCodeExpression {..} => SyntaxKind::PrefixedCodeExpression,
            SyntaxVariant::VariableExpression {..} => SyntaxKind::VariableExpression,
            SyntaxVariant::PipeVariableExpression {..} => SyntaxKind::PipeVariableExpression,
            SyntaxVariant::FileAttributeSpecification {..} => SyntaxKind::FileAttributeSpecification,
            SyntaxVariant::EnumDeclaration {..} => SyntaxKind::EnumDeclaration,
            SyntaxVariant::Enumerator {..} => SyntaxKind::Enumerator,
            SyntaxVariant::EnumClassDeclaration {..} => SyntaxKind::EnumClassDeclaration,
            SyntaxVariant::EnumClassEnumerator {..} => SyntaxKind::EnumClassEnumerator,
            SyntaxVariant::RecordDeclaration {..} => SyntaxKind::RecordDeclaration,
            SyntaxVariant::RecordField {..} => SyntaxKind::RecordField,
            SyntaxVariant::AliasDeclaration {..} => SyntaxKind::AliasDeclaration,
            SyntaxVariant::PropertyDeclaration {..} => SyntaxKind::PropertyDeclaration,
            SyntaxVariant::PropertyDeclarator {..} => SyntaxKind::PropertyDeclarator,
            SyntaxVariant::NamespaceDeclaration {..} => SyntaxKind::NamespaceDeclaration,
            SyntaxVariant::NamespaceDeclarationHeader {..} => SyntaxKind::NamespaceDeclarationHeader,
            SyntaxVariant::NamespaceBody {..} => SyntaxKind::NamespaceBody,
            SyntaxVariant::NamespaceEmptyBody {..} => SyntaxKind::NamespaceEmptyBody,
            SyntaxVariant::NamespaceUseDeclaration {..} => SyntaxKind::NamespaceUseDeclaration,
            SyntaxVariant::NamespaceGroupUseDeclaration {..} => SyntaxKind::NamespaceGroupUseDeclaration,
            SyntaxVariant::NamespaceUseClause {..} => SyntaxKind::NamespaceUseClause,
            SyntaxVariant::FunctionDeclaration {..} => SyntaxKind::FunctionDeclaration,
            SyntaxVariant::FunctionDeclarationHeader {..} => SyntaxKind::FunctionDeclarationHeader,
            SyntaxVariant::Capability {..} => SyntaxKind::Capability,
            SyntaxVariant::WhereClause {..} => SyntaxKind::WhereClause,
            SyntaxVariant::WhereConstraint {..} => SyntaxKind::WhereConstraint,
            SyntaxVariant::MethodishDeclaration {..} => SyntaxKind::MethodishDeclaration,
            SyntaxVariant::MethodishTraitResolution {..} => SyntaxKind::MethodishTraitResolution,
            SyntaxVariant::ClassishDeclaration {..} => SyntaxKind::ClassishDeclaration,
            SyntaxVariant::ClassishBody {..} => SyntaxKind::ClassishBody,
            SyntaxVariant::TraitUsePrecedenceItem {..} => SyntaxKind::TraitUsePrecedenceItem,
            SyntaxVariant::TraitUseAliasItem {..} => SyntaxKind::TraitUseAliasItem,
            SyntaxVariant::TraitUseConflictResolution {..} => SyntaxKind::TraitUseConflictResolution,
            SyntaxVariant::TraitUse {..} => SyntaxKind::TraitUse,
            SyntaxVariant::RequireClause {..} => SyntaxKind::RequireClause,
            SyntaxVariant::ConstDeclaration {..} => SyntaxKind::ConstDeclaration,
            SyntaxVariant::ConstantDeclarator {..} => SyntaxKind::ConstantDeclarator,
            SyntaxVariant::TypeConstDeclaration {..} => SyntaxKind::TypeConstDeclaration,
            SyntaxVariant::ContextConstDeclaration {..} => SyntaxKind::ContextConstDeclaration,
            SyntaxVariant::DecoratedExpression {..} => SyntaxKind::DecoratedExpression,
            SyntaxVariant::ParameterDeclaration {..} => SyntaxKind::ParameterDeclaration,
            SyntaxVariant::VariadicParameter {..} => SyntaxKind::VariadicParameter,
            SyntaxVariant::OldAttributeSpecification {..} => SyntaxKind::OldAttributeSpecification,
            SyntaxVariant::AttributeSpecification {..} => SyntaxKind::AttributeSpecification,
            SyntaxVariant::Attribute {..} => SyntaxKind::Attribute,
            SyntaxVariant::InclusionExpression {..} => SyntaxKind::InclusionExpression,
            SyntaxVariant::InclusionDirective {..} => SyntaxKind::InclusionDirective,
            SyntaxVariant::CompoundStatement {..} => SyntaxKind::CompoundStatement,
            SyntaxVariant::ExpressionStatement {..} => SyntaxKind::ExpressionStatement,
            SyntaxVariant::MarkupSection {..} => SyntaxKind::MarkupSection,
            SyntaxVariant::MarkupSuffix {..} => SyntaxKind::MarkupSuffix,
            SyntaxVariant::UnsetStatement {..} => SyntaxKind::UnsetStatement,
            SyntaxVariant::UsingStatementBlockScoped {..} => SyntaxKind::UsingStatementBlockScoped,
            SyntaxVariant::UsingStatementFunctionScoped {..} => SyntaxKind::UsingStatementFunctionScoped,
            SyntaxVariant::WhileStatement {..} => SyntaxKind::WhileStatement,
            SyntaxVariant::IfStatement {..} => SyntaxKind::IfStatement,
            SyntaxVariant::ElseifClause {..} => SyntaxKind::ElseifClause,
            SyntaxVariant::ElseClause {..} => SyntaxKind::ElseClause,
            SyntaxVariant::TryStatement {..} => SyntaxKind::TryStatement,
            SyntaxVariant::CatchClause {..} => SyntaxKind::CatchClause,
            SyntaxVariant::FinallyClause {..} => SyntaxKind::FinallyClause,
            SyntaxVariant::DoStatement {..} => SyntaxKind::DoStatement,
            SyntaxVariant::ForStatement {..} => SyntaxKind::ForStatement,
            SyntaxVariant::ForeachStatement {..} => SyntaxKind::ForeachStatement,
            SyntaxVariant::SwitchStatement {..} => SyntaxKind::SwitchStatement,
            SyntaxVariant::SwitchSection {..} => SyntaxKind::SwitchSection,
            SyntaxVariant::SwitchFallthrough {..} => SyntaxKind::SwitchFallthrough,
            SyntaxVariant::CaseLabel {..} => SyntaxKind::CaseLabel,
            SyntaxVariant::DefaultLabel {..} => SyntaxKind::DefaultLabel,
            SyntaxVariant::ReturnStatement {..} => SyntaxKind::ReturnStatement,
            SyntaxVariant::ThrowStatement {..} => SyntaxKind::ThrowStatement,
            SyntaxVariant::BreakStatement {..} => SyntaxKind::BreakStatement,
            SyntaxVariant::ContinueStatement {..} => SyntaxKind::ContinueStatement,
            SyntaxVariant::EchoStatement {..} => SyntaxKind::EchoStatement,
            SyntaxVariant::ConcurrentStatement {..} => SyntaxKind::ConcurrentStatement,
            SyntaxVariant::SimpleInitializer {..} => SyntaxKind::SimpleInitializer,
            SyntaxVariant::AnonymousClass {..} => SyntaxKind::AnonymousClass,
            SyntaxVariant::AnonymousFunction {..} => SyntaxKind::AnonymousFunction,
            SyntaxVariant::AnonymousFunctionUseClause {..} => SyntaxKind::AnonymousFunctionUseClause,
            SyntaxVariant::LambdaExpression {..} => SyntaxKind::LambdaExpression,
            SyntaxVariant::LambdaSignature {..} => SyntaxKind::LambdaSignature,
            SyntaxVariant::CastExpression {..} => SyntaxKind::CastExpression,
            SyntaxVariant::ScopeResolutionExpression {..} => SyntaxKind::ScopeResolutionExpression,
            SyntaxVariant::MemberSelectionExpression {..} => SyntaxKind::MemberSelectionExpression,
            SyntaxVariant::SafeMemberSelectionExpression {..} => SyntaxKind::SafeMemberSelectionExpression,
            SyntaxVariant::EmbeddedMemberSelectionExpression {..} => SyntaxKind::EmbeddedMemberSelectionExpression,
            SyntaxVariant::YieldExpression {..} => SyntaxKind::YieldExpression,
            SyntaxVariant::PrefixUnaryExpression {..} => SyntaxKind::PrefixUnaryExpression,
            SyntaxVariant::PostfixUnaryExpression {..} => SyntaxKind::PostfixUnaryExpression,
            SyntaxVariant::BinaryExpression {..} => SyntaxKind::BinaryExpression,
            SyntaxVariant::IsExpression {..} => SyntaxKind::IsExpression,
            SyntaxVariant::AsExpression {..} => SyntaxKind::AsExpression,
            SyntaxVariant::NullableAsExpression {..} => SyntaxKind::NullableAsExpression,
            SyntaxVariant::ConditionalExpression {..} => SyntaxKind::ConditionalExpression,
            SyntaxVariant::EvalExpression {..} => SyntaxKind::EvalExpression,
            SyntaxVariant::DefineExpression {..} => SyntaxKind::DefineExpression,
            SyntaxVariant::IssetExpression {..} => SyntaxKind::IssetExpression,
            SyntaxVariant::FunctionCallExpression {..} => SyntaxKind::FunctionCallExpression,
            SyntaxVariant::FunctionPointerExpression {..} => SyntaxKind::FunctionPointerExpression,
            SyntaxVariant::ParenthesizedExpression {..} => SyntaxKind::ParenthesizedExpression,
            SyntaxVariant::BracedExpression {..} => SyntaxKind::BracedExpression,
            SyntaxVariant::ETSpliceExpression {..} => SyntaxKind::ETSpliceExpression,
            SyntaxVariant::EmbeddedBracedExpression {..} => SyntaxKind::EmbeddedBracedExpression,
            SyntaxVariant::ListExpression {..} => SyntaxKind::ListExpression,
            SyntaxVariant::CollectionLiteralExpression {..} => SyntaxKind::CollectionLiteralExpression,
            SyntaxVariant::ObjectCreationExpression {..} => SyntaxKind::ObjectCreationExpression,
            SyntaxVariant::ConstructorCall {..} => SyntaxKind::ConstructorCall,
            SyntaxVariant::RecordCreationExpression {..} => SyntaxKind::RecordCreationExpression,
            SyntaxVariant::DarrayIntrinsicExpression {..} => SyntaxKind::DarrayIntrinsicExpression,
            SyntaxVariant::DictionaryIntrinsicExpression {..} => SyntaxKind::DictionaryIntrinsicExpression,
            SyntaxVariant::KeysetIntrinsicExpression {..} => SyntaxKind::KeysetIntrinsicExpression,
            SyntaxVariant::VarrayIntrinsicExpression {..} => SyntaxKind::VarrayIntrinsicExpression,
            SyntaxVariant::VectorIntrinsicExpression {..} => SyntaxKind::VectorIntrinsicExpression,
            SyntaxVariant::ElementInitializer {..} => SyntaxKind::ElementInitializer,
            SyntaxVariant::SubscriptExpression {..} => SyntaxKind::SubscriptExpression,
            SyntaxVariant::EmbeddedSubscriptExpression {..} => SyntaxKind::EmbeddedSubscriptExpression,
            SyntaxVariant::AwaitableCreationExpression {..} => SyntaxKind::AwaitableCreationExpression,
            SyntaxVariant::XHPChildrenDeclaration {..} => SyntaxKind::XHPChildrenDeclaration,
            SyntaxVariant::XHPChildrenParenthesizedList {..} => SyntaxKind::XHPChildrenParenthesizedList,
            SyntaxVariant::XHPCategoryDeclaration {..} => SyntaxKind::XHPCategoryDeclaration,
            SyntaxVariant::XHPEnumType {..} => SyntaxKind::XHPEnumType,
            SyntaxVariant::XHPLateinit {..} => SyntaxKind::XHPLateinit,
            SyntaxVariant::XHPRequired {..} => SyntaxKind::XHPRequired,
            SyntaxVariant::XHPClassAttributeDeclaration {..} => SyntaxKind::XHPClassAttributeDeclaration,
            SyntaxVariant::XHPClassAttribute {..} => SyntaxKind::XHPClassAttribute,
            SyntaxVariant::XHPSimpleClassAttribute {..} => SyntaxKind::XHPSimpleClassAttribute,
            SyntaxVariant::XHPSimpleAttribute {..} => SyntaxKind::XHPSimpleAttribute,
            SyntaxVariant::XHPSpreadAttribute {..} => SyntaxKind::XHPSpreadAttribute,
            SyntaxVariant::XHPOpen {..} => SyntaxKind::XHPOpen,
            SyntaxVariant::XHPExpression {..} => SyntaxKind::XHPExpression,
            SyntaxVariant::XHPClose {..} => SyntaxKind::XHPClose,
            SyntaxVariant::TypeConstant {..} => SyntaxKind::TypeConstant,
            SyntaxVariant::VectorTypeSpecifier {..} => SyntaxKind::VectorTypeSpecifier,
            SyntaxVariant::KeysetTypeSpecifier {..} => SyntaxKind::KeysetTypeSpecifier,
            SyntaxVariant::TupleTypeExplicitSpecifier {..} => SyntaxKind::TupleTypeExplicitSpecifier,
            SyntaxVariant::VarrayTypeSpecifier {..} => SyntaxKind::VarrayTypeSpecifier,
            SyntaxVariant::FunctionCtxTypeSpecifier {..} => SyntaxKind::FunctionCtxTypeSpecifier,
            SyntaxVariant::TypeParameter {..} => SyntaxKind::TypeParameter,
            SyntaxVariant::TypeConstraint {..} => SyntaxKind::TypeConstraint,
            SyntaxVariant::ContextConstraint {..} => SyntaxKind::ContextConstraint,
            SyntaxVariant::DarrayTypeSpecifier {..} => SyntaxKind::DarrayTypeSpecifier,
            SyntaxVariant::DictionaryTypeSpecifier {..} => SyntaxKind::DictionaryTypeSpecifier,
            SyntaxVariant::ClosureTypeSpecifier {..} => SyntaxKind::ClosureTypeSpecifier,
            SyntaxVariant::ClosureParameterTypeSpecifier {..} => SyntaxKind::ClosureParameterTypeSpecifier,
            SyntaxVariant::ClassnameTypeSpecifier {..} => SyntaxKind::ClassnameTypeSpecifier,
            SyntaxVariant::FieldSpecifier {..} => SyntaxKind::FieldSpecifier,
            SyntaxVariant::FieldInitializer {..} => SyntaxKind::FieldInitializer,
            SyntaxVariant::ShapeTypeSpecifier {..} => SyntaxKind::ShapeTypeSpecifier,
            SyntaxVariant::ShapeExpression {..} => SyntaxKind::ShapeExpression,
            SyntaxVariant::TupleExpression {..} => SyntaxKind::TupleExpression,
            SyntaxVariant::GenericTypeSpecifier {..} => SyntaxKind::GenericTypeSpecifier,
            SyntaxVariant::NullableTypeSpecifier {..} => SyntaxKind::NullableTypeSpecifier,
            SyntaxVariant::LikeTypeSpecifier {..} => SyntaxKind::LikeTypeSpecifier,
            SyntaxVariant::SoftTypeSpecifier {..} => SyntaxKind::SoftTypeSpecifier,
            SyntaxVariant::AttributizedSpecifier {..} => SyntaxKind::AttributizedSpecifier,
            SyntaxVariant::ReifiedTypeArgument {..} => SyntaxKind::ReifiedTypeArgument,
            SyntaxVariant::TypeArguments {..} => SyntaxKind::TypeArguments,
            SyntaxVariant::TypeParameters {..} => SyntaxKind::TypeParameters,
            SyntaxVariant::TupleTypeSpecifier {..} => SyntaxKind::TupleTypeSpecifier,
            SyntaxVariant::UnionTypeSpecifier {..} => SyntaxKind::UnionTypeSpecifier,
            SyntaxVariant::IntersectionTypeSpecifier {..} => SyntaxKind::IntersectionTypeSpecifier,
            SyntaxVariant::ErrorSyntax {..} => SyntaxKind::ErrorSyntax,
            SyntaxVariant::ListItem {..} => SyntaxKind::ListItem,
            SyntaxVariant::EnumAtomExpression {..} => SyntaxKind::EnumAtomExpression,
        }
    }
}
    