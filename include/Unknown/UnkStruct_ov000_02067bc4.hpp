#pragma once

#include "Game/GameModeManager.hpp"
#include "Item/Item.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_02049b18.hpp"
#include "global.h"
#include "nitro/button.h"
#include "types.h"

class UnkStruct_ov000_02067bc4_Sub1 {
public:
    unk32 func_02022128(void);
};

class UnkStruct_ov000_02067bc4_Sub2 {
public:
    unk8 mUnk_00[0x10];
    unk32 mUnk_10;
    unk8 mUnk_14[0x40];
    unk32 mUnk_54;
};

class UnkStruct_ov000_02067bc4 {
public:
    class UnkStruct1 {
    public:
        unk16 mUnk_00;
        unk16 mUnk_02;
        unk32 mUnk_04;
        unk32 mUnk_08;
        unk8 mUnk_0C;
        unk8 mUnk_0D;
        unk8 mUnk_0E;
        unk8 mUnk_0F;

        UnkStruct1(unk32 param1) {
            mUnk_00 = 0;
            mUnk_08 = -1;
            mUnk_0C = 0;
            mUnk_0D = 0;
            mUnk_04 = 0;
        }

        UnkStruct1() {
            mUnk_00 = 0;
            mUnk_08 = -1;
            mUnk_0C = 0;
            mUnk_0D = 0;
            mUnk_04 = 0;
        }
    };

public:
    /* 000 (vtable) */
    /* 004 */ unk32 mUnk_004;
    /* 008 */ UnkStruct_ov000_02067bc4_Sub2 *mUnk_008;
    /* 00C */ STRUCT_PAD(0x0C, 0x160);
    /* 160 */ UnkStruct_ov000_02067bc4_Sub1 mUnk_160;

    /* 00 */ virtual unk32 vfunc_00();
    /* 04 */ virtual unk32 vfunc_04();
    /* 08 */ virtual unk32 vfunc_08();

    void func_02021bec(unk16 param1);
    void func_02021c08();
    void func_02021c2c();
};

typedef void (*UnkCallback2)();

class UnkStruct_ov000_020b504c_Sub3 : public SysObject {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */

    UnkStruct_ov000_020b504c_Sub3(unk32 param1);
    void func_ov000_020676f8(const char *bmgFileName, unk32 param2);
};

class UnkStruct_ov000_020b504c_Sub4 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */
};

class UnkStruct_ov000_020b504c {
public:
    /* 000 */ UnkStruct_ov000_020b504c_Sub3 *mUnk_000;
    /* 004 */ GameModeManagerBase_004 *mUnk_004;
    /* 008 */ UnkStruct_ov000_02067bc4_Sub2 *mUnk_008;
    /* 00C */ UnkStruct_ov000_020b504c_Sub4 mUnk_00C[7];
    /* 028 */ unk32 mUnk_028;
    /* 02C */ unk32 mUnk_02C;
    /* 030 */ unk32 mUnk_030;
    /* 034 */ Input mButtons;
    /* 03A */ TouchControl mTouchControl;
    /* 05C */ unk8 mUnk_05C[0x10];
    /* 06C */ unk8 mUnk_06C[2];
    /* 06E */ unk8 mUnk_06E;
    /* 06F */ unk8 mUnk_06F;

    UnkStruct_ov000_020b504c();

    void *func_ov000_02067bb4(unk32 param1);
    UnkStruct_ov000_02067bc4 *func_ov000_02067bc4(unk32);
    unk8 func_ov000_02067cf8(unk32 param1, unk32 param2, UnkStruct_ov000_02067bc4::UnkStruct1 *param3);
    void func_ov000_02067e60(u8 param1, unk32 param2);
    unk32 func_ov000_020682c0(unk32 param1);

    //! TODO: figure this out
    void func_ov000_0206807c(unk32 param1, void *param2, unk32 param3, unk32 param4);
    void func_ov000_0206807c(unk32 param1, void *param2, unk32 param3);
    void func_ov000_0206807c(unk32 param1, void *param2);
    void func_ov000_0206807c(void *param1, void *param2);
    void func_ov000_0206807c(void *param1, unk32 param2);

    void func_ov001_020be668(void);
    void func_ov001_020be6f4(void);
};

extern UnkStruct_ov000_020b504c data_ov000_020b504c;
