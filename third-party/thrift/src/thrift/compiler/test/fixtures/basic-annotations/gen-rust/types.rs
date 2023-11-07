// @generated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
// This file is probably not the place you want to edit!


#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, clippy::redundant_closure, clippy::type_complexity)]

pub mod consts;

#[allow(unused_imports)]
pub(crate) use crate as types;

pub type AwesomeStruct = crate::types::MyStruct;

pub type FantasticStruct = crate::types::MyStruct;

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct MyStructNestedAnnotation {
    pub name: ::std::string::String,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash, Debug)]
pub enum MyUnion {
    UnknownField(::std::primitive::i32),
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct MyException {
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

impl ::fbthrift::ExceptionInfo for MyException {
    fn exn_value(&self) -> String {
        format!("{:?}", self)
    }

    #[inline]
    fn exn_is_declared(&self) -> bool { true }
}

impl ::std::error::Error for MyException {}

impl ::std::fmt::Display for MyException {
    fn fmt(&self, f: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(f, "{:?}", self)
    }
}

#[derive(Clone, PartialEq)]
pub struct MyStruct {
    pub major: ::std::primitive::i64,
    pub package: ::std::string::String,
    pub annotation_with_quote: ::std::string::String,
    pub class_: ::std::string::String,
    pub annotation_with_trailing_comma: ::std::string::String,
    pub empty_annotations: ::std::string::String,
    pub my_enum: crate::types::MyEnum,
    pub cpp_type_annotation: ::std::vec::Vec<::std::string::String>,
    pub my_union: crate::types::MyUnion,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

#[derive(Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct SecretStruct {
    pub id: ::std::primitive::i64,
    pub password: ::std::string::String,
    // This field forces `..Default::default()` when instantiating this
    // struct, to make code future-proof against new fields added later to
    // the definition in Thrift. If you don't want this, add the annotation
    // `(rust.exhaustive)` to the Thrift struct to eliminate this field.
    #[doc(hidden)]
    pub _dot_dot_Default_default: self::dot_dot::OtherFields,
}

#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash)]
pub struct MyEnum(pub ::std::primitive::i32);

impl MyEnum {
    pub const MyValue1: Self = MyEnum(0i32);
    pub const MyValue2: Self = MyEnum(1i32);
    pub const DOMAIN: Self = MyEnum(2i32);
}

impl ::fbthrift::ThriftEnum for MyEnum {
    fn enumerate() -> &'static [(Self, &'static str)] {
        &[
            (Self::MyValue1, "MyValue1"),
            (Self::MyValue2, "MyValue2"),
            (Self::DOMAIN, "DOMAIN"),
        ]
    }

    fn variants() -> &'static [&'static str] {
        &[
            "MyValue1",
            "MyValue2",
            "DOMAIN",
        ]
    }

    fn variant_values() -> &'static [Self] {
        &[
            Self::MyValue1,
            Self::MyValue2,
            Self::DOMAIN,
        ]
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for MyEnum {
    fn default() -> Self {
        Self(::std::primitive::i32::MIN)
    }
}

impl<'a> ::std::convert::From<&'a MyEnum> for ::std::primitive::i32 {
    #[inline]
    fn from(x: &'a MyEnum) -> Self {
        x.0
    }
}

impl ::std::convert::From<MyEnum> for ::std::primitive::i32 {
    #[inline]
    fn from(x: MyEnum) -> Self {
        x.0
    }
}

impl ::std::convert::From<::std::primitive::i32> for MyEnum {
    #[inline]
    fn from(x: ::std::primitive::i32) -> Self {
        Self(x)
    }
}

impl ::std::fmt::Display for MyEnum {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        static VARIANTS_BY_NUMBER: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("MyValue1", 0),
            ("MyValue2", 1),
            ("DOMAIN", 2),
        ];
        ::fbthrift::help::enum_display(VARIANTS_BY_NUMBER, fmt, self.0)
    }
}

