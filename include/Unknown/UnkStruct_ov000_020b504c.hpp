#pragma once

#include "Animation/CellAnimObject.hpp"
#include "Game/GameModeManager.hpp"
#include "Item/Item.hpp"
#include "Message/BMG.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_02049b18.hpp"
#include "global.h"
#include "types.h"

#include <nitro/pad.h>

class UnkStruct_027e0cd8_04_0C;

class UnkTextStruct1 {
public:
    /* 00 */ union {
        struct {
            /* 00 */ unk16 mUnk_00;
            /* 02 */ unk16 mUnk_02;
            /* 04 */ unk32 mUnk_04;
            /* 08 */ unk32 mUnk_08;
            /* 0C */ u8 mUnk_0C;
            /* 0D */ unk8 mUnk_0D;
            /* 0E */ unk8 mUnk_0E;
            /* 0F */ unk8 mUnk_0F;
        };

        /* 00 */ u32 data[4];
    };
    /* 10 */

    UnkTextStruct1(unk32 param1, unk32 param2) {
        this->mUnk_00 = 0;
        this->mUnk_08 = param1;
        this->mUnk_0C = 0;
        this->mUnk_0D = 0;
        this->mUnk_04 = 0;
    }

    UnkTextStruct1(unk32 param1) {
        this->mUnk_00 = 0;
        this->mUnk_04 = param1;
        this->mUnk_08 = param1;
        this->mUnk_0C = 0;
        this->mUnk_0D = 0;
    }

    UnkTextStruct1() {}
};

typedef void (*UnkCallback2)();

class BMGEntry {
public:
    /* 00 */ SectionINF1 *mpINF1;
    /* 04 */ SectionFLW1 *mpFLW1;
    /* 08 */ SectionFLI1 *mpFLI1;
    /* 0C */ SectionDAT1 *mpDAT1;
    /* 10 */ unk32 mBMGGroup;
    /* 14 */
};

class UnkStruct_ov000_020b504c_Sub3 {
public:
    /* 00 */ BMGEntry **mpBMGTable;
    /* 04 */ BMGHeader **mUnk_04;
    /* 08 */ BMGHeader **mUnk_08;
    /* 0C */ SectionINF1 *mUnk_0C;
    /* 10 */ s16 mUnk_10;
    /* 12 */ unk16 mUnk_12;
    /* 14 */

    UnkStruct_ov000_020b504c_Sub3(unk32 param1);

    // overlay 0
    void func_ov000_020676f8(const char *bmgFileName, HeapIndex heapIndex);
    void func_ov000_020677b0(const char *bmgFileName, HeapIndex heapIndex);
    void func_ov000_02067804(const char *bmgFileName, void *pDst, size_t size); // load BMG at specified address
    EntryINF1 *func_ov000_02067a2c(u32 msgId);
    void func_ov000_02068f0c();
};

class UnkStruct_ov000_020b504c_Sub4_00 {
public:
    /* 00 (vtable) */
    /* 04 */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(unk32 param1);
};

class UnkStruct_ov000_020b504c_08_18C {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A;
    /* 0C */ unk16 mUnk_0C;
    /* 0E */ STRUCT_PAD(0x0E, 0x18);
    /* 18 */

    UnkStruct_ov000_020b504c_08_18C() {
        this->mUnk_00 = 0;
        this->mUnk_04 = 0;
        this->mUnk_0A = 0;
        this->mUnk_0C = 0;
    }
};

class UnkStruct_ov000_020b504c_08 : public GameModeManagerBase_104 {
public:
    /* 000 (base) */
    /* 01C */ unk32 mUnk_01C;
    /* 020 */ CellAnimObject mUnk_020;
    /* 098 */ CellAnimObject mUnk_098;
    /* 110 */ CellAnimObject mUnk_110;
    /* 188 */ bool mUnk_188;
    /* 189 */ STRUCT_PAD(0x189, 0x18C);
    /* 18C */ UnkStruct_ov000_020b504c_08_18C mUnk_18C[2];
    /* 1BC */ STRUCT_PAD(0x1BC, 0x1C4);
    /* 1C4 */ bool mUnk_1C4;
    /* 1C5 */ STRUCT_PAD(0x1C5, 0x1C8);
    /* 1C8 */ CellAnimObject mUnk_1C8[2];
    /* 2B8 */ unk32 mUnk_2B8;
    /* 2BC */ unk32 mUnk_2BC;
    /* 2C0 */ bool mUnk_2C0;
    /* 2C1 */ STRUCT_PAD(0x2C1, 0x2C4);
    /* 2C4 */

    UnkStruct_ov000_020b504c_08();

    // data_ov000_020b1e60 vtable
    /* 00 */ virtual ~UnkStruct_ov000_020b504c_08() override;
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl) override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;

    // overlay 0
    void func_ov000_020a4764();
};

class UnkStruct_ov000_020b504c_0C_Base {
public:
    /* 04 */ UnkSystem2_UnkSubSystem11_Derived2 *mUnk_04;
    /* 08 */ UnkStruct_ov000_020b504c_08 *mUnk_08;
    /* 0C */ STRUCT_PAD(0x0C, 0x1C);
    /* 1C */

