#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations


import typing as _typing

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.exceptions as _fbthrift_python_exceptions

import transitive.thrift_types


class Included(_fbthrift_python_types.Struct):
    MyIntField: _typing.Final[int] = ...
    MyTransitiveField: _typing.Final[transitive.thrift_types.Foo] = ...
    def __init__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyTransitiveField: _typing.Optional[transitive.thrift_types.Foo]=...
    ) -> None: ...

    def __call__(
        self, *,
        MyIntField: _typing.Optional[int]=...,
        MyTransitiveField: _typing.Optional[transitive.thrift_types.Foo]=...
    ) -> Included: ...
    def __iter__(self) -> _typing.Iterator[_typing.Tuple[str, _typing.Union[int, transitive.thrift_types.Foo]]]: ...
    def _to_python(self) -> Included: ...
    def _to_py3(self) -> "includes.types.Included": ...  # type: ignore
    def _to_py_deprecated(self) -> "includes.ttypes.Included": ...  # type: ignore


ExampleIncluded: Included = ...

IncludedConstant: int = ...

IncludedInt64 = int
TransitiveFoo = transitive.thrift_types.Foo