impl ::std::fmt::Debug for MyEnum {
    fn fmt(&self, fmt: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        write!(fmt, "MyEnum::{}", self)
    }
}

impl ::std::str::FromStr for MyEnum {
    type Err = ::anyhow::Error;

    fn from_str(string: &::std::primitive::str) -> ::std::result::Result<Self, Self::Err> {
        static VARIANTS_BY_NAME: &[(&::std::primitive::str, ::std::primitive::i32)] = &[
            ("DOMAIN", 2),
            ("MyValue1", 0),
            ("MyValue2", 1),
        ];
        ::fbthrift::help::enum_from_str(VARIANTS_BY_NAME, string, "MyEnum").map(Self)
    }
}

impl ::fbthrift::GetTType for MyEnum {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::I32;
}

impl<P> ::fbthrift::Serialize<P> for MyEnum
where
    P: ::fbthrift::ProtocolWriter,
{
    #[inline]
    fn write(&self, p: &mut P) {
        p.write_i32(self.into())
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyEnum
where
    P: ::fbthrift::ProtocolReader,
{
    #[inline]
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        ::std::result::Result::Ok(Self::from(p.read_i32()?))
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::MyStructNestedAnnotation {
    fn default() -> Self {
        Self {
            name: ::std::default::Default::default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::MyStructNestedAnnotation {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("MyStructNestedAnnotation")
            .field("name", &self.name)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::MyStructNestedAnnotation {}
unsafe impl ::std::marker::Sync for self::MyStructNestedAnnotation {}
impl ::std::marker::Unpin for self::MyStructNestedAnnotation {}

impl ::fbthrift::GetTType for self::MyStructNestedAnnotation {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl<P> ::fbthrift::Serialize<P> for self::MyStructNestedAnnotation
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        p.write_struct_begin("MyStructNestedAnnotation");
        p.write_field_begin("name", ::fbthrift::TType::String, 1);
        ::fbthrift::Serialize::write(&self.name, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::MyStructNestedAnnotation
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("name", ::fbthrift::TType::String, 1),
        ];
        let mut field_name = ::std::option::Option::None;
        let _ = p.read_struct_begin(|_| ())?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::String, 1) => field_name = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            name: field_name.unwrap_or_default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


impl ::fbthrift::metadata::ThriftAnnotations for MyStructNestedAnnotation {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            _ => {}
        }

        None
    }
}



impl ::std::default::Default for MyUnion {
    fn default() -> Self {
        Self::UnknownField(-1)
    }
}

impl ::fbthrift::GetTType for MyUnion {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl<P> ::fbthrift::Serialize<P> for MyUnion
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        p.write_struct_begin("MyUnion");
        match self {
            Self::UnknownField(_) => {}
        }
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for MyUnion
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
        ];
        let _ = p.read_struct_begin(|_| ())?;
        let once = false;
        let alt = ::std::option::Option::None;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32, once) {
                (::fbthrift::TType::Stop, _, _) => break,
                (fty, _, false) => p.skip(fty)?,
                (badty, badid, true) => return ::std::result::Result::Err(::std::convert::From::from(::fbthrift::ProtocolError::UnwantedExtraUnionField(
                    "MyUnion".to_string(),
                    badty,
                    badid,
                ))),
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(alt.unwrap_or_default())
    }
}

impl MyUnion {
    /// Return current union variant name as a tuple of (Rust name, original name).
    pub fn variant_name(&self) -> Option<(&'static str, &'static str)> {
        match self {
            Self::UnknownField(_) => None,
        }
    }
}

impl ::fbthrift::metadata::ThriftAnnotations for MyUnion {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        if type_id == ::std::any::TypeId::of::<cpp::types::Adapter>() {
            let mut tmp = Some(cpp::types::Adapter {
                name: "::StaticCast".to_owned(),
                adaptedType: ::std::default::Default::default(),
                underlyingName: ::std::default::Default::default(),
                extraNamespace: ::std::default::Default::default(),
                moveOnly: ::std::default::Default::default(),
                ..::std::default::Default::default()
            });
            let r: &mut dyn ::std::any::Any = &mut tmp;
            let r: &mut Option<T> = r.downcast_mut().unwrap();
            return r.take();
        }

        if let Some(r) = <cpp::types::Adapter as ::fbthrift::metadata::ThriftAnnotations>::get_structured_annotation::<T>() {
            return Some(r);
        }

        if type_id == ::std::any::TypeId::of::<cpp::types::Name>() {
            let mut tmp = Some(cpp::types::Name {
                value: "YourUnion".to_owned(),
                ..::std::default::Default::default()
            });
            let r: &mut dyn ::std::any::Any = &mut tmp;
            let r: &mut Option<T> = r.downcast_mut().unwrap();
            return r.take();
        }

        if let Some(r) = <cpp::types::Name as ::fbthrift::metadata::ThriftAnnotations>::get_structured_annotation::<T>() {
            return Some(r);
        }

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            _ => {}
        }

        None
    }
}

#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::MyException {
    fn default() -> Self {
        Self {
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::MyException {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("MyException")
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::MyException {}
unsafe impl ::std::marker::Sync for self::MyException {}
impl ::std::marker::Unpin for self::MyException {}

impl ::fbthrift::GetTType for self::MyException {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl<P> ::fbthrift::Serialize<P> for self::MyException
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        p.write_struct_begin("MyException");
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::MyException
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
        ];
        let _ = p.read_struct_begin(|_| ())?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


impl ::fbthrift::metadata::ThriftAnnotations for MyException {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        if type_id == ::std::any::TypeId::of::<cpp::types::Adapter>() {
            let mut tmp = Some(cpp::types::Adapter {
                name: "::StaticCast".to_owned(),
                adaptedType: ::std::default::Default::default(),
                underlyingName: ::std::default::Default::default(),
                extraNamespace: ::std::default::Default::default(),
                moveOnly: ::std::default::Default::default(),
                ..::std::default::Default::default()
            });
            let r: &mut dyn ::std::any::Any = &mut tmp;
            let r: &mut Option<T> = r.downcast_mut().unwrap();
            return r.take();
        }

        if let Some(r) = <cpp::types::Adapter as ::fbthrift::metadata::ThriftAnnotations>::get_structured_annotation::<T>() {
            return Some(r);
        }

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            _ => {}
        }

        None
    }
}


#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::MyStruct {
    fn default() -> Self {
        Self {
            major: ::std::default::Default::default(),
            package: ::std::default::Default::default(),
            annotation_with_quote: ::std::default::Default::default(),
            class_: ::std::default::Default::default(),
            annotation_with_trailing_comma: ::std::default::Default::default(),
            empty_annotations: ::std::default::Default::default(),
            my_enum: ::std::default::Default::default(),
            cpp_type_annotation: ::std::default::Default::default(),
            my_union: ::std::default::Default::default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::MyStruct {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("MyStruct")
            .field("major", &self.major)
            .field("package", &self.package)
            .field("annotation_with_quote", &self.annotation_with_quote)
            .field("class_", &self.class_)
            .field("annotation_with_trailing_comma", &self.annotation_with_trailing_comma)
            .field("empty_annotations", &self.empty_annotations)
            .field("my_enum", &self.my_enum)
            .field("cpp_type_annotation", &self.cpp_type_annotation)
            .field("my_union", &self.my_union)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::MyStruct {}
unsafe impl ::std::marker::Sync for self::MyStruct {}
impl ::std::marker::Unpin for self::MyStruct {}

impl ::fbthrift::GetTType for self::MyStruct {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl ::fbthrift::GetUri for self::MyStruct {
    fn uri() -> &'static str {
        "facebook.com/thrift/compiler/test/fixtures/basic-annotations/src/module/MyStruct"
    }
}

impl<P> ::fbthrift::Serialize<P> for self::MyStruct
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        p.write_struct_begin("MyStruct");
        p.write_field_begin("major", ::fbthrift::TType::I64, 2);
        ::fbthrift::Serialize::write(&self.major, p);
        p.write_field_end();
        p.write_field_begin("package", ::fbthrift::TType::String, 1);
        ::fbthrift::Serialize::write(&self.package, p);
        p.write_field_end();
        p.write_field_begin("annotation_with_quote", ::fbthrift::TType::String, 3);
        ::fbthrift::Serialize::write(&self.annotation_with_quote, p);
        p.write_field_end();
        p.write_field_begin("class_", ::fbthrift::TType::String, 4);
        ::fbthrift::Serialize::write(&self.class_, p);
        p.write_field_end();
        p.write_field_begin("annotation_with_trailing_comma", ::fbthrift::TType::String, 5);
        ::fbthrift::Serialize::write(&self.annotation_with_trailing_comma, p);
        p.write_field_end();
        p.write_field_begin("empty_annotations", ::fbthrift::TType::String, 6);
        ::fbthrift::Serialize::write(&self.empty_annotations, p);
        p.write_field_end();
        p.write_field_begin("my_enum", ::fbthrift::TType::I32, 7);
        ::fbthrift::Serialize::write(&self.my_enum, p);
        p.write_field_end();
        p.write_field_begin("cpp_type_annotation", ::fbthrift::TType::List, 8);
        ::fbthrift::Serialize::write(&self.cpp_type_annotation, p);
        p.write_field_end();
        p.write_field_begin("my_union", ::fbthrift::TType::Struct, 9);
        ::fbthrift::Serialize::write(&self.my_union, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::MyStruct
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("annotation_with_quote", ::fbthrift::TType::String, 3),
            ::fbthrift::Field::new("annotation_with_trailing_comma", ::fbthrift::TType::String, 5),
            ::fbthrift::Field::new("class_", ::fbthrift::TType::String, 4),
            ::fbthrift::Field::new("cpp_type_annotation", ::fbthrift::TType::List, 8),
            ::fbthrift::Field::new("empty_annotations", ::fbthrift::TType::String, 6),
            ::fbthrift::Field::new("major", ::fbthrift::TType::I64, 2),
            ::fbthrift::Field::new("my_enum", ::fbthrift::TType::I32, 7),
            ::fbthrift::Field::new("my_union", ::fbthrift::TType::Struct, 9),
            ::fbthrift::Field::new("package", ::fbthrift::TType::String, 1),
        ];
        let mut field_major = ::std::option::Option::None;
        let mut field_package = ::std::option::Option::None;
        let mut field_annotation_with_quote = ::std::option::Option::None;
        let mut field_class_ = ::std::option::Option::None;
        let mut field_annotation_with_trailing_comma = ::std::option::Option::None;
        let mut field_empty_annotations = ::std::option::Option::None;
        let mut field_my_enum = ::std::option::Option::None;
        let mut field_cpp_type_annotation = ::std::option::Option::None;
        let mut field_my_union = ::std::option::Option::None;
        let _ = p.read_struct_begin(|_| ())?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::I64, 2) => field_major = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::String, 1) => field_package = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::String, 3) => field_annotation_with_quote = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::String, 4) => field_class_ = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::String, 5) => field_annotation_with_trailing_comma = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::String, 6) => field_empty_annotations = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::I32, 7) => field_my_enum = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::List, 8) => field_cpp_type_annotation = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::Struct, 9) => field_my_union = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            major: field_major.unwrap_or_default(),
            package: field_package.unwrap_or_default(),
            annotation_with_quote: field_annotation_with_quote.unwrap_or_default(),
            class_: field_class_.unwrap_or_default(),
            annotation_with_trailing_comma: field_annotation_with_trailing_comma.unwrap_or_default(),
            empty_annotations: field_empty_annotations.unwrap_or_default(),
            my_enum: field_my_enum.unwrap_or_default(),
            cpp_type_annotation: field_cpp_type_annotation.unwrap_or_default(),
            my_union: field_my_union.unwrap_or_default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


