#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

#include <nitro/gx.h>

extern "C" void func_02019a74();
extern "C" void func_02019b3c();
extern "C" void func_02019c4c();

void UnkStruct_0204a110::func_ov001_020bd514(unk32 param1, GameModeMgrCreateCallback createCallback, bool param3,
                                             bool param4) {
    this->func_02018c90(param1);

    if (param1 == 4) {
        this->mUnk_010.func_0201c890(0x12000, 0x12000, param3, param4, true);
    } else if (param1 == 2) {
        this->mUnk_010.func_0201c890(0x12000, 0x12000, param3, param4, true);
    } else {
        this->mUnk_010.func_0201c890(0x4800, 0x12000, param3, param4, true);
    }

    if (createCallback == NULL) {
        createCallback = GameModeManagerBase::Create;
    }

    this->mpManager = createCallback(&this->mUnk_010);

    GX_DispOn();
    GXS_DispOn();
}

void UnkStruct_0204a110::func_ov001_020bd58c(void) {
    this->mUnk_010.func_ov001_020bd7c0();
    DELETE(this->mpManager);
}

void UnkStruct_0204a110::func_ov001_020bd5b0(void) {
    GX_SetVisibleWindows(0);
    GXS_SetVisibleWindows(0);
    func_02019a74();
    func_02019b3c();
    func_02019c4c();

    this->mUnk_DDC.func_0201de24();
    this->mUnk_DC0.func_0201d628();

    if (data_027e09a4 != NULL && data_027e09a4->IsTrain()) {
        this->mUnk_D9C.func_0201c494(1);
    } else {
        this->mUnk_D9C.func_0201c494(0);
    }

    this->mUnk_E02 = 0;
    this->mUnk_E04 = 0;
    this->mpManager->vfunc_14();
}

void UnkStruct_0204a110::func_ov001_020bd638(void) {
    if (this->mpManager != NULL) {
        this->mpManager->vfunc_18();
        this->mpManager->func_02018a8c();
    }

    this->mUnk_DDC.func_0201de24();
    this->mUnk_DC0.func_0201d628();

    this->mUnk_E02 = 0;
    this->mUnk_E04 = 0;
}

void UnkStruct_0204a110::func_ov001_020bd678(void) {
    this->mpManager->vfunc_1C();
}

void UnkStruct_0204a110::func_ov001_020bd68c(void) {
    this->mpManager->vfunc_20();
    this->mpManager->func_02018a8c();
}

UnkStruct_0204a088 *UnkStruct_0204a088::Create() {
    return new(HeapIndex_1) UnkStruct_0204a088();
}

UnkStruct_0204a088::UnkStruct_0204a088() :
    mUnk_120(0) {
    this->func_ov001_020bd6f8();
}

void UnkStruct_0204a088::func_ov001_020bd6f8() {
    this->mUnk_120 = -1;
    this->mUnk_123 = false;
    this->mUnk_124 = false;
    this->mUnk_125 = false;
    this->mUnk_126 = false;
    this->mUnk_127 = false;
    this->mUnk_128 = 0;
    this->mUnk_00  = 0;
    this->mUnk_04  = -1;
    this->mUnk_08  = -1;
}

DECL_INSTANCE_CTOR(UnkStruct_0204a088, data_0204a088);

void GameModeManagerBase_004::func_ov001_020bd734(const s16 *param1) {
    unk32 uVar3 = data_0204999c.func_02013014();

    for (int i = 0; param1[i] != 0x3C; i++) {
        this->mUnk_00[param1[i]] = new(HeapIndex_1) GameModeManagerBase_004_00(param1[i]);
    }

    data_0204999c.func_020130d4(uVar3);
}

void GameModeManagerBase_004::func_ov001_020bd784() {
    unk32 uVar3 = data_0204999c.func_02013014();

    for (u32 i = 0; i < 0x3C; i++) {
        if (this->mUnk_00[i] != NULL) {
            DELETE(this->mUnk_00[i]);
        }
    }

    data_0204999c.func_020130d4(uVar3);
}

void UnkStruct_0204a110_Sub2::func_ov001_020bd7c0() {
    this->mUnk_044[0] = 0;
    this->mUnk_044[1] = 0;
}
