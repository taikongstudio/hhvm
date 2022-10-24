/*
 * Copyright (c) Meta Platforms, Inc. and affiliates.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <memory>
#include <type_traits>

#include <folly/CPortability.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/type/AlignedPtr.h>

namespace apache {
namespace thrift {
namespace detail {

// boxed_value_ptr will soon be replaced with boxed_ptr (defined below).
template <typename T>
class boxed_value_ptr {
 public:
  using element_type = T;

  FOLLY_ERASE constexpr boxed_value_ptr() noexcept = default;
  FOLLY_ERASE constexpr boxed_value_ptr(const boxed_value_ptr& other)
      : ptr_(other.copy()) {}
  FOLLY_ERASE constexpr boxed_value_ptr(boxed_value_ptr&& other) noexcept =
      default;
  FOLLY_ERASE constexpr boxed_value_ptr(std::nullptr_t) : ptr_(nullptr) {}

  FOLLY_ERASE constexpr T& operator*() const noexcept { return *ptr_; }
  FOLLY_ERASE constexpr T* operator->() const noexcept { return ptr_.get(); }
  FOLLY_ERASE constexpr explicit operator bool() const noexcept {
    return bool(ptr_);
  }
  FOLLY_ERASE constexpr boxed_value_ptr& operator=(
      boxed_value_ptr&& other) noexcept = default;
  FOLLY_ERASE
  constexpr boxed_value_ptr& operator=(const boxed_value_ptr& other) {
    return (ptr_ = other.copy(), *this);
  }
  FOLLY_ERASE constexpr boxed_value_ptr& operator=(std::nullptr_t) noexcept {
    return (ptr_ = nullptr, *this);
  }

  FOLLY_ERASE constexpr void reset(T* p = nullptr) noexcept { ptr_.reset(p); }

 private:
  friend void swap(boxed_value_ptr& lhs, boxed_value_ptr& rhs) noexcept {
    using std::swap;
    swap(lhs.ptr_, rhs.ptr_);
  }

  friend constexpr bool operator==(
      const boxed_value_ptr& lhs, const boxed_value_ptr& rhs) noexcept {
    return lhs.ptr_ == rhs.ptr_;
  }
  friend constexpr bool operator==(
      std::nullptr_t, const boxed_value_ptr& rhs) noexcept {
    return nullptr == rhs.ptr_;
  }
  friend constexpr bool operator==(
      const boxed_value_ptr& lhs, std::nullptr_t) noexcept {
    return lhs.ptr_ == nullptr;
  }
  friend constexpr bool operator!=(
      const boxed_value_ptr& lhs, const boxed_value_ptr& rhs) noexcept {
    return !(lhs == rhs);
  }
  friend constexpr bool operator!=(
      const boxed_value_ptr& lhs, std::nullptr_t) noexcept {
    return lhs.ptr_ != nullptr;
  }
  friend constexpr bool operator!=(
      std::nullptr_t, const boxed_value_ptr& rhs) noexcept {
    return nullptr != rhs.ptr_;
  }

  std::unique_ptr<T> ptr_;

  std::unique_ptr<T> copy() const {
    return ptr_ == nullptr ? nullptr : std::make_unique<T>(*ptr_);
  }

 public:
  // TODO(afuller): This implicitly inplace implicit constructor
  // should be removed as it lets T intercept any constructor call, which is
  // extremely bug prone.
  template <typename... Args, typename = decltype(T(std::declval<Args>()...))>
  FOLLY_ERASE boxed_value_ptr(Args&&... args)
      : ptr_(std::make_unique<T>(std::forward<Args>(args)...)) {}

  // TODO(afuller): This implicit creation and value assignment should be
  // removed as it lets T intercept assignment, which is extremely bug prone.
  template <typename U>
  FOLLY_ERASE
      std::enable_if_t<std::is_assignable<T&, U&&>::value, boxed_value_ptr&>
      operator=(U&& value) {
    if (ptr_ == nullptr) {
      ptr_ = std::make_unique<T>();
    }
    *ptr_ = std::forward<U>(value);
    return *this;
  }

  // TODO(afuller): This is not a typical smart pointer feature, and
  // likely should only exist on value-semantic types like std::optional.
  template <typename... Args>
  FOLLY_ERASE T& emplace(Args&&... args) {
    if (ptr_) {
      *ptr_ = T(std::forward<Args>(args)...);
    } else {
      ptr_ = std::make_unique<T>(std::forward<Args>(args)...);
    }
    return *ptr_;
  }
};

// 'boxed_ptr' provides copy-on-write behavior using 'AlignedPtr' that can tag
// modes.
//
// It currently supports two modes, 'Mode::MutOwned' and 'Mode::ConstUnowned'.
// 'boxed_ptr' with 'Mode::ConstUnowned' does not own underlying value and needs
// to copy the underlying value before allowing mutation access. 'boxed_ptr'
// with 'Mode::MutOwned' owns the underlying value and can mutate the underlying
// value.
template <typename T>
class boxed_ptr {
 public:
  using element_type = T;

  FOLLY_ERASE static constexpr boxed_ptr fromStaticConstant(const T* t) {
    assert(t != nullptr);
    return boxed_ptr{t};
  }

  FOLLY_ERASE constexpr boxed_ptr() noexcept = default;
  FOLLY_ERASE constexpr boxed_ptr(boxed_ptr&& other) noexcept
      : ptr_(std::move(other.ptr_)) {
    other.ptr_.setTag(static_cast<std::uintptr_t>(Mode::ConstUnowned));
  }
  FOLLY_ERASE constexpr boxed_ptr& operator=(boxed_ptr&& other) noexcept {
    ptr_ = std::move(other.ptr_);
    other.ptr_.setTag(static_cast<std::uintptr_t>(Mode::ConstUnowned));
    return *this;
  }
  FOLLY_ERASE constexpr boxed_ptr(const boxed_ptr& other) = delete;
  FOLLY_ERASE
  constexpr boxed_ptr& operator=(const boxed_ptr& other) = delete;
  FOLLY_ERASE ~boxed_ptr() noexcept { destroy(); }

  FOLLY_ERASE constexpr explicit boxed_ptr(std::unique_ptr<T> uptr) noexcept
      : ptr_(uptr.release(), static_cast<std::uintptr_t>(Mode::MutOwned)) {}

  FOLLY_ERASE constexpr const T& operator*() const noexcept {
    return *ptr_.get();
  }

  FOLLY_ERASE constexpr const T* operator->() const noexcept {
    return ptr_.get();
  }

  FOLLY_ERASE constexpr explicit operator bool() const noexcept {
    return bool(ptr_.get());
  }

  FOLLY_ERASE constexpr T* mut() {
    assert(bool(ptr_.get()));
    if (getMode() == Mode::ConstUnowned) {
      ptr_ = copyPtr();
    }
    return ptr_.get();
  }

  FOLLY_ERASE constexpr void reset() { destroy(); }
  FOLLY_ERASE constexpr void reset(std::unique_ptr<T> p) {
    destroy();
    ptr_.set(p.release(), static_cast<std::uintptr_t>(Mode::MutOwned));
  }

  FOLLY_ERASE constexpr boxed_ptr copy() const {
    if (getMode() == Mode::ConstUnowned) {
      return fromStaticConstant(ptr_.get());
    }
    boxed_ptr ptr;
    ptr.ptr_ = copyPtr();
    return ptr;
  }

 private:
  static constexpr int kModeBits = 3;
  using aligned_pointer_type =
      type::detail::AlignedPtr<T, kModeBits, kModeBits>;

  enum Mode : std::uintptr_t {
    MutOwned = 0, // Unique ownership
    ConstUnowned = 1,
  };

  FOLLY_ERASE constexpr explicit boxed_ptr(const T* p) noexcept
      : ptr_(
            // The const-ness of the pointer will be tracked using the tag
            // Mode::ConstUnowned. The only mutable accessor method is
            // boxed_ptr<T>::mut(), which will copy *p in order to return a
            // mutable pointer.
            const_cast<T*>(p),
            static_cast<std::uintptr_t>(Mode::ConstUnowned)) {}

  friend void swap(boxed_ptr& lhs, boxed_ptr& rhs) noexcept {
    using std::swap;
    swap(lhs.ptr_, rhs.ptr_);
  }

  friend constexpr bool operator==(
      const boxed_ptr& lhs, const boxed_ptr& rhs) noexcept {
    return lhs.ptr_.get() == rhs.ptr_.get();
  }
  friend constexpr bool operator==(
      std::nullptr_t, const boxed_ptr& rhs) noexcept {
    return nullptr == rhs.ptr_.get();
  }
  friend constexpr bool operator==(
      const boxed_ptr& lhs, std::nullptr_t) noexcept {
    return lhs.ptr_.get() == nullptr;
  }
  friend constexpr bool operator!=(
      const boxed_ptr& lhs, const boxed_ptr& rhs) noexcept {
    return !(lhs == rhs);
  }
  friend constexpr bool operator!=(
      const boxed_ptr& lhs, std::nullptr_t) noexcept {
    return lhs.ptr_.get() != nullptr;
  }
  friend constexpr bool operator!=(
      std::nullptr_t, const boxed_ptr& rhs) noexcept {
    return nullptr != rhs.ptr_.get();
  }

  Mode getMode() const { return static_cast<Mode>(ptr_.getTag()); }

  void destroy() {
    if (getMode() == Mode::MutOwned) {
      delete ptr_.get();
    }
    ptr_.clear();
  }

  aligned_pointer_type copyPtr() const {
    // This leaves the tag region cleared indicating the new value is
    // Mode::MutOwned.
    aligned_pointer_type ptr =
        ptr_.get() == nullptr ? nullptr : new T(*ptr_.get());
    assert(ptr.getTag() == Mode::MutOwned);
    return ptr;
  }

  aligned_pointer_type ptr_;
};

} // namespace detail
} // namespace thrift
} // namespace apache
