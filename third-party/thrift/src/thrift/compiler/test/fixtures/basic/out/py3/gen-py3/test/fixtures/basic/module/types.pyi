#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.exceptions
from thrift.py3.types import __NotSet, NOTSET
import typing as _typing
from typing_extensions import Final

import sys
import itertools


__property__ = property


class MyEnum(thrift.py3.types.Enum):
    MyValue1: MyEnum = ...
    MyValue2: MyEnum = ...
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyEnum": ...   # type: ignore
    def _to_py3(self) -> MyEnum: ...
    def _to_py_deprecated(self) -> int: ...


class HackEnum(thrift.py3.types.Enum):
    Value1: HackEnum = ...
    Value2: HackEnum = ...
    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.HackEnum": ...   # type: ignore
    def _to_py3(self) -> HackEnum: ...
    def _to_py_deprecated(self) -> int: ...


class MyStruct(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        MyIntField: bool
        MyStringField: bool
        MyDataField: bool
        myEnum: bool
        oneway: bool
        readonly: bool
        idempotent: bool
        floatSet: bool
        no_hack_codegen_field: bool
        pass

    MyIntField: Final[int] = ...

    MyStringField: Final[str] = ...

    MyDataField: Final[MyDataItem] = ...

    myEnum: Final[MyEnum] = ...

    oneway: Final[bool] = ...

    readonly: Final[bool] = ...

    idempotent: Final[bool] = ...

    floatSet: Final[_typing.AbstractSet[float]] = ...

    no_hack_codegen_field: Final[str] = ...

    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=None,
        MyStringField: _typing.Optional[str]=None,
        MyDataField: _typing.Optional[MyDataItem]=None,
        myEnum: _typing.Optional[MyEnum]=None,
        oneway: _typing.Optional[bool]=None,
        readonly: _typing.Optional[bool]=None,
        idempotent: _typing.Optional[bool]=None,
        floatSet: _typing.Optional[_typing.AbstractSet[float]]=None,
        no_hack_codegen_field: _typing.Optional[str]=None
    ) -> None: ...

    def __call__(
        self, *,
        MyIntField: _typing.Union[int, '__NotSet', None]=NOTSET,
        MyStringField: _typing.Union[str, '__NotSet', None]=NOTSET,
        MyDataField: _typing.Union[MyDataItem, '__NotSet', None]=NOTSET,
        myEnum: _typing.Union[MyEnum, '__NotSet', None]=NOTSET,
        oneway: _typing.Union[bool, '__NotSet', None]=NOTSET,
        readonly: _typing.Union[bool, '__NotSet', None]=NOTSET,
        idempotent: _typing.Union[bool, '__NotSet', None]=NOTSET,
        floatSet: _typing.Union[_typing.AbstractSet[float], '__NotSet', None]=NOTSET,
        no_hack_codegen_field: _typing.Union[str, '__NotSet', None]=NOTSET
    ) -> MyStruct: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyStruct'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyStruct') -> bool: ...
    def __gt__(self, other: 'MyStruct') -> bool: ...
    def __le__(self, other: 'MyStruct') -> bool: ...
    def __ge__(self, other: 'MyStruct') -> bool: ...

    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyStruct": ...   # type: ignore
    def _to_py3(self) -> MyStruct: ...
    def _to_py_deprecated(self) -> "module.ttypes.MyStruct": ...   # type: ignore

