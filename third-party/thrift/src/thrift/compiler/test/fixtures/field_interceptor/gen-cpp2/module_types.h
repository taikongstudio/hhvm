/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/field_interceptor/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/module_types_h.h>



namespace apache {
namespace thrift {
namespace ident {
struct access_field;
struct access_shared_field;
struct access_optional_shared_field;
struct access_shared_const_field;
struct access_optional_shared_const_field;
struct access_optional_boxed_field;
} // namespace ident
namespace detail {
#ifndef APACHE_THRIFT_ACCESSOR_access_field
#define APACHE_THRIFT_ACCESSOR_access_field
APACHE_THRIFT_DEFINE_ACCESSOR(access_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_access_shared_field
#define APACHE_THRIFT_ACCESSOR_access_shared_field
APACHE_THRIFT_DEFINE_ACCESSOR(access_shared_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_access_optional_shared_field
#define APACHE_THRIFT_ACCESSOR_access_optional_shared_field
APACHE_THRIFT_DEFINE_ACCESSOR(access_optional_shared_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_access_shared_const_field
#define APACHE_THRIFT_ACCESSOR_access_shared_const_field
APACHE_THRIFT_DEFINE_ACCESSOR(access_shared_const_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_access_optional_shared_const_field
#define APACHE_THRIFT_ACCESSOR_access_optional_shared_const_field
APACHE_THRIFT_DEFINE_ACCESSOR(access_optional_shared_const_field);
#endif
#ifndef APACHE_THRIFT_ACCESSOR_access_optional_boxed_field
#define APACHE_THRIFT_ACCESSOR_access_optional_boxed_field
APACHE_THRIFT_DEFINE_ACCESSOR(access_optional_boxed_field);
#endif
} // namespace detail
} // namespace thrift
} // namespace apache

// BEGIN declare_enums

// END declare_enums
// BEGIN forward_declare
namespace facebook { namespace thrift { namespace test {
class InterceptedFields;
}}} // facebook::thrift::test
// END forward_declare
namespace apache::thrift::detail::annotation {
} // namespace apache::thrift::detail::annotation

// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace facebook { namespace thrift { namespace test {
using ::apache::thrift::detail::operator!=;
using ::apache::thrift::detail::operator>;
using ::apache::thrift::detail::operator<=;
using ::apache::thrift::detail::operator>=;


class InterceptedFields final  {
 private:
  friend struct ::apache::thrift::detail::st::struct_private_access;
  template<class> friend struct ::apache::thrift::detail::invoke_reffer;

  //  used by a static_assert in the corresponding source
  static constexpr bool __fbthrift_cpp2_gen_json = false;
  static constexpr bool __fbthrift_cpp2_is_runtime_annotation = false;
  static const char* __fbthrift_thrift_uri();
  static const folly::StringPiece __fbthrift_get_field_name(::apache::thrift::FieldOrdinal ord);
  static const folly::StringPiece __fbthrift_get_class_name();
  using __fbthrift_reflection_ident_list = folly::tag_t<
    ::apache::thrift::ident::access_field,
    ::apache::thrift::ident::access_shared_field,
    ::apache::thrift::ident::access_optional_shared_field,
    ::apache::thrift::ident::access_shared_const_field,
    ::apache::thrift::ident::access_optional_shared_const_field,
    ::apache::thrift::ident::access_optional_boxed_field
  >;

  static constexpr std::int16_t __fbthrift_reflection_field_id_list[] = {0,1,2,3,4,5,6};
  using __fbthrift_reflection_type_tags = folly::tag_t<
    ::apache::thrift::type::i32_t,
    ::apache::thrift::type::i32_t,
    ::apache::thrift::type::i32_t,
    ::apache::thrift::type::i32_t,
    ::apache::thrift::type::i32_t,
    ::apache::thrift::type::i32_t
  >;

  static constexpr std::size_t __fbthrift_field_size_v = 6;

  template<class T>
  using __fbthrift_id = ::apache::thrift::type::field_id<__fbthrift_reflection_field_id_list[folly::to_underlying(T::value)]>;

  template<class T>
  using __fbthrift_type_tag = ::apache::thrift::detail::at<__fbthrift_reflection_type_tags, T::value>;

  template<class T>
  using __fbthrift_ident = ::apache::thrift::detail::at<__fbthrift_reflection_ident_list, T::value>;

  template<class T> using __fbthrift_ordinal = ::apache::thrift::type::ordinal_tag<
    ::apache::thrift::detail::getFieldOrdinal<T,
                                              __fbthrift_reflection_ident_list,
                                              __fbthrift_reflection_type_tags>(
      __fbthrift_reflection_field_id_list
    )
  >;
  void __fbthrift_clear();
  void __fbthrift_clear_terse_fields();
  bool __fbthrift_is_empty() const;

 public:
  using __fbthrift_cpp2_type = InterceptedFields;
  static constexpr bool __fbthrift_cpp2_is_union =
    false;


 public:

  InterceptedFields();

  // FragileConstructor for use in initialization lists only.
  [[deprecated("This constructor is deprecated")]]
  InterceptedFields(apache::thrift::FragileConstructor, ::std::int32_t access_field__arg, ::std::shared_ptr<::std::int32_t> access_shared_field__arg, ::std::shared_ptr<::std::int32_t> access_optional_shared_field__arg, ::std::shared_ptr<const ::std::int32_t> access_shared_const_field__arg, ::std::shared_ptr<const ::std::int32_t> access_optional_shared_const_field__arg, ::apache::thrift::detail::boxed_value_ptr<::std::int32_t> access_optional_boxed_field__arg);

  InterceptedFields(InterceptedFields&&) noexcept;

  InterceptedFields(const InterceptedFields& src);


  InterceptedFields& operator=(InterceptedFields&&) noexcept;
  InterceptedFields& operator=(const InterceptedFields& src);

  ~InterceptedFields();

 private:
  ::std::int32_t __fbthrift_field_access_field;
 private:
  ::std::shared_ptr<::std::int32_t> __fbthrift_field_access_shared_field;
 private:
  ::std::shared_ptr<::std::int32_t> __fbthrift_field_access_optional_shared_field;
 private:
  ::std::shared_ptr<const ::std::int32_t> __fbthrift_field_access_shared_const_field;
 private:
  ::std::shared_ptr<const ::std::int32_t> __fbthrift_field_access_optional_shared_const_field;
 private:
  ::apache::thrift::detail::boxed_value_ptr<::std::int32_t> __fbthrift_field_access_optional_boxed_field;
 private:
  apache::thrift::detail::isset_bitset<1, apache::thrift::detail::IssetBitsetOption::Unpacked> __isset;

 public:

  bool operator==(const InterceptedFields&) const;
  bool operator<(const InterceptedFields&) const;

  template <typename..., typename T = ::std::int32_t>
  FOLLY_NOINLINE ::apache::thrift::field_ref<const T&> access_field_ref() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 1>{*this});
    return {this->__fbthrift_field_access_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_NOINLINE ::apache::thrift::field_ref<const T&&> access_field_ref() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 1>{*this});
    return {static_cast<const T&&>(this->__fbthrift_field_access_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_NOINLINE ::apache::thrift::field_ref<T&> access_field_ref() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 1>{*this});
    return {this->__fbthrift_field_access_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_NOINLINE ::apache::thrift::field_ref<T&&> access_field_ref() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 1>{*this});
    return {static_cast<T&&>(this->__fbthrift_field_access_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_NOINLINE ::apache::thrift::field_ref<const T&> access_field() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 1>{*this});
    return {this->__fbthrift_field_access_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_NOINLINE ::apache::thrift::field_ref<const T&&> access_field() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 1>{*this});
    return {static_cast<const T&&>(this->__fbthrift_field_access_field), __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_NOINLINE ::apache::thrift::field_ref<T&> access_field() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 1>{*this});
    return {this->__fbthrift_field_access_field, __isset.at(0), __isset.bit(0)};
  }

  template <typename..., typename T = ::std::int32_t>
  FOLLY_NOINLINE ::apache::thrift::field_ref<T&&> access_field() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 1>{*this});
    return {static_cast<T&&>(this->__fbthrift_field_access_field), __isset.at(0), __isset.bit(0)};
  }
  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE T& access_shared_field_ref() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 2>{*this});
    return __fbthrift_field_access_shared_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE const T& access_shared_field_ref() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 2>{*this});
    return __fbthrift_field_access_shared_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE T&& access_shared_field_ref() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 2>{*this});
    return static_cast<T&&>(__fbthrift_field_access_shared_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE const T&& access_shared_field_ref() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 2>{*this});
    return static_cast<const T&&>(__fbthrift_field_access_shared_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE T& access_shared_field() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 2>{*this});
    return __fbthrift_field_access_shared_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE const T& access_shared_field() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 2>{*this});
    return __fbthrift_field_access_shared_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE T&& access_shared_field() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 2>{*this});
    return static_cast<T&&>(__fbthrift_field_access_shared_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE const T&& access_shared_field() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 2>{*this});
    return static_cast<const T&&>(__fbthrift_field_access_shared_field);
  }
  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE T& access_optional_shared_field_ref() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 3>{*this});
    return __fbthrift_field_access_optional_shared_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE const T& access_optional_shared_field_ref() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 3>{*this});
    return __fbthrift_field_access_optional_shared_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE T&& access_optional_shared_field_ref() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 3>{*this});
    return static_cast<T&&>(__fbthrift_field_access_optional_shared_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE const T&& access_optional_shared_field_ref() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 3>{*this});
    return static_cast<const T&&>(__fbthrift_field_access_optional_shared_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE T& access_optional_shared_field() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 3>{*this});
    return __fbthrift_field_access_optional_shared_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE const T& access_optional_shared_field() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 3>{*this});
    return __fbthrift_field_access_optional_shared_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE T&& access_optional_shared_field() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 3>{*this});
    return static_cast<T&&>(__fbthrift_field_access_optional_shared_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<::std::int32_t>>
  FOLLY_ERASE const T&& access_optional_shared_field() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 3>{*this});
    return static_cast<const T&&>(__fbthrift_field_access_optional_shared_field);
  }
  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE T& access_shared_const_field_ref() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 4>{*this});
    return __fbthrift_field_access_shared_const_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE const T& access_shared_const_field_ref() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 4>{*this});
    return __fbthrift_field_access_shared_const_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE T&& access_shared_const_field_ref() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 4>{*this});
    return static_cast<T&&>(__fbthrift_field_access_shared_const_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE const T&& access_shared_const_field_ref() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 4>{*this});
    return static_cast<const T&&>(__fbthrift_field_access_shared_const_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE T& access_shared_const_field() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 4>{*this});
    return __fbthrift_field_access_shared_const_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE const T& access_shared_const_field() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 4>{*this});
    return __fbthrift_field_access_shared_const_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE T&& access_shared_const_field() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 4>{*this});
    return static_cast<T&&>(__fbthrift_field_access_shared_const_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE const T&& access_shared_const_field() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 4>{*this});
    return static_cast<const T&&>(__fbthrift_field_access_shared_const_field);
  }
  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE T& access_optional_shared_const_field_ref() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 5>{*this});
    return __fbthrift_field_access_optional_shared_const_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE const T& access_optional_shared_const_field_ref() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 5>{*this});
    return __fbthrift_field_access_optional_shared_const_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE T&& access_optional_shared_const_field_ref() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 5>{*this});
    return static_cast<T&&>(__fbthrift_field_access_optional_shared_const_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE const T&& access_optional_shared_const_field_ref() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 5>{*this});
    return static_cast<const T&&>(__fbthrift_field_access_optional_shared_const_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE T& access_optional_shared_const_field() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 5>{*this});
    return __fbthrift_field_access_optional_shared_const_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE const T& access_optional_shared_const_field() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 5>{*this});
    return __fbthrift_field_access_optional_shared_const_field;
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE T&& access_optional_shared_const_field() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 5>{*this});
    return static_cast<T&&>(__fbthrift_field_access_optional_shared_const_field);
  }

  template <typename ..., typename T = ::std::shared_ptr<const ::std::int32_t>>
  FOLLY_ERASE const T&& access_optional_shared_const_field() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_shared_const_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 5>{*this});
    return static_cast<const T&&>(__fbthrift_field_access_optional_shared_const_field);
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&> access_optional_boxed_field_ref() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_boxed_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 6>{*this});
    return ::apache::thrift::optional_boxed_field_ref<const T&>{this->__fbthrift_field_access_optional_boxed_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&&> access_optional_boxed_field_ref() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_boxed_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 6>{*this});
    return ::apache::thrift::optional_boxed_field_ref<const T&&>{static_cast<const T&&>(this->__fbthrift_field_access_optional_boxed_field)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&> access_optional_boxed_field_ref() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_boxed_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 6>{*this});
    return ::apache::thrift::optional_boxed_field_ref<T&>{this->__fbthrift_field_access_optional_boxed_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&&> access_optional_boxed_field_ref() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_boxed_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 6>{*this});
    return ::apache::thrift::optional_boxed_field_ref<T&&>{static_cast<T&&>(this->__fbthrift_field_access_optional_boxed_field)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&> access_optional_boxed_field() const& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_boxed_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 6>{*this});
    return ::apache::thrift::optional_boxed_field_ref<const T&>{this->__fbthrift_field_access_optional_boxed_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<const T&&> access_optional_boxed_field() const&& {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_boxed_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 6>{*this});
    return ::apache::thrift::optional_boxed_field_ref<const T&&>{static_cast<const T&&>(this->__fbthrift_field_access_optional_boxed_field)};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&> access_optional_boxed_field() & {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_boxed_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 6>{*this});
    return ::apache::thrift::optional_boxed_field_ref<T&>{this->__fbthrift_field_access_optional_boxed_field};
  }

  template <typename..., typename T = ::apache::thrift::detail::boxed_value_ptr<::std::int32_t>>
  FOLLY_ERASE ::apache::thrift::optional_boxed_field_ref<T&&> access_optional_boxed_field() && {
    my::FieldInterceptor::interceptThriftFieldAccess(this->__fbthrift_field_access_optional_boxed_field, ::apache::thrift::FieldContext<std::remove_reference<decltype(*this)>::type, 6>{*this});
    return ::apache::thrift::optional_boxed_field_ref<T&&>{static_cast<T&&>(this->__fbthrift_field_access_optional_boxed_field)};
  }

  template <class Protocol_>
  unsigned long read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops<InterceptedFields>;
  friend void swap(InterceptedFields& a, InterceptedFields& b);
};

template <class Protocol_>
unsigned long InterceptedFields::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCursorPosition();
  readNoXfer(iprot);
  return iprot->getCursorPosition() - _xferStart;
}


}}} // facebook::thrift::test
