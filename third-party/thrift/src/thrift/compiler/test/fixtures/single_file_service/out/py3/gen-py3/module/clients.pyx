#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/single_file_service/src/module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
from libc.stdint cimport (
    int8_t as cint8_t,
    int16_t as cint16_t,
    int32_t as cint32_t,
    int64_t as cint64_t,
)
from libcpp.memory cimport shared_ptr, make_shared, unique_ptr
from libcpp.string cimport string
from libcpp cimport bool as cbool
from cpython cimport bool as pbool
from libcpp.vector cimport vector
from libcpp.set cimport set as cset
from libcpp.map cimport map as cmap
from libcpp.utility cimport move as cmove
from cython.operator cimport dereference as deref, typeid
from cpython.ref cimport PyObject
from thrift.py3.client cimport cRequestChannel_ptr, makeClientWrapper, cClientWrapper
from thrift.py3.exceptions cimport try_make_shared_exception
from thrift.python.exceptions cimport create_py_exception
from folly cimport cFollyTry, cFollyUnit, c_unit
from folly.cast cimport down_cast_ptr
from libcpp.typeinfo cimport type_info
import thrift.py3.types
cimport thrift.py3.types
from thrift.py3.types cimport make_unique
import thrift.py3.client
cimport thrift.py3.client
from thrift.python.common cimport (
    RpcOptions as __RpcOptions,
    cThriftServiceMetadataResponse as __fbthrift_cThriftServiceMetadataResponse,
    ServiceMetadata,
    MetadataBox as __MetadataBox,
)

from folly.futures cimport bridgeFutureWith
from folly.executor cimport get_executor
cimport folly.iobuf as _fbthrift_iobuf
import folly.iobuf as _fbthrift_iobuf
from folly.iobuf cimport move as move_iobuf
cimport cython

import sys
import types as _py_types
from asyncio import get_event_loop as asyncio_get_event_loop, shield as asyncio_shield, InvalidStateError as asyncio_InvalidStateError

cimport module.types as _module_types
import module.types as _module_types
from thrift.py3.stream cimport cResponseAndClientBufferedStream, cClientBufferedStream

import module.services_reflection as _services_reflection
cimport module.services_reflection as _services_reflection

from module.clients_wrapper cimport cAAsyncClient, cAClientWrapper
from module.clients_wrapper cimport cAClientWrapper_IInteractionWrapper
from module.clients_wrapper cimport cBAsyncClient, cBClientWrapper
from module.clients_wrapper cimport cCAsyncClient, cCClientWrapper
from module.clients_wrapper cimport cCClientWrapper_IInteractionWrapper


cdef void A_foo_callback(
    cFollyTry[_module_types.cFoo]&& result,
    PyObject* userdata
) noexcept:
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(_module_types.Foo._fbthrift_create(make_shared[_module_types.cFoo](cmove(result.value()))))
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void A_I_interact_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata
) noexcept:
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(None)
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void B_bar_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata
) noexcept:
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(None)
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void B_stream_stuff_callback(
    cFollyTry[cClientBufferedStream[cint32_t]]&& result,
    PyObject* userdata
) noexcept:
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(_module_types.ClientBufferedStream__i32._fbthrift_create(result.value(), options))
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))

cdef void C_I_interact_callback(
    cFollyTry[cFollyUnit]&& result,
    PyObject* userdata
) noexcept:
    client, pyfuture, options = <object> userdata  
    if result.hasException():
        pyfuture.set_exception(create_py_exception(result.exception(), <__RpcOptions>options))
    else:
        try:
            pyfuture.set_result(None)
        except Exception as ex:
            pyfuture.set_exception(ex.with_traceback(None))


