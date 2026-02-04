#include "Save/SaveManager.hpp"
#include "System/Random.hpp"
#include "System/SysFault.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_02049f04.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "Unknown/UnkStruct_0204a090.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_0204e640.hpp"
#include "Unknown/UnkStruct_ov000_020b4eec.hpp"
#include "Unknown/UnkStruct_ov000_020b4f84.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b52b4.hpp"
#include "Unknown/UnkStruct_ov000_020b52e8.hpp"
#include "Unknown/UnkStruct_ov000_020b5340.hpp"
#include "regs.h"
#include "versions.h"

extern "C" {
unk32 func_02014fe0();
unk16 func_02026738();
void func_02023548();
void func_020327c8(void *param1, unk32 param2);
void func_02030d48(u16 param1);
void func_02030d58(u16 param1);
unk32 func_020313b4(unk32 param1);
unk32 func_020312b8(void *param1, void *param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6, unk32 param7,
                    unk32 param8, unk32 param9);
unk32 func_02030cfc();
void func_0201bdd0();
void func_020261f0(unk32 param1, void *param2);
void func_02002354();
void func_02004a00(unk32 param1);
void func_02004d2c(unk32 param1, unk32 param2);
void func_02001778(unk32 param1);
void func_02003f98(unk32 param1, unk32 param2);
void func_02002184(unk32 param1);
void func_0202ee0c();
void func_0202f910(unk32 param1);
void func_0202f958(unk32 param1);
void func_02005030(void *param1);
void func_02002c80(void *param1);
void func_02002b08(void *param1, unk32 param2);
void func_0202ff34();
}

ARM void func_ov018_020c4e8c(void) {
    func_0202ff34();
    gRandom.Init();
    data_0204999c.func_ov018_020c4980();
    data_02049984.func_ov018_020c4840();
}

THUMB UnkStruct_0204a060::UnkStruct_0204a060() {
    this->callback = NULL;
}

ARM UnkStruct_ov000_020b4eec::UnkStruct_ov000_020b4eec() {
    this->mUnk_00 = 0;
    Fill32(0, this->mUnk_04, sizeof(this->mUnk_04));
}

ARM UnkStruct_ov000_020b4f84::UnkStruct_ov000_020b4f84() {
    // fake match?
    int *arg0     = 0;
    this->mUnk_C0 = (int) arg0 + 1;

    this->func_ov000_0206667c(FontIndex_DSZ2_msg, 0);

    if (func_02014fe0() == 0) {
        this->func_ov000_0206667c(FontIndex_LC_Font_s, 0);
    }
}

ARM UnkStruct_ov000_020b4f84_00::~UnkStruct_ov000_020b4f84_00() {}

ARM UnkStruct_ov000_020b504c::UnkStruct_ov000_020b504c() :
    mUnk_008(NULL),
    mUnk_030(1) {
    Fill32(0, this->mUnk_05C, sizeof(this->mUnk_05C));

    this->mUnk_06F = 0;
    this->mUnk_000 = new(HeapIndex_0) UnkStruct_ov000_020b504c_Sub3(0x21);

    Fill32(0, this->mUnk_00C, sizeof(this->mUnk_00C));

    this->mUnk_000->func_ov000_020676f8("regular", 0);

    for (int i = 0; i < ARRAY_LEN(this->mUnk_06C); i++) {
        this->mUnk_06C[i] = 0;
    }

    this->mUnk_06E = 0;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_00C); i++) {
        this->mUnk_00C[i].mUnk_00 = 0;
    }

    this->mUnk_028 = 0;
    this->mUnk_02C = 0;
}

struct stack_struct {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ u16 mUnk_04;
    /* 08 */ unk8 mUnk_06[0x14];
    /* 1C */ unk32 mUnk_1C;

    bool UnkCheck() {
        return this->mUnk_00 == 0x0C1D2E3F && this->mUnk_1C == 0xF4E5D6C7 && this->mUnk_04 >= 0x1A;
    }
};

