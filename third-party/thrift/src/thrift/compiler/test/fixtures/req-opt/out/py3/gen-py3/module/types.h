/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/req-opt/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/req-opt/gen-cpp2/module_data.h"
#include "thrift/compiler/test/fixtures/req-opt/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/req-opt/gen-cpp2/module_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::cpp2::Foo>(
    ::cpp2::Foo& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.myInteger_ref().copy_from(default_inst<::cpp2::Foo>().myInteger_ref());
      return;
    case 1:
      obj.myString_ref().copy_from(default_inst<::cpp2::Foo>().myString_ref());
      return;
    case 2:
      obj.myBools_ref().copy_from(default_inst<::cpp2::Foo>().myBools_ref());
      return;
    case 3:
      obj.myNumbers_ref().copy_from(default_inst<::cpp2::Foo>().myNumbers_ref());
      return;
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::Foo>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
