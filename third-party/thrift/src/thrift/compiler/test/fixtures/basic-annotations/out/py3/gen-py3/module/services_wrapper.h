/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#if __has_include(<thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyService.h>)
#include <thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyService.h>
#else
#include <thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_handlers.h>
#endif
#if __has_include(<thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParent.h>)
#include <thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioParent.h>
#else
#include <thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_handlers.h>
#endif
#if __has_include(<thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioChild.h>)
#include <thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/MyServicePrioChild.h>
#else
#include <thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_handlers.h>
#endif
#if __has_include(<thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/BadService.h>)
#include <thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/BadService.h>
#else
#include <thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_handlers.h>
#endif
#if __has_include(<thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/FooBarBazService.h>)
#include <thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/FooBarBazService.h>
#else
#include <thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_handlers.h>
#endif
#include <folly/python/futures.h>
#include <Python.h>

#include <memory>

namespace cpp2 {

class MyServiceWrapper : virtual public MyServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit MyServiceWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_ping(apache::thrift::HandlerCallbackPtr<void> callback) override;
    void async_tm_getRandomData(apache::thrift::HandlerCallbackPtr<std::unique_ptr<std::string>> callback) override;
    void async_tm_hasDataById(apache::thrift::HandlerCallbackPtr<bool> callback
        , int64_t id
    ) override;
    void async_tm_getDataById(apache::thrift::HandlerCallbackPtr<std::unique_ptr<std::string>> callback
        , int64_t id
    ) override;
    void async_tm_putDataById(apache::thrift::HandlerCallbackPtr<void> callback
        , int64_t id
        , std::unique_ptr<std::string> data
    ) override;
    void async_tm_lobDataById(apache::thrift::HandlerCallbackBase::Ptr callback
        , int64_t id
        , std::unique_ptr<std::string> dataStr
    ) override;
    void async_tm_cppDoNothing(apache::thrift::HandlerCallbackPtr<void> callback) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> MyServiceInterface(PyObject *if_object, folly::Executor *exc);


class MyServicePrioParentWrapper : virtual public MyServicePrioParentSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit MyServicePrioParentWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_ping(apache::thrift::HandlerCallbackPtr<void> callback) override;
    void async_tm_pong(apache::thrift::HandlerCallbackPtr<void> callback) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> MyServicePrioParentInterface(PyObject *if_object, folly::Executor *exc);


class MyServicePrioChildWrapper : public ::cpp2::MyServicePrioParentWrapper, virtual public MyServicePrioChildSvIf {
  public:
    explicit MyServicePrioChildWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_pang(apache::thrift::HandlerCallbackPtr<void> callback) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> MyServicePrioChildInterface(PyObject *if_object, folly::Executor *exc);


class BadServiceWrapper : virtual public GoodServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit BadServiceWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_bar(apache::thrift::HandlerCallbackPtr<int32_t> callback) override;
    std::unique_ptr<BadInteractionIf> createBadInteraction() override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> BadServiceInterface(PyObject *if_object, folly::Executor *exc);


class FooBarBazServiceWrapper : virtual public FooBarBazServiceSvIf {
  protected:
    PyObject *if_object;
    folly::Executor *executor;
  public:
    explicit FooBarBazServiceWrapper(PyObject *if_object, folly::Executor *exc);
    void async_tm_foo(apache::thrift::HandlerCallbackPtr<void> callback) override;
    void async_tm_bar(apache::thrift::HandlerCallbackPtr<void> callback) override;
    void async_tm_baz(apache::thrift::HandlerCallbackPtr<void> callback) override;
folly::SemiFuture<folly::Unit> semifuture_onStartServing() override;
folly::SemiFuture<folly::Unit> semifuture_onStopRequested() override;
};

std::shared_ptr<apache::thrift::ServerInterface> FooBarBazServiceInterface(PyObject *if_object, folly::Executor *exc);
} // namespace cpp2