impl ::fbthrift::metadata::ThriftAnnotations for MyStruct {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        if type_id == ::std::any::TypeId::of::<cpp::types::Adapter>() {
            let mut tmp = Some(cpp::types::Adapter {
                name: "::StaticCast".to_owned(),
                adaptedType: ::std::default::Default::default(),
                underlyingName: ::std::default::Default::default(),
                extraNamespace: ::std::default::Default::default(),
                moveOnly: ::std::default::Default::default(),
                ..::std::default::Default::default()
            });
            let r: &mut dyn ::std::any::Any = &mut tmp;
            let r: &mut Option<T> = r.downcast_mut().unwrap();
            return r.take();
        }

        if let Some(r) = <cpp::types::Adapter as ::fbthrift::metadata::ThriftAnnotations>::get_structured_annotation::<T>() {
            return Some(r);
        }

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            2 => {
            },
            1 => {

                if type_id == ::std::any::TypeId::of::<go::types::Name>() {
                    let mut tmp = Some(go::types::Name {
                        name: "PackageName".to_owned(),
                        ..::std::default::Default::default()
                    });
                    let r: &mut dyn ::std::any::Any = &mut tmp;
                    let r: &mut Option<T> = r.downcast_mut().unwrap();
                    return r.take();
                }

                if type_id == ::std::any::TypeId::of::<go::types::Tag>() {
                    let mut tmp = Some(go::types::Tag {
                        tag: "tag:\"some_package\"".to_owned(),
                        ..::std::default::Default::default()
                    });
                    let r: &mut dyn ::std::any::Any = &mut tmp;
                    let r: &mut Option<T> = r.downcast_mut().unwrap();
                    return r.take();
                }
            },
            3 => {
            },
            4 => {
            },
            5 => {
            },
            6 => {
            },
            7 => {
            },
            8 => {
            },
            9 => {
            },
            _ => {}
        }

        None
    }
}


