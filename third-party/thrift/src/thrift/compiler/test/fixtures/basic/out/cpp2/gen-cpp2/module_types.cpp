/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"
#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.tcc"

#include <thrift/lib/cpp2/gen/module_types_cpp.h>

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_data.h"


namespace apache { namespace thrift {

folly::Range<::test::fixtures::basic::MyEnum const*> const TEnumTraits<::test::fixtures::basic::MyEnum>::values = folly::range(TEnumDataStorage<::test::fixtures::basic::MyEnum>::values);
folly::Range<std::string_view const*> const TEnumTraits<::test::fixtures::basic::MyEnum>::names = folly::range(TEnumDataStorage<::test::fixtures::basic::MyEnum>::names);

bool TEnumTraits<::test::fixtures::basic::MyEnum>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::test::fixtures::basic::MyEnum>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache { namespace thrift {

folly::Range<::test::fixtures::basic::HackEnum const*> const TEnumTraits<::test::fixtures::basic::HackEnum>::values = folly::range(TEnumDataStorage<::test::fixtures::basic::HackEnum>::values);
folly::Range<std::string_view const*> const TEnumTraits<::test::fixtures::basic::HackEnum>::names = folly::range(TEnumDataStorage<::test::fixtures::basic::HackEnum>::names);

bool TEnumTraits<::test::fixtures::basic::HackEnum>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::test::fixtures::basic::HackEnum>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}

}} // apache::thrift


namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::basic::MyStruct>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::test::fixtures::basic::MyStruct>;
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

namespace test::fixtures::basic {

const char* MyStruct::__fbthrift_thrift_uri() {
  return "test.dev/fixtures/basic/MyStruct";
}

std::string_view MyStruct::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyStruct>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view MyStruct::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyStruct>::name;
}

MyStruct::MyStruct(const MyStruct&) = default;
MyStruct& MyStruct::operator=(const MyStruct&) = default;
MyStruct::MyStruct() :
      __fbthrift_field_MyIntField(),
      __fbthrift_field_myEnum(),
      __fbthrift_field_oneway(),
      __fbthrift_field_readonly(),
      __fbthrift_field_idempotent() {
}


MyStruct::~MyStruct() {}

MyStruct::MyStruct([[maybe_unused]] MyStruct&& other) noexcept :
    __fbthrift_field_MyIntField(std::move(other.__fbthrift_field_MyIntField)),
    __fbthrift_field_MyStringField(std::move(other.__fbthrift_field_MyStringField)),
    __fbthrift_field_MyDataField(std::move(other.__fbthrift_field_MyDataField)),
    __fbthrift_field_myEnum(std::move(other.__fbthrift_field_myEnum)),
    __fbthrift_field_oneway(std::move(other.__fbthrift_field_oneway)),
    __fbthrift_field_readonly(std::move(other.__fbthrift_field_readonly)),
    __fbthrift_field_idempotent(std::move(other.__fbthrift_field_idempotent)),
    __fbthrift_field_floatSet(std::move(other.__fbthrift_field_floatSet)),
    __fbthrift_field_no_hack_codegen_field(std::move(other.__fbthrift_field_no_hack_codegen_field)),
    __isset(other.__isset) {
}

MyStruct& MyStruct::operator=([[maybe_unused]] MyStruct&& other) noexcept {
    this->__fbthrift_field_MyIntField = std::move(other.__fbthrift_field_MyIntField);
    this->__fbthrift_field_MyStringField = std::move(other.__fbthrift_field_MyStringField);
    this->__fbthrift_field_MyDataField = std::move(other.__fbthrift_field_MyDataField);
    this->__fbthrift_field_myEnum = std::move(other.__fbthrift_field_myEnum);
    this->__fbthrift_field_oneway = std::move(other.__fbthrift_field_oneway);
    this->__fbthrift_field_readonly = std::move(other.__fbthrift_field_readonly);
    this->__fbthrift_field_idempotent = std::move(other.__fbthrift_field_idempotent);
    this->__fbthrift_field_floatSet = std::move(other.__fbthrift_field_floatSet);
    this->__fbthrift_field_no_hack_codegen_field = std::move(other.__fbthrift_field_no_hack_codegen_field);
    __isset = other.__isset;
    return *this;
}


MyStruct::MyStruct(apache::thrift::FragileConstructor, ::std::int64_t MyIntField__arg, ::std::string MyStringField__arg, ::test::fixtures::basic::MyDataItem MyDataField__arg, ::test::fixtures::basic::MyEnum myEnum__arg, bool oneway__arg, bool readonly__arg, bool idempotent__arg, ::std::set<float> floatSet__arg, ::std::string no_hack_codegen_field__arg) :
    __fbthrift_field_MyIntField(std::move(MyIntField__arg)),
    __fbthrift_field_MyStringField(std::move(MyStringField__arg)),
    __fbthrift_field_MyDataField(std::move(MyDataField__arg)),
    __fbthrift_field_myEnum(std::move(myEnum__arg)),
    __fbthrift_field_oneway(std::move(oneway__arg)),
    __fbthrift_field_readonly(std::move(readonly__arg)),
    __fbthrift_field_idempotent(std::move(idempotent__arg)),
    __fbthrift_field_floatSet(std::move(floatSet__arg)),
    __fbthrift_field_no_hack_codegen_field(std::move(no_hack_codegen_field__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
  __isset.set(folly::index_constant<1>(), true);
  __isset.set(folly::index_constant<2>(), true);
  __isset.set(folly::index_constant<3>(), true);
  __isset.set(folly::index_constant<4>(), true);
  __isset.set(folly::index_constant<5>(), true);
  __isset.set(folly::index_constant<6>(), true);
  __isset.set(folly::index_constant<7>(), true);
  __isset.set(folly::index_constant<8>(), true);
}


void MyStruct::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_MyIntField = ::std::int64_t();
  this->__fbthrift_field_MyStringField = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  this->__fbthrift_field_myEnum = ::test::fixtures::basic::MyEnum();
  this->__fbthrift_field_oneway = bool();
  this->__fbthrift_field_readonly = bool();
  this->__fbthrift_field_idempotent = bool();
  this->__fbthrift_field_floatSet.clear();
  this->__fbthrift_field_no_hack_codegen_field = apache::thrift::StringTraits<std::string>::fromStringLiteral("");
  __isset = {};
}

void MyStruct::__fbthrift_clear_terse_fields() {
}

bool MyStruct::__fbthrift_is_empty() const {
  return false;
}

bool MyStruct::operator==([[maybe_unused]] const MyStruct& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool MyStruct::operator<([[maybe_unused]] const MyStruct& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}

const ::test::fixtures::basic::MyDataItem& MyStruct::get_MyDataField() const& {
  return __fbthrift_field_MyDataField;
}

::test::fixtures::basic::MyDataItem MyStruct::get_MyDataField() && {
  return std::move(__fbthrift_field_MyDataField);
}

const ::std::set<float>& MyStruct::get_floatSet() const& {
  return __fbthrift_field_floatSet;
}

::std::set<float> MyStruct::get_floatSet() && {
  return std::move(__fbthrift_field_floatSet);
}


void swap([[maybe_unused]] MyStruct& a, [[maybe_unused]] MyStruct& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_MyIntField, b.__fbthrift_field_MyIntField);
  swap(a.__fbthrift_field_MyStringField, b.__fbthrift_field_MyStringField);
  swap(a.__fbthrift_field_MyDataField, b.__fbthrift_field_MyDataField);
  swap(a.__fbthrift_field_myEnum, b.__fbthrift_field_myEnum);
  swap(a.__fbthrift_field_oneway, b.__fbthrift_field_oneway);
  swap(a.__fbthrift_field_readonly, b.__fbthrift_field_readonly);
  swap(a.__fbthrift_field_idempotent, b.__fbthrift_field_idempotent);
  swap(a.__fbthrift_field_floatSet, b.__fbthrift_field_floatSet);
  swap(a.__fbthrift_field_no_hack_codegen_field, b.__fbthrift_field_no_hack_codegen_field);
  swap(a.__isset, b.__isset);
}

template void MyStruct::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyStruct::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyStruct,
        ::apache::thrift::type_class::structure,
        ::test::fixtures::basic::MyDataItem>,
    "inconsistent use of json option");

} // test::fixtures::basic

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::basic::MyDataItem>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::test::fixtures::basic::MyDataItem>;
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

