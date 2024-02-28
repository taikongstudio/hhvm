/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010-present Facebook, Inc. (http://www.facebook.com)  |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#pragma once
#include <chrono>
#include <hphp/util/optional.h>
#include <string_view>
#include "hphp/util/struct-log.h"

namespace HPHP {

void logSboxEvent(uint32_t sampleRate, std::string_view source,
                     std::string_view event, std::string_view key,
                     uint64_t duration_us,
                     HPHP::Optional<std::string_view> error_msg);

void rareSboxEvent(std::string_view source, std::string_view event,
                   std::string_view key);

inline void sampleSboxEvent(uint32_t sampleRate, std::string_view source,
                            std::string_view event, std::string_view key,
                            uint64_t duration_us, HPHP::Optional<std::string_view> error_msg) {
  if (StructuredLog::coinflip(sampleRate)) {
    logSboxEvent(sampleRate, source, event, key, duration_us, error_msg);
  }
}

template <typename F>
auto timeSboxEvent(
    uint32_t sampleRate, std::string_view source,
    std::string_view event, std::string_view key, F&& func) {
  using namespace std::chrono_literals;
  auto t0 = std::chrono::steady_clock::now();
  SCOPE_EXIT {
    if (StructuredLog::coinflip(sampleRate)) {
      auto tf = std::chrono::steady_clock::now();
      auto elapsed =
          std::chrono::duration<double, std::chrono::microseconds::period>{
              tf - t0};
      logSboxEvent(sampleRate, source, event, key, elapsed.count(), std::nullopt);
    }
  };
  return func();
}

template <typename F>
auto recordSboxEventWithTimingAndError(
    uint32_t successSampleRate, uint32_t errorSampleRate,
    std::string_view source, std::string_view event, std::string_view key,
    F&& func) {
  using namespace std::chrono_literals;
  auto t0 = std::chrono::steady_clock::now();

  auto sampleRate = successSampleRate;
  HPHP::Optional<std::string_view> errorMsg;

  SCOPE_EXIT {
    if (StructuredLog::coinflip(sampleRate)) {
      auto tf = std::chrono::steady_clock::now();
      auto elapsed =
          std::chrono::duration<double, std::chrono::microseconds::period>{
              tf - t0};
      logSboxEvent(sampleRate, source, event, key, elapsed.count(), errorMsg);
    }
  };

  try {
    return func();
  } catch (std::exception &e) {
    sampleRate = errorSampleRate;
    errorMsg = e.what();
    throw;
  }
}

}