    UnkStruct_ov000_020b504c_0C_Base();

    // data_020443e8
    /* 00 */ virtual ~UnkStruct_ov000_020b504c_0C_Base();
    /* 08 */ virtual bool vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18(unk32 param1);
    /* 1C */ virtual void vfunc_1C();
    /* 20 */

    void func_02021bec(unk16 param1);
    void func_02021c08();
    void func_02021c2c();
};

class UnkStruct_ov000_020b504c_0C_Derived1 : public UnkStruct_ov000_020b504c_0C_Base {
public:
    /* 000 (base) */
    /* 01C */ STRUCT_PAD(0x1C, 0x194);
    /* 194 */

    UnkStruct_ov000_020b504c_0C_Derived1(unk32 param1);
};

class UnkStruct_ov000_020b504c_0C_Derived2 : public UnkStruct_ov000_020b504c_0C_Base {
public:
    /* 00 (base) */
    /* 1C */ STRUCT_PAD(0x1C, 0xCC);
    /* CC */

    UnkStruct_ov000_020b504c_0C_Derived2();
};

class UnkStruct_ov000_020b504c_0C_Derived3 : public UnkStruct_ov000_020b504c_0C_Base {
public:
    /* 000 (base) */
    /* 01C */ STRUCT_PAD(0x1C, 0x194);
    /* 194 */

    UnkStruct_ov000_020b504c_0C_Derived3(unk32 param1);
};

class UnkStruct_ov000_020b504c_0C_Derived4 : public UnkStruct_ov000_020b504c_0C_Base {
public:
    /* 00 (base) */
    /* 1C */ STRUCT_PAD(0x1C, 0x28);
    /* 28 */

    UnkStruct_ov000_020b504c_0C_Derived4();
};

class UnkStruct_ov000_020b504c_28_Base_160 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ bool mUnk_04;
    /* 05 */ STRUCT_PAD(0x05, 0x08);
    /* 08 */ CellAnimObject mUnk_08;
    /* 80 */

    UnkStruct_ov000_020b504c_28_Base_160();

    // main
    unk32 func_02022128(void);
};

class UnkStruct_ov000_020b504c_28_Base_25C {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A;
    /* 0C */

    UnkStruct_ov000_020b504c_28_Base_25C() {
        this->mUnk_00 = 0;
        this->mUnk_04 = 0;
        this->mUnk_06 = 0;
        this->mUnk_08 = 0;
        this->mUnk_0A = 0;
    }
};

class UnkStruct_ov000_020b504c_28_Base_310 {
public:
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */

    UnkStruct_ov000_020b504c_28_Base_310() {
        this->mUnk_00 = 0;
        this->mUnk_02 = 0;
        this->mUnk_04 = 0;
        this->mUnk_06 = 0;
    }
};

class UnkStruct_ov000_020b504c_28_Base : public UnkStruct_ov000_020b504c_0C_Base {
public:
    /* 000 (vtable) */
    /* 01C */ unk32 mUnk_01C;
    /* 020 */ bool mUnk_020;
    /* 024 */ unk32 mUnk_024;
    /* 028 */ UnkTextStruct1 mUnk_028; //! TODO: confirm
    /* 038 */ unk32 mUnk_038;
    /* 03C */ unk32 mUnk_03C;
    /* 040 */ unk16 mUnk_040;
    /* 042 */ unk16 mUnk_042;
    /* 044 */ unk16 mUnk_044;
    /* 046 */ unk16 mUnk_046;
    /* 048 */ unk32 mUnk_048;
    /* 04C */ unk32 mUnk_04C;
    /* 050 */ CellAnimObject mUnk_050;
    /* 0C8 */ CellAnimObject mUnk_0C8;
    /* 140 */ unk16 mUnk_140;
    /* 142 */ unk16 mUnk_142;
    /* 144 */ unk32 mUnk_144;
    /* 148 */ unk32 mUnk_148;
    /* 14C */ unk16 mUnk_14C;
    /* 14E */ unk16 mUnk_14E;
    /* 150 */ unk16 mUnk_150;
    /* 152 */ unk16 mUnk_152;
    /* 154 */ unk32 mUnk_154;
    /* 158 */ unk32 mUnk_158;
    /* 15C */ bool mUnk_15C;
    /* 15D */ bool mUnk_15D;
    /* 15E */ STRUCT_PAD(0x15E, 0x160);
    /* 160 */ UnkStruct_ov000_020b504c_28_Base_160 mUnk_160;
    /* 1E0 */ unk32 mUnk_1E0;
    /* 1E4 */ bool mUnk_1E4;
    /* 1E5 */ STRUCT_PAD(0x1E5, 0x1E8);
    /* 1E8 */ UnkSystem2_UnkSubSystem9 mUnk_1E8;
    /* 22C */ UnkSubStruct1 mUnk_22C;
    /* 25C */ UnkStruct_ov000_020b504c_28_Base_25C mUnk_25C[15];
    /* 310 */ UnkStruct_ov000_020b504c_28_Base_310 mUnk_310[15];
    /* 388 */ unk32 mUnk_388;
    /* 38C */ unk32 mUnk_38C;
    /* 390 */ unk32 mUnk_390;
    /* 394 */ unk16 mUnk_394;
    /* 396 */ unk8 mUnk_396;
    /* 397 */ bool mUnk_397;
    /* 398 */ unk32 mUnk_398;
    /* 39C */ unk32 mUnk_39C;
    /* 3A0 */ unk32 mUnk_3A0;
    /* 3A4 */ unk32 mUnk_3A4;
    /* 3A8 */ bool mUnk_3A8;
    /* 3A9 */ unk8 mUnk_3A9; // pad?
    /* 3AA */ unk16 mUnk_3AA;
    /* 3AC */ bool mUnk_3AC;
    /* 3AD */ STRUCT_PAD(0x3AD, 0x3B8);
    /* 3B8 */

