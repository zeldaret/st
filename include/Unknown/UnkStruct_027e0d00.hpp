#pragma once

#include "global.h"
#include "types.h"

struct UnkStruct_027e0d00_20 {
    /* 00 */ STRUCT_PAD(0x00, 0x50);
    /* 50 */ void *mUnk_50; // pointer to MDL0 (from NSBMD)
    /* 54 */ STRUCT_PAD(0x54, 0xB0);
    /* B0 */ unk32 mUnk_B0;
};

class UnkStruct_027e0d00 : public AutoInstance<UnkStruct_027e0d00> {
public:
    /* 000 */ unk32 mUnk_000[4];
    /* 010 */ unk32 mUnk_010[4];
    /* 020 */ UnkStruct_027e0d00_20 *mUnk_020[4][8];
    /* 0A0 */ unk32 mUnk_0A0[4];
    /* 0B0 */ unk32 mUnk_0B0[12];
    /* 0E0 */ unk32 mUnk_0E0;
    /* 0E4 */ unk32 mUnk_0E4[4];
    /* 0F4 */ unk32 mUnk_0F4;
    /* 0F8 */ unk32 mUnk_0F8;
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */ unk32 mUnk_100;
    /* 104 */ unk32 mUnk_104;
    /* 108 */

    UnkStruct_027e0d00();
    ~UnkStruct_027e0d00();

    void func_ov024_020d4cc0(unk32 type);
    void func_ov024_020d4d10();

    static UnkStruct_027e0d00 *func_ov000_0205c944();
};

extern UnkStruct_027e0d00 *data_027e0d00;
