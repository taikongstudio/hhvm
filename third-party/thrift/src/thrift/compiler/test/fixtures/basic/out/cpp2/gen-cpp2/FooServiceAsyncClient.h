/**
 * Autogenerated by Thrift for thrift/compiler/test/fixtures/basic/src/module.thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated @nocommit
 */
#pragma once

#include <thrift/lib/cpp2/gen/client_h.h>

#include "thrift/compiler/test/fixtures/basic/gen-cpp2/module_types.h"

namespace apache { namespace thrift {
  class Cpp2RequestContext;
  namespace detail { namespace ac { struct ClientRequestContext; }}
  namespace transport { class THeader; }
}}

namespace test::fixtures::basic {
class FooService;
} // namespace test::fixtures::basic
namespace apache::thrift {

template <>
class Client<::test::fixtures::basic::FooService> : public apache::thrift::GeneratedAsyncClient {
 public:
  using apache::thrift::GeneratedAsyncClient::GeneratedAsyncClient;

  char const* getServiceName() const noexcept override {
    return "FooService";
  }

  static const char* __fbthrift_thrift_uri() {
    return "test.dev/fixtures/basic/FooService";
  }


  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual void simple_rpc(std::unique_ptr<apache::thrift::RequestCallback> callback);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual void simple_rpc(apache::thrift::RpcOptions& rpcOptions, std::unique_ptr<apache::thrift::RequestCallback> callback);
 protected:
  void fbthrift_serialize_and_send_simple_rpc(apache::thrift::RpcOptions& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::ContextStack* contextStack, apache::thrift::RequestClientCallback::Ptr callback, bool stealRpcOptions = false);
 public:

  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual void sync_simple_rpc();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual void sync_simple_rpc(apache::thrift::RpcOptions& rpcOptions);

  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual folly::Future<folly::Unit> future_simple_rpc();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_simple_rpc();
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual folly::Future<folly::Unit> future_simple_rpc(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual folly::SemiFuture<folly::Unit> semifuture_simple_rpc(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual folly::Future<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_future_simple_rpc(apache::thrift::RpcOptions& rpcOptions);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual folly::SemiFuture<std::pair<folly::Unit, std::unique_ptr<apache::thrift::transport::THeader>>> header_semifuture_simple_rpc(apache::thrift::RpcOptions& rpcOptions);

#if FOLLY_HAS_COROUTINES
#if __clang__
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  template <int = 0>
  folly::coro::Task<void> co_simple_rpc() {
    return co_simple_rpc<false>(nullptr);
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  template <int = 0>
  folly::coro::Task<void> co_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
    return co_simple_rpc<true>(&rpcOptions);
  }
#else
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  folly::coro::Task<void> co_simple_rpc() {
    co_await folly::coro::detachOnCancel(semifuture_simple_rpc());
  }
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  folly::coro::Task<void> co_simple_rpc(apache::thrift::RpcOptions& rpcOptions) {
    co_await folly::coro::detachOnCancel(semifuture_simple_rpc(rpcOptions));
  }
#endif
 private:
  template <bool hasRpcOptions>
  folly::coro::Task<void> co_simple_rpc(apache::thrift::RpcOptions* rpcOptions) {
    const folly::CancellationToken& cancelToken =
        co_await folly::coro::co_current_cancellation_token;
    const bool cancellable = cancelToken.canBeCancelled();
    apache::thrift::ClientReceiveState returnState;
    apache::thrift::ClientCoroCallback<false> callback(&returnState, co_await folly::coro::co_current_executor);
    auto protocolId = apache::thrift::GeneratedAsyncClient::getChannel()->getProtocolId();
    auto [ctx, header] = simple_rpcCtx(rpcOptions);
    using CancellableCallback = apache::thrift::CancellableRequestClientCallback<false>;
    auto cancellableCallback = cancellable ? CancellableCallback::create(&callback, channel_) : nullptr;
    static apache::thrift::RpcOptions* defaultRpcOptions = new apache::thrift::RpcOptions();
    auto wrappedCallback = apache::thrift::RequestClientCallback::Ptr(cancellableCallback ? (apache::thrift::RequestClientCallback*)cancellableCallback.get() : &callback);
    const bool shouldProcessClientInterceptors = ctx && ctx->shouldProcessClientInterceptors();
    if (shouldProcessClientInterceptors) {
      co_await ctx->processClientInterceptorsOnRequest();
    }
    if constexpr (hasRpcOptions) {
      fbthrift_serialize_and_send_simple_rpc(*rpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
    } else {
      fbthrift_serialize_and_send_simple_rpc(*defaultRpcOptions, std::move(header), ctx.get(), std::move(wrappedCallback));
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
    if (auto ew = recv_wrapped_simple_rpc(returnState)) {
      co_yield folly::coro::co_error(std::move(ew));
    }
  }
 public:
#endif // FOLLY_HAS_COROUTINES

  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual void simple_rpc(folly::Function<void (::apache::thrift::ClientReceiveState&&)> callback);


  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  static folly::exception_wrapper recv_wrapped_simple_rpc(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  static void recv_simple_rpc(::apache::thrift::ClientReceiveState& state);
  // Mock friendly virtual instance method
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual void recv_instance_simple_rpc(::apache::thrift::ClientReceiveState& state);
  /** Glean {"file": "thrift/compiler/test/fixtures/basic/src/module.thrift", "service": "FooService", "function": "simple_rpc"} */
  virtual folly::exception_wrapper recv_instance_wrapped_simple_rpc(::apache::thrift::ClientReceiveState& state);
 private:
  template <typename Protocol_>
  apache::thrift::SerializedRequest fbthrift_serialize_simple_rpc(Protocol_* prot, const RpcOptions& rpcOptions, apache::thrift::transport::THeader& header, apache::thrift::ContextStack* contextStack);
  template <typename RpcOptions>
  void fbthrift_send_simple_rpc(apache::thrift::SerializedRequest&& request, RpcOptions&& rpcOptions, std::shared_ptr<apache::thrift::transport::THeader> header, apache::thrift::RequestClientCallback::Ptr callback);
  std::pair<::apache::thrift::ContextStack::UniquePtr, std::shared_ptr<::apache::thrift::transport::THeader>> simple_rpcCtx(apache::thrift::RpcOptions* rpcOptions);
 public:
};

} // namespace apache::thrift

namespace test::fixtures::basic {
using FooServiceAsyncClient [[deprecated("Use apache::thrift::Client<FooService> instead")]] = ::apache::thrift::Client<FooService>;
} // namespace test::fixtures::basic
