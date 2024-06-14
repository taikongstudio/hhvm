#
# Autogenerated by Thrift for thrift/compiler/test/fixtures/mixin/src/module.thrift
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


import module.types as _module_types



def get_reflection__Mixin1() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Mixin1",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="field1",
            py_name="field1",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__Mixin2() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Mixin2",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="m1",
            py_name="m1",
            type=_module_types.Mixin1,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="field2",
            py_name="field2",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__Mixin3Base() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Mixin3Base",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="field3",
            py_name="field3",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
def get_reflection__Foo() -> __StructSpec:
    spec: __StructSpec = __StructSpec._fbthrift_create(
        name="Foo",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="field4",
            py_name="field4",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=2,
            name="m2",
            py_name="m2",
            type=_module_types.Mixin2,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
                """cpp.mixin""": """1""",            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="m3",
            py_name="m3",
            type=_module_types.Mixin3Base,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
                """cpp.mixin""": """1""",            },
        ),
    )
    return spec