// non-matching
ARM SaveManager::SaveManager() {
    this->mUnk_210   = 0;
    this->mUnk_000   = NULL;
    this->mUnk_206   = 0xFFFF;
    this->mUnk_208   = 0xFFFF;
    this->mUnk_20A   = 0;
    this->mUnk_214   = 0;
    this->mpSaveFile = NULL;
    this->mUnk_244   = 0;

    func_020327c8(this->mUnk_004, 0x1021);

    this->mUnk_204 = func_02026738();
    int uVar8      = 1;
    func_02030d48(this->mUnk_204);

    if (func_020313b4(0x1402) != 0) {
        stack_struct stack[MAX_SAVE_SLOTS];
        int cVar1;

        if (func_020312b8((void *) 0xF4E00, &stack[0], 0x40, 0, 0, 0, 6, 1, 0) == 1) {
            if (!stack[0].UnkCheck() && !stack[1].UnkCheck()) {
                cVar1 = 1;
            } else {
                cVar1 = 0;
            }

            this->mUnk_20A = cVar1;

            if ((cVar1 & 0xFF) == 0) {
                if (!stack[0].UnkCheck() || !stack[1].UnkCheck()) {
                    stack[0].mUnk_00 = 0x0C1D2E3F;
                    stack[0].mUnk_1C = 0xF4E5D6C7;
                    stack[0].mUnk_04 = 0x1A;
                    Fill16(0, (u16 *) stack[0].mUnk_06, 0x16);

                    stack[1].mUnk_00 = 0x0C1D2E3F;
                    stack[1].mUnk_1C = 0xF4E5D6C7;
                    stack[1].mUnk_04 = 0x1A;
                    Fill16(0, (u16 *) stack[1].mUnk_06, 0x16);

                    uVar8 = 2;
                    func_020312b8(stack, (void *) 0xF4E00, 0x40, 0, 0, 0, 7, 10, 2);
                }
            }
        }
    }

    this->mUnk_20C = func_02030cfc();
    func_02030d58(this->mUnk_204);

    if (this->mUnk_20C != 0) {
        this->mUnk_214 = uVar8;
    }
}

ARM UnkStruct_0204a110::UnkStruct_0204a110() :
    mUnk_000(0),
    mUnk_008(-1),
    mUnk_00C(-1),
    mUnk_DEC(0),
    mUnk_DF2(-1),
    mUnk_DF3(-1),
    mUnk_DFC(0),
    mUnk_DFD(0),
    mUnk_DFE(0),
    mUnk_DFF(0),
    mUnk_E00(0) {
    this->mUnk_DF0 = 0;
    this->mUnk_E02 = 0;
    this->mUnk_E04 = 0;
    data_0204a090.func_020073ac(8);
}

ARM void UnkStruct_0204a110::func_ov018_020c5300() {
    func_02018c90(2);
    this->mUnk_010.func_0201c890(0x0004800, 0x00016800, 1, 1, 0);
    func_02023548();
    REG_DISPCNT_SUB |= 0x00010000;
}

ARM UnkStruct_0204e640::UnkStruct_0204e640() {
    this->mUnk_00 = 0;
    this->mUnk_04 = 0;
    func_020261f0(2, func_0201bdd0);
}

ARM UnkStruct_0204af1c::UnkStruct_0204af1c() {
    Fill16(0, (u16 *) this->mUnk_2920, sizeof(this->mUnk_2920));

    for (u32 i = 0; i < ARRAY_LEN(this->mUnk_0000); i++) {
        this->mUnk_0000[i].func_0201af10(i);
    }

    this->func_0201a800();
}

ARM UnkStruct_0204e5f8::UnkStruct_0204e5f8() :
    mUnk_18(0) {
    this->mUnk_10 = 0;
    this->mUnk_14 = 0;
    this->mUnk_38 = 1;
    this->mUnk_39 = 1;

    REG_WININ      = (REG_WININ & ~0x3F) | 0x3F;
    REG_WINOUT     = (REG_WINOUT & ~0x3F) | 0x30;
    REG_WININ_SUB  = (REG_WININ_SUB & ~0x3F) | 0x3F;
    REG_WINOUT_SUB = (REG_WINOUT_SUB & ~0x3F) | 0x30;
}

ARM UnkStruct_0204a110_Sub3::UnkStruct_0204a110_Sub3() {
    for (u32 i = 0; i < ARRAY_LEN(this->mUnk_00); i++) {
        this->mUnk_400[i].mUnk_00 = 0;
        this->mUnk_400[i].mUnk_04 = 0;
        this->mUnk_400[i].mUnk_08 = 0;
        this->mUnk_400[i].mUnk_0C = &this->mUnk_00[i];
        this->mUnk_420[i]         = 0;
    }
}

