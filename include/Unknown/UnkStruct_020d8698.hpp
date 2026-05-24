#pragma once

#include "Game/GameModeManager.hpp"
#include "Item/Item.hpp"
#include "Unknown/Common.hpp"
#include "iterator.hpp"
#include "types.h"

struct UnkStructIterator1 {
    /* 00 */ unk32 mUnk_00;

    UnkStructIterator1() {
        this->mUnk_00 = 0;
    }
    ~UnkStructIterator1() {}
};

typedef Iterator<UnkStructIterator1> UnkIterator1;

class UnkStruct_020d8698_1C {
public:
    /* 000 */ UnkIterator1 mUnk_000;
    /* 008 */ u8 mUnk_008;
    /* 009 */ u8 mUnk_009;
    /* 00A */ u8 mUnk_00A;
    /* 00B */ unk8 mUnk_00B;
    /* 000 */ UnkStruct_ov019_020d24c8_28_258 mUnk_00C;
    /* 018 */ UnkSubStruct19 mUnk_024;
    /* 090 */ UnkSubStruct19 mUnk_09C;
    /* 108 */ UnkSubStruct19 mUnk_114;
    /* 180 */ UnkSubStruct19 mUnk_18C;
    /* 1F8 */ UnkSubStruct19 mUnk_204;
    /* 270 */ UnkSubStruct19 mUnk_27C;
    /* 2E8 */ UnkSubStruct19 mUnk_2F4;
    /* 360 */ UnkSubStruct19 mUnk_36C;
    /* 3E4 */ UnkSubStruct19 mUnk_3E4[2];
    /* 4D4 */ u8 mUnk_4D4;
    /* 4D5 */ u8 mUnk_4D5;
    /* 4D6 */ unk8 mUnk_4D6; // pad?
    /* 4D7 */ unk8 mUnk_4D7; // pad?
    /* 4D8 */

    unk32 GetIterValue(int index) {
        return this->mUnk_000.Get(index).mUnk_00;
    }

    void SetIterValue(u32 index, u32 value) {
        this->mUnk_000.Get(index).mUnk_00 = value;
    }

    UnkStruct_020d8698_1C();

    void func_ov024_020cd768();
    void func_ov024_020cd774();
    void func_ov024_020cd9f0();
    void func_ov024_020cdaac();
    void func_ov024_020cdd3c(u8 param1, u8 param2);
    void func_ov024_020cde54(u8 param1);
    void func_ov024_020cdec8();
    void func_ov024_020cdfd8();
    u8 func_ov024_020ce218();
    u8 func_ov024_020ce260();
    u32 func_ov024_020ce2a8();
};

class UnkStruct_020d8698_24_5C_Base {
public:
    /* 00 */ Vec2s mUnk_00;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */ UnkStruct_ov019_020d24c8_28_258_00_Derived1 mUnk_08[10];
    /* 80 */ unk32 mUnk_80;
    /* 84 */ unk32 mUnk_84;
    /* 88 */ unk32 mUnk_88;
    /* 8C */ unk32 mUnk_8C;
    /* 90 */ unk32 mUnk_90;
    /* 94 */ unk32 mUnk_94;
    /* 98 */

    UnkStruct_020d8698_24_5C_Base(unk32 param1, u16 *param2, u16 param3, unk32 param4);

    void func_ov000_02065884();
    void func_ov000_0206590c(u16 param1, unk32 param2);
    void func_ov000_02065930();
    void func_ov000_02065988(u16 param1, u16 *param2);
    void func_ov000_020659d0(unk8 *param1, UnkDataStruct1 *param2);
};

class UnkStruct_020d8698_24_5C : public UnkStruct_020d8698_24_5C_Base {
public:
    /* 00 (base) */
    /* 98 */ unk32 mUnk_98;
    /* 98 */ unk32 mUnk_9C;
    /* A0 */

    UnkStruct_020d8698_24_5C(unk32 param1, u16 *param2, u16 param3, unk32 param4);

    void func_ov000_02065b48(unk32 param1, unk32 param2);
    void func_ov000_02065b8c();
};

class UnkStruct_020d8698_24 {
public:
    /* 000 */ UnkStruct_ov019_020d24c8_28_258 mUnk_000;
    /* 018 */ UnkSystem2_UnkSubSystem9 mUnk_018;
    /* 05C */ UnkStruct_020d8698_24_5C mUnk_05C;
    /* 0FC */ Vec2s mUnk_0FC;
    /* 100 */ unk32 mUnk_100;
    /* 104 */ bool mUnk_104;
    /* 105 */ bool mUnk_105;
    /* 106 */ Vec2s mUnk_106;
    /* 10C */

    UnkStruct_020d8698_24();

    void func_ov024_020ce518();
    void func_ov024_020ce570();
    void func_ov024_020ce5cc();
    void func_ov024_020ce88c(unk8 *param1);
    void func_ov024_020ce990(bool param1, bool param2);
    void func_ov024_020ce9ac();
};

class UnkStruct_020d8698_2C_198 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x80);
    /* 80 */
};

class UnkStruct_020d8698_2C_14C {
public:
    /* 00 */ wchar_t mUnk_00[31]; // path to a ncgr file
    /* 40 */ unk32 mUnk_40;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ unk32 mUnk_48;
    /* 4C */

    UnkStruct_020d8698_2C_14C();