cdef object _A_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class A(thrift.py3.client.Client):
    annotations = _A_annotations

    cdef const type_info* _typeid(A self):
        return &typeid(cAAsyncClient)

    cdef bind_client(A self, cRequestChannel_ptr&& channel):
        self._client = makeClientWrapper[cAAsyncClient, cAClientWrapper](
            cmove(channel)
        )

    @cython.always_allow_keywords(True)
    def foo(
            A self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[_module_types.cFoo](
            self._executor,
            down_cast_ptr[cAClientWrapper, cClientWrapper](self._client.get()).foo(rpc_options._cpp_obj, 
            ),
            A_foo_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)


    def createI(
            A self
    ):
        interaction = A_I()
        bridgeFutureWith[unique_ptr[cClientWrapper]](
            interaction._executor,
            down_cast_ptr[cAClientWrapper, cClientWrapper](self._client.get()).createI(),
            thrift.py3.client.interactions_callback,
            <PyObject *> interaction
        )
        return interaction

    async def async_createI(
            A self
    ):
        return self.createI()

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__A(for_clients=True)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cASvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.A"

@cython.auto_pickle(False)
cdef class A_I(thrift.py3.client.Client):

    @cython.always_allow_keywords(True)
    def interact(
            A_I self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[cFollyUnit](
            self._executor,
            down_cast_ptr[cAClientWrapper_IInteractionWrapper, cClientWrapper](self._client.get()).interact(rpc_options._cpp_obj, 
            ),
            A_I_interact_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

cdef object _B_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class B(A):
    annotations = _B_annotations

    cdef const type_info* _typeid(B self):
        return &typeid(cBAsyncClient)

    cdef bind_client(B self, cRequestChannel_ptr&& channel):
        self._client = makeClientWrapper[cBAsyncClient, cBClientWrapper](
            cmove(channel)
        )

    @cython.always_allow_keywords(True)
    def bar(
            B self,
            _module_types.Foo foo not None,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[cFollyUnit](
            self._executor,
            down_cast_ptr[cBClientWrapper, cClientWrapper](self._client.get()).bar(rpc_options._cpp_obj, 
                deref((<_module_types.Foo>foo)._cpp_obj),
            ),
            B_bar_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

    @cython.always_allow_keywords(True)
    def stream_stuff(
            B self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[cClientBufferedStream[cint32_t]](
            self._executor,
            down_cast_ptr[cBClientWrapper, cClientWrapper](self._client.get()).stream_stuff(rpc_options._cpp_obj, 
            ),
            B_stream_stuff_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)


    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__B(for_clients=True)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cBSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.B"

cdef object _C_annotations = _py_types.MappingProxyType({
})


@cython.auto_pickle(False)
cdef class C(thrift.py3.client.Client):
    annotations = _C_annotations

    cdef const type_info* _typeid(C self):
        return &typeid(cCAsyncClient)

    cdef bind_client(C self, cRequestChannel_ptr&& channel):
        self._client = makeClientWrapper[cCAsyncClient, cCClientWrapper](
            cmove(channel)
        )


    def createI(
            C self
    ):
        interaction = C_I()
        bridgeFutureWith[unique_ptr[cClientWrapper]](
            interaction._executor,
            down_cast_ptr[cCClientWrapper, cClientWrapper](self._client.get()).createI(),
            thrift.py3.client.interactions_callback,
            <PyObject *> interaction
        )
        return interaction

    async def async_createI(
            C self
    ):
        return self.createI()

    @classmethod
    def __get_reflection__(cls):
        return _services_reflection.get_reflection__C(for_clients=True)

    @staticmethod
    def __get_metadata__():
        cdef __fbthrift_cThriftServiceMetadataResponse response
        ServiceMetadata[_services_reflection.cCSvIf].gen(response)
        return __MetadataBox.box(cmove(deref(response.metadata_ref())))

    @staticmethod
    def __get_thrift_name__():
        return "module.C"

@cython.auto_pickle(False)
cdef class C_I(thrift.py3.client.Client):

    @cython.always_allow_keywords(True)
    def interact(
            C_I self,
            __RpcOptions rpc_options=None
    ):
        if rpc_options is None:
            rpc_options = <__RpcOptions>__RpcOptions.__new__(__RpcOptions)
        self._check_connect_future()
        __loop = asyncio_get_event_loop()
        __future = __loop.create_future()
        __userdata = (self, __future, rpc_options)
        bridgeFutureWith[cFollyUnit](
            self._executor,
            down_cast_ptr[cCClientWrapper_IInteractionWrapper, cClientWrapper](self._client.get()).interact(rpc_options._cpp_obj, 
            ),
            C_I_interact_callback,
            <PyObject *> __userdata
        )
        return asyncio_shield(__future)

