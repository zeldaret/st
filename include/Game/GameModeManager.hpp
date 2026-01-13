#pragma once

#include "System/SysNew.hpp"
#include "nitro/math.h"
#include "types.h"

class GameModeManagerBase_004 : public SysObject {
public:
    void func_ov001_020bd734(unk32 *param1);
    void func_ov001_020bd784();
    void func_0201c00c(unk32 param1, unk32 param2, unk32 param3);
};

class GameModeManagerBase_104_04 {
public:
    /* 00 */ void *mUnk_00;
    /* 04 */ void *mUnk_04;
    /* 08 */

    void func_020166ac(void);
    void func_020166cc(void *param1);

    GameModeManagerBase_104_04();
};

class GameModeManagerBase_104_0C_04 {
public:
    /* 00 */ GameModeManagerBase_104_04 mUnk_00;

    GameModeManagerBase_104_0C_04();
};

class GameModeManagerBase_104_0C {
public:
    /* 00 (vtable) */
    /* 04 */ GameModeManagerBase_104_0C_04 mUnk_04;

    // data_ov000_020b1e48 vtable
    /* 00 */ virtual ~GameModeManagerBase_104_0C();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
};

class GameModeManagerBase_104 : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ GameModeManagerBase_104_04 mUnk_04;
    /* 0C */ GameModeManagerBase_104_0C mUnk_0C;
    /* 18 */ u32 mUnk_18;
    /* 1C */

    GameModeManagerBase_104();

    // data_ov000_020b1e60 vtable
    /* 00 */ virtual ~GameModeManagerBase_104();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(void);

    static GameModeManagerBase_104 *Create(void *param1, s32 saveSlotIndex);
};

class GameModeManagerBase : public SysObject {
public:
    /* 000 (vtable) */
    /* 004 */ GameModeManagerBase_004 mUnk_004;
    /* 008 */ void *mUnk_008;
    /* 00C */ unk8 mUnk_00C[0x0E0 - 0x00C];
    /* 0E0 */ void *mUnk_0E0;
    /* 0E4 */ void *mUnk_0E4;
    /* 0E8 */ void *mUnk_0E8;
    /* 0EC */ unk32 mUnk_0EC;
    /* 0F0 */ unk32 mUnk_0F0;
    /* 0F4 */ unk32 mUnk_0F4;
    /* 0F8 */ unk32 mUnk_0F8;
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */ void *mUnk_100;
    /* 104 */ GameModeManagerBase_104 mUnk_104;
    /* 120 */ unk32 mUnk_120;
    /* 124 */ unk32 mUnk_124;
    /* 128 */ unk16 mUnk_128;
    /* 12A */ unk16 mUnk_12A; // timer that resets after the touchscreen was touched
    /* 12C */ unk32 mUnk_12C;
    /* 130 */ unk8 mUnk_130;
    /* 131 */ unk8 mUnk_131;
    /* 132 */ u8 mUnk_132; // bool?
    /* 133 */ unk8 mUnk_133;
    /* 134 */ Vec3p mUnk_134; // position of where the touchscreen is touched
    /* 140 */ unk32 mUnk_140;
    /* 144 */ unk32 mUnk_144;
    /* 148 */ unk32 mUnk_148;
    /* 14C */ unk32 mUnk_14C;
    /* 150 */ unk32 mUnk_150;
    /* 154 */

    GameModeManagerBase();
    void func_0201875c(void);
    void func_02018908(void);
    void func_02018a14(unk32 param2);
    void func_02018830(unk32 param2);
    void func_02018984(unk32 param1);

    // data_02044064 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual ~GameModeManagerBase();
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2, unk32 param3);
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28(unk32 param1);
    /* 2C */ virtual void vfunc_2C(unk32 param1);
    /* 30 */ virtual void vfunc_30();
    /* 34 */ virtual void vfunc_34();

    static GameModeManagerBase *Create(unk32 param1);
};