namespace test::fixtures::basic {

const char* MyDataItem::__fbthrift_thrift_uri() {
  return "test.dev/fixtures/basic/MyDataItem";
}

std::string_view MyDataItem::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyDataItem>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view MyDataItem::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyDataItem>::name;
}


MyDataItem::MyDataItem(apache::thrift::FragileConstructor) {}


void MyDataItem::__fbthrift_clear() {
  // clear all fields
}

void MyDataItem::__fbthrift_clear_terse_fields() {
}

bool MyDataItem::__fbthrift_is_empty() const {
  return true;
}

bool MyDataItem::operator==([[maybe_unused]] const MyDataItem& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool MyDataItem::operator<([[maybe_unused]] const MyDataItem& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] MyDataItem& a, [[maybe_unused]] MyDataItem& b) {
  using ::std::swap;
}

template void MyDataItem::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyDataItem::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyDataItem::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyDataItem::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyDataItem::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyDataItem::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyDataItem::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // test::fixtures::basic

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::basic::MyUnion>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::test::fixtures::basic::MyUnion>;
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

namespace apache { namespace thrift {

folly::Range<::test::fixtures::basic::MyUnion::Type const*> const TEnumTraits<::test::fixtures::basic::MyUnion::Type>::values = folly::range(TEnumDataStorage<::test::fixtures::basic::MyUnion::Type>::values);
folly::Range<std::string_view const*> const TEnumTraits<::test::fixtures::basic::MyUnion::Type>::names = folly::range(TEnumDataStorage<::test::fixtures::basic::MyUnion::Type>::names);

bool TEnumTraits<::test::fixtures::basic::MyUnion::Type>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::test::fixtures::basic::MyUnion::Type>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace test::fixtures::basic {

const char* MyUnion::__fbthrift_thrift_uri() {
  return "test.dev/fixtures/basic/MyUnion";
}

std::string_view MyUnion::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<MyUnion>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view MyUnion::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<MyUnion>::name;
}

void MyUnion::__fbthrift_destruct() {
  switch(getType()) {
    case Type::__EMPTY__:
      break;
    case Type::myEnum:
      ::std::destroy_at(::std::addressof(value_.myEnum));
      break;
    case Type::myStruct:
      ::std::destroy_at(::std::addressof(value_.myStruct));
      break;
    case Type::myDataItem:
      ::std::destroy_at(::std::addressof(value_.myDataItem));
      break;
    case Type::floatSet:
      ::std::destroy_at(::std::addressof(value_.floatSet));
      break;
    default:
      assert(false);
      break;
  }
}

void MyUnion::__fbthrift_clear() {
  __fbthrift_destruct();
  type_ = folly::to_underlying(Type::__EMPTY__);
}

