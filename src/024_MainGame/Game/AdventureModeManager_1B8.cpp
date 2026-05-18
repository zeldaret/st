#include "MainGame/AdventureMode.hpp"
#include "Save/SaveManager.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_ov017_020c3f70.hpp"

extern "C" void func_02029058(void *, void *);

extern u16 data_ov024_020d869c;

const AdventureModeManager_1B8_Base_1C data_ov024_020d8200(0x14, 0x08, 0xD8, 0xB0);

AdventureModeManager_1B8::AdventureModeManager_1B8(u8 bgType, bool param2, bool param3) :
    AdventureModeManager_1B8_Base(bgType, param2, &data_ov024_020d8200, param3, false) {
    this->mUnk_24 = 0xFF;
    this->mUnk_28 = NULL;
    this->func_ov024_020d0e64(&data_ov024_020d869c, sizeof(data_ov024_020d869c));
}

AdventureModeManager_1B8::~AdventureModeManager_1B8() {}

void AdventureModeManager_1B8::func_ov024_020d0fb4() {}

void AdventureModeManager_1B8::func_ov024_020d114c() {
    this->mUnk_00 = (s16) 0x8000;
    this->mUnk_04 = (s16) 0x8000;
}

bool AdventureModeManager_1B8::func_ov024_020d1160() {}

void AdventureModeManager_1B8::func_ov024_020d1364() {
    if (this->mUnk_24 == 0xFF) {
        return;
    }

    if (this->mUnk_24 >= 0x78) {
        return;
    }

    if (!this->func_ov024_020d1160()) {
        return;
    }

    gSaveManager.func_ov017_020c3040(this->mUnk_28, this->mUnk_24);
    SET_FLAG(gSaveManager.mUnk_000->mUnk_B30, this->mUnk_24);
}

//! TODO figure this out
struct SomeSaveFileStruct {
    /* 00 */ void *unk_00;

    SomeSaveFileStruct(unk32 param1);
    ~SomeSaveFileStruct();
};

void AdventureModeManager_1B8::func_ov024_020d13cc(s32 param1) {
    this->mUnk_24 = param1;
    this->func_ov024_020d0698();

    if (this->mUnk_24 == 0xFF) {
        return;
    }

    if (this->mUnk_24 >= 0x78) {
        return;
    }

    if (GET_FLAG(gSaveManager.mUnk_000->mUnk_B30, this->mUnk_24)) {
        SomeSaveFileStruct sp4(0x2290);
        void *unk_00 = sp4.unk_00;

        if (gSaveManager.func_ov000_020a0b70(unk_00, this->mUnk_24)) {
            s32 *ptr = (s32 *) ((u8 *) sp4.unk_00 + 0x1000);
            func_02029058(unk_00, ptr);
            this->func_ov024_020d1564(&data_ov024_020d8200, 0x1290, ptr, 1);
            return;
        }
    }
}

bool AdventureModeManager_1B8::func_ov024_020d14a8(AdventureModeManager_1B8_Base_1C *param1, unk32 param2, s32 *pFlags,
                                                   const u8 param4) {
    int i;
    int var_r5;
    int temp_r6;
    int var_r7;
    int temp_r1;
    bool ret = false;

    MI_CpuFill8(pFlags, 0, param2);

    temp_r6 = param1->mUnk_00 + param1->mUnk_04;
    var_r5  = param1->mUnk_02;
    temp_r1 = var_r5 + param1->mUnk_06;

    var_r7 = 0;

    for (; var_r5 < temp_r1; var_r5++) {
        for (i = param1->mUnk_00; i < temp_r6; var_r7++, i++) {
            if (this->func_ov024_020d0df8(i, var_r5)) {
                this->func_ov024_020d0ec0(pFlags, var_r7, 1);
                ret = true;
            }
        }
    }

    return ret;
}

void AdventureModeManager_1B8::func_ov024_020d1564(const AdventureModeManager_1B8_Base_1C *param1, unk32 param2, s32 *pFlags,
                                                   const u8 param4) {
    int i;
    int var_r5;
    int temp_r6;
    int var_r7;
    int temp_r1;

    temp_r6 = param1->mUnk_00 + param1->mUnk_04;
    var_r5  = param1->mUnk_02;
    temp_r1 = var_r5 + param1->mUnk_06;

    var_r7 = 0;

    for (; var_r5 < temp_r1; var_r5++) {
        for (i = param1->mUnk_00; i < temp_r6; var_r7++, i++) {
            if (AdventureModeManager_1B8_Base::func_ov024_020d0f0c(pFlags, var_r7)) {
                this->func_ov024_020d0924(i, var_r5, param4, 1);
            }
        }
    }
}

void AdventureModeManager_1B8::func_ov024_020d1614(void *param1) {
    this->mUnk_28 = param1;
    _MI_CpuFill(0, this->mUnk_28, 0x1000);
    data_ov017_020c3f70.func_ov017_020bba78();
}

void AdventureModeManager_1B8::func_ov024_020d1638() {
    data_ov017_020c3f70.func_ov017_020bba94();
    this->mUnk_28 = NULL;
}
