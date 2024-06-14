#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/enums/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cimport cython as __cython
from cpython.object cimport PyTypeObject, Py_LT, Py_LE, Py_EQ, Py_NE, Py_GT, Py_GE
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
    list_index as __list_index,
    list_count as __list_count,
    list_slice as __list_slice,
    list_getitem as __list_getitem,
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
    constant_shared_ptr,
    NOTSET as __NOTSET,
    EnumData as __EnumData,
    EnumFlagsData as __EnumFlagsData,
    UnionTypeEnumData as __UnionTypeEnumData,
    createEnumDataForUnionType as __createEnumDataForUnionType,
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


cdef __EnumData __Metasyntactic_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cMetasyntactic](), Metasyntactic)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MetasyntacticMeta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __Metasyntactic_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __Metasyntactic_enum_data.get_all_names()

    def __len__(cls):
        return __Metasyntactic_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __Metasyntactic_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class Metasyntactic(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __Metasyntactic_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMetasyntactic].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.Metasyntactic"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "test.fixtures.enums.module.thrift_types"
        )
        return python_types.Metasyntactic(self.value)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self.value


__SetMetaClass(<PyTypeObject*> Metasyntactic, <PyTypeObject*> __MetasyntacticMeta)


cdef __EnumData __MyEnum1_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cMyEnum1](), MyEnum1)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyEnum1Meta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyEnum1_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyEnum1_enum_data.get_all_names()

    def __len__(cls):
        return __MyEnum1_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyEnum1_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyEnum1(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyEnum1_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyEnum1].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnum1"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "test.fixtures.enums.module.thrift_types"
        )
        return python_types.MyEnum1(self.value)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self.value


__SetMetaClass(<PyTypeObject*> MyEnum1, <PyTypeObject*> __MyEnum1Meta)


cdef __EnumData __MyEnum2_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cMyEnum2](), MyEnum2)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyEnum2Meta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyEnum2_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyEnum2_enum_data.get_all_names()

    def __len__(cls):
        return __MyEnum2_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyEnum2_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyEnum2(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyEnum2_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyEnum2].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnum2"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "test.fixtures.enums.module.thrift_types"
        )
        return python_types.MyEnum2(self.value)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self.value


__SetMetaClass(<PyTypeObject*> MyEnum2, <PyTypeObject*> __MyEnum2Meta)


cdef __EnumData __MyEnum3_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cMyEnum3](), MyEnum3)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyEnum3Meta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyEnum3_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyEnum3_enum_data.get_all_names()

    def __len__(cls):
        return __MyEnum3_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyEnum3_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyEnum3(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyEnum3_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyEnum3].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnum3"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "test.fixtures.enums.module.thrift_types"
        )
        return python_types.MyEnum3(self.value)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self.value


__SetMetaClass(<PyTypeObject*> MyEnum3, <PyTypeObject*> __MyEnum3Meta)


cdef __EnumData __MyEnum4_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cMyEnum4](), MyEnum4)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyEnum4Meta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyEnum4_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyEnum4_enum_data.get_all_names()

    def __len__(cls):
        return __MyEnum4_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyEnum4_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyEnum4(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyEnum4_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyEnum4].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyEnum4"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "test.fixtures.enums.module.thrift_types"
        )
        return python_types.MyEnum4(self.value)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self.value


__SetMetaClass(<PyTypeObject*> MyEnum4, <PyTypeObject*> __MyEnum4Meta)


cdef __EnumData __MyBitmaskEnum1_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cMyBitmaskEnum1](), MyBitmaskEnum1)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyBitmaskEnum1Meta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyBitmaskEnum1_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyBitmaskEnum1_enum_data.get_all_names()

    def __len__(cls):
        return __MyBitmaskEnum1_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyBitmaskEnum1_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyBitmaskEnum1(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyBitmaskEnum1_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyBitmaskEnum1].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyBitmaskEnum1"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "test.fixtures.enums.module.thrift_types"
        )
        return python_types.MyBitmaskEnum1(self.value)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self.value


__SetMetaClass(<PyTypeObject*> MyBitmaskEnum1, <PyTypeObject*> __MyBitmaskEnum1Meta)


cdef __EnumData __MyBitmaskEnum2_enum_data  = __EnumData._fbthrift_create(thrift.py3.types.createEnumData[cMyBitmaskEnum2](), MyBitmaskEnum2)


