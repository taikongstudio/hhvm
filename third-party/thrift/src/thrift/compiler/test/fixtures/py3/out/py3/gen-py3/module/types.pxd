#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from thrift.python.exceptions cimport cTException
cimport folly.iobuf as _fbthrift_iobuf
from thrift.py3.types cimport (
    bstring,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    union_field_ref as __union_field_ref,
    get_union_field_value as __get_union_field_value,
)
from thrift.python.common cimport cThriftMetadata as __fbthrift_cThriftMetadata
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    MetadataBox as __MetadataBox,
)
from folly.optional cimport cOptional as __cOptional

cimport module.types_fields as _fbthrift_types_fields

cdef extern from "thrift/compiler/test/fixtures/py3/gen-py3/module/types.h":
  pass

cdef extern from *:
    ctypedef bstring foo_Bar "foo::Bar"

cdef extern from "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass EnumMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_types.h" namespace "::py3::simple":
    cdef cppclass cAnEnum "::py3::simple::AnEnum":
        pass

    cdef cppclass cAnEnumRenamed "::py3::simple::AnEnumRenamed":
        pass

    cdef cppclass cFlags "::py3::simple::Flags":
        pass





cdef class AnEnum(thrift.py3.types.CompiledEnum):
    pass


cdef class AnEnumRenamed(thrift.py3.types.CompiledEnum):
    pass


cdef class Flags(thrift.py3.types.Flag):
    pass

cdef extern from "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass ExceptionMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_metadata.h" namespace "apache::thrift::detail::md":
    cdef cppclass StructMetadata[T]:
        @staticmethod
        void gen(__fbthrift_cThriftMetadata &metadata)
cdef extern from "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_types_custom_protocol.h" namespace "::py3::simple":

    cdef cppclass cSimpleException "::py3::simple::SimpleException"(cTException):
        cSimpleException() except +
        cSimpleException(const cSimpleException&) except +
        bint operator==(cSimpleException&)
        bint operator!=(cSimpleException&)
        bint operator<(cSimpleException&)
        bint operator>(cSimpleException&)
        bint operator<=(cSimpleException&)
        bint operator>=(cSimpleException&)
        __field_ref[cint16_t] err_code_ref "err_code_ref" ()


    cdef cppclass cOptionalRefStruct "::py3::simple::OptionalRefStruct":
        cOptionalRefStruct() except +
        cOptionalRefStruct(const cOptionalRefStruct&) except +
        bint operator==(cOptionalRefStruct&)
        bint operator!=(cOptionalRefStruct&)
        bint operator<(cOptionalRefStruct&)
        bint operator>(cOptionalRefStruct&)
        bint operator<=(cOptionalRefStruct&)
        bint operator>=(cOptionalRefStruct&)
        __optional_field_ref[unique_ptr[_fbthrift_iobuf.cIOBuf]] optional_blob_ref "optional_blob_ref" ()


    cdef cppclass cSimpleStruct "::py3::simple::SimpleStruct":
        cSimpleStruct() except +
        cSimpleStruct(const cSimpleStruct&) except +
        bint operator==(cSimpleStruct&)
        bint operator!=(cSimpleStruct&)
        bint operator<(cSimpleStruct&)
        bint operator>(cSimpleStruct&)
        bint operator<=(cSimpleStruct&)
        bint operator>=(cSimpleStruct&)
        __field_ref[cbool] is_on_ref "is_on_ref" ()
        __field_ref[cint8_t] tiny_int_ref "tiny_int_ref" ()
        __field_ref[cint16_t] small_int_ref "small_int_ref" ()
        __field_ref[cint32_t] nice_sized_int_ref "nice_sized_int_ref" ()
        __field_ref[cint64_t] big_int_ref "big_int_ref" ()
        __field_ref[double] real_ref "real_ref" ()
        __field_ref[float] smaller_real_ref "smaller_real_ref" ()


    cdef cppclass cHiddenTypeFieldsStruct "::py3::simple::HiddenTypeFieldsStruct":
        cHiddenTypeFieldsStruct() except +
        cHiddenTypeFieldsStruct(const cHiddenTypeFieldsStruct&) except +
        bint operator==(cHiddenTypeFieldsStruct&)
        bint operator!=(cHiddenTypeFieldsStruct&)


    cdef cppclass cComplexStruct "::py3::simple::ComplexStruct":
        cComplexStruct() except +
        cComplexStruct(const cComplexStruct&) except +
        bint operator==(cComplexStruct&)
        bint operator!=(cComplexStruct&)
        bint operator<(cComplexStruct&)
        bint operator>(cComplexStruct&)
        bint operator<=(cComplexStruct&)
        bint operator>=(cComplexStruct&)
        __field_ref[cSimpleStruct] structOne_ref "structOne_ref" ()
        __field_ref[cSimpleStruct] structTwo_ref "structTwo_ref" ()
        __field_ref[cint32_t] an_integer_ref "an_integer_ref" ()
        __field_ref[string] name_ref "name_ref" ()
        __field_ref[cAnEnum] an_enum_ref "an_enum_ref" ()
        __field_ref[string] some_bytes_ref "some_bytes_ref" ()
        __field_ref[string] sender_ref "from_ref" ()
        __field_ref[string] cdef__ref "cdef_ref" ()
        __field_ref[foo_Bar] bytes_with_cpp_type_ref "bytes_with_cpp_type_ref" ()

    cdef enum cBinaryUnion__type "::py3::simple::BinaryUnion::Type":
        cBinaryUnion__type___EMPTY__ "::py3::simple::BinaryUnion::Type::__EMPTY__",
        cBinaryUnion__type_iobuf_val "::py3::simple::BinaryUnion::Type::iobuf_val",

    cdef cppclass cBinaryUnion "::py3::simple::BinaryUnion":
        cBinaryUnion() except +
        cBinaryUnion(const cBinaryUnion&) except +
        cBinaryUnion__type getType() const
        const _fbthrift_iobuf.cIOBuf& get_iobuf_val "get_iobuf_val" () const
        _fbthrift_iobuf.cIOBuf& set_iobuf_val "set_iobuf_val" (const _fbthrift_iobuf.cIOBuf&)


    cdef cppclass cBinaryUnionStruct "::py3::simple::BinaryUnionStruct":
        cBinaryUnionStruct() except +
        cBinaryUnionStruct(const cBinaryUnionStruct&) except +
        __field_ref[cBinaryUnion] u_ref "u_ref" ()




