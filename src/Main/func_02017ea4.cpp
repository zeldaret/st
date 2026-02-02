#include "System/Random.hpp"
#include "types.h"

ARM extern "C" void func_02017ea4(u16 *param1) {
    *param1 = gRandom.Next();
}

ARM extern "C" void func_02017ee4(u16 *param1) {
    *param1 = gRandom.Next(0, 4) << 14;
}
