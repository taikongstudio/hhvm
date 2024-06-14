#
# Autogenerated by Thrift for module.thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection import (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
    StructSpec as __StructSpec,
    ListSpec as __ListSpec,
    SetSpec as __SetSpec,
    MapSpec as __MapSpec,
    FieldSpec as __FieldSpec,
)

import includes.types as _includes_types

import module.types as _module_types



def get_reflection__MyStruct() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="MyStruct",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    defaults = _module_types.MyStruct()
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="MyIncludedField",
            py_name="MyIncludedField",
            type=_includes_types.Included,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.MyIncludedField,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="MyOtherIncludedField",
            py_name="MyOtherIncludedField",
            type=_includes_types.Included,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="MyIncludedInt",
            py_name="MyIncludedInt",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.UNQUALIFIED,
            default=defaults.MyIncludedInt,
            annotations={
            },
        ),
    )
    return spec