cdef class SimpleException(thrift.py3.exceptions.GeneratedError):
    cdef shared_ptr[cSimpleException] _cpp_obj
    cdef _fbthrift_types_fields.__SimpleException_FieldsSetter _fields_setter
    cdef inline object err_code_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cSimpleException])



cdef class OptionalRefStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cOptionalRefStruct] _cpp_obj
    cdef _fbthrift_types_fields.__OptionalRefStruct_FieldsSetter _fields_setter
    cdef inline object optional_blob_impl(self)
    cdef _fbthrift_iobuf.IOBuf __fbthrift_cached_optional_blob

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cOptionalRefStruct])



cdef class SimpleStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cSimpleStruct] _cpp_obj
    cdef _fbthrift_types_fields.__SimpleStruct_FieldsSetter _fields_setter
    cdef inline object is_on_impl(self)
    cdef inline object tiny_int_impl(self)
    cdef inline object small_int_impl(self)
    cdef inline object nice_sized_int_impl(self)
    cdef inline object big_int_impl(self)
    cdef inline object real_impl(self)
    cdef inline object smaller_real_impl(self)

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cSimpleStruct])



cdef class HiddenTypeFieldsStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cHiddenTypeFieldsStruct] _cpp_obj
    cdef _fbthrift_types_fields.__HiddenTypeFieldsStruct_FieldsSetter _fields_setter

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cHiddenTypeFieldsStruct])



cdef class ComplexStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cComplexStruct] _cpp_obj
    cdef _fbthrift_types_fields.__ComplexStruct_FieldsSetter _fields_setter
    cdef inline object structOne_impl(self)
    cdef inline object structTwo_impl(self)
    cdef inline object an_integer_impl(self)
    cdef inline object name_impl(self)
    cdef inline object an_enum_impl(self)
    cdef inline object some_bytes_impl(self)
    cdef inline object sender_impl(self)
    cdef inline object cdef__impl(self)
    cdef inline object bytes_with_cpp_type_impl(self)
    cdef SimpleStruct __fbthrift_cached_structOne
    cdef SimpleStruct __fbthrift_cached_structTwo
    cdef object __fbthrift_cached_an_enum

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cComplexStruct])

