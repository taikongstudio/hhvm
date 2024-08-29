/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic-annotations/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/basic-annotations/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace cpp2 {
class MyServicePrioParent;
} // namespace cpp2
namespace apache::thrift {

template <>
class Client<::cpp2::MyServicePrioParent> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "MyServicePrioParent";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual void ping(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual void ping(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_ping(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual void sync_ping();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual void sync_ping(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual folly::Future<folly::Unit> future_ping();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_ping();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual folly::Future<folly::Unit> future_ping(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_ping(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  template <int = 0>
  folly::coro::Task<void> co_ping() {
    return co_ping<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  template <int = 0>
  folly::coro::Task<void> co_ping(apache::thrift::RpcOptions& rpcOptions) {
    return co_ping<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  folly::coro::Task<void> co_ping() {
    co_await folly::coro::detachOnCancel(semifuture_ping());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  folly::coro::Task<void> co_ping(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_ping(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_ping(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = pingCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_ping(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_ping(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    if (auto ew = recv_wrapped_ping(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual void ping(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  static folly::exception_wrapper recv_wrapped_ping(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  static void recv_ping(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual void recv_instance_ping(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "ping"} */
  virtual folly::exception_wrapper recv_instance_wrapped_ping(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  apache::thrift::SerializedRequest fbthrift_serialize_ping(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_ping(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> pingCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual void pong(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual void pong(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_pong(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual void sync_pong();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual void sync_pong(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual folly::Future<folly::Unit> future_pong();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_pong();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual folly::Future<folly::Unit> future_pong(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_pong(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  template <int = 0>
  folly::coro::Task<void> co_pong() {
    return co_pong<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  template <int = 0>
  folly::coro::Task<void> co_pong(apache::thrift::RpcOptions& rpcOptions) {
    return co_pong<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  folly::coro::Task<void> co_pong() {
    co_await folly::coro::detachOnCancel(semifuture_pong());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  folly::coro::Task<void> co_pong(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_pong(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_pong(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = pongCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_pong(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_pong(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    if (auto ew = recv_wrapped_pong(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual void pong(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  static folly::exception_wrapper recv_wrapped_pong(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  static void recv_pong(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual void recv_instance_pong(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic-annotations/src/module.thrift", "service": "MyServicePrioParent", "function": "pong"} */
  virtual folly::exception_wrapper recv_instance_wrapped_pong(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  apache::thrift::SerializedRequest fbthrift_serialize_pong(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_pong(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> pongCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace cpp2 {
using MyServicePrioParentAsyncClient [[deprecated("Use apache::thrift::Client<MyServicePrioParent> instead")]] = ::apache::thrift::Client<MyServicePrioParent>;
} // namespace cpp2
