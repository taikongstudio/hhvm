/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/service-schema/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/PrimitivesService.h"
#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/PrimitivesService.tcc"
#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/module_metadata.h"
#include "thrift/compiler/test/fixtures/service-schema/gen-cpp2/module_constants.h"
#include <thrift/lib/cpp2/gen/service_cpp.h>

std::unique_ptr<apache::thrift::AsyncProcessor> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::getProcessor() {
  return std::make_unique<::cpp2::PrimitivesServiceAsyncProcessor>(this);
}

apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::CreateMethodMetadataResult apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::createMethodMetadata() {
  return ::apache::thrift::detail::ap::createMethodMetadataMap<::cpp2::PrimitivesServiceAsyncProcessor>(getServiceRequestInfoMap().value().get());
}

#if defined(THRIFT_SCHEMA_AVAILABLE)
std::optional<apache::thrift::schema::DefinitionsSchema> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::getServiceSchema() {
  std::optional<apache::thrift::schema::DefinitionsSchema> ret = schema::DefinitionsSchema{};
  ret->schema = ::apache::thrift::SchemaRegistry::mergeSchemas(::cpp2::module_constants::_fbthrift_schema_2926f41c3790ef15_includes());
  ret->definitions = {"\xdc\x03\x58\x51\x68\x6f\x53\x7e\x9a\x5f\x91\x3b\x78\x92\x36\x0d"};
  return ret;
}
#endif

std::optional<std::reference_wrapper<apache::thrift::ServiceRequestInfoMap const>> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::getServiceRequestInfoMap() const {
  return __fbthrift_serviceInfoHolder.requestInfoMap();
}

::cpp2::PrimitivesServiceServiceInfoHolder apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::__fbthrift_serviceInfoHolder;


::std::int64_t apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::init(::std::int64_t /*param0*/, ::std::int64_t /*param1*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("init");
}

::std::int64_t apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::sync_init(::std::int64_t p_param0, ::std::int64_t p_param1) {
  return init(p_param0, p_param1);
}

folly::SemiFuture<::std::int64_t> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::semifuture_init(::std::int64_t p_param0, ::std::int64_t p_param1) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_init.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return sync_init(p_param0, p_param1);
}

folly::Future<::std::int64_t> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::future_init(::std::int64_t p_param0, ::std::int64_t p_param1) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_init.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_init(p_param0, p_param1), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<::std::int64_t> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::co_init(::std::int64_t p_param0, ::std::int64_t p_param1) {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_init.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<::std::int64_t /*param0*/, ::std::int64_t /*param1*/>(p_param0, p_param1));
}

folly::coro::Task<::std::int64_t> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::co_init(apache::thrift::RequestParams /* params */, ::std::int64_t p_param0, ::std::int64_t p_param1) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_init.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_init(p_param0, p_param1);
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::async_tm_init(apache::thrift::HandlerCallbackPtr<::std::int64_t> callback, ::std::int64_t p_param0, ::std::int64_t p_param1) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_init.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_init.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_init(params, p_param0, p_param1);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_init.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        [[fallthrough]];
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_init(p_param0, p_param1);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_init(p_param0, p_param1);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_init(params, p_param0, p_param1);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_init(p_param0, p_param1);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(sync_init(p_param0, p_param1));
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie(p_param0, p_param1) = std::move(ex).restoreArgs<::std::int64_t /*param0*/, ::std::int64_t /*param1*/>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

::cpp2::Result apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::method_that_throws() {
  apache::thrift::detail::si::throw_app_exn_unimplemented("method_that_throws");
}

::cpp2::Result apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::sync_method_that_throws() {
  return method_that_throws();
}

folly::SemiFuture<::cpp2::Result> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::semifuture_method_that_throws() {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_method_that_throws.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  return sync_method_that_throws();
}

folly::Future<::cpp2::Result> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::future_method_that_throws() {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_method_that_throws.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_method_that_throws(), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<::cpp2::Result> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::co_method_that_throws() {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_method_that_throws.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<>());
}

folly::coro::Task<::cpp2::Result> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::co_method_that_throws(apache::thrift::RequestParams /* params */) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_method_that_throws.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_method_that_throws();
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::async_tm_method_that_throws(apache::thrift::HandlerCallbackPtr<::cpp2::Result> callback) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_method_that_throws.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_method_that_throws.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_method_that_throws(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_method_that_throws.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        [[fallthrough]];
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_method_that_throws();
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_method_that_throws();
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_method_that_throws(params);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_method_that_throws();
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        callback->result(sync_method_that_throws());
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie() = std::move(ex).restoreArgs<>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}

void apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::return_void_method(::std::int64_t /*id*/) {
  apache::thrift::detail::si::throw_app_exn_unimplemented("return_void_method");
}

void apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::sync_return_void_method(::std::int64_t p_id) {
  return return_void_method(p_id);
}

folly::SemiFuture<folly::Unit> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::semifuture_return_void_method(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::SemiFuture};
  __fbthrift_invocation_return_void_method.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Sync, std::memory_order_relaxed);
  sync_return_void_method(p_id);
  return folly::makeSemiFuture();
}

folly::Future<folly::Unit> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::future_return_void_method(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::Future};
  __fbthrift_invocation_return_void_method.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::SemiFuture, std::memory_order_relaxed);
  return apache::thrift::detail::si::future(semifuture_return_void_method(p_id), getInternalKeepAlive());
}

#if FOLLY_HAS_COROUTINES
folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::co_return_void_method(::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::Coro};
  __fbthrift_invocation_return_void_method.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
  folly::throw_exception(apache::thrift::detail::si::UnimplementedCoroMethod::withCapturedArgs<::std::int64_t /*id*/>(p_id));
}

folly::coro::Task<void> apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::co_return_void_method(apache::thrift::RequestParams /* params */, ::std::int64_t p_id) {
  auto expected{apache::thrift::detail::si::InvocationType::CoroParam};
  __fbthrift_invocation_return_void_method.compare_exchange_strong(expected, apache::thrift::detail::si::InvocationType::Coro, std::memory_order_relaxed);
  return co_return_void_method(p_id);
}
#endif // FOLLY_HAS_COROUTINES

void apache::thrift::ServiceHandler<::cpp2::PrimitivesService>::async_tm_return_void_method(apache::thrift::HandlerCallbackPtr<void> callback, ::std::int64_t p_id) {
  // It's possible the coroutine versions will delegate to a future-based
  // version. If that happens, we need the RequestParams arguments to be
  // available to the future through the thread-local backchannel, so we create
  // a RAII object that sets up RequestParams and clears them on destruction.
  apache::thrift::detail::si::AsyncTmPrep asyncTmPrep(this, callback.get());
#if FOLLY_HAS_COROUTINES
determineInvocationType:
#endif // FOLLY_HAS_COROUTINES
  auto invocationType = __fbthrift_invocation_return_void_method.load(std::memory_order_relaxed);
  try {
    switch (invocationType) {
      case apache::thrift::detail::si::InvocationType::AsyncTm:
      {
#if FOLLY_HAS_COROUTINES
        __fbthrift_invocation_return_void_method.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::CoroParam, std::memory_order_relaxed);
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_return_void_method(params, p_id);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
#else // FOLLY_HAS_COROUTINES
        __fbthrift_invocation_return_void_method.compare_exchange_strong(invocationType, apache::thrift::detail::si::InvocationType::Future, std::memory_order_relaxed);
        [[fallthrough]];
#endif // FOLLY_HAS_COROUTINES
      }
      case apache::thrift::detail::si::InvocationType::Future:
      {
        auto fut = future_return_void_method(p_id);
        apache::thrift::detail::si::async_tm_future(std::move(callback), std::move(fut));
        return;
      }
      case apache::thrift::detail::si::InvocationType::SemiFuture:
      {
        auto fut = semifuture_return_void_method(p_id);
        apache::thrift::detail::si::async_tm_semifuture(std::move(callback), std::move(fut));
        return;
      }
#if FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::CoroParam:
      {
        apache::thrift::RequestParams params{callback->getRequestContext(),
          callback->getThreadManager_deprecated(), callback->getEventBase(), callback->getHandlerExecutor()};
        auto task = co_return_void_method(params, p_id);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
      case apache::thrift::detail::si::InvocationType::Coro:
      {
        auto task = co_return_void_method(p_id);
        apache::thrift::detail::si::async_tm_coro(std::move(callback), std::move(task));
        return;
      }
#endif // FOLLY_HAS_COROUTINES
      case apache::thrift::detail::si::InvocationType::Sync:
      {
        sync_return_void_method(p_id);
        callback->done();
        return;
      }
      default:
      {
        folly::assume_unreachable();
      }
    }
#if FOLLY_HAS_COROUTINES
  } catch (apache::thrift::detail::si::UnimplementedCoroMethod& ex) {
    std::tie(p_id) = std::move(ex).restoreArgs<::std::int64_t /*id*/>();
    goto determineInvocationType;
#endif // FOLLY_HAS_COROUTINES
  } catch (...) {
    callback->exception(std::current_exception());
  }
}