cdef class __BinaryUnionType(thrift.py3.types.CompiledEnum):
    pass




cdef class BinaryUnion(thrift.py3.types.Union):
    cdef shared_ptr[cBinaryUnion] _cpp_obj
    cdef readonly __BinaryUnionType type
    cdef readonly object value
    cdef _load_cache(BinaryUnion self)

    @staticmethod
    cdef unique_ptr[cBinaryUnion] _make_instance(
        cBinaryUnion* base_instance,
        _fbthrift_iobuf.IOBuf iobuf_val
    ) except *

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cBinaryUnion])



cdef class BinaryUnionStruct(thrift.py3.types.Struct):
    cdef shared_ptr[cBinaryUnionStruct] _cpp_obj
    cdef _fbthrift_types_fields.__BinaryUnionStruct_FieldsSetter _fields_setter
    cdef inline object u_impl(self)
    cdef BinaryUnion __fbthrift_cached_u

    @staticmethod
    cdef _fbthrift_create(shared_ptr[cBinaryUnionStruct])


cdef class List__i16(thrift.py3.types.List):
    cdef shared_ptr[vector[cint16_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cint16_t]])
    @staticmethod
    cdef shared_ptr[vector[cint16_t]] _make_instance(object items) except *

cdef class List__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cint32_t]])
    @staticmethod
    cdef shared_ptr[vector[cint32_t]] _make_instance(object items) except *

cdef class List__i64(thrift.py3.types.List):
    cdef shared_ptr[vector[cint64_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cint64_t]])
    @staticmethod
    cdef shared_ptr[vector[cint64_t]] _make_instance(object items) except *

cdef class List__string(thrift.py3.types.List):
    cdef shared_ptr[vector[string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[string]])
    @staticmethod
    cdef shared_ptr[vector[string]] _make_instance(object items) except *

cdef class List__SimpleStruct(thrift.py3.types.List):
    cdef shared_ptr[vector[cSimpleStruct]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cSimpleStruct]])
    @staticmethod
    cdef shared_ptr[vector[cSimpleStruct]] _make_instance(object items) except *

cdef class Set__i32(thrift.py3.types.Set):
    cdef shared_ptr[cset[cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[cint32_t]])
    @staticmethod
    cdef shared_ptr[cset[cint32_t]] _make_instance(object items) except *

cdef class Set__string(thrift.py3.types.Set):
    cdef shared_ptr[cset[string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[string]])
    @staticmethod
    cdef shared_ptr[cset[string]] _make_instance(object items) except *

cdef class Map__string_string(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,string]])
    @staticmethod
    cdef shared_ptr[cmap[string,string]] _make_instance(object items) except *

cdef class Map__string_SimpleStruct(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cSimpleStruct]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,cSimpleStruct]])
    @staticmethod
    cdef shared_ptr[cmap[string,cSimpleStruct]] _make_instance(object items) except *

cdef class Map__string_i16(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cint16_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,cint16_t]])
    @staticmethod
    cdef shared_ptr[cmap[string,cint16_t]] _make_instance(object items) except *

cdef class List__List__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[vector[cint32_t]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[vector[cint32_t]]])
    @staticmethod
    cdef shared_ptr[vector[vector[cint32_t]]] _make_instance(object items) except *

cdef class Map__string_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,cint32_t]])
    @staticmethod
    cdef shared_ptr[cmap[string,cint32_t]] _make_instance(object items) except *

cdef class Map__string_Map__string_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,cmap[string,cint32_t]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,cmap[string,cint32_t]]])
    @staticmethod
    cdef shared_ptr[cmap[string,cmap[string,cint32_t]]] _make_instance(object items) except *

cdef class List__Set__string(thrift.py3.types.List):
    cdef shared_ptr[vector[cset[string]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cset[string]]])
    @staticmethod
    cdef shared_ptr[vector[cset[string]]] _make_instance(object items) except *

cdef class Map__string_List__SimpleStruct(thrift.py3.types.Map):
    cdef shared_ptr[cmap[string,vector[cSimpleStruct]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[string,vector[cSimpleStruct]]])
    @staticmethod
    cdef shared_ptr[cmap[string,vector[cSimpleStruct]]] _make_instance(object items) except *

