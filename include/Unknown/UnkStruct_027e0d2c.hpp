#pragma once

#include "Actor/ActorRef.hpp"
#include "math.hpp"
#include "types.h"

class UnkStruct_027e0d2c : public AutoInstance<UnkStruct_027e0d2c> {
public:
    // overlay 31
    void func_ov031_020d95b4();
    void func_ov031_020d95c8(ActorRef param1);
    bool func_ov031_020d962c(VecFx32 *param1, unk32 param2, VecFx32 *param3, ActorRef *param4);

    // overlay 101
    static void Destroy();
};

extern UnkStruct_027e0d2c *data_027e0d2c;
