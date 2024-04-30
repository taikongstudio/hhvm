#
# Autogenerated by Thrift
#
# DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
#  @generated
#
cdef class MyStruct_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _test_fixtures_basic_module_types.MyStruct

    def __iter__(self):
        yield "MyIntField", self.MyIntField
        yield "MyStringField", self.MyStringField
        yield "MyDataField", self.MyDataField
        yield "myEnum", self.myEnum
        yield "oneway", self.oneway
        yield "readonly", self.readonly
        yield "idempotent", self.idempotent
        yield "floatSet", self.floatSet
        yield "no_hack_codegen_field", self.no_hack_codegen_field

cdef class MyDataItem_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _test_fixtures_basic_module_types.MyDataItem

    def __iter__(self):
        pass

cdef class MyUnion_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _test_fixtures_basic_module_types.MyUnion

    def __iter__(self):
        yield "myEnum", self.myEnum
        yield "myStruct", self.myStruct
        yield "myDataItem", self.myDataItem
        yield "floatSet", self.floatSet

cdef class ReservedKeyword_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _test_fixtures_basic_module_types.ReservedKeyword

    def __iter__(self):
        yield "reserved_field", self.reserved_field

cdef class UnionToBeRenamed_Builder(thrift.py3.builder.StructBuilder):
    _struct_type = _test_fixtures_basic_module_types.UnionToBeRenamed

    def __iter__(self):
        yield "reserved_field", self.reserved_field