    UnkStruct_ov000_020b504c_28_Base();

    // data_020444e8
    /* 00 */ virtual ~UnkStruct_ov000_020b504c_28_Base() override;
    /* 08 */ virtual bool vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2C */ virtual void vfunc_2C();
    /* 30 */ virtual void vfunc_30();
    /* 34 */ virtual void vfunc_34();
    /* 38 */ virtual void vfunc_38();
    /* 3C */ virtual void vfunc_3C();
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */
};

class UnkStruct_ov000_020b504c_28 : public UnkStruct_ov000_020b504c_28_Base {
public:
    /* 000 (base) */
    /* 3B8 */

    UnkStruct_ov000_020b504c_28(unk32 param1);

    // data_02044448
    /* 00 */ virtual ~UnkStruct_ov000_020b504c_28() override;
};

class UnkStruct_ov000_020b504c_2C : public UnkStruct_ov000_020b504c_28_Base {
public:
    /* 000 (base) */
    /* 3B8 */

    UnkStruct_ov000_020b504c_2C(unk32 param1);

    /* 00 */ virtual ~UnkStruct_ov000_020b504c_2C() override;
};

class UnkStruct_ov000_020b504c {
public:
    /* 000 */ UnkStruct_ov000_020b504c_Sub3 *mUnk_000;
    /* 004 */ GameModeManagerBase_004 *mUnk_004;
    /* 008 */ UnkStruct_ov000_020b504c_08 *mUnk_008;
    /* 00C */ UnkStruct_ov000_020b504c_0C_Base *mUnk_00C[7];
    /* 028 */ UnkStruct_ov000_020b504c_28 *mUnk_028; // pointer to the subsystem that handles drawing the textboxes
    /* 02C */ UnkStruct_ov000_020b504c_2C *mUnk_02C;
    /* 030 */ unk32 mUnk_030;
    /* 034 */ Input mButtons;
    /* 03A */ TouchControl mTouchControl;
    /* 05C */ unk8 mUnk_05C[0x10];
    /* 06C */ unk8 mUnk_06C[2];
    /* 06E */ unk8 mUnk_06E;
    /* 06F */ bool mUnk_06F;

    UnkStruct_ov000_020b504c();

    // overlay 0
    void *func_ov000_02067bb4(unk32 param1);
    UnkStruct_ov000_020b504c_28 *func_ov000_02067bc4(unk32 param1);
    unk8 func_ov000_02067cf8(unk32 param1, unk32 param2, UnkTextStruct1 *param3); // ShowText?
    void func_ov000_02067e60(u8 param1, unk32 param2);
    unk32 func_ov000_020682c0(unk32 param1);
    void func_ov000_02067f5c(unk32 param1);
    bool func_ov000_02067f88(unk32 param1, unk32 param2);
    UnkStruct_ov000_020b504c_Sub4_00 *func_ov000_02067bf0();
    void func_ov000_02067b20();
    void func_ov000_02068068(unk32 param1);
    bool func_ov000_0206807c(unk32 param1, void *param2);
    void func_ov000_02067b60();

    // overlay 1
    void func_ov001_020be504(void);
    void func_ov001_020be5e8(void);
    void func_ov001_020be510(void);
    void func_ov001_020be668(void);
    void func_ov001_020be6d8(void);
    void func_ov001_020be6f4(void);
    void func_ov001_020be79c(u32 sceneIndex);
    void func_ov001_020be82c(u32 sceneIndex);
    void func_ov001_020be880(u32 sceneIndex);
    void func_ov001_020be8e0(void);
    void func_ov001_020be92c(UnkStruct_027e0cd8_04_0C *param1);
    void func_ov001_020be94c(void);
    void func_ov001_020be998(void);
    void func_ov001_020be9fc(void);
    void func_ov001_020bea2c(void);
};

// gMessageManager?
extern UnkStruct_ov000_020b504c data_ov000_020b504c;

struct UnkMsgDataStruct1 {
    unk32 mUnk_00;

    void func_ov000_02067a60(void *, int);
};
