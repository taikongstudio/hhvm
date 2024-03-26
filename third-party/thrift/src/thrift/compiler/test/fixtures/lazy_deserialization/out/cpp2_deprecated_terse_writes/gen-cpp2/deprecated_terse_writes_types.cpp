/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/lazy_deserialization/src/deprecated_terse_writes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/deprecated_terse_writes_types.h"
#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/deprecated_terse_writes_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/lazy_deserialization/gen-cpp2/deprecated_terse_writes_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::TerseFoo>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::TerseFoo>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache::thrift::test {

std::string_view TerseFoo::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<TerseFoo>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view TerseFoo::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<TerseFoo>::name;
}

TerseFoo::TerseFoo(const TerseFoo&) = default;
TerseFoo& TerseFoo::operator=(const TerseFoo&) = default;
TerseFoo::TerseFoo() {
}


TerseFoo::~TerseFoo() {}

TerseFoo::TerseFoo([[maybe_unused]] TerseFoo&& other) noexcept :
    __fbthrift_field_field1(std::move(other.__fbthrift_field_field1)),
    __fbthrift_field_field2(std::move(other.__fbthrift_field_field2)),
    __fbthrift_field_field3(std::move(other.__fbthrift_field_field3)),
    __fbthrift_field_field4(std::move(other.__fbthrift_field_field4)),
    __isset(other.__isset) {
}

TerseFoo& TerseFoo::operator=([[maybe_unused]] TerseFoo&& other) noexcept {
    this->__fbthrift_field_field1 = std::move(other.__fbthrift_field_field1);
    this->__fbthrift_field_field2 = std::move(other.__fbthrift_field_field2);
    this->__fbthrift_field_field3 = std::move(other.__fbthrift_field_field3);
    this->__fbthrift_field_field4 = std::move(other.__fbthrift_field_field4);
    __isset = other.__isset;
    return *this;
}


TerseFoo::TerseFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg) :
    __fbthrift_field_field1(std::move(field1__arg)),
    __fbthrift_field_field2(std::move(field2__arg)),
    __fbthrift_field_field3(std::move(field3__arg)),
    __fbthrift_field_field4(std::move(field4__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}


void TerseFoo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field1.clear();
  this->__fbthrift_field_field2.clear();
  this->__fbthrift_field_field3.clear();
  this->__fbthrift_field_field4.clear();
  __isset = {};
}

void TerseFoo::__fbthrift_clear_terse_fields() {
}

bool TerseFoo::__fbthrift_is_empty() const {
  return !(!::apache::thrift::op::isEmpty<::apache::thrift::type::list<::apache::thrift::type::double_t>>(this->__fbthrift_field_field1)) &&
 !(!::apache::thrift::op::isEmpty<::apache::thrift::type::list<::apache::thrift::type::i32_t>>(this->__fbthrift_field_field2)) &&
 !(!::apache::thrift::op::isEmpty<::apache::thrift::type::list<::apache::thrift::type::double_t>>(this->__fbthrift_field_field3)) &&
 !(!::apache::thrift::op::isEmpty<::apache::thrift::type::list<::apache::thrift::type::i32_t>>(this->__fbthrift_field_field4));
}