#[allow(clippy::derivable_impls)]
impl ::std::default::Default for self::SecretStruct {
    fn default() -> Self {
        Self {
            id: ::std::default::Default::default(),
            password: ::std::default::Default::default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        }
    }
}

impl ::std::fmt::Debug for self::SecretStruct {
    fn fmt(&self, formatter: &mut ::std::fmt::Formatter) -> ::std::fmt::Result {
        formatter
            .debug_struct("SecretStruct")
            .field("id", &self.id)
            .field("password", &self.password)
            .finish()
    }
}

unsafe impl ::std::marker::Send for self::SecretStruct {}
unsafe impl ::std::marker::Sync for self::SecretStruct {}
impl ::std::marker::Unpin for self::SecretStruct {}

impl ::fbthrift::GetTType for self::SecretStruct {
    const TTYPE: ::fbthrift::TType = ::fbthrift::TType::Struct;
}

impl<P> ::fbthrift::Serialize<P> for self::SecretStruct
where
    P: ::fbthrift::ProtocolWriter,
{
    fn write(&self, p: &mut P) {
        p.write_struct_begin("SecretStruct");
        p.write_field_begin("id", ::fbthrift::TType::I64, 1);
        ::fbthrift::Serialize::write(&self.id, p);
        p.write_field_end();
        p.write_field_begin("password", ::fbthrift::TType::String, 2);
        ::fbthrift::Serialize::write(&self.password, p);
        p.write_field_end();
        p.write_field_stop();
        p.write_struct_end();
    }
}

