/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-enum/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_data_h.h>

#include "thrift/compiler/test/fixtures/basic-enum/gen-cpp2/module_types.h"

namespace apache { namespace thrift {

template <> struct TEnumDataStorage<::test::fixtures::enumstrict::EmptyEnum> {
  using type = ::test::fixtures::enumstrict::EmptyEnum;
  static constexpr const std::size_t size = 0;
  static constexpr std::array<type, size> values = { {
  }};
  static constexpr std::array<std::string_view, size> names = { {
  }};
};

template <> struct TEnumDataStorage<::test::fixtures::enumstrict::MyEnum> {
  using type = ::test::fixtures::enumstrict::MyEnum;
  static constexpr const std::size_t size = 2;
  static constexpr std::array<type, size> values = { {
      type::ONE,
      type::TWO,
  }};
  static constexpr std::array<std::string_view, size> names = { {
      "ONE"sv,
      "TWO"sv,
  }};
};

template <> struct TEnumDataStorage<::test::fixtures::enumstrict::MyUseIntrinsicDefaultEnum> {
  using type = ::test::fixtures::enumstrict::MyUseIntrinsicDefaultEnum;
  static constexpr const std::size_t size = 3;
  static constexpr std::array<type, size> values = { {
      type::ZERO,
      type::ONE,
      type::TWO,
  }};
  static constexpr std::array<std::string_view, size> names = { {
      "ZERO"sv,
      "ONE"sv,
      "TWO"sv,
  }};
};

template <> struct TEnumDataStorage<::test::fixtures::enumstrict::MyBigEnum> {
  using type = ::test::fixtures::enumstrict::MyBigEnum;
  static constexpr const std::size_t size = 20;
  static constexpr std::array<type, size> values = { {
      type::UNKNOWN,
      type::ONE,
      type::TWO,
      type::THREE,
      type::FOUR,
      type::FIVE,
      type::SIX,
      type::SEVEN,
      type::EIGHT,
      type::NINE,
      type::TEN,
      type::ELEVEN,
      type::TWELVE,
      type::THIRTEEN,
      type::FOURTEEN,
      type::FIFTEEN,
      type::SIXTEEN,
      type::SEVENTEEN,
      type::EIGHTEEN,
      type::NINETEEN,
  }};
  static constexpr std::array<std::string_view, size> names = { {
      "UNKNOWN"sv,
      "ONE"sv,
      "TWO"sv,
      "THREE"sv,
      "FOUR"sv,
      "FIVE"sv,
      "SIX"sv,
      "SEVEN"sv,
      "EIGHT"sv,
      "NINE"sv,
      "TEN"sv,
      "ELEVEN"sv,
      "TWELVE"sv,
      "THIRTEEN"sv,
      "FOURTEEN"sv,
      "FIFTEEN"sv,
      "SIXTEEN"sv,
      "SEVENTEEN"sv,
      "EIGHTEEN"sv,
      "NINETEEN"sv,
  }};
};

template <> struct TStructDataStorage<::test::fixtures::enumstrict::MyStruct> {
  static constexpr const std::size_t fields_size = 2;
  static const std::string_view name;
  static const std::array<std::string_view, fields_size> fields_names;
  static const std::array<int16_t, fields_size> fields_ids;
  static const std::array<protocol::TType, fields_size> fields_types;

 private:
  // The following fields describe internal storage metadata, and are private to
  // prevent user logic from accessing them, but they can be inspected by
  // debuggers.
  static const std::array<std::string_view, fields_size> storage_names;
  // -1 if the field has no isset.
  static const std::array<int, fields_size> isset_indexes;
};

}} // apache::thrift
