#pragma once

#include "global.h"
#include "types.h"
#include <nitro/math.h>

class UnkStruct_027e0998 {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_027e0998();
    ~UnkStruct_027e0998();

    /* 00 */ virtual bool vfunc_00(Vec3p *pPos, void *param2, void *param3);
    /* 04 */

    void func_ov000_02061760();
    unk32 func_ov000_02061a70();
};

extern UnkStruct_027e0998 *data_027e0998;
