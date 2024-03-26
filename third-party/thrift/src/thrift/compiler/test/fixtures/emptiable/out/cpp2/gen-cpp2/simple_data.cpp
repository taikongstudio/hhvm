/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/emptiable/src/simple.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/emptiable/gen-cpp2/simple_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

FOLLY_CLANG_DISABLE_WARNING("-Wunused-macros")

#if defined(__GNUC__) && defined(__linux__) && !FOLLY_MOBILE
// These attributes are applied to the static data members to ensure that they
// are not stripped from the compiled binary, in order to keep them available
// for use by debuggers at runtime.
//
// The "used" attribute is required to ensure the compiler always emits unused
// data.
//
// The "section" attribute is required to stop the linker from stripping used
// data. It works by forcing all of the data members (both used and unused ones)
// into the same section. As the linker strips data on a per-section basis, it
// is then unable to remove unused data without also removing used data.
// This has a similar effect to the "retain" attribute, but works with older
// toolchains.
#define THRIFT_DATA_MEMBER [[gnu::used]] [[gnu::section(".rodata.thrift.data")]]
#else
#define THRIFT_DATA_MEMBER
#endif

namespace apache {
namespace thrift {

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::MyStruct>::name = "MyStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::apache::thrift::test::MyStruct>::fields_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::apache::thrift::test::MyStruct>::fields_ids = { {
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::apache::thrift::test::MyStruct>::fields_types = { {
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::apache::thrift::test::MyStruct>::storage_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::apache::thrift::test::MyStruct>::isset_indexes = { {
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::EmptiableStruct>::name = "EmptiableStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 14> TStructDataStorage<::apache::thrift::test::EmptiableStruct>::fields_names = { {
  "bool_field"sv,
  "byte_field"sv,
  "short_field"sv,
  "int_field"sv,
  "long_field"sv,
  "float_field"sv,
  "double_field"sv,
  "string_field"sv,
  "binary_field"sv,
  "enum_field"sv,
  "list_field"sv,
  "set_field"sv,
  "map_field"sv,
  "struct_field"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 14> TStructDataStorage<::apache::thrift::test::EmptiableStruct>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 14> TStructDataStorage<::apache::thrift::test::EmptiableStruct>::fields_types = { {
  TType::T_BOOL,
  TType::T_BYTE,
  TType::T_I16,
  TType::T_I32,
  TType::T_I64,
  TType::T_FLOAT,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_I32,
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 14> TStructDataStorage<::apache::thrift::test::EmptiableStruct>::storage_names = { {
  "__fbthrift_field_bool_field"sv,
  "__fbthrift_field_byte_field"sv,
  "__fbthrift_field_short_field"sv,
  "__fbthrift_field_int_field"sv,
  "__fbthrift_field_long_field"sv,
  "__fbthrift_field_float_field"sv,
  "__fbthrift_field_double_field"sv,
  "__fbthrift_field_string_field"sv,
  "__fbthrift_field_binary_field"sv,
  "__fbthrift_field_enum_field"sv,
  "__fbthrift_field_list_field"sv,
  "__fbthrift_field_set_field"sv,
  "__fbthrift_field_map_field"sv,
  "__fbthrift_field_struct_field"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 14> TStructDataStorage<::apache::thrift::test::EmptiableStruct>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::name = "EmptiableTerseStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 14> TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::fields_names = { {
  "bool_field"sv,
  "byte_field"sv,
  "short_field"sv,
  "int_field"sv,
  "long_field"sv,
  "float_field"sv,
  "double_field"sv,
  "string_field"sv,
  "binary_field"sv,
  "enum_field"sv,
  "list_field"sv,
  "set_field"sv,
  "map_field"sv,
  "struct_field"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 14> TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 14> TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::fields_types = { {
  TType::T_BOOL,
  TType::T_BYTE,
  TType::T_I16,
  TType::T_I32,
  TType::T_I64,
  TType::T_FLOAT,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_I32,
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 14> TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::storage_names = { {
  "__fbthrift_field_bool_field"sv,
  "__fbthrift_field_byte_field"sv,
  "__fbthrift_field_short_field"sv,
  "__fbthrift_field_int_field"sv,
  "__fbthrift_field_long_field"sv,
  "__fbthrift_field_float_field"sv,
  "__fbthrift_field_double_field"sv,
  "__fbthrift_field_string_field"sv,
  "__fbthrift_field_binary_field"sv,
  "__fbthrift_field_enum_field"sv,
  "__fbthrift_field_list_field"sv,
  "__fbthrift_field_set_field"sv,
  "__fbthrift_field_map_field"sv,
  "__fbthrift_field_struct_field"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 14> TStructDataStorage<::apache::thrift::test::EmptiableTerseStruct>::isset_indexes = { {
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::name = "NotEmptiableStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 14> TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::fields_names = { {
  "bool_field"sv,
  "byte_field"sv,
  "short_field"sv,
  "int_field"sv,
  "long_field"sv,
  "float_field"sv,
  "double_field"sv,
  "string_field"sv,
  "binary_field"sv,
  "enum_field"sv,
  "list_field"sv,
  "set_field"sv,
  "map_field"sv,
  "struct_field"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 14> TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
  14,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 14> TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::fields_types = { {
  TType::T_BOOL,
  TType::T_BYTE,
  TType::T_I16,
  TType::T_I32,
  TType::T_I64,
  TType::T_FLOAT,
  TType::T_DOUBLE,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_I32,
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 14> TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::storage_names = { {
  "__fbthrift_field_bool_field"sv,
  "__fbthrift_field_byte_field"sv,
  "__fbthrift_field_short_field"sv,
  "__fbthrift_field_int_field"sv,
  "__fbthrift_field_long_field"sv,
  "__fbthrift_field_float_field"sv,
  "__fbthrift_field_double_field"sv,
  "__fbthrift_field_string_field"sv,
  "__fbthrift_field_binary_field"sv,
  "__fbthrift_field_enum_field"sv,
  "__fbthrift_field_list_field"sv,
  "__fbthrift_field_set_field"sv,
  "__fbthrift_field_map_field"sv,
  "__fbthrift_field_struct_field"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 14> TStructDataStorage<::apache::thrift::test::NotEmptiableStruct>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
  10,
  11,
  12,
  13,
}};

} // namespace thrift
} // namespace apache