  MyUnion::~MyUnion() {
    __fbthrift_destruct();
  }

bool MyUnion::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}
  MyUnion::MyUnion(const MyUnion& rhs)
      : type_(folly::to_underlying(Type::__EMPTY__)) {
    switch (rhs.getType()) {
      case Type::__EMPTY__:
        return;
      case Type::myEnum:
        set_myEnum(rhs.value_.myEnum);
        break;
      case Type::myStruct:
        set_myStruct(rhs.value_.myStruct);
        break;
      case Type::myDataItem:
        set_myDataItem(rhs.value_.myDataItem);
        break;
      case Type::floatSet:
        set_floatSet(rhs.value_.floatSet);
        break;
      default:
        assert(false);
    }
  }

    MyUnion&MyUnion::operator=(const MyUnion& rhs) {
    if (this == &rhs) { return *this; }
    switch (rhs.getType()) {
      case Type::__EMPTY__:
        __fbthrift_clear();
        return *this;
      case Type::myEnum:
        set_myEnum(rhs.value_.myEnum);
        break;
      case Type::myStruct:
        set_myStruct(rhs.value_.myStruct);
        break;
      case Type::myDataItem:
        set_myDataItem(rhs.value_.myDataItem);
        break;
      case Type::floatSet:
        set_floatSet(rhs.value_.floatSet);
        break;
      default:
        __fbthrift_clear();
        assert(false);
    }
    return *this;
  }


bool MyUnion::operator==(const MyUnion& rhs) const {
  return ::apache::thrift::op::detail::UnionEquality{}(*this, rhs);
}

bool MyUnion::operator<([[maybe_unused]] const MyUnion& rhs) const {
  return ::apache::thrift::op::detail::UnionLessThan{}(*this, rhs);
}

void swap(MyUnion& a, MyUnion& b) {
  MyUnion temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void MyUnion::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void MyUnion::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyUnion::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyUnion::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyUnion::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyUnion,
        ::apache::thrift::type_class::structure,
        ::test::fixtures::basic::MyStruct>,
    "inconsistent use of json option");
static_assert(
    ::apache::thrift::detail::st::gen_check_json<
        MyUnion,
        ::apache::thrift::type_class::structure,
        ::test::fixtures::basic::MyDataItem>,
    "inconsistent use of json option");

} // test::fixtures::basic

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::basic::ReservedKeyword>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::test::fixtures::basic::ReservedKeyword>;
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

