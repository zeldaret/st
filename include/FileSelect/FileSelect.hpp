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

class UnkSubStruct5 {
public:
    UnkSubStruct5(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6);
    ~UnkSubStruct5();

    virtual void vfunc_00();
};

class UnkSubStruct6 {
public:
    UnkSubStruct6();
    ~UnkSubStruct6();
};

class UnkSubStruct8 {
public:
    /* 00 (vtable) */
    /* 04 */ void *ptr;
    /* 14 */

    UnkSubStruct8();

    virtual void vfunc_00();
};

class UnkStructSub2 {
public:
    UnkStructSub2();

    virtual void vfunc_00();
    virtual void vfunc_04();
};

class UnkStructSub4 {
public:
    /* 00 */ unk8 mUnk_00[0x18];
    /* 18 */ unk32 mUnk_0018;
    /* 1C */ unk32 mUnk_001C;
    /* 20 */ unk32 mUnk_0020;
    /* 20 */ unk32 mUnk_0024;
    /* 28 */ u8 mUnk_0028; // bool?
    /* 28 */ unk8 mUnk_0029;
    /* 28 */ unk8 mUnk_002A;
    /* 28 */ unk8 mUnk_002B;
    /* 2C */ UnkStructSub2 mUnk_002C;
    /* 30 */ STRUCT_PAD(0x30, 0x5C);
    /* 5C */ unk16 mUnk_5C;
    /* 5C */ unk16 mUnk_5E;
    /* 60 */ STRUCT_PAD(0x60, 0x6E);
    /* 6E */ unk8 mUnk_6E;
    /* 6F */ unk8 mUnk_6F;
    /* 70 */ unk32 mUnk_70;
    /* 74 */ unk16 mUnk_74;
    /* 76 */ unk16 mUnk_76;
    /* 78 */

    void func_ov000_02060b64(void);
};

// related to UnkStructSub2 but unsure how
class FileSelect_UnkClass7 {
public:
    class Sub5 {
    public:
        u16 one;
        u16 two;
    };

    /* 0000 (vtable) */
    /* 0004 */ UnkStructSub4 mUnk_0004[30];
    /* 0E14 */ Sub5 mUnk_0E14[30];

    // data_ov019_020d22a8 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
};

class FileSelect_UnkClass2_Sub4_Base : public GameModeManagerBase_104 {
public:
    /* 0000 (vtable) */

    FileSelect_UnkClass2_Sub4_Base() {};

    /* 00 */ virtual ~FileSelect_UnkClass2_Sub4_Base() {}
    // /* 08 */ virtual void vfunc_08();
    // /* 0C */ virtual void vfunc_0C();
    // /* 10 */ virtual void vfunc_10();
    // /* 14 */ virtual void vfunc_14();
    // /* 18 */ virtual void vfunc_18(void);
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
    /* 00 */ virtual ~FileSelectSubScreen() {}
    /* 08 */ virtual void vfunc_08();
    /* 10 */ virtual void vfunc_10();
    // /* 14 */ virtual void vfunc_14();
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

//! TODO: temp
extern "C" {
unk32 func_01ffb428(unk32, unk32);

void func_020166cc(void *param1, void *param2);
// void func_0200a7b0(unk32 param1, void *param2, void *param3, void *param4, unk32 param5, unk32 param6, unk32 param7,
//                     unk32 param8);
void func_0201e8d4(void *param1, void *param2);
void func_0201f2cc(void *param1);
void func_020249d4(void *pReg, unk32 param1, unk32 param2, unk32 param3, unk32 param4);
void func_020275e8();

void func_ov000_02062e44(void *param1, void *param2);
unk8 func_ov000_02070164(void *); //! TODO: turn to a class

//! TODO: conflict between UnkStructSub4, UnkStructSub4_2 and UnkStructSub19
unk32 func_ov000_020609c4(void *thisx);
unk32 func_ov000_02060af8(void *thisx);
void func_ov000_0206082c(void *thisx, unk32 param1, unk32 param2);
void func_ov000_020623d8(void *param1, unk32 param2);

void func_ov001_020bd6a8();
void func_ov001_020be054();
void func_ov001_020be0d8();
void func_ov001_020be0ec();

GameModeManagerBase_104 *func_ov003_020b6520(void *param1, void *param2);
};

// static initializers classes

class UnkStruct_ov019_020d215c {
public:
    /* 00 */ Vec2s mUnk_00;
    /* 04 */ Vec2s mUnk_04;
    /* 08 */ Vec2s mUnk_08;
    /* 0C */ Vec2s mUnk_0C;
    /* 10 */ Vec2s mUnk_10;
    /* 14 */
};

class UnkStruct_ov019_020d2170 {
public:
    /* 14 */ Vec2s_cpp mUnk_00;
    /* 18 */ Vec2s_cpp mUnk_04;
    /* 1C */ Vec2s_cpp mUnk_08;
    /* 20 */ Vec2s_cpp mUnk_0C;
    /* 24 */ Vec2s_cpp mUnk_10;
    /* 28 */ Vec2s_cpp mUnk_14;
    /* 2C */

    static UnkStruct_ov019_020d215c data_ov019_020d215c;

    UnkStruct_ov019_020d2170() {
        data_ov019_020d215c.mUnk_04.x = 0;
        data_ov019_020d215c.mUnk_04.y = -0x1E;

        data_ov019_020d215c.mUnk_08.x = 0;
        data_ov019_020d215c.mUnk_08.y = 0x100;

        data_ov019_020d215c.mUnk_00.x = -0x100;
        data_ov019_020d215c.mUnk_00.y = 0;

        this->mUnk_14.x = 0;
        this->mUnk_14.y = 0x100;

        this->mUnk_10.x = -0x100;
        this->mUnk_10.y = 0;

        this->mUnk_0C.x = 0;
        this->mUnk_0C.y = 100;

        this->mUnk_08.x = -0x100;
        this->mUnk_08.y = 0;

        this->mUnk_04.x = 0;
        this->mUnk_04.y = 100;

        this->mUnk_00.x = -0x100;
        this->mUnk_00.y = 0;
    }
};

class UnkStruct_ov019_020d1d80 {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_ov019_020d1d80(unk32 param1) {
        this->mUnk_00 = param1;
    }
};

class UnkStruct_ov019_020d24c0 {
public:
    Vec2s mUnk_00;
    Vec2s mUnk_04;

    UnkStruct_ov019_020d24c0(s16 x1, s16 y1, s16 x2, s16 y2) {
        this->mUnk_04.x = x2;
        this->mUnk_04.y = y2;

        this->mUnk_00.x = x1;
        this->mUnk_00.y = y1;
    }
};

// extern UnkStruct_ov019_020d24c0 data_ov019_020d24c0;

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

class UnkStruct_ov019_020d2248 {
public:
    s16 mUnk_00;
    Vec2s mUnk_02;
    Vec2s mUnk_06;
    Vec2s mUnk_0A;
    s16 mUnk_0E;
    Vec2s mUnk_10;

    UnkStruct_ov019_020d2248(s16 x1, s16 y1, s16 x2, s16 y2) {
        this->mUnk_10.x = x2;
        this->mUnk_10.y = y2;

        this->mUnk_02.x = x1;
        this->mUnk_02.y = y1;
    }
};