    void func_ov000_02060c50(const wchar_t *path, UnkStruct_020d8698_2C_198 *param2, unk32 param3,
                             UnkStruct_ov019_020d24c8_28_258_00 *param4); // is param3 sizeof(param2)?
    void func_ov000_02060c7c(unk32 param1);
    void func_ov000_02060d7c(unk32 param1, u16 param2);
    void func_ov000_02060db8(u16 param1);
    void func_ov000_02060e3c(unk32 param1, const char *filename, wchar_t *param3);
};

class UnkStruct_020d8698_2C {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ UnkStruct_ov019_020d24c8_28_258 mUnk_004;
    /* 01C */ UnkStruct_ov019_020d24c8_28_258 mUnk_01C;
    /* 034 */ UnkStruct_ov019_020d24c8_28_258 mUnk_034;
    /* 04C */ UnkSystem2_UnkSubSystem9 mUnk_04C;
    /* 090 */ UnkStruct_020d8698_24_5C mUnk_090;
    /* 130 */ Vec2s mUnk_130;
    /* 134 */ Vec2s mUnk_134;
    /* 138 */ Vec2s mUnk_138;
    /* 13C */ unk32 mUnk_13C;
    /* 140 */ bool mUnk_140;
    /* 141 */ bool mUnk_141;
    /* 142 */ bool mUnk_142;
    /* 143 */ bool mUnk_143;
    /* 144 */ unk16 mUnk_144;
    /* 144 */ bool mUnk_146;
    /* 148 */ unk16 mUnk_148;
    /* 14A */ unk16 mUnk_14A;
    /* 14C */ UnkStruct_020d8698_2C_14C mUnk_14C;
    /* 198 */ UnkStruct_020d8698_2C_198 mUnk_198;
    /* 218 */ Vec2s mUnk_218;
    /* 21C */

    UnkStruct_020d8698_2C();

    void func_ov024_020ced54();
    void func_ov024_020ceda8();
    void func_ov024_020cee58();
    void func_ov024_020cee64();
    void func_ov024_020cee84();
    void func_ov024_020cef58();
    void func_ov024_020cf2b8(unk8 *param1);
    void func_ov024_020cf494(bool param1);
    void func_ov024_020cf4c4();
    void func_ov024_020cf514();
    void func_ov024_020cf53c(bool param1);
    void func_ov024_020cf570();
    void func_ov024_020cf584();
    void func_ov024_020cf5a8(bool param1);
};

class UnkStruct_020d8698_34 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x94);
    /* 94 */

    UnkStruct_020d8698_34();

    void func_ov024_020cf698();
    void func_ov024_020cf6e4();
    void func_ov024_020cf724();
};

class UnkStruct_020d8698_3C {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x30);
    /* 30 */

    UnkStruct_020d8698_3C();

    void func_ov024_020cf82c();
    void func_ov024_020cf888();
    void func_ov024_020cf88c();
};

class UnkStruct_020d8698_44 : public LinkList<UnkStruct_020d8698_44> {
public:
    /* 008 */ STRUCT_PAD(0x0C, 0x18B);
    /* 18B */ bool mUnk_18B;
    /* 18C */ STRUCT_PAD(0x18C, 0x52C);
    /* 52C */

    UnkStruct_020d8698_44(); // overlay 31

    /* 00 */ virtual ~UnkStruct_020d8698_44();
    /* 08 */

    void func_ov031_0210eeb4();
    void func_ov031_0210f7e4(ItemFlag itemFlag, bool param2);
    void func_ov031_0210f814();
};

class UnkStruct_020d8698 : public GameModeManagerBase_104, AutoInstance<UnkStruct_020d8698> {
public:
    /* 000 (base) */
    /* 01C */ UnkStruct_020d8698_1C *mUnk_01C;
    /* 020 */ bool mUnk_020;
    /* 024 */ UnkStruct_020d8698_24 *mUnk_024;
    /* 028 */ bool mUnk_028;
    /* 02C */ UnkStruct_020d8698_2C *mUnk_02C;
    /* 030 */ bool mUnk_030;
    /* 034 */ UnkStruct_020d8698_34 *mUnk_034;
    /* 038 */ bool mUnk_038;
    /* 03C */ UnkStruct_020d8698_3C *mUnk_03C;
    /* 040 */ bool mUnk_040;
    /* 044 */ UnkStruct_020d8698_44 *mUnk_044;
    /* 048 */ bool mUnk_048;

    UnkStruct_020d8698();

    /* 00 */ virtual ~UnkStruct_020d8698();
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl);
    /* 10 */ virtual void vfunc_10(unk8 *param1);

    void func_ov024_020cd094();
    void func_ov024_020cd150();
    void func_ov024_020cd348(u8 param1, u8 param2);
    void func_ov024_020cd358(u8 param1);
    void func_ov024_020cd368(bool param1, bool param2);
    void func_ov024_020cd3a4();
    void func_ov024_020cd3d0();
    void func_ov024_020cd3e0(bool param1);
    void func_ov024_020cd3f0(bool param1);
    void func_ov024_020cd400();
    void func_ov024_020cd410();
    void func_ov024_020cd420();
    void func_ov024_020cd458(ItemFlag itemFlag, bool param2);
    void func_ov024_020cd4a4(bool param1);
    void func_ov024_020cd4e4(u16 param1, bool param2);
    bool func_ov024_020cd5c0(u16 param1);
    bool func_ov024_020cd604();

    static UnkStruct_020d8698 *Create();
};

extern UnkStruct_020d8698 *data_ov024_020d8698;
