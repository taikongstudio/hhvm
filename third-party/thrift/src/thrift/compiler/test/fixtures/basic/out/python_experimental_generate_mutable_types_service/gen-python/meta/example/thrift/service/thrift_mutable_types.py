
# EXPERIMENTAL - DO NOT USE !!!
# See `experimental_generate_mutable_types` documentation in thrift compiler

#
# Autogenerated by Thrift
#
# DO NOT EDIT
#  @generated
#

from __future__ import annotations

import folly.iobuf as _fbthrift_iobuf
import thrift.python.types as _fbthrift_python_types
import thrift.python.mutable_types as _fbthrift_python_mutable_types
import thrift.python.mutable_exceptions as _fbthrift_python_mutable_exceptions
import thrift.python.mutable_typeinfos as _fbthrift_python_mutable_typeinfos



class EchoRequest(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "text",  # name
            "text",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "service.EchoRequest"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("meta.example.thrift.service.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.EchoRequest, self)

    def _to_mutable_python(self):
        return self


class EchoResponse(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "text",  # name
            "text",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "service.EchoResponse"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("meta.example.thrift.service.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.EchoResponse, self)

    def _to_mutable_python(self):
        return self


class WhisperException(metaclass=_fbthrift_python_mutable_exceptions.MutableGeneratedErrorMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "message",  # name
            "message",  # python name (from @python.Name annotation)
            _fbthrift_python_types.typeinfo_string,  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            8, # IDL type (see BaseTypeEnum)
        ),
    )

    @staticmethod
    def __get_thrift_name__() -> str:
        return "service.WhisperException"

    @staticmethod
    def __get_thrift_uri__():
        return None

    @staticmethod
    def __get_metadata__():
        raise NotImplementedError(f"__get_metadata__() is not yet implemented for mutable thrift-python structs: {type(self)}")


    def _to_python(self):
        import thrift.python.converter
        import importlib
        immutable_types = importlib.import_module("meta.example.thrift.service.thrift_types")
        return thrift.python.converter.to_python_struct(immutable_types.WhisperException, self)

    def _to_mutable_python(self):
        return self



_fbthrift_all_enums = [
]

_fbthrift_all_structs = [
    EchoRequest,
    EchoResponse,
    WhisperException,
]
_fbthrift_python_mutable_types.fill_specs(*_fbthrift_all_structs)



class _fbthrift_EchoService_echo_args(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Unqualified, # qualifier
            "request",  # name
            "request",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(EchoRequest),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )


class _fbthrift_EchoService_echo_result(metaclass=_fbthrift_python_mutable_types.MutableStructMeta):
    _fbthrift_SPEC = (
        _fbthrift_python_types.FieldInfo(
            0,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "success",  # name
            "success", # name
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(EchoResponse),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
        ),
        _fbthrift_python_types.FieldInfo(
            1,  # id
            _fbthrift_python_types.FieldQualifier.Optional, # qualifier
            "ex",  # name
            "ex",  # python name (from @python.Name annotation)
            lambda: _fbthrift_python_mutable_typeinfos.MutableStructTypeInfo(WhisperException),  # typeinfo
            None,  # default value
            None,  # adapter info
            False, # field type is primitive
            11, # IDL type (see BaseTypeEnum)
        ),
    )



_fbthrift_python_mutable_types.fill_specs(
    _fbthrift_EchoService_echo_args,
    _fbthrift_EchoService_echo_result,
    
)