bool TerseFoo::operator==([[maybe_unused]] const TerseFoo& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool TerseFoo::operator<([[maybe_unused]] const TerseFoo& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::std::vector<double>& TerseFoo::get_field1() const& {
  return __fbthrift_field_field1;
}

::std::vector<double> TerseFoo::get_field1() && {
  return std::move(__fbthrift_field_field1);
}

const ::std::vector<::std::int32_t>& TerseFoo::get_field2() const& {
  return __fbthrift_field_field2;
}

::std::vector<::std::int32_t> TerseFoo::get_field2() && {
  return std::move(__fbthrift_field_field2);
}

const ::std::vector<double>& TerseFoo::get_field3() const& {
  return __fbthrift_field_field3;
}

::std::vector<double> TerseFoo::get_field3() && {
  return std::move(__fbthrift_field_field3);
}

const ::std::vector<::std::int32_t>& TerseFoo::get_field4() const& {
  return __fbthrift_field_field4;
}

::std::vector<::std::int32_t> TerseFoo::get_field4() && {
  return std::move(__fbthrift_field_field4);
}


void swap([[maybe_unused]] TerseFoo& a, [[maybe_unused]] TerseFoo& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_field1, b.__fbthrift_field_field1);
  swap(a.__fbthrift_field_field2, b.__fbthrift_field_field2);
  swap(a.__fbthrift_field_field3, b.__fbthrift_field_field3);
  swap(a.__fbthrift_field_field4, b.__fbthrift_field_field4);
  swap(a.__isset, b.__isset);
}

template void TerseFoo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TerseFoo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TerseFoo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TerseFoo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TerseFoo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TerseFoo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TerseFoo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TerseFoo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::TerseLazyFoo>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::TerseLazyFoo>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache::thrift::test {

std::string_view TerseLazyFoo::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<TerseLazyFoo>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view TerseLazyFoo::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<TerseLazyFoo>::name;
}

TerseLazyFoo::TerseLazyFoo(const TerseLazyFoo& srcObj) :
    __fbthrift_field_field1(srcObj.__fbthrift_field_field1),
    __fbthrift_field_field2(srcObj.__fbthrift_field_field2),
    __fbthrift_field_field3(srcObj.__fbthrift_field_field3),
    __fbthrift_field_field4(srcObj.__fbthrift_field_field4),
    __isset(srcObj.__isset) {
  const auto relaxed = std::memory_order_relaxed;
  auto lock = folly::make_shared_lock(srcObj.__fbthrift_deserializationMutex_);
  __fbthrift_protocol_ = srcObj.__fbthrift_protocol_;
  {
    const auto isDeserialized = srcObj.__fbthrift_isDeserialized_.field3.load(relaxed);
    __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
    __fbthrift_serializedData_.field3 = srcObj.__fbthrift_serializedData_.field3;
  }
  {
    const auto isDeserialized = srcObj.__fbthrift_isDeserialized_.field4.load(relaxed);
    __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
    __fbthrift_serializedData_.field4 = srcObj.__fbthrift_serializedData_.field4;
  }
}

static void __fbthrift_swap(TerseLazyFoo& lhs, TerseLazyFoo& rhs) { swap(lhs, rhs); }
TerseLazyFoo& TerseLazyFoo::operator=(const TerseLazyFoo& other) {
  TerseLazyFoo tmp(other);
  __fbthrift_swap(*this, tmp);
  return *this;
}

TerseLazyFoo::TerseLazyFoo() {
}


TerseLazyFoo::~TerseLazyFoo() {}

TerseLazyFoo::TerseLazyFoo([[maybe_unused]] TerseLazyFoo&& other) noexcept :
    __fbthrift_field_field1(std::move(other.__fbthrift_field_field1)),
    __fbthrift_field_field2(std::move(other.__fbthrift_field_field2)),
    __fbthrift_field_field3(std::move(other.__fbthrift_field_field3)),
    __fbthrift_field_field4(std::move(other.__fbthrift_field_field4)),
    __isset(other.__isset),
    __fbthrift_serializedData_(std::move(other.__fbthrift_serializedData_)),
    __fbthrift_protocol_(other.__fbthrift_protocol_) {
  const auto relaxed = std::memory_order_relaxed;
  {
    const auto isDeserialized = other.__fbthrift_isDeserialized_.field3.load(relaxed);
    __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
    other.__fbthrift_isDeserialized_.field3.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
  }
  {
    const auto isDeserialized = other.__fbthrift_isDeserialized_.field4.load(relaxed);
    __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
    other.__fbthrift_isDeserialized_.field4.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
  }
}

TerseLazyFoo& TerseLazyFoo::operator=([[maybe_unused]] TerseLazyFoo&& other) noexcept {
    const auto relaxed = std::memory_order_relaxed;
    __fbthrift_protocol_ = other.__fbthrift_protocol_;
    __fbthrift_serializedData_ = std::move(other.__fbthrift_serializedData_);
    this->__fbthrift_field_field1 = std::move(other.__fbthrift_field_field1);
    this->__fbthrift_field_field2 = std::move(other.__fbthrift_field_field2);
    this->__fbthrift_field_field3 = std::move(other.__fbthrift_field_field3);
    {
      const auto isDeserialized = other.__fbthrift_isDeserialized_.field3.load(relaxed);
      __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
      other.__fbthrift_isDeserialized_.field3.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
    }
    this->__fbthrift_field_field4 = std::move(other.__fbthrift_field_field4);
    {
      const auto isDeserialized = other.__fbthrift_isDeserialized_.field4.load(relaxed);
      __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
      other.__fbthrift_isDeserialized_.field4.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
    }
    __isset = other.__isset;
    return *this;
}


TerseLazyFoo::TerseLazyFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg) :
    __fbthrift_field_field1(std::move(field1__arg)),
    __fbthrift_field_field2(std::move(field2__arg)),
    __fbthrift_field_field3(std::move(field3__arg)),
    __fbthrift_field_field4(std::move(field4__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}

const ::std::vector<double>& TerseLazyFoo::__fbthrift_read_field_field3() const {
  const auto isDeserialized = __fbthrift_isDeserialized_.field3.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field3_slow();
  }
  return __fbthrift_field_field3;
}

