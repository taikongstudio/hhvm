#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/py3/src/empty.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import typing as _typing
from thrift.py3.server import RequestContext, ServiceInterface
from abc import abstractmethod, ABCMeta

import empty.types as _empty_types

_NullServiceInterfaceT = _typing.TypeVar('_NullServiceInterfaceT', bound='NullServiceInterface')


class NullServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta,
):
    pass


