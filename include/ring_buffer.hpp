#pragma once

#include <atomic>

namespace thread_pool {

constexpr int CACHE_LINE_SIZE = 64;

template<int N = 1024>
class RingBuffer {
    static_assert(N == (N & -N), "The size of RingBuffer must be power of 2");
public:
private:
    alignas(CACHE_LINE_SIZE) std::atomic_int64_t buffer_[N];
};

} // namespace thread_pool