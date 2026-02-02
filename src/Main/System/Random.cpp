#include "System/Random.hpp"

extern "C" void func_02028450(void *param1);
extern "C" u16 func_02032920(void *param1, size_t param2);

ARM void Random::Init() {
    u64 auStack_38[4];
    u16 local_40[4];

    func_02028450(auStack_38);

    for (int i = 0; i < ARRAY_LEN(auStack_38); i++) {
        local_40[i] = func_02032920(&auStack_38[i], sizeof(u64));
    }

    this->mRandomValue = *(u64 *) &local_40;
    this->mFactor      = 0x5D588B656C078965;
    this->mAddend      = 0x00269EC3;
}