::std::vector<double>& TerseLazyFoo::__fbthrift_read_field_field3() {
  const auto isDeserialized = __fbthrift_isDeserialized_.field3.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field3_slow();
  } else if (isDeserialized & ::apache::thrift::detail::LazyDeserializationState::UNTAINTED) {
    __fbthrift_isDeserialized_.field3 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
  }
  return __fbthrift_field_field3;
}

void TerseLazyFoo::__fbthrift_read_field_field3_slow() const {
  auto lock = folly::make_unique_lock(__fbthrift_deserializationMutex_);
  if (__fbthrift_isDeserialized_.field3 & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED) {
    return;
  }
  switch (__fbthrift_protocol_) {
    case ::apache::thrift::protocol::T_COMPACT_PROTOCOL:
      __fbthrift_read_field_field3_impl<::apache::thrift::CompactProtocolReader>();
      break;
    case ::apache::thrift::protocol::T_BINARY_PROTOCOL:
      __fbthrift_read_field_field3_impl<::apache::thrift::BinaryProtocolReader>();
      break;
    default:
      CHECK(false) << int(__fbthrift_protocol_);
  }
  __fbthrift_serializedData_.field3 = {};
  __fbthrift_isDeserialized_.field3 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
}

const ::std::vector<::std::int32_t>& TerseLazyFoo::__fbthrift_read_field_field4() const {
  const auto isDeserialized = __fbthrift_isDeserialized_.field4.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field4_slow();
  }
  return __fbthrift_field_field4;
}

::std::vector<::std::int32_t>& TerseLazyFoo::__fbthrift_read_field_field4() {
  const auto isDeserialized = __fbthrift_isDeserialized_.field4.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field4_slow();
  } else if (isDeserialized & ::apache::thrift::detail::LazyDeserializationState::UNTAINTED) {
    __fbthrift_isDeserialized_.field4 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
  }
  return __fbthrift_field_field4;
}

void TerseLazyFoo::__fbthrift_read_field_field4_slow() const {
  auto lock = folly::make_unique_lock(__fbthrift_deserializationMutex_);
  if (__fbthrift_isDeserialized_.field4 & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED) {
    return;
  }
  switch (__fbthrift_protocol_) {
    case ::apache::thrift::protocol::T_COMPACT_PROTOCOL:
      __fbthrift_read_field_field4_impl<::apache::thrift::CompactProtocolReader>();
      break;
    case ::apache::thrift::protocol::T_BINARY_PROTOCOL:
      __fbthrift_read_field_field4_impl<::apache::thrift::BinaryProtocolReader>();
      break;
    default:
      CHECK(false) << int(__fbthrift_protocol_);
  }
  __fbthrift_serializedData_.field4 = {};
  __fbthrift_isDeserialized_.field4 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
}


