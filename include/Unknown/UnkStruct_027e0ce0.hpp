#pragma once

#include "global.h"
#include "types.h"

#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"

class UnkStruct_027e0ce0_34 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */

    void func_ov024_020d3d98(unk32 param1, unk32 param2);
    void func_ov024_020d3ee8(unk32 param1, u16 param2, unk32 param3);

    void func_ov110_02185d3c(ItemId itemId);
};

// PlayerManager?
class UnkStruct_027e0ce0 {
public:
    /* 00 */ unk8 mHealth;
    /* 01 */ unk8 mHealthMax;
    /* 02 */ unk8 mUnk_02;
    /* 03 */ unk8 mUnk_03;
    /* 04 */ unk32 *mUnk_04;
    /* 08 */ unk32 *mUnk_08;
    /* 0C */ unk32 *mUnk_0C; // vtable
    /* 10 */ unk32 *mUnk_10;
    /* 14 */ unk32 *mUnk_14;
    /* 18 */ unk32 *mUnk_18;
    /* 1C */ unk32 *mUnk_1C;
    /* 20 */ unk32 *mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ ItemManager *mUnk_28;
    /* 2C */ ItemManager *mUnk_2C; // same as above
    /* 30 */ unk32 *mUnk_30; // ?
    /* 34 */ UnkStruct_027e0ce0_34 *mUnk_34;
    /* 38 */ unk32 *mUnk_38; // pointer to data_027e0478 when on the train
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ unk32 *mUnk_40; // pointer to data_027e0478 when not on the train
    /* 44 */

    Vec3p *func_01fff148(unk32 param1);
    bool func_01fff1a4();

    void func_ov000_0208a318(unk32 param1, unk32 param2, unk32 param3);
    void func_ov000_0208bbd4(unk32 param1, Vec3p *param2, u16 param3);

    void func_ov000_0208bbd4(unk32 param1, Vec3p *param2, void *param3);
};

extern UnkStruct_027e0ce0 *data_027e0ce0;
