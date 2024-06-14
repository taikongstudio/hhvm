#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/py3/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
    uint16_t as cuint16_t,
    uint32_t as cuint32_t,
)
from libcpp.string cimport string
from libcpp cimport bool as cbool, nullptr, nullptr_t
from cpython cimport bool as pbool
from libcpp.memory cimport shared_ptr, unique_ptr
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap, pair as cpair
from libcpp.unordered_map cimport unordered_map as cumap
cimport folly.iobuf as _fbthrift_iobuf
from thrift.python.exceptions cimport cTException
cimport thrift.py3.exceptions
cimport thrift.py3.types
from thrift.python.std_libcpp cimport string_view as __cstring_view
from thrift.py3.types cimport (
    bstring,
    bytes_to_string,
    field_ref as __field_ref,
    optional_field_ref as __optional_field_ref,
    required_field_ref as __required_field_ref,
    terse_field_ref as __terse_field_ref,
    StructFieldsSetter as __StructFieldsSetter
)
from thrift.python.protocol cimport Protocol as __Protocol
from folly.optional cimport cOptional as __cOptional


cimport module.types as _module_types



ctypedef void (*__SimpleException_FieldsSetterFunc)(__SimpleException_FieldsSetter, object) except *

cdef class __SimpleException_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cSimpleException* _struct_cpp_obj
    cdef cumap[__cstring_view, __SimpleException_FieldsSetterFunc] _setters

    @staticmethod
    cdef __SimpleException_FieldsSetter _fbthrift_create(_module_types.cSimpleException* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *


ctypedef void (*__OptionalRefStruct_FieldsSetterFunc)(__OptionalRefStruct_FieldsSetter, object) except *

cdef class __OptionalRefStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cOptionalRefStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __OptionalRefStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __OptionalRefStruct_FieldsSetter _fbthrift_create(_module_types.cOptionalRefStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *


ctypedef void (*__SimpleStruct_FieldsSetterFunc)(__SimpleStruct_FieldsSetter, object) except *

cdef class __SimpleStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cSimpleStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __SimpleStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __SimpleStruct_FieldsSetter _fbthrift_create(_module_types.cSimpleStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *
    cdef void _set_field_3(self, _fbthrift_value) except *
    cdef void _set_field_4(self, _fbthrift_value) except *
    cdef void _set_field_5(self, _fbthrift_value) except *
    cdef void _set_field_6(self, _fbthrift_value) except *


ctypedef void (*__HiddenTypeFieldsStruct_FieldsSetterFunc)(__HiddenTypeFieldsStruct_FieldsSetter, object) except *

cdef class __HiddenTypeFieldsStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cHiddenTypeFieldsStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __HiddenTypeFieldsStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __HiddenTypeFieldsStruct_FieldsSetter _fbthrift_create(_module_types.cHiddenTypeFieldsStruct* struct_cpp_obj)


ctypedef void (*__ComplexStruct_FieldsSetterFunc)(__ComplexStruct_FieldsSetter, object) except *

cdef class __ComplexStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cComplexStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __ComplexStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __ComplexStruct_FieldsSetter _fbthrift_create(_module_types.cComplexStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *
    cdef void _set_field_1(self, _fbthrift_value) except *
    cdef void _set_field_2(self, _fbthrift_value) except *
    cdef void _set_field_3(self, _fbthrift_value) except *
    cdef void _set_field_4(self, _fbthrift_value) except *
    cdef void _set_field_5(self, _fbthrift_value) except *
    cdef void _set_field_6(self, _fbthrift_value) except *
    cdef void _set_field_7(self, _fbthrift_value) except *
    cdef void _set_field_8(self, _fbthrift_value) except *


ctypedef void (*__BinaryUnionStruct_FieldsSetterFunc)(__BinaryUnionStruct_FieldsSetter, object) except *

cdef class __BinaryUnionStruct_FieldsSetter(__StructFieldsSetter):
    cdef _module_types.cBinaryUnionStruct* _struct_cpp_obj
    cdef cumap[__cstring_view, __BinaryUnionStruct_FieldsSetterFunc] _setters

    @staticmethod
    cdef __BinaryUnionStruct_FieldsSetter _fbthrift_create(_module_types.cBinaryUnionStruct* struct_cpp_obj)
    cdef void _set_field_0(self, _fbthrift_value) except *

