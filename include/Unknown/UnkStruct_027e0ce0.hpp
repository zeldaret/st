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

    void func_ov008_020b6a50();

    void func_ov024_020d3d98(unk32 param1, unk32 param2);
    void func_ov024_020d3ee8(unk32 param1, u16 param2, unk32 param3);
    unk32 func_ov024_020d3dcc();

    void func_ov110_02185d3c(ItemId itemId);
};

class UnkStruct_027e0ce0_38_10 {
public:
    void func_ov026_020f4870();
};

class UnkStruct_027e0ce0_38_158 {
public:
    void func_ov026_020dc2d0();
};

class UnkStruct_027e0ce0_38 {
public:
    /* 000 */ STRUCT_PAD(0x00, 0x10);
    /* 010 */ UnkStruct_027e0ce0_38_10 *mUnk_010;
    /* 014 */ STRUCT_PAD(0x14, 0x158);
    /* 158 */ UnkStruct_027e0ce0_38_158 *mUnk_158;

    // data_ov026_0213562c
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
    /* 30 */ unk32 *mUnk_30;       // ?
    /* 34 */ UnkStruct_027e0ce0_34 *mUnk_34;
    /* 38 */ UnkStruct_027e0ce0_38 *mUnk_38; // pointer to data_027e0478 when on the train
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ unk32 *mUnk_40; // pointer to data_027e0478 when not on the train
    /* 44 */

    VecFx32 *func_01fff148(unk32 param1);
    bool func_01fff1a4();

    // overlay 0
    void func_ov000_0208a318(unk32 param1, unk32 param2, unk32 param3);
    void func_ov000_0208bbd4(unk32 param1, VecFx32 *param2, u16 param3);

    void func_ov000_0208bbd4(unk32 param1, VecFx32 *param2, void *param3);

    static UnkStruct_027e0ce0_34 *func_ov000_0205c904();

    // overlay 17
    void func_ov017_020bd69c();
};

extern UnkStruct_027e0ce0 *data_027e0ce0;
