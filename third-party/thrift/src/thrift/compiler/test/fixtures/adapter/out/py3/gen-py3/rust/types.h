/**
 * Autogenerated by Thrift for thrift/annotation/rust.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/rust_data.h"
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/rust_types.h"
#include "thrift/compiler/test/fixtures/adapter/gen-cpp2/rust_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::facebook::thrift::annotation::rust::Name>(
    ::facebook::thrift::annotation::rust::Name& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::rust::Name>().name_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::Copy>(
    ::facebook::thrift::annotation::rust::Copy& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::RequestContext>(
    ::facebook::thrift::annotation::rust::RequestContext& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::Arc>(
    ::facebook::thrift::annotation::rust::Arc& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::Box>(
    ::facebook::thrift::annotation::rust::Box& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::Exhaustive>(
    ::facebook::thrift::annotation::rust::Exhaustive& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::Ord>(
    ::facebook::thrift::annotation::rust::Ord& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::NewType>(
    ::facebook::thrift::annotation::rust::NewType& obj, uint16_t index) {
  switch (index) {
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::Type>(
    ::facebook::thrift::annotation::rust::Type& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::rust::Type>().name_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::Serde>(
    ::facebook::thrift::annotation::rust::Serde& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.enabled_ref().copy_from(default_inst<::facebook::thrift::annotation::rust::Serde>().enabled_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::Mod>(
    ::facebook::thrift::annotation::rust::Mod& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::rust::Mod>().name_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::Adapter>(
    ::facebook::thrift::annotation::rust::Adapter& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.name_ref().copy_from(default_inst<::facebook::thrift::annotation::rust::Adapter>().name_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::Derive>(
    ::facebook::thrift::annotation::rust::Derive& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.derives_ref().copy_from(default_inst<::facebook::thrift::annotation::rust::Derive>().derives_ref());
      return;
  }
}

template<>
inline void reset_field<::facebook::thrift::annotation::rust::ServiceExn>(
    ::facebook::thrift::annotation::rust::ServiceExn& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.anyhow_to_application_exn_ref().copy_from(default_inst<::facebook::thrift::annotation::rust::ServiceExn>().anyhow_to_application_exn_ref());
      return;
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Name>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Copy>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::RequestContext>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Arc>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Box>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Exhaustive>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Ord>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::NewType>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Type>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Serde>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Mod>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Adapter>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::Derive>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::facebook::thrift::annotation::rust::ServiceExn>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
