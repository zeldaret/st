#pragma once

#include "global.h"
#include "types.h"

#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"
#include "nitro/math.h"

class UnkStruct_ov000_0208f820_14 {
public:
    /* 00 */ unk8 mUnk_00[0x6C];
    /* 6c */ unk32 mUnk_6c;
    /* 70 */ u16 mUnk_70;
    /* 72 */ unk16 mUnk_72;
    /* 74 */ unk32 mUnk_74;
    /* 78 */ unk32 mUnk_78;
    /* 7c */ unk32 mUnk_7c;
    /* 80 */ unk32 mUnk_80;
    /* 84 */ unk32 mUnk_84;
    /* 88 */ unk32 mUnk_88;
    /* 8c */ unk32 mUnk_8c;
    /* 90 */
};

class UnkStruct_PlayerGet_64 {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_PlayerGet_64(unk32 *param1, unk32 param2);
    ~UnkStruct_PlayerGet_64();

    void func_ov000_0208a100();
};

class UnkStruct_ov000_0208f820_28_98 {
public:
    /* 00 */ unk8 mUnk_00[0x38];
    /* 38 */ UnkStruct_PlayerGet_64 mUnk_38;
    /* 3c */ unk32 mUnk_3c;
    /* 40 */ u16 mUnk_40;

    void func_ov093_0216f76c(Vec3p *param1, unk32 param2);
};

class UnkStruct_ov000_0208f820_28 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x38);
    /* 38 */ UnkStruct_PlayerGet_64 mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ u16 mUnk_40;
    /* 42 */ STRUCT_PAD(0x42, 0x48);
    /* 48 */ unk32 mUnk_48;
    /* 48 */ unk32 mUnk_4C;
    /* 48 */ unk32 mUnk_50;
    /* 54 */ ItemManager *pItemManager;
    /* 58 */ STRUCT_PAD(0x58, 0x94);
    /* 94 */ unk32 mUnk_94;
    /* 98 */ UnkStruct_ov000_0208f820_28_98 *mUnk_98;

    void func_ov000_0208cf20(unk32 param1, unk32 param2);
    void func_ov000_0208d12c();
    void func_ov058_02152a24();
};

class UnkStruct_ov000_0208f820_2c {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk16 mUnk_14;
    /* 16 */ unk16 mUnk_16;
    /* 18 */ STRUCT_PAD(0x18, 0x26);
    /* 26 */ unk16 mUnk_26;
    /* 28 */ STRUCT_PAD(0x28, 0x58);
    /* 58 */ unk16 mUnk_58;
    /* 5A */ STRUCT_PAD(0x5A, 0x9C);
    /* 9C */ unk32 mUnk_9C;
    /* A0 */ STRUCT_PAD(0xA0, 0x148);
    /* 148 */ u32 mUnk_148;
    /* 14C */ unk32 mUnk_14C;
    /* 150 */ unk32 mUnk_150;
};

class UnkStruct_ov000_0208f820_30_10 {
public:
    void func_ov031_020e076c();
};

class UnkStruct_ov000_0208f820_30 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ UnkStruct_ov000_0208f820_30_10 *mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1c */ unk32 mUnk_1c;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ STRUCT_PAD(0x28, 0x68);
    /* 68 */ unk32 mUnk_68;
    /* 6C */ unk32 mUnk_6C;
    /* 70 */ u32 mUnk_70;

    void func_ov000_020921e4(unk32 param1);
    void func_ov000_020936ec();
    void func_ov000_02093a04();
};

class UnkStruct_ov000_0208f820_40 {
public:
    /* 00 */ u16 mUnk_00;
    /* 00 */ s16 mUnk_02;
};

class UnkStruct_PlayerGet_vfunc_0c_param1 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ Vec3p mUnk_10;
    /* 1c */ ItemId mUnk_1c;
};

class UnkStruct_ov000_0208f820_24 {
public:
    /* 00 */ unk8 mUnk_00[0x24];
    /* 24 */ unk8 mUnk_24;
    /* 25 */ unk8 mUnk_25;
    /* 26 */ STRUCT_PAD(0x26, 0x78);
    /* 78 */ void **mUnk_78;
    /* 7C */ STRUCT_PAD(0x7C, 0x94);
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9C */ unk32 mUnk_9C;
    /* A0 */ STRUCT_PAD(0xA0, 0xFE);
    /* FE */ unk8 mUnk_FE;
    /* FF */ unk8 mUnk_FF;
    /* 100 */ unk32 mUnk_100;
    /* 104 */ u16 mUnk_104;
};

class UnkStruct_ov000_0208f820_04 {
public:
    /* 00 */ u8 mUnk_00[4];
    /* 04 */ u8 mUnk_04[4];
    /* 08 */ unk32 mUnk_08;
    /* 0c */ ItemId mItemId;
    /* 14 */

    UnkStruct_ov000_0208f820_04(unk32 param1, unk32 param2, unk32 param3, ItemId itemId) {
        *(u32 *) this->mUnk_00 = param1;
        *(u32 *) this->mUnk_04 = param2;
        this->mUnk_08          = param3;
        this->mItemId          = itemId;
    }

    UnkStruct_ov000_0208f820_04() {}
};

class UnkStruct_ov000_0208f820 {
public:
    /* 00 (vtable) */
    /* 04 */ UnkStruct_ov000_0208f820_04 mUnk_04;
    /* 14 */ UnkStruct_ov000_0208f820_14 *mUnk_14;
    /* 18 */ unk8 mUnk_18;
    /* 19 */ unk8 mUnk_19;
    /* 1a */ unk8 mUnk_1a;
    /* 1b */ unk8 mUnk_1b;
    /* 1c */ unk32 mUnk_1c;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ UnkStruct_ov000_0208f820_24 *mUnk_24;
    /* 28 */ UnkStruct_ov000_0208f820_28 *mUnk_28;
    /* 2c */ UnkStruct_ov000_0208f820_2c *mUnk_2c;
    /* 30 */ UnkStruct_ov000_0208f820_30 *mUnk_30;
    /* 34 */ Vec3p *mUnk_34;
    /* 38 */ Vec3p *mUnk_38;
    /* 3c */ Vec3p *mUnk_3C;
    /* 40 */ UnkStruct_ov000_0208f820_40 *mUnk_40;
    /* 44 */ unk32 *mUnk_44;
    /* 48 */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual ~UnkStruct_ov000_0208f820();
    /* 0c */ virtual void vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) = 0;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2)                  = 0;
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(unk32 param1, unk32 param2, unk32 param3);
    /* 1c */ virtual bool vfunc_1c(Vec3p *param1);
    /* 20 */

    UnkStruct_ov000_0208f820();

    bool func_ov000_020914b0(unk32 param1, Vec3p *param2, unk32 param3);
    bool func_ov000_02091e68(unk32 param1);
};
