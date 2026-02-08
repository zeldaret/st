#include "Game/GameModeStartUp.hpp"
#include "System/OverlayManager.hpp"
#include "System/SysFault.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_02049a2c.hpp"
#include "Unknown/UnkStruct_02049b80.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_0204e64c.hpp"
#include "Unknown/UnkStruct_ov000_020b4ec4.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "regs.h"

extern "C" {
void func_020261f0(unk32 param1, void *param2);
void func_0201245c();
void func_02027a28(void *param1, unk32 param2);
void DC_FlushAll();
void func_02013184();
void func_020131b0();
void func_020263bc(unk32 param1);
void func_020234d4(unk32 param1);
void func_02031e48(void *param1);
void func_02026ef0(void *param1);
unk32 func_02027818(unk32 param1);
unk32 func_0202780c(unk32 param1);
UnkStruct_02011e10_Sub1 *func_020012e0(unk32 param1, unk32 param2, unk32 param3);
unk32 func_0202d624(void *param1, unk32 param2);
void *func_02001fd4(void *param1, size_t param2);
void func_020013ac(void *param1);
UnkStruct_02011e10_Sub1 *func_02001098(unk32 param1, unk32 param2, unk32 param3);
unk32 func_020011f4();
void func_0202793c(unk32 param1, unk32 param2);
void func_0202e820();
unk32 func_020271b0();
unk32 func_0202e864(void *param1);
void func_0202e8f8(void *param1);

void func_0200a7b0(unk32 param1, void *param2, void *param3, void *param4, unk32 param5, unk32 param6, unk32 param7,
                   unk32 param8);
}

static u8 data_ov018_020c5bc0;

ARM void SysFault::func_ov018_020c4840() {
    this->mUnk_05 = 0;
    func_02027a28(func_0201245c, 0);
    DC_FlushAll();
    this->mUnk_00 = 0;
    this->mUnk_04 = 0;
}

ARM UnkStruct_02049a2c::UnkStruct_02049a2c() :
    mpCurrentGameMode(NULL),
    createCallback(NULL),
    mUnk_08(NULL),
    mpSaveFile(NULL),
    mUnk_14(NULL),
    mUnk_18(NULL) {}

ARM void UnkStruct_02049a2c::func_ov018_020c48a4(unk32 param1) {
    func_020261f0(1, func_02013184);
    func_020263bc(1);
    func_020234d4(1);
    func_02026ef0(&this->mUnk_1C.mUnk_04);
    func_02031e48(func_020131b0);
    this->TrySetCreateCallback((GameModeCreateCallback) UnkStruct_02049a2c::func_ov018_020c4ba8);
}

ARM void UnkStruct_02049a2c::func_ov018_020c48f8() {
    if (gOverlayManager.mLoadedOverlays[OverlaySlot_Second] != OverlayIndex_Second) {
        data_02049ba0.LoadIfNotLoaded(OverlaySlot_Second, OverlayIndex_Second);
        data_0204999c.func_ov018_020c4a5c();
        data_ov000_020b50c0.func_ov018_020c5718();
        data_02049ba0.func_02014994(1);
    }
}

ARM UnkStruct_02049b18::UnkStruct_02049b18() {
    this->mUnk_58 = 0;
    this->mUnk_5A = 0;
    this->func_02013768();
}

ARM void UnkStruct_02011e10::func_ov018_020c4980() {
    unk32 arenaLo = func_02027818(0);
    unk32 arenaHi = func_0202780c(0);

    for (int i = 0; i < HeapIndex_Max; i++) {
        this->mUnk_00[i] = NULL;
    }

    for (int i = 0; i < ARRAY_LEN(this->mUnk_24); i++) {
        this->mUnk_24[i] = 0;
    }

    this->mUnk_00[HeapIndex_Main] = func_020012e0(arenaLo, arenaHi - arenaLo, 2);
    unk32 length                  = func_0202d624(NULL, 0);
    void *ptr                     = ::operator new(length, 0);
    func_0202d624(ptr, length);
    ptr         = ::operator new(0xBE000, 0);
    void *uVar3 = func_02001fd4(ptr, 0xBE000);

    this->mUnk_24[0] = (unk32) uVar3;
    this->mUnk_5C    = 0;
    this->mUnk_60    = 0xD2F0;
    this->mUnk_64    = 0;
    this->mUnk_68    = 0;
    this->mUnk_6C    = 0;
    this->mUnk_70    = 0;
    this->mUnk_74    = 0;
    this->mUnk_78    = 0;
    this->mUnk_7C    = 0;
}