cdef class List__List__string(thrift.py3.types.List):
    cdef shared_ptr[vector[vector[string]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[vector[string]]])
    @staticmethod
    cdef shared_ptr[vector[vector[string]]] _make_instance(object items) except *

cdef class List__Set__i32(thrift.py3.types.List):
    cdef shared_ptr[vector[cset[cint32_t]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cset[cint32_t]]])
    @staticmethod
    cdef shared_ptr[vector[cset[cint32_t]]] _make_instance(object items) except *

cdef class List__Map__string_string(thrift.py3.types.List):
    cdef shared_ptr[vector[cmap[string,string]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cmap[string,string]]])
    @staticmethod
    cdef shared_ptr[vector[cmap[string,string]]] _make_instance(object items) except *

cdef class List__binary(thrift.py3.types.List):
    cdef shared_ptr[vector[string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[string]])
    @staticmethod
    cdef shared_ptr[vector[string]] _make_instance(object items) except *

cdef class Set__binary(thrift.py3.types.Set):
    cdef shared_ptr[cset[string]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cset[string]])
    @staticmethod
    cdef shared_ptr[cset[string]] _make_instance(object items) except *

cdef class List__AnEnum(thrift.py3.types.List):
    cdef shared_ptr[vector[cAnEnum]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cAnEnum]])
    @staticmethod
    cdef shared_ptr[vector[cAnEnum]] _make_instance(object items) except *

cdef class Map__i32_double(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cint32_t,double]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cint32_t,double]])
    @staticmethod
    cdef shared_ptr[cmap[cint32_t,double]] _make_instance(object items) except *

cdef class List__Map__i32_double(thrift.py3.types.List):
    cdef shared_ptr[vector[cmap[cint32_t,double]]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[vector[cmap[cint32_t,double]]])
    @staticmethod
    cdef shared_ptr[vector[cmap[cint32_t,double]]] _make_instance(object items) except *

cdef class Map__AnEnumRenamed_i32(thrift.py3.types.Map):
    cdef shared_ptr[cmap[cAnEnumRenamed,cint32_t]] _cpp_obj
    @staticmethod
    cdef _fbthrift_create(shared_ptr[cmap[cAnEnumRenamed,cint32_t]])
    @staticmethod
    cdef shared_ptr[cmap[cAnEnumRenamed,cint32_t]] _make_instance(object items) except *


cdef extern from "thrift/compiler/test/fixtures/py3/gen-py3cpp/module_constants.h" namespace "::py3::simple":
    cdef cbool cA_BOOL "::py3::simple::module_constants::A_BOOL"
    cdef cint8_t cA_BYTE "::py3::simple::module_constants::A_BYTE"
    cdef cint16_t cTHE_ANSWER "::py3::simple::module_constants::THE_ANSWER"
    cdef cint32_t cA_NUMBER "::py3::simple::module_constants::A_NUMBER"
    cdef cint64_t cA_BIG_NUMBER "::py3::simple::module_constants::A_BIG_NUMBER"
    cdef double cA_REAL_NUMBER "::py3::simple::module_constants::A_REAL_NUMBER"
    cdef double cA_FAKE_NUMBER "::py3::simple::module_constants::A_FAKE_NUMBER"
    cdef const char* cA_WORD "::py3::simple::module_constants::A_WORD"()
    cdef string cSOME_BYTES "::py3::simple::module_constants::SOME_BYTES"()
    cdef cSimpleStruct cA_STRUCT "::py3::simple::module_constants::A_STRUCT"()
    cdef cSimpleStruct cEMPTY "::py3::simple::module_constants::EMPTY"()
    cdef vector[string] cWORD_LIST "::py3::simple::module_constants::WORD_LIST"()
    cdef vector[cmap[cint32_t,double]] cSOME_MAP "::py3::simple::module_constants::SOME_MAP"()
    cdef cset[cint32_t] cDIGITS "::py3::simple::module_constants::DIGITS"()
    cdef cmap[string,cSimpleStruct] cA_CONST_MAP "::py3::simple::module_constants::A_CONST_MAP"()
    cdef cmap[cAnEnumRenamed,cint32_t] cANOTHER_CONST_MAP "::py3::simple::module_constants::ANOTHER_CONST_MAP"()
