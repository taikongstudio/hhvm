/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/includes/src/includes.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.h"
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/includes_data.h"


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::cpp2::Included>::translateFieldName(
    folly::StringPiece _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::cpp2::Included>;
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

namespace cpp2 {

const folly::StringPiece Included::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<Included>::fields_names[folly::to_underlying(ord) - 1];
}
const folly::StringPiece Included::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<Included>::name;
}


Included::Included(apache::thrift::FragileConstructor, ::std::int64_t MyIntField__arg, ::cpp2::Foo MyTransitiveField__arg) :
    __fbthrift_field_MyIntField(std::move(MyIntField__arg)),
    __fbthrift_field_MyTransitiveField(std::move(MyTransitiveField__arg)) {
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
}


void Included::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_MyIntField = ::std::int64_t();
  ::apache::thrift::clear(this->__fbthrift_field_MyTransitiveField);
  __isset = {};
}

void Included::__fbthrift_clear_terse_fields() {
}

bool Included::__fbthrift_is_empty() const {
  return false;
}

bool Included::operator==(FOLLY_MAYBE_UNUSED const Included& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool Included::operator<(FOLLY_MAYBE_UNUSED const Included& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::cpp2::Foo& Included::get_MyTransitiveField() const& {
  return __fbthrift_field_MyTransitiveField;
}

::cpp2::Foo Included::get_MyTransitiveField() && {
  return std::move(__fbthrift_field_MyTransitiveField);
}


void swap(FOLLY_MAYBE_UNUSED Included& a, FOLLY_MAYBE_UNUSED Included& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_MyIntField, b.__fbthrift_field_MyIntField);
  swap(a.__fbthrift_field_MyTransitiveField, b.__fbthrift_field_MyTransitiveField);
  swap(a.__isset, b.__isset);
}

template void Included::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t Included::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t Included::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t Included::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void Included::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t Included::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t Included::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t Included::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        Included,
        ::apache::thrift::type_class::structure,
        ::cpp2::Foo>,
    "inconsistent use of json option");

} // cpp2

namespace cpp2 { namespace {
FOLLY_MAYBE_UNUSED FOLLY_ERASE void validateAdapters() {
}
}} // cpp2
namespace apache::thrift::detail::annotation {
}
