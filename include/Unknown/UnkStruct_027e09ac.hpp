#pragma once

#include "global.h"
#include "types.h"
#include <nitro/mi.h>

#include "math.hpp"

struct UnkStruct_027e09ac_Base_00 {
    /* 00 */ unk16 mUnk_00[2];
    /* 04 */ unk16 mUnk_04[3];
    /* 0A */ unk16 mUnk_0A;
    /* 0C */ unk32 mUnk_0C;
};

class UnkStruct_027e09ac_Base {
public:
    /* 000 */ UnkStruct_027e09ac_Base_00 mUnk_000;
    /* 010 */ bool mUnk_010;
    /* 011 */ unk8 mUnk_011; // pad?
    /* 012 */ unk8 mUnk_012; // pad?
    /* 013 */ unk8 mUnk_013; // pad?
    /* 014 */

    UnkStruct_027e09ac_Base();
};

class UnkStruct_027e09ac_14 {
public:
    /* 00 */ u16 mUnk_00;
    /* 02 */ u16 mUnk_02;
    /* 04 */ u16 mUnk_04;
    /* 06 */ u16 mUnk_06;
    /* 08 */ u16 mUnk_08;
    /* 0A */ u16 mUnk_0A;
    /* 0C */ u16 mUnk_0C;
    /* 0E */ u16 mUnk_0E;
    /* 10 */ u16 mUnk_10;
    /* 12 */ u16 mUnk_12;
    /* 14 */ u16 mUnk_14;
    /* 16 */ u16 mUnk_16;
    /* 18 */ u16 mUnk_18;
    /* 1A */ u16 mUnk_1A;
    /* 1C */ u16 mUnk_1C;
    /* 1E */ u16 mUnk_1E;
    /* 20 */ u16 mUnk_20;
    /* 22 */ u16 mUnk_22;
    /* 24 */ u16 mUnk_24;
    /* 26 */ u16 mUnk_26;
    /* 28 */ u16 mUnk_28;
    /* 2A */ u16 mUnk_2A[10];
    /* 3E */ u16 mUnk_3E;
    /* 40 */ u32 mUnk_40[8];
    /* 60 */ u16 mUnk_60;
    /* 62 */ u16 mUnk_62;
    /* 64 */ u16 mUnk_64;
    /* 66 */ u16 mUnk_66;
    /* 68 */

    void func_ov000_02071f98();
};

class UnkStruct_027e09ac : public AutoInstance<UnkStruct_027e09ac>, public UnkStruct_027e09ac_Base {
public:
    /* 000 (base) */
    /* 014 */ UnkStruct_027e09ac_14 mUnk_014;
    /* 07C */ UnkStruct_027e09ac_14 mUnk_07C; //! TODO: type unsure but the size is consistent with the gap
    /* 0E4 */ UnkStruct_027e09ac_14 mUnk_0E4;
    /* 14C */ u16 mUnk_14C;
    /* 14E */ u16 mUnk_14E;
    /* 150 */ s16 mUnk_150;
    /* 152 */ s16 mUnk_152;
    /* 154 */ unk16 mUnk_154;
    /* 156 */ bool mUnk_156;
    /* 157 */ unk8 mUnk_157; // pad?
    /* 158 */

    UnkStruct_027e09ac();
    ~UnkStruct_027e09ac();

    // overlay 0
    void func_ov000_020726f0(u16 param1, unk32 param2, unk32 param3);
    void func_ov000_020729c4(UnkStruct_027e09ac_14 *param1, u16 param2, u16 param3, s16 param4, s16 param5);

    // overlay 1
    void func_ov001_020bec8c();
    void func_ov001_020bebb8();

    static UnkStruct_027e09ac *Create();
    static void Destroy();
};

extern UnkStruct_027e09ac *data_027e09ac;
