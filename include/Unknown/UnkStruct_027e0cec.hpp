#pragma once

#include "math.hpp"
#include "types.h"

class UnkStruct_027e0cec : public AutoInstance<UnkStruct_027e0cec> {
public:
    UnkStruct_027e0cec();
    ~UnkStruct_027e0cec();

    void func_ov000_0209feac(unk32 param1, VecFx32 *param2, unk32 param3, unk32 param4, unk32 param5);
    void func_ov000_0209ff24(unk32 param1, VecFx32 *param2, VecFx16 *param3, unk32 param4);
    void func_ov000_0209ff8c(UnkStruct_PlayerGet_ec *param1, unk32 param2, VecFx32 *param3, unk32 param4);
    void func_ov000_020a0000(UnkStruct_PlayerGet_ec *param1, void *param2, unk32 *param3, VecFx32 *param4, unk32 param5);
    void func_ov000_020a00d4(UnkStruct_PlayerGet_ec *param1, unk32 param2, unk32 param3, unk32 param4, VecFx32 *param5,
                             unk32 param6);
    void func_ov000_020a0110(UnkStruct_PlayerGet_ec *param1);
    void func_ov000_020a0220(void *param1, void *param2);
    void func_ov001_020bf028();

    // overlay 1
    static UnkStruct_027e0cec *Create();
};

extern UnkStruct_027e0cec *data_027e0cec;
