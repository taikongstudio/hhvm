/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/BadServiceAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> GoodService_bar_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::std::int32_t*>> GoodService_bar_presult;
} // namespace cpp2
template <typename RpcOptions>
void apache::thrift::Client<::cpp2::GoodService>::fbthrift_send_bar(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "bar",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "BadService");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



apache::thrift::Client<::cpp2::GoodService>::BadInteraction apache::thrift::Client<::cpp2::GoodService>::createBadInteraction() {
  return BadInteraction(channel_, "BadInteraction");
}
void apache::thrift::Client<::cpp2::GoodService>::bar(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  bar(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::cpp2::GoodService>::bar(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = barCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_bar(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::GoodService>::fbthrift_serialize_bar(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  return apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& prot) {
    using ProtocolWriter = std::decay_t<decltype(prot)>;
    ::cpp2::GoodService_bar_pargs args;
    const auto sizer = [&](ProtocolWriter* p) { return args.serializedSizeZC(p); };
    const auto writer = [&](ProtocolWriter* p) { args.write(p); };
    return apache::thrift::preprocessSendT<ProtocolWriter>(
        &prot,
        rpcOptions,
        contextStack,
        header,
        "bar",
        writer,
        sizer,
        channel_->getChecksumSamplingRate());
  });
}

void apache::thrift::Client<::cpp2::GoodService>::fbthrift_serialize_and_send_bar(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::SerializedRequest request = fbthrift_serialize_bar(rpcOptions, *header, contextStack);
  if (stealRpcOptions) {
    fbthrift_send_bar(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
  } else {
    fbthrift_send_bar(std::move(request), rpcOptions, std::move(header), std::move(callback));
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::GoodService>::barCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      interceptors_,
      getServiceName(),
      "BadService.bar",
      *header);

  return {std::move(ctx), std::move(header)};
}

::std::int32_t apache::thrift::Client<::cpp2::GoodService>::sync_bar() {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_bar(rpcOptions);
}

::std::int32_t apache::thrift::Client<::cpp2::GoodService>::sync_bar(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = barCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_bar(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
    });
#if FOLLY_HAS_COROUTINES
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnResponse());
  }
#endif
  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      return recv_bar(returnState);
  });
}


template <typename CallbackType>
folly::SemiFuture<::std::int32_t> apache::thrift::Client<::cpp2::GoodService>::fbthrift_semifuture_bar(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<::std::int32_t>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto semifuture = promise.getSemiFuture();
  auto ctxAndHeader = barCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<CallbackType>(std::move(promise), recv_wrapped_bar, channel_),
    std::move(ctxAndHeader.first));
  return fbthrift_semifuture_bar(std::move(semifuture), rpcOptions, std::move(wrappedCallbackAndContextStack.first), wrappedCallbackAndContextStack.second, std::move(ctxAndHeader.second));
}