class MyDataItem(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        pass

    def __init__(
        self, 
    ) -> None: ...

    def __call__(
        self, 
    ) -> MyDataItem: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['MyDataItem'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyDataItem') -> bool: ...
    def __gt__(self, other: 'MyDataItem') -> bool: ...
    def __le__(self, other: 'MyDataItem') -> bool: ...
    def __ge__(self, other: 'MyDataItem') -> bool: ...

    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyDataItem": ...   # type: ignore
    def _to_py3(self) -> MyDataItem: ...
    def _to_py_deprecated(self) -> "module.ttypes.MyDataItem": ...   # type: ignore

_MyUnionValueType = _typing.Union[None, MyEnum, MyStruct, MyDataItem, _typing.AbstractSet[float]]

class MyUnion(thrift.py3.types.Union, _typing.Hashable):
    class __fbthrift_IsSet:
        myEnum: bool
        myStruct: bool
        myDataItem: bool
        floatSet: bool
        pass

    myEnum: Final[MyEnum] = ...

    myStruct: Final[MyStruct] = ...

    myDataItem: Final[MyDataItem] = ...

    floatSet: Final[_typing.AbstractSet[float]] = ...

    def __init__(
        self, *,
        myEnum: _typing.Optional[MyEnum]=None,
        myStruct: _typing.Optional[MyStruct]=None,
        myDataItem: _typing.Optional[MyDataItem]=None,
        floatSet: _typing.Optional[_typing.AbstractSet[float]]=None
    ) -> None: ...

    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'MyUnion') -> bool: ...
    def __gt__(self, other: 'MyUnion') -> bool: ...
    def __le__(self, other: 'MyUnion') -> bool: ...
    def __ge__(self, other: 'MyUnion') -> bool: ...

    class Type(thrift.py3.types.Enum):
        EMPTY: MyUnion.Type = ...
        myEnum: MyUnion.Type = ...
        myStruct: MyUnion.Type = ...
        myDataItem: MyUnion.Type = ...
        floatSet: MyUnion.Type = ...

    @staticmethod
    def fromValue(value: _MyUnionValueType) -> MyUnion: ...
    @__property__
    def value(self) -> _MyUnionValueType: ...
    @__property__
    def type(self) -> "MyUnion.Type": ...

    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.MyUnion": ...   # type: ignore
    def _to_py3(self) -> MyUnion: ...
    def _to_py_deprecated(self) -> "module.ttypes.MyUnion": ...   # type: ignore

class ReservedKeyword(thrift.py3.types.Struct, _typing.Hashable):
    class __fbthrift_IsSet:
        reserved_field: bool
        pass

    reserved_field: Final[int] = ...

    def __init__(
        self, *,
        reserved_field: _typing.Optional[int]=None
    ) -> None: ...

    def __call__(
        self, *,
        reserved_field: _typing.Union[int, '__NotSet', None]=NOTSET
    ) -> ReservedKeyword: ...

    def __reduce__(self) -> _typing.Tuple[_typing.Callable, _typing.Tuple[_typing.Type['ReservedKeyword'], bytes]]: ...
    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'ReservedKeyword') -> bool: ...
    def __gt__(self, other: 'ReservedKeyword') -> bool: ...
    def __le__(self, other: 'ReservedKeyword') -> bool: ...
    def __ge__(self, other: 'ReservedKeyword') -> bool: ...

    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.ReservedKeyword": ...   # type: ignore
    def _to_py3(self) -> ReservedKeyword: ...
    def _to_py_deprecated(self) -> "module.ttypes.ReservedKeyword": ...   # type: ignore

_UnionToBeRenamedValueType = _typing.Union[None, int]

class UnionToBeRenamed(thrift.py3.types.Union, _typing.Hashable):
    class __fbthrift_IsSet:
        reserved_field: bool
        pass

    reserved_field: Final[int] = ...

    def __init__(
        self, *,
        reserved_field: _typing.Optional[int]=None
    ) -> None: ...

    def __hash__(self) -> int: ...
    def __str__(self) -> str: ...
    def __repr__(self) -> str: ...
    def __lt__(self, other: 'UnionToBeRenamed') -> bool: ...
    def __gt__(self, other: 'UnionToBeRenamed') -> bool: ...
    def __le__(self, other: 'UnionToBeRenamed') -> bool: ...
    def __ge__(self, other: 'UnionToBeRenamed') -> bool: ...

    class Type(thrift.py3.types.Enum):
        EMPTY: UnionToBeRenamed.Type = ...
        reserved_field: UnionToBeRenamed.Type = ...

    @staticmethod
    def fromValue(value: _UnionToBeRenamedValueType) -> UnionToBeRenamed: ...
    @__property__
    def value(self) -> _UnionToBeRenamedValueType: ...
    @__property__
    def type(self) -> "UnionToBeRenamed.Type": ...

    def _to_python(self) -> "test.fixtures.basic.module.thrift_types.UnionToBeRenamed": ...   # type: ignore
    def _to_py3(self) -> UnionToBeRenamed: ...
    def _to_py_deprecated(self) -> "module.ttypes.UnionToBeRenamed": ...   # type: ignore

class Set__float(_typing.AbstractSet[float], _typing.Hashable):
    def __init__(self, items: _typing.Optional[_typing.AbstractSet[float]]=None) -> None: ...
    def __len__(self) -> int: ...
    def __hash__(self) -> int: ...
    def __copy__(self) -> _typing.AbstractSet[float]: ...
    def __contains__(self, x: object) -> bool: ...
    def union(self, other: _typing.AbstractSet[float]) -> 'Set__float': ...
    def intersection(self, other: _typing.AbstractSet[float]) -> 'Set__float': ...
    def difference(self, other: _typing.AbstractSet[float]) -> 'Set__float': ...
    def symmetric_difference(self, other: _typing.AbstractSet[float]) -> 'Set__float': ...
    def issubset(self, other: _typing.AbstractSet[float]) -> bool: ...
    def issuperset(self, other: _typing.AbstractSet[float]) -> bool: ...
    def __iter__(self) -> _typing.Iterator[float]: ...


MyEnumAlias = MyEnum
MyDataItemAlias = MyDataItem
