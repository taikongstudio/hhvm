/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/interactions/src/shared.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/interactions/gen-cpp2/shared_types.h"
#include <thrift/lib/cpp2/async/ClientBufferedStream.h>
#include <thrift/lib/cpp2/async/ClientSinkBridge.h>
#include <thrift/lib/cpp2/async/Sink.h>

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace thrift::shared_interactions {
class InteractLocally;
} // namespace thrift::shared_interactions
namespace apache::thrift {

template <>
class Client<::thrift::shared_interactions::InteractLocally> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "InteractLocally";
  }

class SharedInteraction final : public apache::thrift::InteractionHandle {
  using apache::thrift::InteractionHandle::InteractionHandle;
  friend class ::apache::thrift::Client<::thrift::shared_interactions::InteractLocally>;
 public:


  char const* getServiceName() const noexcept override {
    return "InteractLocally";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
 void init(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_init(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
  ::std::int32_t sync_init();
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
  ::std::int32_t sync_init(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
  folly::SemiFuture<::std::int32_t> semifuture_init();
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
  folly::SemiFuture<::std::int32_t> semifuture_init(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_init() {
    return co_init<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
  template <int = 0>
  folly::coro::Task<::std::int32_t> co_init(apache::thrift::RpcOptions& rpcOptions) {
    return co_init<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
  folly::coro::Task<::std::int32_t> co_init() {
    co_return co_await folly::coro::detachOnCancel(semifuture_init());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
  folly::coro::Task<::std::int32_t> co_init(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_init(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::std::int32_t> co_init(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = initCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_init(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_init(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnResponse();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::std::int32_t _return;
    if (auto ew = recv_wrapped_init(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES


  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
  static folly::exception_wrapper recv_wrapped_init(::std::int32_t& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "init"} */
  static ::std::int32_t recv_init(::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_init(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_init(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> initCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<::std::int32_t> fbthrift_semifuture_init(apache::thrift::RpcOptions& rpcOptions);
  FOLLY_NOINLINE folly::SemiFuture<::std::int32_t> fbthrift_semifuture_init(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<::std::int32_t>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr callback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
 void do_something(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_do_something(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
  void sync_do_something(::thrift::shared_interactions::DoSomethingResult& _return);
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
  void sync_do_something(apache::thrift::RpcOptions& rpcOptions, ::thrift::shared_interactions::DoSomethingResult& _return);

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
  folly::SemiFuture<::thrift::shared_interactions::DoSomethingResult> semifuture_do_something();
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
  folly::SemiFuture<::thrift::shared_interactions::DoSomethingResult> semifuture_do_something(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
  template <int = 0>
  folly::coro::Task<::thrift::shared_interactions::DoSomethingResult> co_do_something() {
    return co_do_something<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
  template <int = 0>
  folly::coro::Task<::thrift::shared_interactions::DoSomethingResult> co_do_something(apache::thrift::RpcOptions& rpcOptions) {
    return co_do_something<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
  folly::coro::Task<::thrift::shared_interactions::DoSomethingResult> co_do_something() {
    co_return co_await folly::coro::detachOnCancel(semifuture_do_something());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
  folly::coro::Task<::thrift::shared_interactions::DoSomethingResult> co_do_something(apache::thrift::RpcOptions& rpcOptions) {
    co_return co_await folly::coro::detachOnCancel(semifuture_do_something(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<::thrift::shared_interactions::DoSomethingResult> co_do_something(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = do_somethingCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_do_something(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_do_something(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnResponse();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    ::thrift::shared_interactions::DoSomethingResult _return;
    if (auto ew = recv_wrapped_do_something(_return, returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
    co_return _return;
  }
 public:
#endif // FOLLY_HAS_COROUTINES


  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
  static folly::exception_wrapper recv_wrapped_do_something(::thrift::shared_interactions::DoSomethingResult& _return, ::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "do_something"} */
  static void recv_do_something(::thrift::shared_interactions::DoSomethingResult& _return, ::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_do_something(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_do_something(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> do_somethingCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<::thrift::shared_interactions::DoSomethingResult> fbthrift_semifuture_do_something(apache::thrift::RpcOptions& rpcOptions);
  FOLLY_NOINLINE folly::SemiFuture<::thrift::shared_interactions::DoSomethingResult> fbthrift_semifuture_do_something(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<::thrift::shared_interactions::DoSomethingResult>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr callback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
 void tear_down(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_tear_down(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
  void sync_tear_down();
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
  void sync_tear_down(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
  folly::SemiFuture<folly::Unit> semifuture_tear_down();
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
  folly::SemiFuture<folly::Unit> semifuture_tear_down(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
  template <int = 0>
  folly::coro::Task<void> co_tear_down() {
    return co_tear_down<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
  template <int = 0>
  folly::coro::Task<void> co_tear_down(apache::thrift::RpcOptions& rpcOptions) {
    return co_tear_down<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
  folly::coro::Task<void> co_tear_down() {
    co_await folly::coro::detachOnCancel(semifuture_tear_down());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
  folly::coro::Task<void> co_tear_down(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_tear_down(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_tear_down(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = tear_downCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_tear_down(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_tear_down(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    }
    if (cancellable) {
      folly::CancellationCallback cb(cancelToken, [&] { CancellableCallback::cancel(std::move(cancellableCallback)); });
      co_await callback.co_waitUntilDone();
    } else {
      co_await callback.co_waitUntilDone();
    }
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnResponse();
    }
    if (returnState.isException()) {
      co_yield folly::coro::co_error(std::move(returnState.exception()));
    }
    returnState.resetProtocolId(protocolId);
    returnState.resetCtx(std::move(ctx));
    SCOPE_EXIT {
      if (hasRpcOptions && returnState.header()) {
        auto* rheader = returnState.header();
        if (!rheader->getHeaders().empty()) {
          rpcOptions->setReadHeaders(rheader->releaseHeaders());
        }
        rpcOptions->setRoutingData(rheader->releaseRoutingData());
      }
    };
    if (auto ew = recv_wrapped_tear_down(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES


  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
  static folly::exception_wrapper recv_wrapped_tear_down(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "SharedInteraction", "function": "tear_down"} */
  static void recv_tear_down(::apache::thrift::ClientReceiveState& state);
 private:
  apache::thrift::SerializedRequest fbthrift_serialize_tear_down(const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_tear_down(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> tear_downCtx(apache::thrift::RpcOptions* rpcOptions);
  template <typename CallbackType>
  folly::SemiFuture<folly::Unit> fbthrift_semifuture_tear_down(apache::thrift::RpcOptions& rpcOptions);
  FOLLY_NOINLINE folly::SemiFuture<folly::Unit> fbthrift_semifuture_tear_down(folly::SemiFuture<typename apache::thrift::detail::FutureCallbackHelper<folly::Unit>::PromiseResult> semifuture, apache::thrift::RpcOptions& rpcOptions, apache::thrift::RequestClientCallback::Ptr callback, apache::thrift::ContextStack* contextStack, std::shared_ptr<::apache::thrift::transport::THeader> header);
 public:
};
  /** Glean {"file": "thrift/compiler/test/fixtures/interactions/src/shared.thrift", "service": "InteractLocally", "function": "createSharedInteraction"} */
  SharedInteraction createSharedInteraction();
};

} // namespace apache::thrift

namespace thrift::shared_interactions {
using InteractLocallyAsyncClient [[deprecated("Use apache::thrift::Client<InteractLocally> instead")]] = ::apache::thrift::Client<InteractLocally>;
} // namespace thrift::shared_interactions