folly::SemiFuture<::std::int32_t> apache::thrift::Client<::cpp2::GoodService>::fbthrift_semifuture_bar(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<::std::int32_t>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr wrappedCallback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<::std::int32_t>;
  apache::thrift::SerializedRequest request = fbthrift_serialize_bar(rpcOptions, *header, contextStack);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = contextStack && contextStack->shouldProcessClientInterceptors();
  if (!shouldProcessClientInterceptors) {
    fbthrift_send_bar(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    return std::move(semifuture).deferValue(CallbackHelper::extractResult);
  }
  return CallbackHelper::executeWithClientInterceptors(*contextStack, [this, semifuture = std::move(semifuture), request = std::move(request), rpcOptions, header = std::move(header), wrappedCallback = std::move(wrappedCallback)]() mutable {
    fbthrift_send_bar(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    return std::move(semifuture);
  });
#else
  fbthrift_send_bar(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
  return std::move(semifuture).deferValue(CallbackHelper::extractResult);
#endif // FOLLY_HAS_COROUTINES
}

folly::Future<::std::int32_t> apache::thrift::Client<::cpp2::GoodService>::future_bar() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_bar(rpcOptions);
}

folly::SemiFuture<::std::int32_t> apache::thrift::Client<::cpp2::GoodService>::semifuture_bar() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_bar(rpcOptions);
}

folly::Future<::std::int32_t> apache::thrift::Client<::cpp2::GoodService>::future_bar(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackType = apache::thrift::FutureCallback<::std::int32_t>;
  return fbthrift_semifuture_bar<CallbackType>(rpcOptions).toUnsafeFuture();
}

folly::SemiFuture<::std::int32_t> apache::thrift::Client<::cpp2::GoodService>::semifuture_bar(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackType = apache::thrift::SemiFutureCallback<::std::int32_t>;
  return fbthrift_semifuture_bar<CallbackType>(rpcOptions);
}


void apache::thrift::Client<::cpp2::GoodService>::bar(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  bar(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::GoodService>::recv_wrapped_bar(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::GoodService_bar_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state, _return);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}

::std::int32_t apache::thrift::Client<::cpp2::GoodService>::recv_bar(::apache::thrift::ClientReceiveState& state) {
  ::std::int32_t _return;
  auto ew = recv_wrapped_bar(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

::std::int32_t apache::thrift::Client<::cpp2::GoodService>::recv_instance_bar(::apache::thrift::ClientReceiveState& state) {
  return recv_bar(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::GoodService>::recv_instance_wrapped_bar(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_bar(_return, state);
}



namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> GoodService_BadInteraction_foo_pargs;
typedef apache::thrift::ThriftPresult<true> GoodService_BadInteraction_foo_presult;
} // namespace cpp2
template <typename RpcOptions>
void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::fbthrift_send_foo(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {
  apache::thrift::RpcOptions rpcOpts(std::forward<RpcOptions>(rpcOptions));
  setInteraction(rpcOpts);

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "BadInteraction.foo",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "BadService",
                ::apache::thrift::InteractionMethodPosition::Member,
                "BadInteraction");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::move(rpcOpts), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::foo(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = fooCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_foo(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::GoodService>::BadInteraction::fbthrift_serialize_foo(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  return apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& prot) {
    using ProtocolWriter = std::decay_t<decltype(prot)>;
    ::cpp2::GoodService_BadInteraction_foo_pargs args;
    const auto sizer = [&](ProtocolWriter* p) { return args.serializedSizeZC(p); };
    const auto writer = [&](ProtocolWriter* p) { args.write(p); };
    return apache::thrift::preprocessSendT<ProtocolWriter>(
        &prot,
        rpcOptions,
        contextStack,
        header,
        "BadInteraction.foo",
        writer,
        sizer,
        channel_->getChecksumSamplingRate());
  });
}

void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::fbthrift_serialize_and_send_foo(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::SerializedRequest request = fbthrift_serialize_foo(rpcOptions, *header, contextStack);
  if (stealRpcOptions) {
    fbthrift_send_foo(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
  } else {
    fbthrift_send_foo(std::move(request), rpcOptions, std::move(header), std::move(callback));
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::GoodService>::BadInteraction::fooCtx(apache::thrift::RpcOptions* rpcOptions) {
  auto header = std::make_shared<apache::thrift::transport::THeader>(
      apache::thrift::transport::THeader::ALLOW_BIG_FRAMES);
  header->setProtocolId(channel_->getProtocolId());
  if (rpcOptions) {
    header->setHeaders(rpcOptions->releaseWriteHeaders());
  }

  auto ctx = apache::thrift::ContextStack::createWithClientContext(
      handlers_,
      interceptors_,
      getServiceName(),
      "BadService.BadInteraction.foo",
      *header);

  return {std::move(ctx), std::move(header)};
}
void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::sync_foo() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_foo(rpcOptions);
}

void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::sync_foo(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = fooCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(&callback);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_foo(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
    });
#if FOLLY_HAS_COROUTINES
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnResponse());
  }
#endif
  if (returnState.isException()) {
    returnState.exception().throw_exception();
  }
  returnState.resetProtocolId(protocolId);
  returnState.resetCtx(std::move(ctxAndHeader.first));
  SCOPE_EXIT {
    if (returnState.header() && !returnState.header()->getHeaders().empty()) {
      rpcOptions.setReadHeaders(returnState.header()->releaseHeaders());
    }
  };
  return folly::fibers::runInMainContext([&] {
      recv_foo(returnState);
  });
}


template <typename CallbackType>
folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::GoodService>::BadInteraction::fbthrift_semifuture_foo(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto semifuture = promise.getSemiFuture();
  auto ctxAndHeader = fooCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<CallbackType>(std::move(promise), recv_wrapped_foo, channel_),
    std::move(ctxAndHeader.first));
  return fbthrift_semifuture_foo(std::move(semifuture), rpcOptions, std::move(wrappedCallbackAndContextStack.first), wrappedCallbackAndContextStack.second, std::move(ctxAndHeader.second));
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::GoodService>::BadInteraction::fbthrift_semifuture_foo(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<folly::Unit>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr wrappedCallback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  apache::thrift::SerializedRequest request = fbthrift_serialize_foo(rpcOptions, *header, contextStack);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = contextStack && contextStack->shouldProcessClientInterceptors();
  if (!shouldProcessClientInterceptors) {
    fbthrift_send_foo(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    return std::move(semifuture).deferValue(CallbackHelper::extractResult);
  }
  return CallbackHelper::executeWithClientInterceptors(*contextStack, [this, semifuture = std::move(semifuture), request = std::move(request), rpcOptions, header = std::move(header), wrappedCallback = std::move(wrappedCallback)]() mutable {
    fbthrift_send_foo(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    return std::move(semifuture);
  });
#else
  fbthrift_send_foo(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
  return std::move(semifuture).deferValue(CallbackHelper::extractResult);
#endif // FOLLY_HAS_COROUTINES
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::GoodService>::BadInteraction::semifuture_foo() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_foo(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::GoodService>::BadInteraction::semifuture_foo(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackType = apache::thrift::SemiFutureCallback<folly::Unit>;
  return fbthrift_semifuture_foo<CallbackType>(rpcOptions);
}


#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::GoodService>::BadInteraction::recv_wrapped_foo(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::GoodService_BadInteraction_foo_presult;
  switch (state.protocolId()) {
    case apache::thrift::protocol::T_BINARY_PROTOCOL:
    {
      apache::thrift::BinaryProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    case apache::thrift::protocol::T_COMPACT_PROTOCOL:
    {
      apache::thrift::CompactProtocolReader reader;
      return apache::thrift::detail::ac::recv_wrapped<result>(
          &reader, state);
    }
    default:
    {
    }
  }
  return folly::make_exception_wrapper<apache::thrift::TApplicationException>("Could not find Protocol");
}
void apache::thrift::Client<::cpp2::GoodService>::BadInteraction::recv_foo(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_foo(state);
  if (ew) {
    ew.throw_exception();
  }
}