impl<P> ::fbthrift::Deserialize<P> for self::SecretStruct
where
    P: ::fbthrift::ProtocolReader,
{
    fn read(p: &mut P) -> ::anyhow::Result<Self> {
        static FIELDS: &[::fbthrift::Field] = &[
            ::fbthrift::Field::new("id", ::fbthrift::TType::I64, 1),
            ::fbthrift::Field::new("password", ::fbthrift::TType::String, 2),
        ];
        let mut field_id = ::std::option::Option::None;
        let mut field_password = ::std::option::Option::None;
        let _ = p.read_struct_begin(|_| ())?;
        loop {
            let (_, fty, fid) = p.read_field_begin(|_| (), FIELDS)?;
            match (fty, fid as ::std::primitive::i32) {
                (::fbthrift::TType::Stop, _) => break,
                (::fbthrift::TType::I64, 1) => field_id = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (::fbthrift::TType::String, 2) => field_password = ::std::option::Option::Some(::fbthrift::Deserialize::read(p)?),
                (fty, _) => p.skip(fty)?,
            }
            p.read_field_end()?;
        }
        p.read_struct_end()?;
        ::std::result::Result::Ok(Self {
            id: field_id.unwrap_or_default(),
            password: field_password.unwrap_or_default(),
            _dot_dot_Default_default: self::dot_dot::OtherFields(()),
        })
    }
}