@__cython.internal
@__cython.auto_pickle(False)
cdef class __MyBitmaskEnum2Meta(thrift.py3.types.EnumMeta):
    def _fbthrift_get_by_value(cls, int value):
        return __MyBitmaskEnum2_enum_data.get_by_value(value)

    def _fbthrift_get_all_names(cls):
        return __MyBitmaskEnum2_enum_data.get_all_names()

    def __len__(cls):
        return __MyBitmaskEnum2_enum_data.size()

    def __getattribute__(cls, str name not None):
        if name.startswith("__") or name.startswith("_fbthrift_") or name == "mro":
            return super().__getattribute__(name)
        return __MyBitmaskEnum2_enum_data.get_by_name(name)


@__cython.final
@__cython.auto_pickle(False)
cdef class MyBitmaskEnum2(thrift.py3.types.CompiledEnum):
    cdef get_by_name(self, str name):
        return __MyBitmaskEnum2_enum_data.get_by_name(name)


    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        EnumMetadata[cMyBitmaskEnum2].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyBitmaskEnum2"

    def _to_python(self):
        import importlib
        python_types = importlib.import_module(
            "test.fixtures.enums.module.thrift_types"
        )
        return python_types.MyBitmaskEnum2(self.value)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        return self.value


__SetMetaClass(<PyTypeObject*> MyBitmaskEnum2, <PyTypeObject*> __MyBitmaskEnum2Meta)



cdef object get_types_reflection():
    import importlib
    return importlib.import_module(
        "test.fixtures.enums.module.types_reflection"
    )

