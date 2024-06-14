/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-stack-arguments/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#include <thrift/compiler/test/fixtures/basic-stack-arguments/gen-py3/module/services_wrapper.h>
#include <thrift/compiler/test/fixtures/basic-stack-arguments/gen-py3/module/services_api.h>
#include <thrift/lib/cpp2/async/AsyncProcessor.h>

namespace cpp2 {

MyServiceWrapper::MyServiceWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_module__services();
  }


void MyServiceWrapper::async_tm_hasDataById(
  apache::thrift::HandlerCallbackPtr<bool> callback
    , int64_t id
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<bool>();
        call_cy_MyService_hasDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<bool>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_getDataById(
  apache::thrift::HandlerCallbackPtr<std::string> callback
    , int64_t id
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::string>();
        call_cy_MyService_getDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::string>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_putDataById(
  apache::thrift::HandlerCallbackPtr<void> callback
    , int64_t id
    , const std::string& data
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id,
data = std::move(data)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyService_putDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id,
            std::move(data)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceWrapper::async_tm_lobDataById(
  apache::thrift::HandlerCallbackBase::Ptr callback
    , int64_t id
    , const std::string& data
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id,
data = std::move(data)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyService_lobDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id,
            std::move(data)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          
        });
    });
}
std::shared_ptr<apache::thrift::ServerInterface> MyServiceInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<MyServiceWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> MyServiceWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_MyService_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> MyServiceWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_MyService_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}


MyServiceFastWrapper::MyServiceFastWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_module__services();
  }


void MyServiceFastWrapper::async_eb_hasDataById(
  apache::thrift::HandlerCallbackPtr<bool> callback
    , int64_t id
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<bool>();
        call_cy_MyServiceFast_hasDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<bool>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceFastWrapper::async_eb_getDataById(
  apache::thrift::HandlerCallbackPtr<std::string> callback
    , int64_t id
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::string>();
        call_cy_MyServiceFast_getDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::string>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceFastWrapper::async_eb_putDataById(
  apache::thrift::HandlerCallbackPtr<void> callback
    , int64_t id
    , const std::string& data
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id,
data = std::move(data)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyServiceFast_putDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id,
            std::move(data)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void MyServiceFastWrapper::async_eb_lobDataById(
  apache::thrift::HandlerCallbackBase::Ptr callback
    , int64_t id
    , const std::string& data
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
id,
data = std::move(data)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<folly::Unit>();
        call_cy_MyServiceFast_lobDataById(
            this->if_object,
            ctx,
            std::move(promise),
            id,
            std::move(data)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<folly::Unit>&& t) {
          (void)t;
          
        });
    });
}
std::shared_ptr<apache::thrift::ServerInterface> MyServiceFastInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<MyServiceFastWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> MyServiceFastWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_MyServiceFast_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> MyServiceFastWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_MyServiceFast_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}


DbMixedStackArgumentsWrapper::DbMixedStackArgumentsWrapper(PyObject *obj, folly::Executor* exc)
  : if_object(obj), executor(exc)
  {
    import_module__services();
  }


void DbMixedStackArgumentsWrapper::async_tm_getDataByKey0(
  apache::thrift::HandlerCallbackPtr<std::unique_ptr<std::string>> callback
    , std::unique_ptr<std::string> key
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
key = std::move(key)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::unique_ptr<std::string>>();
        call_cy_DbMixedStackArguments_getDataByKey0(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(key)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::unique_ptr<std::string>>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
void DbMixedStackArgumentsWrapper::async_tm_getDataByKey1(
  apache::thrift::HandlerCallbackPtr<std::string> callback
    , const std::string& key
) {
  auto ctx = callback->getRequestContext();
  folly::via(
    this->executor,
    [this, ctx,
     callback = std::move(callback),
key = std::move(key)    ]() mutable {
        auto [promise, future] = folly::makePromiseContract<std::string>();
        call_cy_DbMixedStackArguments_getDataByKey1(
            this->if_object,
            ctx,
            std::move(promise),
            std::move(key)        );
        std::move(future).via(this->executor).thenTry([callback = std::move(callback)](folly::Try<std::string>&& t) {
          (void)t;
          callback->complete(std::move(t));
        });
    });
}
std::shared_ptr<apache::thrift::ServerInterface> DbMixedStackArgumentsInterface(PyObject *if_object, folly::Executor *exc) {
  return std::make_shared<DbMixedStackArgumentsWrapper>(if_object, exc);
}
folly::SemiFuture<folly::Unit> DbMixedStackArgumentsWrapper::semifuture_onStartServing() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_DbMixedStackArguments_onStartServing(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
folly::SemiFuture<folly::Unit> DbMixedStackArgumentsWrapper::semifuture_onStopRequested() {
  auto [promise, future] = folly::makePromiseContract<folly::Unit>();
  call_cy_DbMixedStackArguments_onStopRequested(
      this->if_object,
      std::move(promise)
  );
  return std::move(future);
}
} // namespace cpp2
