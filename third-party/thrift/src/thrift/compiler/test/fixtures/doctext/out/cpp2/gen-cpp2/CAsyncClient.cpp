/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/doctext/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */

#include "thrift/compiler/test/fixtures/doctext/gen-cpp2/CAsyncClient.h"

#include <thrift/lib/cpp2/gen/client_cpp.h>

namespace cpp2 {
typedef apache::thrift::ThriftPresult<false> C_f_pargs;
typedef apache::thrift::ThriftPresult<true> C_f_presult;
typedef apache::thrift::ThriftPresult<false> C_numbers_pargs;
typedef apache::thrift::ThriftPResultStream<
    apache::thrift::ThriftPresult<true>,
    apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::integral, ::cpp2::number*>>
    > C_numbers_presult;
typedef apache::thrift::ThriftPresult<false, apache::thrift::FieldData<1, ::apache::thrift::type_class::integral, ::std::int32_t*>, apache::thrift::FieldData<2, ::apache::thrift::type_class::string, ::std::string*>, apache::thrift::FieldData<3, ::apache::thrift::type_class::set<::apache::thrift::type_class::integral>, ::std::set<::std::int32_t>*>> C_thing_pargs;
typedef apache::thrift::ThriftPresult<true, apache::thrift::FieldData<0, ::apache::thrift::type_class::string, ::std::string*>, apache::thrift::FieldData<1, ::apache::thrift::type_class::structure, ::cpp2::Bang>> C_thing_presult;
} // namespace cpp2
template <typename RpcOptions>
void apache::thrift::Client<::cpp2::C>::fbthrift_send_f(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "f",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "C");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}

template <typename RpcOptions>
void apache::thrift::Client<::cpp2::C>::fbthrift_send_numbers(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::StreamClientCallback* callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "numbers",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "C");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_STREAMING_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}

template <typename RpcOptions>
void apache::thrift::Client<::cpp2::C>::fbthrift_send_thing(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback) {

  static ::apache::thrift::MethodMetadata::Data* methodMetadata =
        new ::apache::thrift::MethodMetadata::Data(
                "thing",
                ::apache::thrift::FunctionQualifier::Unspecified,
                "C");
  apache::thrift::clientSendT<apache::thrift::RpcKind::SINGLE_REQUEST_SINGLE_RESPONSE>(std::move(request), std::forward<RpcOptions>(rpcOptions), std::move(callback), std::move(header), channel_.get(), ::apache::thrift::MethodMetadata::from_static(methodMetadata));
}



void apache::thrift::Client<::cpp2::C>::f(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  f(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::cpp2::C>::f(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = fCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_f(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback));
}

apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::C>::fbthrift_serialize_f(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  return apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& prot) {
    using ProtocolWriter = std::decay_t<decltype(prot)>;
    ::cpp2::C_f_pargs args;
    const auto sizer = [&](ProtocolWriter* p) { return args.serializedSizeZC(p); };
    const auto writer = [&](ProtocolWriter* p) { args.write(p); };
    return apache::thrift::preprocessSendT<ProtocolWriter>(
        &prot,
        rpcOptions,
        contextStack,
        header,
        "f",
        writer,
        sizer,
        channel_->getChecksumSamplingRate());
  });
}