void TerseLazyFoo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field1.clear();
  this->__fbthrift_field_field2.clear();
  this->__fbthrift_field_field3.clear();
  this->__fbthrift_field_field4.clear();
  __fbthrift_serializedData_ = {};
  __fbthrift_isDeserialized_.~__fbthrift_IsDeserialized();
  new (&__fbthrift_isDeserialized_) __fbthrift_IsDeserialized();
  __isset = {};
}

void TerseLazyFoo::__fbthrift_clear_terse_fields() {
}

bool TerseLazyFoo::__fbthrift_is_empty() const {
  return !(!::apache::thrift::op::isEmpty<::apache::thrift::type::list<::apache::thrift::type::double_t>>(this->__fbthrift_field_field1)) &&
 !(!::apache::thrift::op::isEmpty<::apache::thrift::type::list<::apache::thrift::type::i32_t>>(this->__fbthrift_field_field2)) &&
 !(!::apache::thrift::op::isEmpty<::apache::thrift::type::list<::apache::thrift::type::double_t>>(this->__fbthrift_field_field3)) &&
 !(!::apache::thrift::op::isEmpty<::apache::thrift::type::list<::apache::thrift::type::i32_t>>(this->__fbthrift_field_field4));
}

bool TerseLazyFoo::operator==([[maybe_unused]] const TerseLazyFoo& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool TerseLazyFoo::operator<([[maybe_unused]] const TerseLazyFoo& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::std::vector<double>& TerseLazyFoo::get_field1() const& {
  return __fbthrift_field_field1;
}

::std::vector<double> TerseLazyFoo::get_field1() && {
  return std::move(__fbthrift_field_field1);
}

const ::std::vector<::std::int32_t>& TerseLazyFoo::get_field2() const& {
  return __fbthrift_field_field2;
}

::std::vector<::std::int32_t> TerseLazyFoo::get_field2() && {
  return std::move(__fbthrift_field_field2);
}


void swap([[maybe_unused]] TerseLazyFoo& a, [[maybe_unused]] TerseLazyFoo& b) {
  using ::std::swap;
  const auto relaxed = std::memory_order_relaxed;
  swap(a.__fbthrift_protocol_, b.__fbthrift_protocol_);
  swap(a.__fbthrift_serializedData_, b.__fbthrift_serializedData_);
  swap(a.__fbthrift_field_field1, b.__fbthrift_field_field1);
  swap(a.__fbthrift_field_field2, b.__fbthrift_field_field2);
  swap(a.__fbthrift_field_field3, b.__fbthrift_field_field3);
  a.__fbthrift_isDeserialized_.field3.store(b.__fbthrift_isDeserialized_.field3.exchange(a.__fbthrift_isDeserialized_.field3.load(relaxed), relaxed), relaxed);
  swap(a.__fbthrift_field_field4, b.__fbthrift_field_field4);
  a.__fbthrift_isDeserialized_.field4.store(b.__fbthrift_isDeserialized_.field4.exchange(a.__fbthrift_isDeserialized_.field4.load(relaxed), relaxed), relaxed);
  swap(a.__isset, b.__isset);
}

template void TerseLazyFoo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TerseLazyFoo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TerseLazyFoo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TerseLazyFoo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TerseLazyFoo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TerseLazyFoo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TerseLazyFoo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TerseLazyFoo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::TerseOptionalFoo>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::TerseOptionalFoo>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache::thrift::test {

std::string_view TerseOptionalFoo::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<TerseOptionalFoo>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view TerseOptionalFoo::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<TerseOptionalFoo>::name;
}

TerseOptionalFoo::TerseOptionalFoo(const TerseOptionalFoo&) = default;
TerseOptionalFoo& TerseOptionalFoo::operator=(const TerseOptionalFoo&) = default;
TerseOptionalFoo::TerseOptionalFoo() {
}


TerseOptionalFoo::~TerseOptionalFoo() {}

TerseOptionalFoo::TerseOptionalFoo([[maybe_unused]] TerseOptionalFoo&& other) noexcept :
    __fbthrift_field_field1(std::move(other.__fbthrift_field_field1)),
    __fbthrift_field_field2(std::move(other.__fbthrift_field_field2)),
    __fbthrift_field_field3(std::move(other.__fbthrift_field_field3)),
    __fbthrift_field_field4(std::move(other.__fbthrift_field_field4)),
    __isset(other.__isset) {
}

TerseOptionalFoo& TerseOptionalFoo::operator=([[maybe_unused]] TerseOptionalFoo&& other) noexcept {
    this->__fbthrift_field_field1 = std::move(other.__fbthrift_field_field1);
    this->__fbthrift_field_field2 = std::move(other.__fbthrift_field_field2);
    this->__fbthrift_field_field3 = std::move(other.__fbthrift_field_field3);
    this->__fbthrift_field_field4 = std::move(other.__fbthrift_field_field4);
    __isset = other.__isset;
    return *this;
}


TerseOptionalFoo::TerseOptionalFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg) :
    __fbthrift_field_field1(std::move(field1__arg)),
    __fbthrift_field_field2(std::move(field2__arg)),
    __fbthrift_field_field3(std::move(field3__arg)),
    __fbthrift_field_field4(std::move(field4__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}


void TerseOptionalFoo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field1.clear();
  this->__fbthrift_field_field2.clear();
  this->__fbthrift_field_field3.clear();
  this->__fbthrift_field_field4.clear();
  __isset = {};
}

void TerseOptionalFoo::__fbthrift_clear_terse_fields() {
}

bool TerseOptionalFoo::__fbthrift_is_empty() const {
  return !(this->__isset.get(0)) &&
 !(this->__isset.get(1)) &&
 !(this->__isset.get(2)) &&
 !(this->__isset.get(3));
}

bool TerseOptionalFoo::operator==([[maybe_unused]] const TerseOptionalFoo& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool TerseOptionalFoo::operator<([[maybe_unused]] const TerseOptionalFoo& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::std::vector<double>* TerseOptionalFoo::get_field1() const& {
  return field1_ref().has_value() ? std::addressof(__fbthrift_field_field1) : nullptr;
}

::std::vector<double>* TerseOptionalFoo::get_field1() & {
  return field1_ref().has_value() ? std::addressof(__fbthrift_field_field1) : nullptr;
}

const ::std::vector<::std::int32_t>* TerseOptionalFoo::get_field2() const& {
  return field2_ref().has_value() ? std::addressof(__fbthrift_field_field2) : nullptr;
}

::std::vector<::std::int32_t>* TerseOptionalFoo::get_field2() & {
  return field2_ref().has_value() ? std::addressof(__fbthrift_field_field2) : nullptr;
}

const ::std::vector<double>* TerseOptionalFoo::get_field3() const& {
  return field3_ref().has_value() ? std::addressof(__fbthrift_field_field3) : nullptr;
}

::std::vector<double>* TerseOptionalFoo::get_field3() & {
  return field3_ref().has_value() ? std::addressof(__fbthrift_field_field3) : nullptr;
}

const ::std::vector<::std::int32_t>* TerseOptionalFoo::get_field4() const& {
  return field4_ref().has_value() ? std::addressof(__fbthrift_field_field4) : nullptr;
}

::std::vector<::std::int32_t>* TerseOptionalFoo::get_field4() & {
  return field4_ref().has_value() ? std::addressof(__fbthrift_field_field4) : nullptr;
}


void swap([[maybe_unused]] TerseOptionalFoo& a, [[maybe_unused]] TerseOptionalFoo& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_field1, b.__fbthrift_field_field1);
  swap(a.__fbthrift_field_field2, b.__fbthrift_field_field2);
  swap(a.__fbthrift_field_field3, b.__fbthrift_field_field3);
  swap(a.__fbthrift_field_field4, b.__fbthrift_field_field4);
  swap(a.__isset, b.__isset);
}

template void TerseOptionalFoo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TerseOptionalFoo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TerseOptionalFoo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TerseOptionalFoo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TerseOptionalFoo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TerseOptionalFoo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TerseOptionalFoo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TerseOptionalFoo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // apache::thrift::test

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::apache::thrift::test::TerseOptionalLazyFoo>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::apache::thrift::test::TerseOptionalLazyFoo>;
  static const st::translate_field_name_table table{
      data::fields_size,
      data::fields_names.data(),
      data::fields_ids.data(),
      data::fields_types.data()};
  st::translate_field_name(_fname, fid, _ftype, table);
}

} // namespace detail
} // namespace thrift
} // namespace apache

