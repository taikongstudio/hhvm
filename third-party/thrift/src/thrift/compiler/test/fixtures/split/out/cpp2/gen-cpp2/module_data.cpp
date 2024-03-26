/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/split/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/split/gen-cpp2/module_data.h"

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

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyStruct>::name = "MyStruct";
THRIFT_DATA_MEMBER const std::array<std::string_view, 7> TStructDataStorage<::cpp2::MyStruct>::fields_names = { {
  "MyIntField"sv,
  "MyStringField"sv,
  "MyDataField"sv,
  "myEnum"sv,
  "oneway"sv,
  "readonly"sv,
  "idempotent"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 7> TStructDataStorage<::cpp2::MyStruct>::fields_ids = { {
  1,
  2,
  3,
  4,
  5,
  6,
  7,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 7> TStructDataStorage<::cpp2::MyStruct>::fields_types = { {
  TType::T_I64,
  TType::T_STRING,
  TType::T_STRUCT,
  TType::T_I32,
  TType::T_BOOL,
  TType::T_BOOL,
  TType::T_BOOL,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 7> TStructDataStorage<::cpp2::MyStruct>::storage_names = { {
  "__fbthrift_field_MyIntField"sv,
  "__fbthrift_field_MyStringField"sv,
  "__fbthrift_field_MyDataField"sv,
  "__fbthrift_field_myEnum"sv,
  "__fbthrift_field_oneway"sv,
  "__fbthrift_field_readonly"sv,
  "__fbthrift_field_idempotent"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 7> TStructDataStorage<::cpp2::MyStruct>::isset_indexes = { {
  0,
  1,
  2,
  3,
  4,
  5,
  6,
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyDataItem>::name = "MyDataItem";
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::MyDataItem>::fields_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 0> TStructDataStorage<::cpp2::MyDataItem>::fields_ids = { {
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 0> TStructDataStorage<::cpp2::MyDataItem>::fields_types = { {
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 0> TStructDataStorage<::cpp2::MyDataItem>::storage_names = { {
}};
THRIFT_DATA_MEMBER const std::array<int, 0> TStructDataStorage<::cpp2::MyDataItem>::isset_indexes = { {
}};

THRIFT_DATA_MEMBER const std::string_view TStructDataStorage<::cpp2::MyUnion>::name = "MyUnion";
THRIFT_DATA_MEMBER const std::array<std::string_view, 3> TStructDataStorage<::cpp2::MyUnion>::fields_names = { {
  "myEnum"sv,
  "myStruct"sv,
  "myDataItem"sv,
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 3> TStructDataStorage<::cpp2::MyUnion>::fields_ids = { {
  1,
  2,
  3,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 3> TStructDataStorage<::cpp2::MyUnion>::fields_types = { {
  TType::T_I32,
  TType::T_STRUCT,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<std::string_view, 3> TStructDataStorage<::cpp2::MyUnion>::storage_names = { {
  "myEnum"sv,
  "myStruct"sv,
  "myDataItem"sv,
}};
THRIFT_DATA_MEMBER const std::array<int, 3> TStructDataStorage<::cpp2::MyUnion>::isset_indexes = { {
  0,
  1,
  2,
}};

} // namespace thrift
} // namespace apache