namespace cpp2 {

::std::int64_t PrimitivesServiceSvNull::init(::std::int64_t /*param0*/, ::std::int64_t /*param1*/) { 
  return 0;
}

::cpp2::Result PrimitivesServiceSvNull::method_that_throws() { 
  return (::cpp2::Result)0;
}

void PrimitivesServiceSvNull::return_void_method(::std::int64_t /*id*/) { 
  return;
}


const char* PrimitivesServiceAsyncProcessor::getServiceName() {
  return "PrimitivesService";
}

void PrimitivesServiceAsyncProcessor::getServiceMetadata(apache::thrift::metadata::ThriftServiceMetadataResponse& response) {
  ::apache::thrift::detail::md::ServiceMetadata<::apache::thrift::ServiceHandler<::cpp2::PrimitivesService>>::gen(response);
}

void PrimitivesServiceAsyncProcessor::processSerializedCompressedRequestWithMetadata(apache::thrift::ResponseChannelRequest::UniquePtr req, apache::thrift::SerializedCompressedRequest&& serializedRequest, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata, apache::thrift::protocol::PROTOCOL_TYPES protType, apache::thrift::Cpp2RequestContext* context, folly::EventBase* eb, apache::thrift::concurrency::ThreadManager* tm) {
  apache::thrift::detail::ap::process(this, iface_, std::move(req), std::move(serializedRequest), methodMetadata, protType, context, eb, tm);
}

void PrimitivesServiceAsyncProcessor::executeRequest(apache::thrift::ServerRequest&& request, const apache::thrift::AsyncProcessorFactory::MethodMetadata& methodMetadata) {
  apache::thrift::detail::ap::execute(this, std::move(request), apache::thrift::detail::ServerRequestHelper::protocol(request), methodMetadata);
}

const PrimitivesServiceAsyncProcessor::ProcessMap& PrimitivesServiceAsyncProcessor::getOwnProcessMap() {
  return kOwnProcessMap_;
}

const PrimitivesServiceAsyncProcessor::ProcessMap PrimitivesServiceAsyncProcessor::kOwnProcessMap_ {
  {"init",
    {&PrimitivesServiceAsyncProcessor::setUpAndProcess_init<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &PrimitivesServiceAsyncProcessor::setUpAndProcess_init<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &PrimitivesServiceAsyncProcessor::executeRequest_init<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &PrimitivesServiceAsyncProcessor::executeRequest_init<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"method_that_throws",
    {&PrimitivesServiceAsyncProcessor::setUpAndProcess_method_that_throws<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &PrimitivesServiceAsyncProcessor::setUpAndProcess_method_that_throws<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &PrimitivesServiceAsyncProcessor::executeRequest_method_that_throws<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &PrimitivesServiceAsyncProcessor::executeRequest_method_that_throws<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
  {"return_void_method",
    {&PrimitivesServiceAsyncProcessor::setUpAndProcess_return_void_method<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &PrimitivesServiceAsyncProcessor::setUpAndProcess_return_void_method<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>,
     &PrimitivesServiceAsyncProcessor::executeRequest_return_void_method<apache::thrift::CompactProtocolReader, apache::thrift::CompactProtocolWriter>,
     &PrimitivesServiceAsyncProcessor::executeRequest_return_void_method<apache::thrift::BinaryProtocolReader, apache::thrift::BinaryProtocolWriter>}},
};

apache::thrift::ServiceRequestInfoMap const& PrimitivesServiceServiceInfoHolder::requestInfoMap() const {
  static folly::Indestructible<apache::thrift::ServiceRequestInfoMap> requestInfoMap{staticRequestInfoMap()};
  return *requestInfoMap;
}

apache::thrift::ServiceRequestInfoMap PrimitivesServiceServiceInfoHolder::staticRequestInfoMap() {
  apache::thrift::ServiceRequestInfoMap requestInfoMap = {
  {"init",
    { false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "PrimitivesService.init",
     std::nullopt,
     apache::thrift::concurrency::NORMAL,
     std::nullopt}},
  {"method_that_throws",
    { false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "PrimitivesService.method_that_throws",
     std::nullopt,
     apache::thrift::concurrency::NORMAL,
     std::nullopt}},
  {"return_void_method",
    { false,
     apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE,
     "PrimitivesService.return_void_method",
     std::nullopt,
     apache::thrift::concurrency::NORMAL,
     std::nullopt}},
  };

  return requestInfoMap;
}
} // namespace cpp2