namespace apache::thrift::test {

std::string_view TerseOptionalLazyFoo::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<TerseOptionalLazyFoo>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view TerseOptionalLazyFoo::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<TerseOptionalLazyFoo>::name;
}

TerseOptionalLazyFoo::TerseOptionalLazyFoo(const TerseOptionalLazyFoo& srcObj) :
    __fbthrift_field_field1(srcObj.__fbthrift_field_field1),
    __fbthrift_field_field2(srcObj.__fbthrift_field_field2),
    __fbthrift_field_field3(srcObj.__fbthrift_field_field3),
    __fbthrift_field_field4(srcObj.__fbthrift_field_field4),
    __isset(srcObj.__isset) {
  const auto relaxed = std::memory_order_relaxed;
  auto lock = folly::make_shared_lock(srcObj.__fbthrift_deserializationMutex_);
  __fbthrift_protocol_ = srcObj.__fbthrift_protocol_;
  {
    const auto isDeserialized = srcObj.__fbthrift_isDeserialized_.field3.load(relaxed);
    __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
    __fbthrift_serializedData_.field3 = srcObj.__fbthrift_serializedData_.field3;
  }
  {
    const auto isDeserialized = srcObj.__fbthrift_isDeserialized_.field4.load(relaxed);
    __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
    __fbthrift_serializedData_.field4 = srcObj.__fbthrift_serializedData_.field4;
  }
}

