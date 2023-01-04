#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#


import folly.iobuf as _fbthrift_iobuf

from thrift.py3.reflection cimport (
    NumberType as __NumberType,
    StructType as __StructType,
    Qualifier as __Qualifier,
)

cimport facebook.thrift.annotation.thrift.types as _facebook_thrift_annotation_thrift_types
cimport apache.thrift.op.patch.types as _apache_thrift_op_patch_types
cimport apache.thrift.type.standard.types as _apache_thrift_type_standard_types

cimport test.fixtures.patch.module.types as _test_fixtures_patch_module_types

from thrift.py3.types cimport (
    constant_shared_ptr,
    default_inst,
)


cdef __StructSpec get_reflection__MyData():
    cdef _test_fixtures_patch_module_types.MyData defaults = _test_fixtures_patch_module_types.MyData._fbthrift_create(
        constant_shared_ptr[_test_fixtures_patch_module_types.cMyData](
            default_inst[_test_fixtures_patch_module_types.cMyData]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyData",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="data1",
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
            name="data2",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__InnerUnion():
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="InnerUnion",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="innerOption",
            type=bytes,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyUnion():
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyUnion",
        kind=__StructType.UNION,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=1,
            name="option1",
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
            name="option2",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=3,
            name="option3",
            type=_test_fixtures_patch_module_types.InnerUnion,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__MyStruct():
    cdef _test_fixtures_patch_module_types.MyStruct defaults = _test_fixtures_patch_module_types.MyStruct._fbthrift_create(
        constant_shared_ptr[_test_fixtures_patch_module_types.cMyStruct](
            default_inst[_test_fixtures_patch_module_types.cMyStruct]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="MyStruct",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-1,
            name="boolVal",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-2,
            name="byteVal",
            type=int,
            kind=__NumberType.BYTE,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-3,
            name="i16Val",
            type=int,
            kind=__NumberType.I16,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-4,
            name="i32Val",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-5,
            name="i64Val",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-6,
            name="floatVal",
            type=float,
            kind=__NumberType.FLOAT,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-7,
            name="doubleVal",
            type=float,
            kind=__NumberType.DOUBLE,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-8,
            name="stringVal",
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
            id=-9,
            name="binaryVal",
            type=_fbthrift_iobuf.IOBuf,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-10,
            name="enumVal",
            type=_test_fixtures_patch_module_types.MyEnum,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-11,
            name="structVal",
            type=_test_fixtures_patch_module_types.MyData,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-12,
            name="unionVal",
            type=_test_fixtures_patch_module_types.MyUnion,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-13,
            name="lateStructVal",
            type=_test_fixtures_patch_module_types.LateDefStruct,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-14,
            name="optBoolVal",
            type=bool,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-15,
            name="optByteVal",
            type=int,
            kind=__NumberType.BYTE,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-16,
            name="optI16Val",
            type=int,
            kind=__NumberType.I16,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-17,
            name="optI32Val",
            type=int,
            kind=__NumberType.I32,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-18,
            name="optI64Val",
            type=int,
            kind=__NumberType.I64,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-19,
            name="optFloatVal",
            type=float,
            kind=__NumberType.FLOAT,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-20,
            name="optDoubleVal",
            type=float,
            kind=__NumberType.DOUBLE,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-21,
            name="optStringVal",
            type=str,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-22,
            name="optBinaryVal",
            type=_fbthrift_iobuf.IOBuf,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-23,
            name="optEnumVal",
            type=_test_fixtures_patch_module_types.MyEnum,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-24,
            name="optStructVal",
            type=_test_fixtures_patch_module_types.MyData,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-25,
            name="optLateStructVal",
            type=_test_fixtures_patch_module_types.LateDefStruct,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-26,
            name="optListVal",
            type=_test_fixtures_patch_module_types.List__i16,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-27,
            name="optSetVal",
            type=_test_fixtures_patch_module_types.Set__string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-28,
            name="optMapVal",
            type=_test_fixtures_patch_module_types.Map__string_string,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.OPTIONAL,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-29,
            name="listMap",
            type=_test_fixtures_patch_module_types.List__Map__string_i32,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-30,
            name="mapMap",
            type=_test_fixtures_patch_module_types.Map__string_Map__string_i32,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__LateDefStruct():
    cdef _test_fixtures_patch_module_types.LateDefStruct defaults = _test_fixtures_patch_module_types.LateDefStruct._fbthrift_create(
        constant_shared_ptr[_test_fixtures_patch_module_types.cLateDefStruct](
            default_inst[_test_fixtures_patch_module_types.cLateDefStruct]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="LateDefStruct",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    return spec
cdef __StructSpec get_reflection__Recursive():
    cdef _test_fixtures_patch_module_types.Recursive defaults = _test_fixtures_patch_module_types.Recursive._fbthrift_create(
        constant_shared_ptr[_test_fixtures_patch_module_types.cRecursive](
            default_inst[_test_fixtures_patch_module_types.cRecursive]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="Recursive",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-1,
            name="nodes",
            type=_test_fixtures_patch_module_types.Map__string_Recursive,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__Bar():
    cdef _test_fixtures_patch_module_types.Bar defaults = _test_fixtures_patch_module_types.Bar._fbthrift_create(
        constant_shared_ptr[_test_fixtures_patch_module_types.cBar](
            default_inst[_test_fixtures_patch_module_types.cBar]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="Bar",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-1,
            name="loop",
            type=_test_fixtures_patch_module_types.Loop,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
                """cpp.ref""": """1""",            },
        ),
    )
    return spec
cdef __StructSpec get_reflection__Loop():
    cdef _test_fixtures_patch_module_types.Loop defaults = _test_fixtures_patch_module_types.Loop._fbthrift_create(
        constant_shared_ptr[_test_fixtures_patch_module_types.cLoop](
            default_inst[_test_fixtures_patch_module_types.cLoop]()
        )
    )
    cdef __StructSpec spec = __StructSpec._fbthrift_create(
        name="Loop",
        kind=__StructType.STRUCT,
        annotations={
        },
    )
    spec.add_field(
        __FieldSpec._fbthrift_create(
            id=-1,
            name="bar",
            type=_test_fixtures_patch_module_types.Bar,
            kind=__NumberType.NOT_A_NUMBER,
            qualifier=__Qualifier.UNQUALIFIED,
            default=None,
            annotations={
            },
        ),
    )
    return spec
cdef __ListSpec get_reflection__List__i16():
    return __ListSpec._fbthrift_create(
        value=int,
        kind=__NumberType.I16,
    )

cdef __SetSpec get_reflection__Set__string():
    return __SetSpec._fbthrift_create(
        value=str,
        kind=__NumberType.NOT_A_NUMBER,
     )

cdef __MapSpec get_reflection__Map__string_string():
    return __MapSpec._fbthrift_create(
        key=str,
        key_kind=__NumberType.NOT_A_NUMBER,
        value=str,
        value_kind=__NumberType.NOT_A_NUMBER,
    )

cdef __MapSpec get_reflection__Map__string_i32():
    return __MapSpec._fbthrift_create(
        key=str,
        key_kind=__NumberType.NOT_A_NUMBER,
        value=int,
        value_kind=__NumberType.I32,
    )

cdef __ListSpec get_reflection__List__Map__string_i32():
    return __ListSpec._fbthrift_create(
        value=_test_fixtures_patch_module_types.Map__string_i32,
        kind=__NumberType.NOT_A_NUMBER,
    )

cdef __MapSpec get_reflection__Map__string_Map__string_i32():
    return __MapSpec._fbthrift_create(
        key=str,
        key_kind=__NumberType.NOT_A_NUMBER,
        value=_test_fixtures_patch_module_types.Map__string_i32,
        value_kind=__NumberType.NOT_A_NUMBER,
    )

cdef __MapSpec get_reflection__Map__string_Recursive():
    return __MapSpec._fbthrift_create(
        key=str,
        key_kind=__NumberType.NOT_A_NUMBER,
        value=_test_fixtures_patch_module_types.Recursive,
        value_kind=__NumberType.NOT_A_NUMBER,
    )

