#pragma once

#include "Item/ItemManager.hpp"
#include "types.h"

#include <nitro/fx.h>

class UnkStruct_027e0d30 : public AutoInstance<UnkStruct_027e0d30> {
public:
    /* 00 */ UnkStruct_ItemManager_20_08 *mUnk_00;
    /* 04 */

    UnkStruct_027e0d30(UnkStruct_ItemManager_20_08 *param1) :
        mUnk_00(param1) {}

    // overlay 31
    unk16 func_ov031_020d9674();
    void func_ov031_020d9684(u16 param1, VecFx32 *param2);

    static void Create(UnkStruct_ItemManager_20_08 *param1);

    // overlay 101
    static void Destroy();
};

extern UnkStruct_027e0d30 *data_027e0d30;