static void __fbthrift_swap(TerseOptionalLazyFoo& lhs, TerseOptionalLazyFoo& rhs) { swap(lhs, rhs); }
TerseOptionalLazyFoo& TerseOptionalLazyFoo::operator=(const TerseOptionalLazyFoo& other) {
  TerseOptionalLazyFoo tmp(other);
  __fbthrift_swap(*this, tmp);
  return *this;
}

TerseOptionalLazyFoo::TerseOptionalLazyFoo() {
}


TerseOptionalLazyFoo::~TerseOptionalLazyFoo() {}

TerseOptionalLazyFoo::TerseOptionalLazyFoo([[maybe_unused]] TerseOptionalLazyFoo&& other) noexcept :
    __fbthrift_field_field1(std::move(other.__fbthrift_field_field1)),
    __fbthrift_field_field2(std::move(other.__fbthrift_field_field2)),
    __fbthrift_field_field3(std::move(other.__fbthrift_field_field3)),
    __fbthrift_field_field4(std::move(other.__fbthrift_field_field4)),
    __isset(other.__isset),
    __fbthrift_serializedData_(std::move(other.__fbthrift_serializedData_)),
    __fbthrift_protocol_(other.__fbthrift_protocol_) {
  const auto relaxed = std::memory_order_relaxed;
  {
    const auto isDeserialized = other.__fbthrift_isDeserialized_.field3.load(relaxed);
    __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
    other.__fbthrift_isDeserialized_.field3.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
  }
  {
    const auto isDeserialized = other.__fbthrift_isDeserialized_.field4.load(relaxed);
    __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
    other.__fbthrift_isDeserialized_.field4.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
  }
}