@__cython.auto_pickle(False)
cdef class SomeStruct(thrift.py3.types.Struct):
    def __init__(SomeStruct self, **kwargs):
        self._cpp_obj = make_shared[cSomeStruct]()
        self._fields_setter = _fbthrift_types_fields.__SomeStruct_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(SomeStruct self, **kwargs):
        if not kwargs:
            return self
        cdef SomeStruct __fbthrift_inst = SomeStruct.__new__(SomeStruct)
        __fbthrift_inst._cpp_obj = make_shared[cSomeStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__SomeStruct_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("SomeStruct", {
          "reasonable": deref(self._cpp_obj).reasonable_ref().has_value(),
          "fine": deref(self._cpp_obj).fine_ref().has_value(),
          "questionable": deref(self._cpp_obj).questionable_ref().has_value(),
          "tags": deref(self._cpp_obj).tags_ref().has_value(),
        })

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cSomeStruct] cpp_obj):
        __fbthrift_inst = <SomeStruct>SomeStruct.__new__(SomeStruct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline reasonable_impl(self):

        if self.__fbthrift_cached_reasonable is None:
            self.__fbthrift_cached_reasonable = translate_cpp_enum_to_python(Metasyntactic, <int>(deref(self._cpp_obj).reasonable_ref().value()))
        return self.__fbthrift_cached_reasonable

    @property
    def reasonable(self):
        return self.reasonable_impl()

    cdef inline fine_impl(self):

        if self.__fbthrift_cached_fine is None:
            self.__fbthrift_cached_fine = translate_cpp_enum_to_python(Metasyntactic, <int>(deref(self._cpp_obj).fine_ref().value()))
        return self.__fbthrift_cached_fine

    @property
    def fine(self):
        return self.fine_impl()

    cdef inline questionable_impl(self):

        if self.__fbthrift_cached_questionable is None:
            self.__fbthrift_cached_questionable = translate_cpp_enum_to_python(Metasyntactic, <int>(deref(self._cpp_obj).questionable_ref().value()))
        return self.__fbthrift_cached_questionable

    @property
    def questionable(self):
        return self.questionable_impl()

    cdef inline tags_impl(self):

        if self.__fbthrift_cached_tags is None:
            self.__fbthrift_cached_tags = Set__i32._create_FBTHRIFT_ONLY_DO_NOT_USE(__reference_shared_ptr(deref(self._cpp_obj).tags_ref().ref(), self._cpp_obj))
        return self.__fbthrift_cached_tags

    @property
    def tags(self):
        return self.tags_impl()


    def __hash__(SomeStruct self):
        return super().__hash__()

    def __repr__(SomeStruct self):
        return super().__repr__()

    def __str__(SomeStruct self):
        return super().__str__()


    def __copy__(SomeStruct self):
        cdef shared_ptr[cSomeStruct] cpp_obj = make_shared[cSomeStruct](
            deref(self._cpp_obj)
        )
        return SomeStruct._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cSomeStruct](
            self._cpp_obj,
            (<SomeStruct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__SomeStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cSomeStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.SomeStruct"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cSomeStruct](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 4

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(SomeStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cSomeStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(SomeStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cSomeStruct]()
        with nogil:
            needed = serializer.cdeserialize[cSomeStruct](buf, self._cpp_obj.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "test.fixtures.enums.module.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.SomeStruct, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("module.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.SomeStruct, self)
@__cython.auto_pickle(False)
cdef class MyStruct(thrift.py3.types.Struct):
    def __init__(MyStruct self, **kwargs):
        self._cpp_obj = make_shared[cMyStruct]()
        self._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter._fbthrift_create(self._cpp_obj.get())
        super().__init__(**kwargs)

    def __call__(MyStruct self, **kwargs):
        if not kwargs:
            return self
        cdef MyStruct __fbthrift_inst = MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = make_shared[cMyStruct](deref(self._cpp_obj))
        __fbthrift_inst._fields_setter = _fbthrift_types_fields.__MyStruct_FieldsSetter._fbthrift_create(__fbthrift_inst._cpp_obj.get())
        for __fbthrift_name, _fbthrift_value in kwargs.items():
            __fbthrift_inst._fbthrift_set_field(__fbthrift_name, _fbthrift_value)
        return __fbthrift_inst

    cdef void _fbthrift_set_field(self, str name, object value) except *:
        self._fields_setter.set_field(name.encode("utf-8"), value)

    cdef object _fbthrift_isset(self):
        return _fbthrift_IsSet("MyStruct", {
          "me2_3": deref(self._cpp_obj).me2_3_ref().has_value(),
          "me3_n3": deref(self._cpp_obj).me3_n3_ref().has_value(),
          "me1_t1": deref(self._cpp_obj).me1_t1_ref().has_value(),
          "me1_t2": deref(self._cpp_obj).me1_t2_ref().has_value(),
        })

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cMyStruct] cpp_obj):
        __fbthrift_inst = <MyStruct>MyStruct.__new__(MyStruct)
        __fbthrift_inst._cpp_obj = cmove(cpp_obj)
        return __fbthrift_inst

    cdef inline me2_3_impl(self):

        if self.__fbthrift_cached_me2_3 is None:
            self.__fbthrift_cached_me2_3 = translate_cpp_enum_to_python(MyEnum2, <int>(deref(self._cpp_obj).me2_3_ref().value()))
        return self.__fbthrift_cached_me2_3

    @property
    def me2_3(self):
        return self.me2_3_impl()

    cdef inline me3_n3_impl(self):

        if self.__fbthrift_cached_me3_n3 is None:
            self.__fbthrift_cached_me3_n3 = translate_cpp_enum_to_python(MyEnum3, <int>(deref(self._cpp_obj).me3_n3_ref().value()))
        return self.__fbthrift_cached_me3_n3

    @property
    def me3_n3(self):
        return self.me3_n3_impl()

    cdef inline me1_t1_impl(self):

        if self.__fbthrift_cached_me1_t1 is None:
            self.__fbthrift_cached_me1_t1 = translate_cpp_enum_to_python(MyEnum1, <int>(deref(self._cpp_obj).me1_t1_ref().value()))
        return self.__fbthrift_cached_me1_t1

    @property
    def me1_t1(self):
        return self.me1_t1_impl()

    cdef inline me1_t2_impl(self):

        if self.__fbthrift_cached_me1_t2 is None:
            self.__fbthrift_cached_me1_t2 = translate_cpp_enum_to_python(MyEnum1, <int>(deref(self._cpp_obj).me1_t2_ref().value()))
        return self.__fbthrift_cached_me1_t2

    @property
    def me1_t2(self):
        return self.me1_t2_impl()


    def __hash__(MyStruct self):
        return super().__hash__()

    def __repr__(MyStruct self):
        return super().__repr__()

    def __str__(MyStruct self):
        return super().__str__()


    def __copy__(MyStruct self):
        cdef shared_ptr[cMyStruct] cpp_obj = make_shared[cMyStruct](
            deref(self._cpp_obj)
        )
        return MyStruct._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __richcmp__(self, other, int op):
        r = self._fbthrift_cmp_sametype(other, op)
        return __richcmp[cMyStruct](
            self._cpp_obj,
            (<MyStruct>other)._cpp_obj,
            op,
        ) if r is None else r

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__MyStruct()

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftMetadata meta
        StructMetadata[cMyStruct].gen(meta)
        return __MetadataBox.box(cmove(meta))

    @staticmethod
    def __get_thrift_name__():
        return "module.MyStruct"

    @classmethod
    def _fbthrift_get_field_name_by_index(cls, idx):
        return __sv_to_str(__get_field_name_by_index[cMyStruct](idx))

    @classmethod
    def _fbthrift_get_struct_size(cls):
        return 4

    cdef _fbthrift_iobuf.IOBuf _fbthrift_serialize(MyStruct self, __Protocol proto):
        cdef unique_ptr[_fbthrift_iobuf.cIOBuf] data
        with nogil:
            data = cmove(serializer.cserialize[cMyStruct](self._cpp_obj.get(), proto))
        return _fbthrift_iobuf.from_unique_ptr(cmove(data))

    cdef cuint32_t _fbthrift_deserialize(MyStruct self, const _fbthrift_iobuf.cIOBuf* buf, __Protocol proto) except? 0:
        cdef cuint32_t needed
        self._cpp_obj = make_shared[cMyStruct]()
        with nogil:
            needed = serializer.cdeserialize[cMyStruct](buf, self._cpp_obj.get(), proto)
        return needed


    def _to_python(self):
        import importlib
        import thrift.python.converter
        python_types = importlib.import_module(
            "test.fixtures.enums.module.thrift_types"
        )
        return thrift.python.converter.to_python_struct(python_types.MyStruct, self)

    def _to_py3(self):
        return self

    def _to_py_deprecated(self):
        import importlib
        import thrift.util.converter
        py_deprecated_types = importlib.import_module("module.ttypes")
        return thrift.util.converter.to_py_struct(py_deprecated_types.MyStruct, self)
@__cython.auto_pickle(False)
@__cython.final
cdef class Set__i32(thrift.py3.types.Set):
    def __init__(self, items=None):
        if isinstance(items, Set__i32):
            self._cpp_obj = (<Set__i32> items)._cpp_obj
        else:
            self._cpp_obj = Set__i32__make_instance(items)

    @staticmethod
    cdef _create_FBTHRIFT_ONLY_DO_NOT_USE(shared_ptr[cset[cint32_t]] c_items):
        __fbthrift_inst = <Set__i32>Set__i32.__new__(Set__i32)
        __fbthrift_inst._cpp_obj = cmove(c_items)
        return __fbthrift_inst

    def __copy__(Set__i32 self):
        cdef shared_ptr[cset[cint32_t]] cpp_obj = make_shared[cset[cint32_t]](
            deref(self._cpp_obj)
        )
        return Set__i32._create_FBTHRIFT_ONLY_DO_NOT_USE(cmove(cpp_obj))

    def __len__(self):
        return deref(self._cpp_obj).size()

    def __contains__(self, item):
        if not self or item is None:
            return False
        if not isinstance(item, int):
            return False
        return pbool(deref(self._cpp_obj).count(item))


    def __iter__(self):
        if not self:
            return
        cdef __set_iter[cset[cint32_t]] itr = __set_iter[cset[cint32_t]](self._cpp_obj)
        cdef cint32_t citem = 0
        for i in range(deref(self._cpp_obj).size()):
            itr.genNext(self._cpp_obj, citem)
            yield citem

    def __hash__(self):
        return super().__hash__()

    def __richcmp__(self, other, int op):
        if isinstance(other, Set__i32):
            # C level comparisons
            return __setcmp(
                self._cpp_obj,
                (<Set__i32> other)._cpp_obj,
                op,
            )
        return self._fbthrift_py_richcmp(other, op)

    cdef _fbthrift_do_set_op(self, other, __cSetOp op):
        if not isinstance(other, Set__i32):
            other = Set__i32(other)
        cdef shared_ptr[cset[cint32_t]] result
        return Set__i32._create_FBTHRIFT_ONLY_DO_NOT_USE(__set_op[cset[cint32_t]](
            self._cpp_obj,
            (<Set__i32>other)._cpp_obj,
            op,
        ))

    @staticmethod
    def __get_reflection__():
        return get_types_reflection().get_reflection__Set__i32()


Set.register(Set__i32)

cdef shared_ptr[cset[cint32_t]] Set__i32__make_instance(object items) except *:
    cdef shared_ptr[cset[cint32_t]] c_inst = make_shared[cset[cint32_t]]()
    if items is not None:
        for item in items:
            if not isinstance(item, int):
                raise TypeError(f"{item!r} is not of type int")
            item = <cint32_t> item
            deref(c_inst).insert(item)
    return cmove(c_inst)