namespace test::fixtures::basic {

const char* ReservedKeyword::__fbthrift_thrift_uri() {
  return "test.dev/fixtures/basic/ReservedKeyword";
}

std::string_view ReservedKeyword::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<ReservedKeyword>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view ReservedKeyword::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<ReservedKeyword>::name;
}


ReservedKeyword::ReservedKeyword(apache::thrift::FragileConstructor, ::std::int32_t reserved_field__arg) :
    __fbthrift_field_reserved_field(std::move(reserved_field__arg)) { 
  __isset.set(folly::index_constant<0>(), true);
}


void ReservedKeyword::__fbthrift_clear() {
  // clear all fields
  this->__fbthrift_field_reserved_field = ::std::int32_t();
  __isset = {};
}

void ReservedKeyword::__fbthrift_clear_terse_fields() {
}

bool ReservedKeyword::__fbthrift_is_empty() const {
  return false;
}

bool ReservedKeyword::operator==([[maybe_unused]] const ReservedKeyword& rhs) const {
  return ::apache::thrift::op::detail::StructEquality{}(*this, rhs);
}

bool ReservedKeyword::operator<([[maybe_unused]] const ReservedKeyword& rhs) const {
  return ::apache::thrift::op::detail::StructLessThan{}(*this, rhs);
}


void swap([[maybe_unused]] ReservedKeyword& a, [[maybe_unused]] ReservedKeyword& b) {
  using ::std::swap;
  swap(a.__fbthrift_field_reserved_field, b.__fbthrift_field_reserved_field);
  swap(a.__isset, b.__isset);
}

template void ReservedKeyword::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t ReservedKeyword::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t ReservedKeyword::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t ReservedKeyword::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void ReservedKeyword::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t ReservedKeyword::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t ReservedKeyword::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t ReservedKeyword::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // test::fixtures::basic