TerseOptionalLazyFoo& TerseOptionalLazyFoo::operator=([[maybe_unused]] TerseOptionalLazyFoo&& other) noexcept {
    const auto relaxed = std::memory_order_relaxed;
    __fbthrift_protocol_ = other.__fbthrift_protocol_;
    __fbthrift_serializedData_ = std::move(other.__fbthrift_serializedData_);
    this->__fbthrift_field_field1 = std::move(other.__fbthrift_field_field1);
    this->__fbthrift_field_field2 = std::move(other.__fbthrift_field_field2);
    this->__fbthrift_field_field3 = std::move(other.__fbthrift_field_field3);
    {
      const auto isDeserialized = other.__fbthrift_isDeserialized_.field3.load(relaxed);
      __fbthrift_isDeserialized_.field3.store(isDeserialized, relaxed);
      other.__fbthrift_isDeserialized_.field3.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
    }
    this->__fbthrift_field_field4 = std::move(other.__fbthrift_field_field4);
    {
      const auto isDeserialized = other.__fbthrift_isDeserialized_.field4.load(relaxed);
      __fbthrift_isDeserialized_.field4.store(isDeserialized, relaxed);
      other.__fbthrift_isDeserialized_.field4.store(isDeserialized | ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED, relaxed);
    }
    __isset = other.__isset;
    return *this;
}


TerseOptionalLazyFoo::TerseOptionalLazyFoo(apache::thrift::FragileConstructor, ::std::vector<double> field1__arg, ::std::vector<::std::int32_t> field2__arg, ::std::vector<double> field3__arg, ::std::vector<::std::int32_t> field4__arg) :
    __fbthrift_field_field1(std::move(field1__arg)),
    __fbthrift_field_field2(std::move(field2__arg)),
    __fbthrift_field_field3(std::move(field3__arg)),
    __fbthrift_field_field4(std::move(field4__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
}

const ::std::vector<double>& TerseOptionalLazyFoo::__fbthrift_read_field_field3() const {
  const auto isDeserialized = __fbthrift_isDeserialized_.field3.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field3_slow();
  }
  return __fbthrift_field_field3;
}

::std::vector<double>& TerseOptionalLazyFoo::__fbthrift_read_field_field3() {
  const auto isDeserialized = __fbthrift_isDeserialized_.field3.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field3_slow();
  } else if (isDeserialized & ::apache::thrift::detail::LazyDeserializationState::UNTAINTED) {
    __fbthrift_isDeserialized_.field3 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
  }
  return __fbthrift_field_field3;
}

void TerseOptionalLazyFoo::__fbthrift_read_field_field3_slow() const {
  auto lock = folly::make_unique_lock(__fbthrift_deserializationMutex_);
  if (__fbthrift_isDeserialized_.field3 & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED) {
    return;
  }
  switch (__fbthrift_protocol_) {
    case ::apache::thrift::protocol::T_COMPACT_PROTOCOL:
      __fbthrift_read_field_field3_impl<::apache::thrift::CompactProtocolReader>();
      break;
    case ::apache::thrift::protocol::T_BINARY_PROTOCOL:
      __fbthrift_read_field_field3_impl<::apache::thrift::BinaryProtocolReader>();
      break;
    default:
      CHECK(false) << int(__fbthrift_protocol_);
  }
  __fbthrift_serializedData_.field3 = {};
  __fbthrift_isDeserialized_.field3 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
}

const ::std::vector<::std::int32_t>& TerseOptionalLazyFoo::__fbthrift_read_field_field4() const {
  const auto isDeserialized = __fbthrift_isDeserialized_.field4.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field4_slow();
  }
  return __fbthrift_field_field4;
}

::std::vector<::std::int32_t>& TerseOptionalLazyFoo::__fbthrift_read_field_field4() {
  const auto isDeserialized = __fbthrift_isDeserialized_.field4.load(std::memory_order_relaxed);
  if (!(isDeserialized & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED)) {
    __fbthrift_read_field_field4_slow();
  } else if (isDeserialized & ::apache::thrift::detail::LazyDeserializationState::UNTAINTED) {
    __fbthrift_isDeserialized_.field4 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
  }
  return __fbthrift_field_field4;
}

