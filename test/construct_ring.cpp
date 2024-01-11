#include "ring_buffer.hpp"
#include <memory>
int main()
{
    auto ring = std::make_unique<RingBuffer>();
    return 0;
}