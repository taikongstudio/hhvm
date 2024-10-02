/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/constants/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once

#include <functional>
#include <folly/Range.h>

#include <thrift/lib/py3/enums.h>
#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_data.h"
#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/constants/gen-cpp2/module_metadata.h"
namespace thrift {
namespace py3 {



template<>
inline void reset_field<::cpp2::Internship>(
    ::cpp2::Internship& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.weeks_ref().copy_from(default_inst<::cpp2::Internship>().weeks_ref());
      return;
    case 1:
      obj.title_ref().copy_from(default_inst<::cpp2::Internship>().title_ref());
      return;
    case 2:
      obj.employer_ref().copy_from(default_inst<::cpp2::Internship>().employer_ref());
      return;
    case 3:
      obj.compensation_ref().copy_from(default_inst<::cpp2::Internship>().compensation_ref());
      return;
    case 4:
      obj.school_ref().copy_from(default_inst<::cpp2::Internship>().school_ref());
      return;
  }
}

template<>
inline void reset_field<::cpp2::Range>(
    ::cpp2::Range& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.min_ref().copy_from(default_inst<::cpp2::Range>().min_ref());
      return;
    case 1:
      obj.max_ref().copy_from(default_inst<::cpp2::Range>().max_ref());
      return;
  }
}

template<>
inline void reset_field<::cpp2::struct1>(
    ::cpp2::struct1& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.a_ref().copy_from(default_inst<::cpp2::struct1>().a_ref());
      return;
    case 1:
      obj.b_ref().copy_from(default_inst<::cpp2::struct1>().b_ref());
      return;
  }
}

template<>
inline void reset_field<::cpp2::struct2>(
    ::cpp2::struct2& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.a_ref().copy_from(default_inst<::cpp2::struct2>().a_ref());
      return;
    case 1:
      obj.b_ref().copy_from(default_inst<::cpp2::struct2>().b_ref());
      return;
    case 2:
      obj.c_ref().copy_from(default_inst<::cpp2::struct2>().c_ref());
      return;
    case 3:
      obj.d_ref().copy_from(default_inst<::cpp2::struct2>().d_ref());
      return;
  }
}

template<>
inline void reset_field<::cpp2::struct3>(
    ::cpp2::struct3& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.a_ref().copy_from(default_inst<::cpp2::struct3>().a_ref());
      return;
    case 1:
      obj.b_ref().copy_from(default_inst<::cpp2::struct3>().b_ref());
      return;
    case 2:
      obj.c_ref().copy_from(default_inst<::cpp2::struct3>().c_ref());
      return;
  }
}

template<>
inline void reset_field<::cpp2::struct4>(
    ::cpp2::struct4& obj, uint16_t index) {
  switch (index) {
    case 0:
      obj.a_ref().copy_from(default_inst<::cpp2::struct4>().a_ref());
      return;
    case 1:
      obj.b_ref().copy_from(default_inst<::cpp2::struct4>().b_ref());
      return;
    case 2:
      obj.c_ref().copy_from(default_inst<::cpp2::struct4>().c_ref());
      return;
  }
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::Internship>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::Range>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::struct1>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::struct2>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::struct3>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::struct4>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::union1>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}

template<>
inline const std::unordered_map<std::string_view, std::string_view>& PyStructTraits<
    ::cpp2::union2>::namesmap() {
  static const folly::Indestructible<NamesMap> map {
    {
    }
  };
  return *map;
}
} // namespace py3
} // namespace thrift
