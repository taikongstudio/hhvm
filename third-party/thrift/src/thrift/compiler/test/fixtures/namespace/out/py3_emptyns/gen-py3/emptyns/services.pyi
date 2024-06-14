#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace/src/emptyns.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import typing as _typing
from thrift.py3.server import RequestContext, ServiceInterface
from abc import abstractmethod, ABCMeta

import emptyns.types as _emptyns_types

_TestServiceInterfaceT = _typing.TypeVar('_TestServiceInterfaceT', bound='TestServiceInterface')


class TestServiceInterface(
    ServiceInterface,
    metaclass=ABCMeta,
):


    @abstractmethod
    async def init(
        self,
        int1: int
    ) -> int: ...
    pass


