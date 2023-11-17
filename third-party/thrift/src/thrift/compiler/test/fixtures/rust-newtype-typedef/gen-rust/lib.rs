// @generated by Thrift for thrift/compiler/test/fixtures/rust-newtype-typedef/src/module.thrift
// This file is probably not the place you want to edit!

#![recursion_limit = "100000000"]
#![allow(non_camel_case_types, non_snake_case, non_upper_case_globals, unused_crate_dependencies, clippy::all)]

pub use self::errors::*;
pub use self::types::*;

pub use :: as types;
pub mod errors;

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

    impl<P> ::fbthrift::Serialize<P> for LocalImpl<::smallvec::SmallVec<[u8; 32]>>
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            self.0.as_slice().write(p)
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for LocalImpl<::smallvec::SmallVec<[u8; 32]>>
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            p.read_binary()
        }
    }

    impl ::fbthrift::binary_type::BinaryType for LocalImpl<::smallvec::SmallVec<[u8; 32]>> {
        fn with_capacity(capacity: usize) -> Self {
            LocalImpl(<::smallvec::SmallVec<[u8; 32]>>::with_capacity(capacity))
        }
        fn extend_from_slice(&mut self, other: &[u8]) {
            self.0.extend_from_slice(other)
        }
        fn from_vec(vec: ::std::vec::Vec<u8>) -> Self {
            LocalImpl(::std::convert::Into::into(vec))
        }
    }

    impl<P> ::fbthrift::Serialize<P> for LocalImpl<::smallvec::SmallVec<[u8; 16]>>
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            self.0.as_slice().write(p)
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for LocalImpl<::smallvec::SmallVec<[u8; 16]>>
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            p.read_binary()
        }
    }

    impl ::fbthrift::binary_type::BinaryType for LocalImpl<::smallvec::SmallVec<[u8; 16]>> {
        fn with_capacity(capacity: usize) -> Self {
            LocalImpl(<::smallvec::SmallVec<[u8; 16]>>::with_capacity(capacity))
        }
        fn extend_from_slice(&mut self, other: &[u8]) {
            self.0.extend_from_slice(other)
        }
        fn from_vec(vec: ::std::vec::Vec<u8>) -> Self {
            LocalImpl(::std::convert::Into::into(vec))
        }
    }

    impl<P> ::fbthrift::Serialize<P> for LocalImpl<::sorted_vector_map::SortedVectorMap<::std::primitive::i32, ::std::primitive::i32>>
    where
        P: ::fbthrift::ProtocolWriter,
    {
        fn write(&self, p: &mut P) {
            p.write_map_begin(
                <::std::primitive::i32 as ::fbthrift::GetTType>::TTYPE,
                <::std::primitive::i32 as ::fbthrift::GetTType>::TTYPE,
                self.0.len(),
            );
            for (k, v) in &self.0 {
                p.write_map_key_begin();
                ::fbthrift::Serialize::write(k, p);
                p.write_map_value_begin();
                ::fbthrift::Serialize::write(v, p);
            }
            p.write_map_end();
        }
    }

    impl<P> ::fbthrift::Deserialize<P> for LocalImpl<::sorted_vector_map::SortedVectorMap<::std::primitive::i32, ::std::primitive::i32>>
    where
        P: ::fbthrift::ProtocolReader,
    {
        fn read(p: &mut P) -> ::anyhow::Result<Self> {
            let (_key_ty, _val_ty, len) = p.read_map_begin()?;
            let mut map = <crate::types::MapType>::with_capacity(len.unwrap_or_default());

            if let Some(0) = len {
                return Ok(LocalImpl(map));
            }

            let mut idx = 0;
            loop {
                let more = p.read_map_key_begin()?;
                if !more {
                    break;
                }
                let k: ::std::primitive::i32 = ::fbthrift::Deserialize::read(p)?;
                p.read_map_value_begin()?;
                let v: ::std::primitive::i32 = ::fbthrift::Deserialize::read(p)?;
                p.read_map_value_end()?;
                map.insert(k, v);

                idx += 1;
                if ::fbthrift::protocol::should_break(len, more, idx) {
                    break;
                }
            }
            p.read_map_end()?;
            ::std::result::Result::Ok(LocalImpl(map))
        }
    }
}
