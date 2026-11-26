#pragma once

#include "RefStruct.hpp"
#include "types.h"

#include <nitro/fx.h>

class UnkStruct_ItemManager_20_00;

class UnkStruct_027e0d38 : public AutoInstance<UnkStruct_027e0d38> {
public:
    /* 00 */ UnkStruct_ItemManager_20_00 *mUnk_00;

    UnkStruct_027e0d38(UnkStruct_ItemManager_20_00 *param1) :
        mUnk_00(param1) {}

    // overlay 26
    unk32 func_ov026_020d9c14(RefStruct ref, VecFx32 *pPos, VecFx32 *pVel);

    // overlay 31
    bool func_ov031_020d9bec();
    bool func_ov031_020d9c04(unk32 param1, unk32 param2, bool param3);
    void func_ov031_020d9c14(RefStruct ref, VecFx32 *param2, VecFx32 *param3);
    bool func_ov031_020d9c34(bool param1, VecFx32 *param2);
    void func_ov031_020d9c44(u16 param1);

    static void Create(UnkStruct_ItemManager_20_00 *param1);

    // overlay 101
    static void Destroy();
};

extern UnkStruct_027e0d38 *data_027e0d38;