ARM UnkStruct_0204a110_Sub2::UnkStruct_0204a110_Sub2() {
    u32 i;
    int j;
    UnkStruct_0204a110_Sub2_158 *pUnk158;

    for (i = 0; i < 2; i++) {
        this->mUnk_000[i] = 0;
        this->mUnk_008[i] = 0;
        this->mUnk_010[i] = 0;
        this->mUnk_018[i] = 0;
        this->mUnk_024[i] = 0;
        this->mUnk_02C[i] = 0;
        this->mUnk_034[i] = 0;
        this->mUnk_03C[i] = 0;
        this->mUnk_044[i] = 0;
        this->mUnk_150[i] = -1;
        this->mUnk_358[i] = -1;

        pUnk158 = this->mUnk_158[i];
        for (j = 0; j < ARRAY_LEN(this->mUnk_158[i]); j++) {
            pUnk158[j].mUnk_0C = 0;
        }
    }
}

ARM UnkStruct_0204a110_Sub6::UnkStruct_0204a110_Sub6() {
    this->mUnk_04 = 1;
    this->mUnk_08 = 0;
    this->mUnk_0C = -1;
    this->mUnk_0E = 0;
    this->mUnk_10 = 0;
    this->mUnk_12 = 0;
    this->mUnk_13 = 0;
}

ARM UnkStruct_0204a110_Sub7::UnkStruct_0204a110_Sub7() {
    this->mUnk_00 = 0;
    this->mUnk_01 = 0;
    this->mUnk_0C = data_027e0120;
    this->mUnk_04 = new(HeapIndex_0) UnkSystem2_UnkSubSystem9();
    this->mUnk_08 = new(HeapIndex_0) UnkStruct_0204a110_Sub7_08();
}

ARM UnkStruct_0204a110_Sub8::UnkStruct_0204a110_Sub8() {
    this->mUnk_00 = 1;
    this->mUnk_04 = 0;
    this->mUnk_08 = 0;
    this->mUnk_0C = new(HeapIndex_0) UnkSystem2_UnkSubSystem9();
}

ARM UnkStruct_02049f04::UnkStruct_02049f04() {
    Fill32(0, this->mUnk_00, sizeof(this->mUnk_00));
    this->mUnk_80 = 0;
}

ARM UnkStruct_ov000_020b50c0::UnkStruct_ov000_020b50c0() {
    this->mUnk_94 = 0;
    this->mUnk_98 = 0;
    this->mUnk_9C = 2;
    this->mUnk_9E = 0;
    this->mUnk_9F = 0;
    this->mUnk_A0 = 0;
    this->mUnk_A1 = 0;
    this->mUnk_A2 = 0;
    this->mUnk_A3 = 0;
    this->mUnk_A4 = -1;
    this->mUnk_CC = 0;
    this->mUnk_D0 = 0;
    this->mUnk_D4 = 0;
    this->mUnk_D8 = 0;
    this->mUnk_DC = 0;
    this->mUnk_E0 = 0;
    this->mUnk_E4 = 0;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_A8); i++) {
        this->mUnk_A8[i] = 0;
    }

    func_02002354();
    this->func_0200381c("SoundData/final_sound_data.sdat", data_0204999c.mUnk_24[0], 0);
}

ARM UnkStruct_ov018_020c5ac0 *UnkStruct_ov000_020b50c0::func_ov018_020c5718() {
    unk32 uVar1 = data_0204999c.mUnk_24[0];

    data_ov000_020b51b8.func_ov018_020c5940();
    func_02004a00(uVar1);
    func_02004d2c(0x0C, uVar1);
    func_02001778(3);
    this->mUnk_CC = this->func_ov000_0206a5d8(0x800);
    this->mUnk_D0 = this->func_ov000_0206a5d8(0x400);
    func_02003f98(1, uVar1);
    this->mUnk_A8[1] = 1;
    func_02002184(uVar1);
    data_ov000_020b5300.func_ov018_020c583c(this->mUnk_D0);
    data_ov000_020b5340.func_ov018_020c57fc();
    data_ov000_020b5340.func_ov000_0206ffc0();
    return UnkStruct_ov018_020c5ac0::Create();
}

ARM UnkStruct_ov000_020b5340::UnkStruct_ov000_020b5340() :
    mUnk_04(0),
    mUnk_05(0),
    mUnk_08(-1),
    mUnk_28(0),
    mUnk_2C(0) {
    func_0202ee0c();
    this->mUnk_00 = &data_ov000_020b5300;
}

ARM void UnkStruct_ov000_020b5340::func_ov018_020c57fc() {
    func_0202f910(1);
    func_0202f958(3);
}

