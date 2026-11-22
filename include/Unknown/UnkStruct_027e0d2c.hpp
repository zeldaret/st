#pragma once

#include "RefStruct.hpp"
#include "math.hpp"
#include "types.h"

class UnkStruct_ItemManager_20_04;

class UnkStruct_027e0d2c : public AutoInstance<UnkStruct_027e0d2c> {
public:
    /* 00 */ UnkStruct_ItemManager_20_04 *mUnk_00;
    /* 04 */

    UnkStruct_027e0d2c(UnkStruct_ItemManager_20_04 *param1) :
        mUnk_00(param1) {}

    // overlay 31
    void func_ov031_020d95b4();
    void func_ov031_020d95c8(RefStruct ref);
    bool func_ov031_020d95ec(RefStruct ref);
    bool func_ov031_020d962c(VecFx32 *param1, unk32 param2, VecFx32 *param3, RefStruct *param4);

    static void Create(UnkStruct_ItemManager_20_04 *param1);
    static void func_ov031_020d961c(unk32 *param1, UnkStruct_027e0d2c *thisx);

    // overlay 101
    static void Destroy();
};

extern UnkStruct_027e0d2c *data_027e0d2c;
