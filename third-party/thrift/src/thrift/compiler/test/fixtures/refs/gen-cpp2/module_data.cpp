/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/refs/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/refs/gen-cpp2/module_data.h"

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

THRIFT_DATA_MEMBER const std::array<::cpp2::MyEnum, 2> TEnumDataStorage<::cpp2::MyEnum>::values = {{
  type::Zero,
  type::One,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TEnumDataStorage<::cpp2::MyEnum>::names = {{
  "Zero",
  "One",
}};

THRIFT_DATA_MEMBER const std::array<::cpp2::TypedEnum, 2> TEnumDataStorage<::cpp2::TypedEnum>::values = {{
  type::VAL1,
  type::VAL2,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TEnumDataStorage<::cpp2::TypedEnum>::names = {{
  "VAL1",
  "VAL2",
}};

THRIFT_DATA_MEMBER const std::array<::cpp2::MyUnion::Type, 2> TEnumDataStorage<::cpp2::MyUnion::Type>::values = {{
  type::anInteger,
  type::aString,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TEnumDataStorage<::cpp2::MyUnion::Type>::names = {{
  "anInteger",
  "aString",
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::MyUnion>::fields_names = {{
  "anInteger",
  "aString",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::MyUnion>::fields_ids = {{
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::MyUnion>::fields_types = {{
  TType::T_I32,
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::MyUnion>::storage_names = {{
  "anInteger",
  "aString",
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::MyUnion>::isset_indexes = {{
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 9> TStructDataStorage<::cpp2::MyField>::fields_names = {{
  "opt_value",
  "value",
  "req_value",
  "opt_enum_value",
  "enum_value",
  "req_enum_value",
  "opt_str_value",
  "str_value",
  "req_str_value",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 9> TStructDataStorage<::cpp2::MyField>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
  7,
  8,
  9,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 9> TStructDataStorage<::cpp2::MyField>::fields_types = {{
  TType::T_I64,
  TType::T_I64,
  TType::T_I64,
  TType::T_I32,
  TType::T_I32,
  TType::T_I32,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 9> TStructDataStorage<::cpp2::MyField>::storage_names = {{
  "__fbthrift_field_opt_value",
  "__fbthrift_field_value",
  "__fbthrift_field_req_value",
  "__fbthrift_field_opt_enum_value",
  "__fbthrift_field_enum_value",
  "__fbthrift_field_req_enum_value",
  "__fbthrift_field_opt_str_value",
  "__fbthrift_field_str_value",
  "__fbthrift_field_req_str_value",
}};
THRIFT_DATA_MEMBER const std::array<int, 9> TStructDataStorage<::cpp2::MyField>::isset_indexes = {{
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

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::MyStruct>::fields_names = {{
  "opt_ref",
  "ref",
  "req_ref",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::MyStruct>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::MyStruct>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::MyStruct>::storage_names = {{
  "__fbthrift_field_opt_ref",
  "__fbthrift_field_ref",
  "__fbthrift_field_req_ref",
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::MyStruct>::isset_indexes = {{
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithUnion>::fields_names = {{
  "u",
  "aDouble",
  "f",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::StructWithUnion>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::StructWithUnion>::fields_types = {{
  TType::T_STRUCT,
  TType::T_DOUBLE,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithUnion>::storage_names = {{
  "__fbthrift_field_u",
  "__fbthrift_field_aDouble",
  "__fbthrift_field_f",
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::StructWithUnion>::isset_indexes = {{
  -1,
  -1,
  0,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::RecursiveStruct>::fields_names = {{
  "mes",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::RecursiveStruct>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::RecursiveStruct>::fields_types = {{
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::RecursiveStruct>::storage_names = {{
  "__fbthrift_field_mes",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::RecursiveStruct>::isset_indexes = {{
  0,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 6> TStructDataStorage<::cpp2::StructWithContainers>::fields_names = {{
  "list_ref",
  "set_ref",
  "map_ref",
  "list_ref_unique",
  "set_ref_shared",
  "list_ref_shared_const",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 6> TStructDataStorage<::cpp2::StructWithContainers>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
  6,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 6> TStructDataStorage<::cpp2::StructWithContainers>::fields_types = {{
  TType::T_LIST,
  TType::T_SET,
  TType::T_MAP,
  TType::T_LIST,
  TType::T_SET,
  TType::T_LIST,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 6> TStructDataStorage<::cpp2::StructWithContainers>::storage_names = {{
  "__fbthrift_field_list_ref",
  "__fbthrift_field_set_ref",
  "__fbthrift_field_map_ref",
  "__fbthrift_field_list_ref_unique",
  "__fbthrift_field_set_ref_shared",
  "__fbthrift_field_list_ref_shared_const",
}};
THRIFT_DATA_MEMBER const std::array<int, 6> TStructDataStorage<::cpp2::StructWithContainers>::isset_indexes = {{
  -1,
  -1,
  -1,
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithSharedConst>::fields_names = {{
  "opt_shared_const",
  "shared_const",
  "req_shared_const",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::StructWithSharedConst>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::StructWithSharedConst>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithSharedConst>::storage_names = {{
  "__fbthrift_field_opt_shared_const",
  "__fbthrift_field_shared_const",
  "__fbthrift_field_req_shared_const",
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::StructWithSharedConst>::isset_indexes = {{
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 0> TStructDataStorage<::cpp2::Empty>::fields_names = {{
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::cpp2::Empty>::fields_ids = {{
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::Empty>::fields_types = {{
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 0> TStructDataStorage<::cpp2::Empty>::storage_names = {{
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::cpp2::Empty>::isset_indexes = {{
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithRef>::fields_names = {{
  "def_field",
  "opt_field",
  "req_field",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::StructWithRef>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::StructWithRef>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithRef>::storage_names = {{
  "__fbthrift_field_def_field",
  "__fbthrift_field_opt_field",
  "__fbthrift_field_req_field",
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::StructWithRef>::isset_indexes = {{
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithBox>::fields_names = {{
  "a",
  "b",
  "c",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::StructWithBox>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::StructWithBox>::fields_types = {{
  TType::T_STRING,
  TType::T_LIST,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithBox>::storage_names = {{
  "__fbthrift_field_a",
  "__fbthrift_field_b",
  "__fbthrift_field_c",
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::StructWithBox>::isset_indexes = {{
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithNonOptionalBox>::fields_names = {{
  "a",
  "b",
  "c",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::StructWithNonOptionalBox>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::StructWithNonOptionalBox>::fields_types = {{
  TType::T_STRING,
  TType::T_LIST,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithNonOptionalBox>::storage_names = {{
  "__fbthrift_field_a",
  "__fbthrift_field_b",
  "__fbthrift_field_c",
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::StructWithNonOptionalBox>::isset_indexes = {{
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::StructWithInternBox>::fields_names = {{
  "field1",
  "field2",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::StructWithInternBox>::fields_ids = {{
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::StructWithInternBox>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::StructWithInternBox>::storage_names = {{
  "__fbthrift_field_field1",
  "__fbthrift_field_field2",
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::StructWithInternBox>::isset_indexes = {{
  0,
  1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithRefTypeUnique>::fields_names = {{
  "def_field",
  "opt_field",
  "req_field",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::StructWithRefTypeUnique>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::StructWithRefTypeUnique>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithRefTypeUnique>::storage_names = {{
  "__fbthrift_field_def_field",
  "__fbthrift_field_opt_field",
  "__fbthrift_field_req_field",
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::StructWithRefTypeUnique>::isset_indexes = {{
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithRefTypeShared>::fields_names = {{
  "def_field",
  "opt_field",
  "req_field",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::StructWithRefTypeShared>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::StructWithRefTypeShared>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithRefTypeShared>::storage_names = {{
  "__fbthrift_field_def_field",
  "__fbthrift_field_opt_field",
  "__fbthrift_field_req_field",
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::StructWithRefTypeShared>::isset_indexes = {{
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::fields_names = {{
  "def_field",
  "opt_field",
  "req_field",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::fields_ids = {{
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::fields_types = {{
  TType::T_STRUCT,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 3> TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::storage_names = {{
  "__fbthrift_field_def_field",
  "__fbthrift_field_opt_field",
  "__fbthrift_field_req_field",
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::StructWithRefTypeSharedConst>::isset_indexes = {{
  -1,
  -1,
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::fields_names = {{
  "def_field",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 1> TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::fields_ids = {{
  1,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 1> TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::fields_types = {{
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 1> TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::storage_names = {{
  "__fbthrift_field_def_field",
}};
THRIFT_DATA_MEMBER const std::array<int, 1> TStructDataStorage<::cpp2::StructWithRefAndAnnotCppNoexceptMoveCtor>::isset_indexes = {{
  -1,
}};

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 5> TStructDataStorage<::cpp2::StructWithString>::fields_names = {{
  "def_unique_string_ref",
  "def_shared_string_ref",
  "def_shared_string_const_ref",
  "unique_string_ref",
  "shared_string_ref",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 5> TStructDataStorage<::cpp2::StructWithString>::fields_ids = {{
  1,
  2,
  3,
  4,
  5,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 5> TStructDataStorage<::cpp2::StructWithString>::fields_types = {{
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
  TType::T_STRING,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 5> TStructDataStorage<::cpp2::StructWithString>::storage_names = {{
  "__fbthrift_field_def_unique_string_ref",
  "__fbthrift_field_def_shared_string_ref",
  "__fbthrift_field_def_shared_string_const_ref",
  "__fbthrift_field_unique_string_ref",
  "__fbthrift_field_shared_string_ref",
}};
THRIFT_DATA_MEMBER const std::array<int, 5> TStructDataStorage<::cpp2::StructWithString>::isset_indexes = {{
  -1,
  -1,
  -1,
  -1,
  -1,
}};

} // namespace thrift
} // namespace apache