void TerseOptionalLazyFoo::__fbthrift_read_field_field4_slow() const {
  auto lock = folly::make_unique_lock(__fbthrift_deserializationMutex_);
  if (__fbthrift_isDeserialized_.field4 & ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED) {
    return;
  }
  switch (__fbthrift_protocol_) {
    case ::apache::thrift::protocol::T_COMPACT_PROTOCOL:
      __fbthrift_read_field_field4_impl<::apache::thrift::CompactProtocolReader>();
      break;
    case ::apache::thrift::protocol::T_BINARY_PROTOCOL:
      __fbthrift_read_field_field4_impl<::apache::thrift::BinaryProtocolReader>();
      break;
    default:
      CHECK(false) << int(__fbthrift_protocol_);
  }
  __fbthrift_serializedData_.field4 = {};
  __fbthrift_isDeserialized_.field4 = ::apache::thrift::detail::LazyDeserializationState::DESERIALIZED;
}


void TerseOptionalLazyFoo::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_field1.clear();
  this->__fbthrift_field_field2.clear();
  this->__fbthrift_field_field3.clear();
  this->__fbthrift_field_field4.clear();
  __fbthrift_serializedData_ = {};
  __fbthrift_isDeserialized_.~__fbthrift_IsDeserialized();
  new (&__fbthrift_isDeserialized_) __fbthrift_IsDeserialized();
  __isset = {};
}

void TerseOptionalLazyFoo::__fbthrift_clear_terse_fields() {
}

bool TerseOptionalLazyFoo::__fbthrift_is_empty() const {
  return !(this->__isset.get(0)) &&
 !(this->__isset.get(1)) &&
 !(this->__isset.get(2)) &&
 !(this->__isset.get(3));
}

bool TerseOptionalLazyFoo::operator==([[maybe_unused]] const TerseOptionalLazyFoo& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool TerseOptionalLazyFoo::operator<([[maybe_unused]] const TerseOptionalLazyFoo& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::std::vector<double>* TerseOptionalLazyFoo::get_field1() const& {
  return field1_ref().has_value() ? std::addressof(__fbthrift_field_field1) : nullptr;
}

::std::vector<double>* TerseOptionalLazyFoo::get_field1() & {
  return field1_ref().has_value() ? std::addressof(__fbthrift_field_field1) : nullptr;
}

const ::std::vector<::std::int32_t>* TerseOptionalLazyFoo::get_field2() const& {
  return field2_ref().has_value() ? std::addressof(__fbthrift_field_field2) : nullptr;
}

::std::vector<::std::int32_t>* TerseOptionalLazyFoo::get_field2() & {
  return field2_ref().has_value() ? std::addressof(__fbthrift_field_field2) : nullptr;
}


void swap([[maybe_unused]] TerseOptionalLazyFoo& a, [[maybe_unused]] TerseOptionalLazyFoo& b) {
  using ::std::swap;
  const auto relaxed = std::memory_order_relaxed;
  swap(a.__fbthrift_protocol_, b.__fbthrift_protocol_);
  swap(a.__fbthrift_serializedData_, b.__fbthrift_serializedData_);
  swap(a.__fbthrift_field_field1, b.__fbthrift_field_field1);
  swap(a.__fbthrift_field_field2, b.__fbthrift_field_field2);
  swap(a.__fbthrift_field_field3, b.__fbthrift_field_field3);
  a.__fbthrift_isDeserialized_.field3.store(b.__fbthrift_isDeserialized_.field3.exchange(a.__fbthrift_isDeserialized_.field3.load(relaxed), relaxed), relaxed);
  swap(a.__fbthrift_field_field4, b.__fbthrift_field_field4);
  a.__fbthrift_isDeserialized_.field4.store(b.__fbthrift_isDeserialized_.field4.exchange(a.__fbthrift_isDeserialized_.field4.load(relaxed), relaxed), relaxed);
  swap(a.__isset, b.__isset);
}

template void TerseOptionalLazyFoo::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t TerseOptionalLazyFoo::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t TerseOptionalLazyFoo::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t TerseOptionalLazyFoo::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void TerseOptionalLazyFoo::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t TerseOptionalLazyFoo::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t TerseOptionalLazyFoo::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t TerseOptionalLazyFoo::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // apache::thrift::test

namespace apache::thrift::test { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // apache::thrift::test
namespace apache::thrift::detail::annotation {
}
