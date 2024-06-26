
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT
 *  @generated
 *
 */

#pragma once

#include <thrift/lib/python/capi/constructor.h>
#include <thrift/lib/python/capi/extractor.h>

#include <thrift/compiler/test/fixtures/stream/gen-cpp2/module_types.h>

namespace apache {
namespace thrift {
namespace python {
namespace capi {
template <>
struct Extractor<::cpp2::FooStreamEx>
    : public BaseExtractor<::cpp2::FooStreamEx> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::cpp2::FooStreamEx> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooStreamEx>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooStreamEx>> {
  ExtractorResult<::cpp2::FooStreamEx> operator()(PyObject* obj);
};

template <>
struct Constructor<::cpp2::FooStreamEx>
    : public BaseConstructor<::cpp2::FooStreamEx> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::cpp2::FooStreamEx& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooStreamEx>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooStreamEx>> {
  PyObject* operator()(const ::cpp2::FooStreamEx& val);
};

template <>
struct Extractor<::cpp2::FooEx>
    : public BaseExtractor<::cpp2::FooEx> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::cpp2::FooEx> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooEx>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooEx>> {
  ExtractorResult<::cpp2::FooEx> operator()(PyObject* obj);
};

template <>
struct Constructor<::cpp2::FooEx>
    : public BaseConstructor<::cpp2::FooEx> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::cpp2::FooEx& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooEx>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooEx>> {
  PyObject* operator()(const ::cpp2::FooEx& val);
};

template <>
struct Extractor<::cpp2::FooEx2>
    : public BaseExtractor<::cpp2::FooEx2> {
  static const bool kUsingMarshal = true;
  ExtractorResult<::cpp2::FooEx2> operator()(PyObject* obj);
  int typeCheck(PyObject* obj);
};

template <>
struct Extractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooEx2>>
    : public BaseExtractor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooEx2>> {
  ExtractorResult<::cpp2::FooEx2> operator()(PyObject* obj);
};

template <>
struct Constructor<::cpp2::FooEx2>
    : public BaseConstructor<::cpp2::FooEx2> {
  static const bool kUsingMarshal = true;
  PyObject* operator()(const ::cpp2::FooEx2& val);
};

template <>
struct Constructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooEx2>>
    : public BaseConstructor<::apache::thrift::python::capi::ComposedStruct<
        ::cpp2::FooEx2>> {
  PyObject* operator()(const ::cpp2::FooEx2& val);
};

} // namespace capi
} // namespace python
} // namespace thrift
} // namespace apache
