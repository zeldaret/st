#pragma once

#include "FileSelect/FileSelectMain.hpp"
#include "FileSelect/FileSelectUnkDraw.hpp"
#include "Game/GameModeManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkSystem1.hpp"
#include "global.h"
#include "iterator.hpp"
#include "nitro/math.h"
#include "regs.h"
#include "types.h"

extern const unk16 data_ov019_020d1bb0[];
extern "C" void func_ov001_020bd6a8();

// related to UnkStructSub2 but unsure how
class FileSelect_UnkClass7 {
public:
    class Sub5 {
    public:
        u16 one;
        u16 two;
    };

    /* 0000 (vtable) */
    /* 0004 */ UnkSubStruct19 mUnk_0004[30];
    /* 0E14 */ Sub5 mUnk_0E14[30];

    // data_ov019_020d22a8 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
};

class FileSelect_UnkClass2_Sub4_Base : public GameModeManagerBase_104 {
public:
    /* 0000 (vtable) */

    FileSelect_UnkClass2_Sub4_Base() {}

    /* 00 */ virtual ~FileSelect_UnkClass2_Sub4_Base() override {}
};

class FileSelectSubScreen : public FileSelect_UnkClass2_Sub4_Base {
public:
    /* 0000 (base) */
    /* 001C */ unk32 mUnk_001C;
    /* 0020 */ unk32 mUnk_0020;
    /* 0020 */ unk32 mUnk_0024;
    /* 0028 */ u8 mUnk_0028; // bool?
    /* 0028 */ unk8 mUnk_0029;
    /* 0028 */ unk8 mUnk_002A;
    /* 0028 */ unk8 mUnk_002B;
    /* 002C */ UnkStructSub2 mUnk_002C;
    /* 007C */ STRUCT_PAD(0x30, 0xEB8);
    /* 0EB8 */ UnkSystem3 mUnk_0EB8;
    /* 0EC4 */ UnkSystem3 mUnk_0EC4;
    /* 0ED0 */ UnkSystem3 mUnk_0ED0;
    /* 0EDC */ UnkSystem3 mUnk_0EDC;
    /* 0EE8 */ UnkSystem3 mUnk_0EE8;
    /* 0EF4 */ UnkSystem5 mUnk_0EF4;
    /* 0F30 */ UnkSystem5 mUnk_0F30;
    /* 0F6C */ UnkSystem5 mUnk_0F6C;
    /* 0FA8 */ UnkSystem5 mUnk_0FA8;
    /* 0FE4 */ UnkSystem5 mUnk_0FE4;
    /* 1020 */

    FileSelectSubScreen();
    void func_ov019_020cf73c(unk32 param1, unk32 param2);

    // data_ov019_020d22b8 vtable
    /* 00 */ virtual ~FileSelectSubScreen() override {}
    /* 08 */ virtual void vfunc_08(GameModePTMFParam2Struct *param1, TouchControl *pTouchControl) override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;
};

class FileSelectManager : public GameModeManagerBase { // 0x02262dbc
public:
    /* 000 (base) */
    /* 154 */ GameModeManagerBase_104 *mUnk_154;
    /* 158 */ FileSelectMain *mUnk_158;
    /* 15C */ FileSelectSubScreen *mUnk_15C;
    /* 160 */ FileSelectManager_160 *mUnk_160;
    /* 164 */ FileSelectManager_164 *mUnk_164;
    /* 168 */ UnkSystem1_ov019_Derived2 mUnk_168;
    /* 180 */

    // clang-format off
    FileSelectManager(unk32 param1) NO_INLINE :
        mUnk_154(&this->mUnk_104),
        mUnk_158(NULL),
        mUnk_15C(NULL),
        mUnk_160(NULL),
        mUnk_164(NULL) {
        REG_DISPCNT &= 0xFFCFFFEF;
        REG_DISPCNT |= 0x00200010;

        REG_DISPCNT_SUB &= 0xFFCFFFEF;
        REG_DISPCNT_SUB |= 0x00200010;

        this->mUnk_004.func_ov001_020bd734((unk32*)data_ov019_020d1bb0);
        func_ov001_020bd6a8();
    }
    // clang-format on

    void func_ov019_020c5038();
    void func_ov019_020c503c();
    void func_ov019_020c51a8();

    // data_ov019_020d1dc0 vtable
    /* 08 */ virtual ~FileSelectManager() override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2, unk32 param3) override;
    /* 24 */ virtual void vfunc_24() override;
    /* 28 */ virtual void vfunc_28(unk32 param1) override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

    static GameModeManagerBase *Create(unk32 param1);
};

// static initializers classes

class UnkStruct_ov019_020d1d80 {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_ov019_020d1d80(unk32 param1) {
        this->mUnk_00 = param1;
    }
};

class UnkStruct_ov019_020d1e4c {
public:
    /* 00 */ unk16 mUnk_00;
    /* 00 */ u16 mUnk_02;
    /* 04 */ u16 mUnk_04[2];
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ Vec2s mUnk_1C;
    /* 20 */ unk32 mUnk_20;
};

class UnkStruct_ov019_020d1e94 {
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
    /* 24 */
};

class UnkStruct_ov019_020d1e70 {
public:
    /* 00 */ Vec2s mUnk_00;
    /* 04 */ Vec2s mUnk_04;
    /* 08 */ Vec2s mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ Vec2s mUnk_10;
    /* 14 */ Vec2s mUnk_14;
    /* 18 */ Vec2s mUnk_18;
    /* 1C */ Vec2s mUnk_1C;
    /* 20 */ Vec2s mUnk_20;
    /* 24 */

    static UnkStruct_ov019_020d1e4c data_ov019_020d1e4c;
    static UnkStruct_ov019_020d1e94 data_ov019_020d1e94;

    UnkStruct_ov019_020d1e70() {
        this->mUnk_00.x = 0x80;
        this->mUnk_00.y = 0x60;

        data_ov019_020d1e94.mUnk_00 = 0x80;
        data_ov019_020d1e94.mUnk_02 = 0x60;

        this->mUnk_20.x = 0x00;
        this->mUnk_20.y = 0x100;

        this->mUnk_1C.x = 0x00;
        this->mUnk_1C.y = -0x1E;

        this->mUnk_18.x = 0x00;
        this->mUnk_18.y = 0x64;

        this->mUnk_14.x = 0x00;
        this->mUnk_14.y = 0x64;

        this->mUnk_10.x = 0x00;
        this->mUnk_10.y = 0x32;

        data_ov019_020d1e4c.mUnk_1C.x = 0x00;
        data_ov019_020d1e4c.mUnk_1C.y = 0x100;

        this->mUnk_08.x = 0x00;
        this->mUnk_08.y = 0x100;

        this->mUnk_04.x = 0x00;
        this->mUnk_04.y = 0x32;

        this->mUnk_00.x = 0x00;
        this->mUnk_00.y = 0x32;

        data_ov019_020d1e4c.mUnk_10 = 0x20003;
        this->mUnk_0C               = 0x20004;
    }
};

extern const UnkStruct_ov019_020d1e70 data_ov019_020d1e70;
