#include "System/Random.hpp"
#include "CommonFuncs.hpp"

void Random::Init() {
    u64 auStack_38[4];
    u16 randomValue[4];

    func_02028450(auStack_38);

    for (int i = 0; i < ARRAY_LEN(auStack_38); i++) {
        randomValue[i] = func_02032920(&auStack_38[i], sizeof(u64));
    }

    this->Setup(randomValue);
}
