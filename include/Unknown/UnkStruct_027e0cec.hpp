#pragma once

#include "Player/PlayerGet.hpp"
#include "types.h"
#include <nitro/math.h>

class UnkStruct_027e0cec {
public:
    void func_ov000_0209feac(unk32 param1, Vec3p *param2, unk32 param3, unk32 param4, unk32 param5);
    void func_ov000_0209ff8c(UnkStruct_PlayerGet_ec *param1, unk32 param2, Vec3p *param3, unk32 param4);
    void func_ov000_020a0000(UnkStruct_PlayerGet_ec *param1, void *param2, unk32 *param3, Vec3p *param4, unk32 param5);
    void func_ov000_020a0110(UnkStruct_PlayerGet_ec *param1);
    void func_ov000_020a0220(void *param1, void *param2);
};

extern UnkStruct_027e0cec *data_027e0cec;
