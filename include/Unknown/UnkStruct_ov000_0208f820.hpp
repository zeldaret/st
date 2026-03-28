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
};

class UnkStruct_ov000_0208f820_28 {
public:
    /* 00 */ unk8 mUnk_00[0x54];
    /* 54 */ ItemManager *pItemManager;
    /* 58 */ unk8 mUnk_58[0x98 - 0x58];
    /* 98 */ UnkStruct_ov000_0208f820_28_98 *mUnk_98;

    void func_ov058_02152a24();
};

class UnkStruct_ov000_0208f820_2c {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk8 mUnk_14[0x58 - 0x14];
    /* 58 */ unk16 mUnk_58;
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
    /* 28 */ unk8 mUnk_28[0x70 - 0x28];
    /* 70 */ u32 mUnk_70;

    void func_ov000_020921e4(unk32 param1);
    void func_ov000_020936ec();
    void func_ov000_02093a04();
};

class UnkStruct_ov000_0208f820_38 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
};

class UnkStruct_ov000_0208f820_3c {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
};

class UnkStruct_ov000_0208f820_40 {
public:
    /* 00 */ unk16 mUnk_00;
};

class UnkStruct_PlayerGet_vfunc_0c_param1 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0c */ unk32 mUnk_0c;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1c */ ItemId mUnk_1c;
};

class UnkStruct_ov000_0208f820_24 {
public:
    /* 00 */ unk8 mUnk_00[0x24];
    /* 24 */ unk8 mUnk_24;
    /* 25 */ unk8 mUnk_25;
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

class UnkStruct_ov000_0208f820 : public SysObject {
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
    /* 38 */ UnkStruct_ov000_0208f820_38 *mUnk_38;
    /* 3c */ UnkStruct_ov000_0208f820_3c *mUnk_3c;
    /* 40 */ UnkStruct_ov000_0208f820_40 *mUnk_40;
    /* 44 */ unk32 *mUnk_44;
    /* 48 */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual ~UnkStruct_ov000_0208f820();
    /* 0c */ virtual void vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1);
    /* 10 */ virtual void vfunc_10(unk32 param1);
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(unk32 param1, unk32 param2, unk32 param3);
    /* 1c */ virtual void vfunc_1c();
    /* 20 */

    UnkStruct_ov000_0208f820();
};
