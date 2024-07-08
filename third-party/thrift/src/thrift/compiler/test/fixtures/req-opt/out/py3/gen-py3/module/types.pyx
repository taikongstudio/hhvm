#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/req-opt/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.optional cimport optional as __optional
from libcpp.string cimport string
from libcpp cimport bool as cbool
from libcpp.iterator cimport inserter as cinserter
from libcpp.utility cimport move as cmove
from cpython cimport bool as pbool
from cython.operator cimport dereference as deref, preincrement as inc, address as ptr_address
import thrift.py3.types
from thrift.py3.types import _IsSet as _fbthrift_IsSet
from thrift.py3.types cimport make_unique
cimport thrift.py3.types
cimport thrift.py3.exceptions
cimport thrift.python.exceptions
from thrift.python.std_libcpp cimport sv_to_str as __sv_to_str, string_view as __cstring_view
from thrift.py3.types cimport (
    cSetOp as __cSetOp,
    richcmp as __richcmp,
    set_op as __set_op,
    setcmp as __setcmp,
    init_unicode_from_cpp as __init_unicode_from_cpp,
    set_iter as __set_iter,
    map_iter as __map_iter,
    map_contains as __map_contains,
    map_getitem as __map_getitem,
    reference_shared_ptr as __reference_shared_ptr,
    get_field_name_by_index as __get_field_name_by_index,
    reset_field as __reset_field,
    translate_cpp_enum_to_python,
    SetMetaClass as __SetMetaClass,
    const_pointer_cast,
    make_const_shared,
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
    BadEnum as __BadEnum,
)
cimport thrift.py3.serializer as serializer
from thrift.python.protocol cimport Protocol as __Protocol
import folly.iobuf as _fbthrift_iobuf
from folly.optional cimport cOptional
from folly.memory cimport to_shared_ptr as __to_shared_ptr
from folly.range cimport Range as __cRange

import sys
from collections.abc import Sequence, Set, Mapping, Iterable
import weakref as __weakref
import builtins as _builtins
import importlib

from module.containers_FBTHRIFT_ONLY_DO_NOT_USE import (
    List__bool,
    List__i32,
)




cdef object get_types_reflection():
    import importlib
    return importlib.import_module(
        "module.types_reflection"
    )

@__cython.auto_pickle(False)
cdef class Foo(thrift.py3.types.Struct):
    def __init__(Foo self, **kwargs):
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cFoo]()
        self._fields_setter = _fbthrift_types_fields.__Foo_FieldsSetter._fbthrift_create(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        super().__init__(**kwargs)

    def __call__(Foo self, **kwargs):
        if not kwargs:
            return self
        cdef Foo __fbthrift_inst = Foo.__new__(Foo)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cFoo](deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__Foo_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("Foo", {
          "myInteger": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).myInteger_ref().has_value(),
          "myString": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).myString_ref().has_value(),
          "myBools": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).myBools_ref().has_value(),
          "myNumbers": deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).myNumbers_ref().has_value(),
        })

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cFoo] cpp_obj):
        __fbthrift_inst = <Foo>Foo.__new__(Foo)
        __fbthrift_inst._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline myInteger_impl(self):

        return deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).myInteger_ref().value()

    @property
    def myInteger(self):
        return self.myInteger_impl()

    cdef inline myString_impl(self):
        if not deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).myString_ref().has_value():
            return None

        return (<bytes>deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).myString_ref().value_unchecked()).decode('UTF-8')

    @property
    def myString(self):
        return self.myString_impl()

    cdef inline myBools_impl(self):

        if self.__fbthrift_cached_myBools is None:
            self.__fbthrift_cached_myBools = List__bool__from_cpp(deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).myBools_ref().ref())
        return self.__fbthrift_cached_myBools

    @property
    def myBools(self):
        return self.myBools_impl()

    cdef inline myNumbers_impl(self):

        if self.__fbthrift_cached_myNumbers is None:
            self.__fbthrift_cached_myNumbers = List__i32__from_cpp(deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE).myNumbers_ref().ref())
        return self.__fbthrift_cached_myNumbers

    @property
    def myNumbers(self):
        return self.myNumbers_impl()


    def __hash__(Foo self):
        return super().__hash__()

    def __repr__(Foo self):
        return super().__repr__()

    def __str__(Foo self):
        return super().__str__()


    def __copy__(Foo self):
        cdef shared_ptr[cFoo] cpp_obj = make_shared[cFoo](
            deref(self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE)
        )
        return Foo._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cFoo](
            self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            (<Foo>other)._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__Foo()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cFoo].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.Foo"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cFoo](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 4

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(Foo self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cFoo](self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(Foo self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE = make_shared[cFoo]()
        with nogil:
            needed = serializer.cdeserialize[cFoo](buf, self._cpp_obj_FBTHRIFT_ONLY_DO_NOT_USE.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "module.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.Foo, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("module.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.Foo, self)


cdef vector[cbool] List__bool__make_instance(object items) except *:
    cdef vector[cbool] c_inst
    if items is not None:
        for item in items:
            if not isinstance(item, bool):
                raise TypeError(f"{item!r} is not of type bool")
            c_inst.push_back(item)
    return cmove(c_inst)

cdef object List__bool__from_cpp(const vector[cbool]& c_vec) except *:
    cdef list py_list = []
    cdef int idx = 0
    for idx in range(c_vec.size()):
        py_list.append(c_vec[idx])
    return List__bool(py_list, thrift.py3.types._fbthrift_list_private_ctor)


cdef vector[cint32_t] List__i32__make_instance(object items) except *:
    cdef vector[cint32_t] c_inst
    if items is not None:
        for item in items:
            if not isinstance(item, int):
                raise TypeError(f"{item!r} is not of type int")
            item = <cint32_t> item
            c_inst.push_back(item)
    return cmove(c_inst)

cdef object List__i32__from_cpp(const vector[cint32_t]& c_vec) except *:
    cdef list py_list = []
    cdef int idx = 0
    for idx in range(c_vec.size()):
        py_list.append(c_vec[idx])
    return List__i32(py_list, thrift.py3.types._fbthrift_list_private_ctor)


