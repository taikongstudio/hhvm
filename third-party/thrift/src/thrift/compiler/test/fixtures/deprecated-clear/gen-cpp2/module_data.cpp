/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/deprecated-clear/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/deprecated-clear/gen-cpp2/module_data.h"

#include <thrift/lib/cpp2/gen/module_data_cpp.h>

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

THRIFT_DATA_MEMBER const std::array<::apache::thrift::test::MyEnum, 2> TEnumDataStorage<::apache::thrift::test::MyEnum>::values = {{
  type::ME0,
  type::ME1,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TEnumDataStorage<::apache::thrift::test::MyEnum>::names = {{
  "ME0",
  "ME1",
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 13> TStructDataStorage<::apache::thrift::test::StructWithDefaultStruct>::fields_names = {{
  "bool_field",
  "byte_field",
  "short_field",
  "int_field",
  "long_field",
  "float_field",
  "double_field",
  "string_field",
  "binary_field",
  "enum_field",
  "list_field",
  "set_field",
  "map_field",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 13> TStructDataStorage<::apache::thrift::test::StructWithDefaultStruct>::fields_ids = {{
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
THRIFT_DATA_MEMBER const std::array<protocol::TType, 13> TStructDataStorage<::apache::thrift::test::StructWithDefaultStruct>::fields_types = {{
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
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 13> TStructDataStorage<::apache::thrift::test::StructWithDefaultStruct>::storage_names = {{
  "__fbthrift_field_bool_field",
  "__fbthrift_field_byte_field",
  "__fbthrift_field_short_field",
  "__fbthrift_field_int_field",
  "__fbthrift_field_long_field",
  "__fbthrift_field_float_field",
  "__fbthrift_field_double_field",
  "__fbthrift_field_string_field",
  "__fbthrift_field_binary_field",
  "__fbthrift_field_enum_field",
  "__fbthrift_field_list_field",
  "__fbthrift_field_set_field",
  "__fbthrift_field_map_field",
}};
THRIFT_DATA_MEMBER const std::array<int, 13> TStructDataStorage<::apache::thrift::test::StructWithDefaultStruct>::isset_indexes = {{
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
}};

} // namespace thrift
} // namespace apache