impl ::fbthrift::metadata::ThriftAnnotations for SecretStruct {
    fn get_structured_annotation<T: Sized + 'static>() -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        None
    }

    fn get_field_structured_annotation<T: Sized + 'static>(field_id: i16) -> ::std::option::Option<T> {
        #[allow(unused_variables)]
        let type_id = ::std::any::TypeId::of::<T>();

        #[allow(clippy::match_single_binding)]
        match field_id {
            1 => {
            },
            2 => {

                if type_id == ::std::any::TypeId::of::<thrift::types::DeprecatedUnvalidatedAnnotations>() {
                    let mut tmp = Some(thrift::types::DeprecatedUnvalidatedAnnotations {
                        items: {
                            let mut map = ::std::collections::BTreeMap::new();
                            map.insert("java.sensitive".to_owned(), "1".to_owned());
                            map
                        },
                        ..::std::default::Default::default()
                    });
                    let r: &mut dyn ::std::any::Any = &mut tmp;
                    let r: &mut Option<T> = r.downcast_mut().unwrap();
                    return r.take();
                }

                if let Some(r) = <thrift::types::DeprecatedUnvalidatedAnnotations as ::fbthrift::metadata::ThriftAnnotations>::get_structured_annotation::<T>() {
                    return Some(r);
                }
            },
            _ => {}
        }

        None
    }
}


mod dot_dot {
    #[derive(Copy, Clone, PartialEq, Eq, PartialOrd, Ord, Hash)]
    pub struct OtherFields(pub(crate) ());

    #[allow(dead_code)] // if serde isn't being used
    pub(super) fn default_for_serde_deserialize() -> OtherFields {
        OtherFields(())
    }
}

pub(crate) mod r#impl {
    use ref_cast::RefCast;

    #[derive(RefCast)]
    #[repr(transparent)]
    pub(crate) struct LocalImpl<T>(T);

    #[allow(unused)]
    pub(crate) fn write<T, P>(value: &T, p: &mut P)
    where
        LocalImpl<T>: ::fbthrift::Serialize<P>,
        P: ::fbthrift::ProtocolWriter,
    {
        ::fbthrift::Serialize::write(LocalImpl::ref_cast(value), p);
    }

    #[allow(unused)]
    pub(crate) fn read<T, P>(p: &mut P) -> ::anyhow::Result<T>
    where
        LocalImpl<T>: ::fbthrift::Deserialize<P>,
        P: ::fbthrift::ProtocolReader,
    {
        let value: LocalImpl<T> = ::fbthrift::Deserialize::read(p)?;
        ::std::result::Result::Ok(value.0)
    }
}