void apache::thrift::Client<::cpp2::C>::fbthrift_serialize_and_send_f(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions) {
  apache::thrift::SerializedRequest request = fbthrift_serialize_f(rpcOptions, *header, contextStack);
  if (stealRpcOptions) {
    fbthrift_send_f(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
  } else {
    fbthrift_send_f(std::move(request), rpcOptions, std::move(header), std::move(callback));
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::C>::fCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "C.f",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::C>::sync_f() {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_f(rpcOptions);
}

void apache::thrift::Client<::cpp2::C>::sync_f(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = fCtx(&rpcOptions);
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
      fbthrift_serialize_and_send_f(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
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
      recv_f(returnState);
  });
}


template <typename CallbackType>
folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::C>::fbthrift_semifuture_f(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto semifuture = promise.getSemiFuture();
  auto ctxAndHeader = fCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<CallbackType>(std::move(promise), recv_wrapped_f, channel_),
    std::move(ctxAndHeader.first));
  return fbthrift_semifuture_f(std::move(semifuture), rpcOptions, std::move(wrappedCallbackAndContextStack.first), wrappedCallbackAndContextStack.second, std::move(ctxAndHeader.second));
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::C>::fbthrift_semifuture_f(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<folly::Unit>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr wrappedCallback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<folly::Unit>;
  apache::thrift::SerializedRequest request = fbthrift_serialize_f(rpcOptions, *header, contextStack);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = contextStack && contextStack->shouldProcessClientInterceptors();
  if (!shouldProcessClientInterceptors) {
    fbthrift_send_f(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    return std::move(semifuture).deferValue(CallbackHelper::extractResult);
  }
  return CallbackHelper::executeWithClientInterceptors(*contextStack, [this, semifuture = std::move(semifuture), request = std::move(request), rpcOptions, header = std::move(header), wrappedCallback = std::move(wrappedCallback)]() mutable {
    fbthrift_send_f(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    return std::move(semifuture);
  });
#else
  fbthrift_send_f(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
  return std::move(semifuture).deferValue(CallbackHelper::extractResult);
#endif // FOLLY_HAS_COROUTINES
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::C>::future_f() {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_f(rpcOptions);
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::C>::semifuture_f() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_f(rpcOptions);
}

folly::Future<folly::Unit> apache::thrift::Client<::cpp2::C>::future_f(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackType = apache::thrift::FutureCallback<folly::Unit>;
  return fbthrift_semifuture_f<CallbackType>(rpcOptions).toUnsafeFuture();
}

folly::SemiFuture<folly::Unit> apache::thrift::Client<::cpp2::C>::semifuture_f(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackType = apache::thrift::SemiFutureCallback<folly::Unit>;
  return fbthrift_semifuture_f<CallbackType>(rpcOptions);
}


void apache::thrift::Client<::cpp2::C>::f(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback) {
  f(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)));
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::C>::recv_wrapped_f(::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::C_f_presult;
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

void apache::thrift::Client<::cpp2::C>::recv_f(::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_f(state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::C>::recv_instance_f(::apache::thrift::ClientReceiveState& state) {
  recv_f(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::C>::recv_instance_wrapped_f(::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_f(state);
}

void apache::thrift::Client<::cpp2::C>::numbers(std::unique_ptr<apache::thrift::RequestCallback> callback) {
  ::apache::thrift::RpcOptions rpcOptions;
  numbers(rpcOptions, std::move(callback));
}

void apache::thrift::Client<::cpp2::C>::numbers(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback) {
  auto [ctx, header] = numbersCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  auto streamCallback = apache::thrift::createStreamClientCallback(std::move(wrappedCallback), rpcOptions.getBufferOptions());
  fbthrift_serialize_and_send_numbers(rpcOptions, std::move(header), contextStack, std::move(streamCallback));
}

apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::C>::fbthrift_serialize_numbers(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack) {
  return apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& prot) {
    using ProtocolWriter = std::decay_t<decltype(prot)>;
    ::cpp2::C_numbers_pargs args;
    const auto sizer = [&](ProtocolWriter* p) { return args.serializedSizeZC(p); };
    const auto writer = [&](ProtocolWriter* p) { args.write(p); };
    return apache::thrift::preprocessSendT<ProtocolWriter>(
        &prot,
        rpcOptions,
        contextStack,
        header,
        "numbers",
        writer,
        sizer,
        channel_->getChecksumSamplingRate());
  });
}

void apache::thrift::Client<::cpp2::C>::fbthrift_serialize_and_send_numbers(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::StreamClientCallback* callback, bool stealRpcOptions) {
  apache::thrift::SerializedRequest request = fbthrift_serialize_numbers(rpcOptions, *header, contextStack);
  if (stealRpcOptions) {
    fbthrift_send_numbers(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
  } else {
    fbthrift_send_numbers(std::move(request), rpcOptions, std::move(header), std::move(callback));
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::C>::numbersCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "C.numbers",
      *header);

  return {std::move(ctx), std::move(header)};
}

apache::thrift::ClientBufferedStream<::cpp2::number> apache::thrift::Client<::cpp2::C>::sync_numbers() {
  ::apache::thrift::RpcOptions rpcOptions;
  return sync_numbers(rpcOptions);
}

apache::thrift::ClientBufferedStream<::cpp2::number> apache::thrift::Client<::cpp2::C>::sync_numbers(apache::thrift::RpcOptions& rpcOptions) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = numbersCtx(&rpcOptions);
  auto wrappedCallback = apache::thrift::createStreamClientCallback(
    apache::thrift::RequestClientCallback::Ptr(&callback),
    rpcOptions.getBufferOptions());
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = ctxAndHeader.first && ctxAndHeader.first->shouldProcessClientInterceptors();
  if (shouldProcessClientInterceptors) {
    folly::coro::blockingWait(ctxAndHeader.first->processClientInterceptorsOnRequest());
  }
#endif
  callback.waitUntilDone(
    evb,
    [&] {
      fbthrift_serialize_and_send_numbers(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback));
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
      return recv_numbers(returnState);
  });
}


template <typename CallbackType>
folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> apache::thrift::Client<::cpp2::C>::fbthrift_semifuture_numbers(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<apache::thrift::ClientBufferedStream<::cpp2::number>>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto semifuture = promise.getSemiFuture();
  auto ctxAndHeader = numbersCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<CallbackType>(std::move(promise), recv_wrapped_numbers, channel_),
    std::move(ctxAndHeader.first));
  return fbthrift_semifuture_numbers(std::move(semifuture), rpcOptions, std::move(wrappedCallbackAndContextStack.first), wrappedCallbackAndContextStack.second, std::move(ctxAndHeader.second));
}

folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> apache::thrift::Client<::cpp2::C>::fbthrift_semifuture_numbers(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<apache::thrift::ClientBufferedStream<::cpp2::number>>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr callback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<apache::thrift::ClientBufferedStream<::cpp2::number>>;
  auto wrappedCallback = apache::thrift::createStreamClientCallback(std::move(callback), rpcOptions.getBufferOptions());
  apache::thrift::SerializedRequest request = fbthrift_serialize_numbers(rpcOptions, *header, contextStack);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = contextStack && contextStack->shouldProcessClientInterceptors();
  if (!shouldProcessClientInterceptors) {
    fbthrift_send_numbers(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    return std::move(semifuture).deferValue(CallbackHelper::extractResult);
  }
  return CallbackHelper::executeWithClientInterceptors(*contextStack, [this, semifuture = std::move(semifuture), request = std::move(request), rpcOptions, header = std::move(header), wrappedCallback = std::move(wrappedCallback)]() mutable {
    fbthrift_send_numbers(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    return std::move(semifuture);
  });
#else
  fbthrift_send_numbers(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
  return std::move(semifuture).deferValue(CallbackHelper::extractResult);
#endif // FOLLY_HAS_COROUTINES
}


folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> apache::thrift::Client<::cpp2::C>::semifuture_numbers() {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_numbers(rpcOptions);
}


folly::SemiFuture<apache::thrift::ClientBufferedStream<::cpp2::number>> apache::thrift::Client<::cpp2::C>::semifuture_numbers(apache::thrift::RpcOptions& rpcOptions) {
  using CallbackType = apache::thrift::SemiFutureCallback<apache::thrift::ClientBufferedStream<::cpp2::number>>;
  return fbthrift_semifuture_numbers<CallbackType>(rpcOptions);
}



#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::C>::recv_wrapped_numbers(apache::thrift::ClientBufferedStream<::cpp2::number>& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::C_numbers_presult;
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

apache::thrift::ClientBufferedStream<::cpp2::number> apache::thrift::Client<::cpp2::C>::recv_numbers(::apache::thrift::ClientReceiveState& state) {
  apache::thrift::ClientBufferedStream<::cpp2::number> _return;
  auto ew = recv_wrapped_numbers(_return, state);
  if (ew) {
    ew.throw_exception();
  }
  return _return;
}

apache::thrift::ClientBufferedStream<::cpp2::number> apache::thrift::Client<::cpp2::C>::recv_instance_numbers(::apache::thrift::ClientReceiveState& state) {
  return recv_numbers(state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::C>::recv_instance_wrapped_numbers(apache::thrift::ClientBufferedStream<::cpp2::number>& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_numbers(_return, state);
}

void apache::thrift::Client<::cpp2::C>::thing(std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  ::apache::thrift::RpcOptions rpcOptions;
  thing(rpcOptions, std::move(callback), p_a, p_b, p_c);
}

void apache::thrift::Client<::cpp2::C>::thing(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  auto [ctx, header] = thingCtx(&rpcOptions);
  auto [wrappedCallback, contextStack] = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(std::move(callback), std::move(ctx));
  fbthrift_serialize_and_send_thing(rpcOptions, std::move(header), contextStack, std::move(wrappedCallback), p_a, p_b, p_c);
}

apache::thrift::SerializedRequest apache::thrift::Client<::cpp2::C>::fbthrift_serialize_thing(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  return apache::thrift::detail::ac::withProtocolWriter(apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId(), [&](auto&& prot) {
    using ProtocolWriter = std::decay_t<decltype(prot)>;
    ::cpp2::C_thing_pargs args;
    args.get<0>().value = &p_a;
    args.get<1>().value = const_cast<::std::string*>(&p_b);
    args.get<2>().value = const_cast<::std::set<::std::int32_t>*>(&p_c);
    const auto sizer = [&](ProtocolWriter* p) { return args.serializedSizeZC(p); };
    const auto writer = [&](ProtocolWriter* p) { args.write(p); };
    return apache::thrift::preprocessSendT<ProtocolWriter>(
        &prot,
        rpcOptions,
        contextStack,
        header,
        "thing",
        writer,
        sizer,
        channel_->getChecksumSamplingRate());
  });
}

void apache::thrift::Client<::cpp2::C>::fbthrift_serialize_and_send_thing(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c, bool stealRpcOptions) {
  apache::thrift::SerializedRequest request = fbthrift_serialize_thing(rpcOptions, *header, contextStack, p_a, p_b, p_c);
  if (stealRpcOptions) {
    fbthrift_send_thing(std::move(request), std::move(rpcOptions), std::move(header), std::move(callback));
  } else {
    fbthrift_send_thing(std::move(request), rpcOptions, std::move(header), std::move(callback));
  }
}

std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> apache::thrift::Client<::cpp2::C>::thingCtx(apache::thrift::RpcOptions* rpcOptions) {
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
      "C.thing",
      *header);

  return {std::move(ctx), std::move(header)};
}

void apache::thrift::Client<::cpp2::C>::sync_thing(::std::string& _return, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  ::apache::thrift::RpcOptions rpcOptions;
  sync_thing(rpcOptions, _return, p_a, p_b, p_c);
}

void apache::thrift::Client<::cpp2::C>::sync_thing(apache::thrift::RpcOptions& rpcOptions, ::std::string& _return, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  apache::thrift::ClientReceiveState returnState;
  apache::thrift::ClientSyncCallback<false> callback(&returnState);
  auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
  auto evb = apache::thrift::GeneratedAsyncClient::getChannel()->getEventBase();
  auto ctxAndHeader = thingCtx(&rpcOptions);
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
      fbthrift_serialize_and_send_thing(rpcOptions, std::move(ctxAndHeader.second), ctxAndHeader.first.get(), std::move(wrappedCallback), p_a, p_b, p_c);
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
      recv_thing(_return, returnState);
  });
}


template <typename CallbackType>
folly::SemiFuture<::std::string> apache::thrift::Client<::cpp2::C>::fbthrift_semifuture_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<::std::string>;
  folly::Promise<CallbackHelper::PromiseResult> promise;
  auto semifuture = promise.getSemiFuture();
  auto ctxAndHeader = thingCtx(&rpcOptions);
  auto wrappedCallbackAndContextStack = apache::thrift::GeneratedAsyncClient::template prepareRequestClientCallback<false /* kIsOneWay */>(
    std::make_unique<CallbackType>(std::move(promise), recv_wrapped_thing, channel_),
    std::move(ctxAndHeader.first));
  return fbthrift_semifuture_thing(std::move(semifuture), rpcOptions, std::move(wrappedCallbackAndContextStack.first), wrappedCallbackAndContextStack.second, std::move(ctxAndHeader.second), p_a, p_b, p_c);
}

folly::SemiFuture<::std::string> apache::thrift::Client<::cpp2::C>::fbthrift_semifuture_thing(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<::std::string>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr wrappedCallback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  using CallbackHelper = apache::thrift::detail::FutureCallbackHelper<::std::string>;
  apache::thrift::SerializedRequest request = fbthrift_serialize_thing(rpcOptions, *header, contextStack, p_a, p_b, p_c);
#if FOLLY_HAS_COROUTINES
  const bool shouldProcessClientInterceptors = contextStack && contextStack->shouldProcessClientInterceptors();
  if (!shouldProcessClientInterceptors) {
    fbthrift_send_thing(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    return std::move(semifuture).deferValue(CallbackHelper::extractResult);
  }
  return CallbackHelper::executeWithClientInterceptors(*contextStack, [this, semifuture = std::move(semifuture), request = std::move(request), rpcOptions, header = std::move(header), wrappedCallback = std::move(wrappedCallback)]() mutable {
    fbthrift_send_thing(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
    return std::move(semifuture);
  });
#else
  fbthrift_send_thing(std::move(request), rpcOptions, std::move(header), std::move(wrappedCallback));
  return std::move(semifuture).deferValue(CallbackHelper::extractResult);
#endif // FOLLY_HAS_COROUTINES
}

folly::Future<::std::string> apache::thrift::Client<::cpp2::C>::future_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  ::apache::thrift::RpcOptions rpcOptions;
  return future_thing(rpcOptions, p_a, p_b, p_c);
}

folly::SemiFuture<::std::string> apache::thrift::Client<::cpp2::C>::semifuture_thing(::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  ::apache::thrift::RpcOptions rpcOptions;
  return semifuture_thing(rpcOptions, p_a, p_b, p_c);
}

folly::Future<::std::string> apache::thrift::Client<::cpp2::C>::future_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  using CallbackType = apache::thrift::FutureCallback<::std::string>;
  return fbthrift_semifuture_thing<CallbackType>(rpcOptions, p_a, p_b, p_c).toUnsafeFuture();
}

folly::SemiFuture<::std::string> apache::thrift::Client<::cpp2::C>::semifuture_thing(apache::thrift::RpcOptions& rpcOptions, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  using CallbackType = apache::thrift::SemiFutureCallback<::std::string>;
  return fbthrift_semifuture_thing<CallbackType>(rpcOptions, p_a, p_b, p_c);
}


void apache::thrift::Client<::cpp2::C>::thing(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback, ::std::int32_t p_a, const ::std::string& p_b, const ::std::set<::std::int32_t>& p_c) {
  thing(std::make_unique<apache::thrift::FunctionReplyCallback>(std::move(callback)), p_a, p_b, p_c);
}

#if FOLLY_HAS_COROUTINES
#endif // FOLLY_HAS_COROUTINES
folly::exception_wrapper apache::thrift::Client<::cpp2::C>::recv_wrapped_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  if (state.isException()) {
    return std::move(state.exception());
  }
  if (!state.hasResponseBuffer()) {
    return folly::make_exception_wrapper<apache::thrift::TApplicationException>("recv_ called without result");
  }

  using result = ::cpp2::C_thing_presult;
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

void apache::thrift::Client<::cpp2::C>::recv_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  auto ew = recv_wrapped_thing(_return, state);
  if (ew) {
    ew.throw_exception();
  }
}

void apache::thrift::Client<::cpp2::C>::recv_instance_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_thing(_return, state);
}

folly::exception_wrapper apache::thrift::Client<::cpp2::C>::recv_instance_wrapped_thing(::std::string& _return, ::apache::thrift::ClientReceiveState& state) {
  return recv_wrapped_thing(_return, state);
}