ARM void UnkStruct_02011e10::func_ov018_020c4a5c() {
    UnkStruct_02011e10_Sub1 *temp_r2;
    int temp_r5;
    int temp_r7;
    int temp_r0;

    func_020013ac(this->mUnk_00[0]);
    temp_r2 = this->mUnk_00[0];

    temp_r5 = ((uintptr_t) temp_r2->mUnk_1C - (uintptr_t) temp_r2); //! TODO: fake match?
    temp_r7 = func_02027818(0);
    temp_r7 += temp_r5;

    temp_r0          = func_0202780c(0);
    this->mUnk_00[1] = func_02001098(temp_r7, temp_r0 - temp_r7, 2);
    this->mUnk_5C    = func_020011f4();
    func_0202793c(0, temp_r0);
    this->mUnk_74 = 1;
}

ARM UnkStruct_ov000_020b4ec4::UnkStruct_ov000_020b4ec4() {}

ARM UnkStruct_02049b80::UnkStruct_02049b80() {
    this->mUnk_08 = this;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_0C); i++) {
        this->mUnk_0C[i] = 0;
        this->mUnk_1C[i] = 0;
    }
}

ARM UnkStruct_02049b18_06::UnkStruct_02049b18_06() {
    unk8 auStack_18[8];

    func_0202e820();

    if (func_020271b0() != 0) {
        func_0202e8f8(NULL);
    } else if (func_0202e864(auStack_18) != 0) {
        func_0202e8f8(auStack_18);
    }
}

ARM UnkStruct_0204e64c_00::UnkStruct_0204e64c_00() {
    this->mUnk_04 = 0;
    this->mUnk_06 = 0;
    this->mUnk_08 = 0;
    this->mUnk_0A = 0;
    this->mUnk_0B = 0;
    this->mUnk_0C = 0;
}

ARM UnkStruct_0204e64c::UnkStruct_0204e64c() {
    this->mUnk_16 = 0;
}

ARM GameModeStartUp *UnkStruct_02049a2c::func_ov018_020c4ba8() {
    static GameModeStartUp data_ov018_020c5bd4;
    return &data_ov018_020c5bd4;
}

ARM GameModeStartUp::GameModeStartUp() {
    this->mUnk_28 = 0;
    this->mUnk_2A = 0;
    data_0204a110.func_02018c78(1);
    data_0204a110.func_ov018_020c5300();

    if (data_ov018_020c5bc0 == 0) {
        UnkStruct2 stack_narc("Screen/Bg/Nlogo.bin", 1);
        stack_narc.func_020154ec("NLG");
        UnkResult stack_allrights("NLG:AllRights");
        UnkResult stack_logo("NLG:Nlogo");

        func_0200a7b0(0, stack_allrights.mUnk_00, stack_allrights.mUnk_04, stack_allrights.mUnk_08, 0, 0, 0, 2);
        func_0200a7b0(4, stack_logo.mUnk_00, stack_logo.mUnk_04, stack_logo.mUnk_08, 0, 0, 0, 2);

        this->mUnk_04.mUnk_14 = 0x00010000;
        this->mUnk_04.func_0201bba4(0, 0x14);
    } else {
        this->mUnk_04.func_0201bba4(0, 0x01);
    }

    data_0204e5f8.func_0201b9a8(&this->mUnk_04);
}

ARM void GameModeStartUp::vfunc_0C() {
    if (this->mUnk_04.mUnk_0D == this->mUnk_04.mUnk_10) {
        if (this->mUnk_28 == 0) {
            this->mUnk_2C = SHARED_WORK_C3C;
            data_02049a2c.func_ov018_020c48f8();
        } else if (!this->mUnk_2A && (SHARED_WORK_C3C - this->mUnk_2C) >= 0x3C) {
            this->mUnk_2A = data_0204a060.func_020183d4(false, (GameModeCreateCallback) UnkStruct_0204a060::func_020183b8, 1);

            if (data_ov018_020c5bc0 != 0) {
                data_0204a060.func_0201bb84(1, 0, 1);
            }
        }

        this->mUnk_28++;
    }
}

ARM void GameModeStartUp::vfunc_20() {}