ARM UnkStruct_ov000_020b5300::UnkStruct_ov000_020b5300() {
    this->mUnk_1C = 0;
    this->mUnk_20 = 0;
    this->mUnk_24 = 0;
    this->mUnk_28 = 0;
    this->mUnk_29 = 0;
    this->mUnk_2C = 0;
    this->mUnk_30 = 0;
    this->mUnk_34 = 0;
#if IS_JP
    this->mUnk_38 = 0;
    this->mUnk_3C = 0;
#endif
}

ARM void UnkStruct_ov000_020b5300::func_ov018_020c583c(unk32 param1) {
    this->mUnk_1C = param1;
    this->mUnk_00 = 0;
    this->mUnk_04 = param1;
    this->mUnk_08 = 0x0400;
    this->mUnk_0C = 0x105D;
    this->mUnk_10 = 1;
    this->mUnk_14 = 0;
    this->mUnk_18 = 0;
}

ARM UnkStruct_ov000_020b51b8::UnkStruct_ov000_020b51b8() {
    this->mUnk_18 = 0x7F;
    this->mUnk_1C = 0;
    this->mUnk_1E = 0;
    this->mUnk_20 = 0;
    this->mUnk_24 = 0;
    this->mUnk_28 = 0;
    this->mUnk_2C = 0;
    this->mUnk_30 = 0x18;
    this->mUnk_34 = -1;
    this->mUnk_38 = -1;
    this->mUnk_40 = 0;
    this->mUnk_41 = 0;
    this->mUnk_44 = 0;
    this->mUnk_48 = 1;
    this->mUnk_4C = -1;
    this->mUnk_50 = 0;
    this->mUnk_54 = 0;
    this->mUnk_56 = 0x7F;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_08); i++) {
        func_02002c80(&this->mUnk_08[i]);
    }

    func_02005030(&this->mUnk_14);
}

ARM UnkStruct_ov000_020b51b8::~UnkStruct_ov000_020b51b8() {
    delete this->mUnk_00;
    delete this->mUnk_04;
}

ARM void UnkStruct_ov000_020b51b8::func_ov018_020c5940() {
    this->mUnk_00 = new(HeapIndex_1) UnkStruct_ov000_020b51b8_00(&this->mUnk_08[0]);
    this->mUnk_04 = new(HeapIndex_1) UnkStruct_ov000_020b51b8_04(&this->mUnk_08[1]);

    this->mUnk_00->vfunc_0C(0);
    this->mUnk_04->vfunc_0C(0);
}

ARM UnkStruct_ov000_020b5214::UnkStruct_ov000_020b5214() {
    this->mUnk_64 = 0;
    this->mUnk_66 = 0;
    this->mUnk_67 = 0;
    this->mUnk_68 = -1;
    this->mUnk_6C = 0x7F;
    this->mUnk_90 = 0;
    this->mUnk_94 = 0;
    this->mUnk_95 = 0;
    this->mUnk_98 = 0;

    func_02002c80(this);

    for (int i = 0; i < ARRAY_LEN(this->mUnk_70); i++) {
        this->mUnk_70[i].mUnk_00 = 0;
    }
}

ARM UnkStruct_ov000_020b52b4::UnkStruct_ov000_020b52b4() {
    this->mUnk_00 = 0;
    this->mUnk_10 = 0;
    this->mUnk_18 = 0;
    this->mUnk_1C = 0x10;
    this->mUnk_20 = 0x10;
    this->func_ov000_0206f6ac();
}

ARM UnkStruct_ov000_020b52e8::UnkStruct_ov000_020b52e8() :
    mUnk_0C(-1),
    mUnk_10(0),
    mUnk_12(0),
    mUnk_13(0) {
    func_02002c80(this);
    this->mUnk_04 = 0;
    this->mUnk_08 = 0;
}

ARM UnkStruct_ov000_020b52e8::~UnkStruct_ov000_020b52e8() {
    func_02002b08(this, 1);
}

ARM UnkStruct_ov018_020c5ac0::UnkStruct_ov018_020c5ac0() {
    this->SetInstance();
    this->mUnk_00 = 0;
    this->mUnk_01 = 0;
    this->mUnk_02 = 0;
}

ARM UnkStruct_ov018_020c5ac0 *UnkStruct_ov018_020c5ac0::Create() {
    return new(HeapIndex_1) UnkStruct_ov018_020c5ac0();
}

ARM void UnkStruct_ov018_020c5ac0::SetInstance() {
    data_027e099c = this;
}
