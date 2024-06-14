/**
 * Autogenerated by Thrift for thrift/annotation/java.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/refs/gen-cpp2/java_data.h"
#include "thrift/compiler/test/fixtures/refs/gen-cpp2/java_types.h"
#include "thrift/compiler/test/fixtures/refs/gen-cpp2/java_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::facebook::thrift::annotation::java::Mutable>(
    ::facebook::thrift::annotation::java::Mutable& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::java::Annotation>(
    ::facebook::thrift::annotation::java::Annotation& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.java_annotation_ref().copy_from(default_inst<::facebook::thrift::annotation::java::Annotation>().java_annotation_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::java::BinaryString>(
    ::facebook::thrift::annotation::java::BinaryString& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::java::Adapter>(
    ::facebook::thrift::annotation::java::Adapter& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.adapterClassName_ref().copy_from(default_inst<::facebook::thrift::annotation::java::Adapter>().adapterClassName_ref());
      return;
    case 1:
      obj.typeClassName_ref().copy_from(default_inst<::facebook::thrift::annotation::java::Adapter>().typeClassName_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::java::Wrapper>(
    ::facebook::thrift::annotation::java::Wrapper& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.wrapperClassName_ref().copy_from(default_inst<::facebook::thrift::annotation::java::Wrapper>().wrapperClassName_ref());
      return;
    case 1:
      obj.typeClassName_ref().copy_from(default_inst<::facebook::thrift::annotation::java::Wrapper>().typeClassName_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::java::Recursive>(
    ::facebook::thrift::annotation::java::Recursive& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::java::FieldUseUnmangledName>(
    ::facebook::thrift::annotation::java::FieldUseUnmangledName& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::java::Mutable>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::java::Annotation>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::java::BinaryString>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::java::Adapter>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::java::Wrapper>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::java::Recursive>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::java::FieldUseUnmangledName>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
