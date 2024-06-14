/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/namespace_from_package_without_module_name/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#if __has_include(<thrift/compiler/test/fixtures/namespace_from_package_without_module_name/gen-cpp2/TestService.h>)
#include <thrift/compiler/test/fixtures/namespace_from_package_without_module_name/gen-cpp2/TestService.h>
#else
#include <thrift/compiler/test/fixtures/namespace_from_package_without_module_name/gen-cpp2/module_handlers.h>
#endif
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace test {
namespace namespace_from_package_without_module_name {

class TestServiceWrapper : virtual public TestServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit TestServiceWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_init(apache::thrift::HandlerCallbackPtr<int64_t> callback
        , int64_t int1
    ) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> TestServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace test
} // namespace namespace_from_package_without_module_name
