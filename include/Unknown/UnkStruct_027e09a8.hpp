#pragma once

#include "math.hpp"
#include "types.h"

class UnkStruct_027e09a8 : public AutoInstance<UnkStruct_027e09a8> {
public:
    // overlay 0
    void func_ov000_020713bc();
    void func_ov000_020716dc(unk32 param1);
    void func_ov000_02071b30(unk32 param1, VecFx32 *pPos, unk32 param3);
    void func_ov000_02071d34(void *param1, unk32 param2, VecFx32 *pPos, unk32 param4);
    void func_ov000_02071eac(VecFx32 *pPos);

    static UnkStruct_027e09a8 *Create();

    // overlay 1
    static void Destroy();
};

extern UnkStruct_027e09a8 *data_027e09a8;