namespace apache {
namespace thrift {
namespace detail {

void TccStructTraits<::test::fixtures::basic::UnionToBeRenamed>::translateFieldName(
    std::string_view _fname,
    int16_t& fid,
    apache::thrift::protocol::TType& _ftype) noexcept {
  using data = apache::thrift::TStructDataStorage<::test::fixtures::basic::UnionToBeRenamed>;
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

namespace apache { namespace thrift {

folly::Range<::test::fixtures::basic::UnionToBeRenamed::Type const*> const TEnumTraits<::test::fixtures::basic::UnionToBeRenamed::Type>::values = folly::range(TEnumDataStorage<::test::fixtures::basic::UnionToBeRenamed::Type>::values);
folly::Range<std::string_view const*> const TEnumTraits<::test::fixtures::basic::UnionToBeRenamed::Type>::names = folly::range(TEnumDataStorage<::test::fixtures::basic::UnionToBeRenamed::Type>::names);

bool TEnumTraits<::test::fixtures::basic::UnionToBeRenamed::Type>::findName(type value, std::string_view* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_name(value, out);
}

bool TEnumTraits<::test::fixtures::basic::UnionToBeRenamed::Type>::findValue(std::string_view name, type* out) noexcept {
  return ::apache::thrift::detail::st::enum_find_value(name, out);
}
}} // apache::thrift
namespace test::fixtures::basic {

const char* UnionToBeRenamed::__fbthrift_thrift_uri() {
  return "test.dev/fixtures/basic/UnionToBeRenamed";
}

std::string_view UnionToBeRenamed::__fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord) {
  if (ord == ::apache::thrift::FieldOrdinal{0}) { return {}; }
  return apache::thrift::TStructDataStorage<UnionToBeRenamed>::fields_names[folly::to_underlying(ord) - 1];
}
std::string_view UnionToBeRenamed::__fbthrift_get_class_name() {
  return apache::thrift::TStructDataStorage<UnionToBeRenamed>::name;
}

void UnionToBeRenamed::__fbthrift_destruct() {
  switch(getType()) {
    case Type::__EMPTY__:
      break;
    case Type::reserved_field:
      ::std::destroy_at(::std::addressof(value_.reserved_field));
      break;
    default:
      assert(false);
      break;
  }
}

void UnionToBeRenamed::__fbthrift_clear() {
  __fbthrift_destruct();
  type_ = folly::to_underlying(Type::__EMPTY__);
}


bool UnionToBeRenamed::__fbthrift_is_empty() const {
  return getType() == Type::__EMPTY__;
}
  UnionToBeRenamed::UnionToBeRenamed(const UnionToBeRenamed& rhs)
      : type_(folly::to_underlying(Type::__EMPTY__)) {
    switch (rhs.getType()) {
      case Type::__EMPTY__:
        return;
      case Type::reserved_field:
        set_reserved_field(rhs.value_.reserved_field);
        break;
      default:
        assert(false);
    }
  }

    UnionToBeRenamed&UnionToBeRenamed::operator=(const UnionToBeRenamed& rhs) {
    if (this == &rhs) { return *this; }
    switch (rhs.getType()) {
      case Type::__EMPTY__:
        __fbthrift_clear();
        return *this;
      case Type::reserved_field:
        set_reserved_field(rhs.value_.reserved_field);
        break;
      default:
        __fbthrift_clear();
        assert(false);
    }
    return *this;
  }


bool UnionToBeRenamed::operator==(const UnionToBeRenamed& rhs) const {
  return ::apache::thrift::op::detail::UnionEquality{}(*this, rhs);
}

bool UnionToBeRenamed::operator<([[maybe_unused]] const UnionToBeRenamed& rhs) const {
  return ::apache::thrift::op::detail::UnionLessThan{}(*this, rhs);
}

void swap(UnionToBeRenamed& a, UnionToBeRenamed& b) {
  UnionToBeRenamed temp(std::move(a));
  a = std::move(b);
  b = std::move(temp);
}

template void UnionToBeRenamed::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
template uint32_t UnionToBeRenamed::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t UnionToBeRenamed::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t UnionToBeRenamed::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template void UnionToBeRenamed::readNoXfer<>(apache::thrift::CompactProtocolReader*);
template uint32_t UnionToBeRenamed::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t UnionToBeRenamed::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t UnionToBeRenamed::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;


} // test::fixtures::basic

namespace test::fixtures::basic { namespace {
[[maybe_unused]] FOLLY_ERASE void validateAdapters() {
}
}} // test::fixtures::basic
namespace apache::thrift::detail::annotation {
}
