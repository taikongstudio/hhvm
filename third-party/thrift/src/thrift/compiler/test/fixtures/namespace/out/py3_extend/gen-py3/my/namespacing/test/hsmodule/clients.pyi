#
# Autogenerated by Thrift for hsmodule.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#

import folly.iobuf as _fbthrift_iobuf
import thrift.py3.types
import thrift.py3.client
import thrift.py3.common
import typing as _typing
from types import TracebackType

import my.namespacing.test.hsmodule.types as _my_namespacing_test_hsmodule_types


_HsTestServiceT = _typing.TypeVar('_HsTestServiceT', bound='HsTestService')


class HsTestService(thrift.py3.client.Client):

    async def init(
        self,
        int1: int,
        rpc_options: _typing.Optional[thrift.py3.common.RpcOptions]=None
    ) -> int: ...

