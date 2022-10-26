/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_data.h"

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

THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::Included>::fields_names = {{
  "MyIntField",
  "MyTransitiveField",
}};
THRIFT_DATA_MEMBER const std::array<int16_t, 2> TStructDataStorage<::cpp2::Included>::fields_ids = {{
  1,
  2,
}};
THRIFT_DATA_MEMBER const std::array<protocol::TType, 2> TStructDataStorage<::cpp2::Included>::fields_types = {{
  TType::T_I64,
  TType::T_STRUCT,
}};
THRIFT_DATA_MEMBER const std::array<folly::StringPiece, 2> TStructDataStorage<::cpp2::Included>::storage_names = {{
  "__fbthrift_field_MyIntField",
  "__fbthrift_field_MyTransitiveField",
}};
THRIFT_DATA_MEMBER const std::array<int, 2> TStructDataStorage<::cpp2::Included>::isset_indexes = {{
  0,
  1,
}};

} // namespace thrift
} // namespace apache
