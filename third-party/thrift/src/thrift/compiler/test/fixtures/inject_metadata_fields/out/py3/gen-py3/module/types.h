/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/inject_metadata_fields/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/inject_metadata_fields/gen-cpp2/module_data.h"
#include "thrift/compiler/test/fixtures/inject_metadata_fields/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/inject_metadata_fields/gen-cpp2/module_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::cpp2::Fields>(
    ::cpp2::Fields& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.injected_field_ref().copy_from(default_inst<::cpp2::Fields>().injected_field_ref());
      return;
  }
}

template<>
inline void reset_field<::cpp2::FieldsInjectedToEmptyStruct>(
    ::cpp2::FieldsInjectedToEmptyStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.injected_field_ref().copy_from(default_inst<::cpp2::FieldsInjectedToEmptyStruct>().injected_field_ref());
      return;
  }
}

template<>
inline void reset_field<::cpp2::FieldsInjectedToStruct>(
    ::cpp2::FieldsInjectedToStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.string_field_ref().copy_from(default_inst<::cpp2::FieldsInjectedToStruct>().string_field_ref());
      return;
    case 1:
      obj.injected_field_ref().copy_from(default_inst<::cpp2::FieldsInjectedToStruct>().injected_field_ref());
      return;
  }
}

template<>
inline void reset_field<::cpp2::FieldsInjectedWithIncludedStruct>(
    ::cpp2::FieldsInjectedWithIncludedStruct& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.string_field_ref().copy_from(default_inst<::cpp2::FieldsInjectedWithIncludedStruct>().string_field_ref());
      return;
    case 1:
      obj.injected_field_ref().copy_from(default_inst<::cpp2::FieldsInjectedWithIncludedStruct>().injected_field_ref());
      return;
    case 2:
      obj.injected_structured_annotation_field_ref().copy_from(default_inst<::cpp2::FieldsInjectedWithIncludedStruct>().injected_structured_annotation_field_ref());
      return;
    case 3:
      obj.injected_unstructured_annotation_field_ref().copy_from(default_inst<::cpp2::FieldsInjectedWithIncludedStruct>().injected_unstructured_annotation_field_ref());
      return;
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::Fields>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::FieldsInjectedToEmptyStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::FieldsInjectedToStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::FieldsInjectedWithIncludedStruct>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
