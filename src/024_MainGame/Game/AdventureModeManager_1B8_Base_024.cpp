#include "MainGame/AdventureMode.hpp"
#include "Save/SaveManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_020b52b4.hpp"
#include "Unknown/UnkStruct_ov017_020c3f70.hpp"
#include <nitro/mi.h>

#include <nitro/dc.h>
#include <nitro/gx.h>

extern "C" {
void func_ov000_0205a950(u8 bgType, bool isTopScreen, bool);
void func_ov000_0205a944(u8 bgType, bool isTopScreen, bool);
void func_01ffb644(fx32 x, fx32 y);
unk32 func_01ffb558();

void func_02029058(void *, void *);
u32 func_0202955c(void *, int, void *, int, void *);
}

static const bool data_ov024_020d7544[] = {true, false, true};
static const u8 data_ov024_020d7547[]   = {0x03, 0x01, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00};
static u16 data_ov024_020d869c;

static const AdventureModeManager_1B8_Base_1C data_ov024_020d8200(0x14, 0x08, 0xD8, 0xB0);

AdventureModeManager_1B8_Base::AdventureModeManager_1B8_Base(u8 bgType, bool param2,
                                                             const AdventureModeManager_1B8_Base_1C *param3, bool param4,
                                                             bool param5) {
    this->mUnk_00      = ADVMGR_UNK;
    this->mUnk_04      = ADVMGR_UNK;
    this->mUnk_08      = false;
    this->mUnk_09      = param5;
    this->mUnk_0A      = false;
    this->mUnk_0B      = 0xBF;
    this->mUnk_0C      = 0x00;
    this->mBGType      = bgType;
    this->mIsTopScreen = param2;
    this->mUnk_10      = param4;
    this->mUnk_14      = GetUnkValue_ImplS(param3->mUnk_06, param4);
    this->mUnk_18      = (u8 *) ::operator new(this->mUnk_14, HeapIndex_1, 4);
    MI_CpuCopy16((void *) param3, &this->mUnk_1C, sizeof(AdventureModeManager_1B8_Base_1C));
    this->func_ov024_020d0698();
}

AdventureModeManager_1B8_Base::~AdventureModeManager_1B8_Base() {
    delete this->mUnk_18;
}

void AdventureModeManager_1B8_Base::func_ov024_020d0698() {
    MI_CpuClearFast(this->mUnk_18, this->mUnk_14);
    this->mUnk_0A = true;
    this->mUnk_0D = true;
    this->mUnk_00 = ADVMGR_UNK;
    this->mUnk_04 = ADVMGR_UNK;
}

void AdventureModeManager_1B8_Base::func_ov024_020d06d0() {
    if (this->mIsTopScreen && data_0204a110.mUnk_008 == 1) {
        return;
    }

    if (this->mUnk_08) {
        func_ov000_0205a950(this->mBGType, this->mIsTopScreen, this->mUnk_09);
    } else {
        func_ov000_0205a944(this->mBGType, this->mIsTopScreen, this->mUnk_09);
    }

    this->mUnk_0D = true;
    this->func_ov024_020d0a64();
}

void AdventureModeManager_1B8_Base::func_ov024_020d072c(unk8 *param1) {
    if (this->mUnk_0A) {
        this->func_ov024_020d0a64();
    }
}

static inline void SetUnkValue4(int a, int b, int *pVal) {
    if (a <= b) {
        if (*pVal < 0) {
            *pVal = -*pVal;
        }
    } else if (*pVal > 0) {
        *pVal = -*pVal;
    }
}

bool AdventureModeManager_1B8_Base::func_ov024_020d0744(s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6) {
    bool sp10;
    s32 sp8;
    s32 temp_r1;
    s32 temp_r2;
    s32 var_r11;

    sp10 = false;

    if (arg6 == 0) {
        return false;
    }

    temp_r2 = arg3 - arg1;
    temp_r1 = arg4 - arg2;

    if (temp_r2 == 0 && temp_r1 == 0) {
        sp10 = this->func_ov024_020d0924(arg3, arg4, arg5, arg6);
    } else {
        if (temp_r2 >= 0) {
            sp8 = temp_r2;
        } else {
            sp8 = -temp_r2;
        }

        s32 var_r11 = (temp_r1 >= 0) ? temp_r1 : -temp_r1;

        if (sp8 >= var_r11) {
            func_01ffb644(INT_TO_FX32(temp_r1), INT_TO_FX32(temp_r2));
            s32 var_r11_2 = (arg1 <= arg3) ? 1 : -1;
            unk32 var_r5  = INT_TO_FX32(arg2);
            unk32 var_r6  = func_01ffb558();
            SetUnkValue4(arg2, arg4, &var_r6);

            for (int i = 0; i <= sp8; i++) {
                if (this->func_ov024_020d0924(arg1, ROUND_FX32(var_r5), arg5, arg6)) {
                    sp10 = true;
                }

                arg1 += var_r11_2;
                var_r5 += var_r6;
            }
        } else {
            func_01ffb644(INT_TO_FX32(temp_r2), INT_TO_FX32(temp_r1));
            unk32 var_r5  = INT_TO_FX32(arg1);
            s32 var_r11_2 = (arg2 <= arg4) ? 1 : -1;
            unk32 var_r6  = func_01ffb558();
            SetUnkValue4(arg1, arg3, &var_r6);

            for (int i = 0; i <= var_r11; i++) {
                if (this->func_ov024_020d0924(ROUND_FX32(var_r5), arg2, arg5, arg6)) {
                    sp10 = true;
                }

                var_r5 += var_r6;
                arg2 += var_r11_2;
            }
        }
    }

    return sp10;
}

bool AdventureModeManager_1B8_Base::func_ov024_020d0924(unk32 param1, unk32 param2, u8 param3, u8 param4) {
    unk32 var_r4;
    unk32 var_r5;
    unk32 var_r6;
    unk32 var_r7;
    unk32 var_r7_2;
    unk32 var_r8;

    if (param4 == 0) {
        return false;
    }

    if (this->mUnk_10 && param3 >= 0x10) {
        param3 &= 0x0F;
    }

    unk32 temp = param4 >> 1;

    if ((param4 & 1) == 0) {
        var_r7 = temp - 1;
    } else {
        var_r7 = temp;
    }

    var_r5 = param1 - var_r7;
    if (var_r5 <= this->mUnk_1C.mUnk_00) {
        var_r5 = this->mUnk_1C.mUnk_00;
    }

    var_r6 = param1 + temp;
    if (var_r6 >= this->mUnk_1C.mUnk_00 + this->mUnk_1C.mUnk_04 - 1) {
        var_r6 = this->mUnk_1C.mUnk_00 + this->mUnk_1C.mUnk_04 - 1;
    }

    if (var_r5 > var_r6) {
        return false;
    }

    var_r7_2 = param2 - var_r7;
    var_r8   = param2 + temp;

    if (var_r7_2 <= this->mUnk_1C.mUnk_02) {
        var_r7_2 = this->mUnk_1C.mUnk_02;
    }

    if (var_r8 >= this->mUnk_1C.mUnk_02 + this->mUnk_1C.mUnk_06 - 1) {
        var_r8 = this->mUnk_1C.mUnk_02 + this->mUnk_1C.mUnk_06 - 1;
    }

    if (var_r7_2 > var_r8) {
        return false;
    }

    for (; var_r7_2 <= var_r8; var_r7_2++) {
        for (var_r4 = var_r5; var_r4 <= var_r6; var_r4++) {
            unk32 index = this->func_ov024_020d0db4(var_r4, var_r7_2);
            u8 *pBuffer = this->mUnk_18;

            if (this->mUnk_10) {
                u8 value = pBuffer[index];

                if (var_r4 & 1) {
                    pBuffer[index] = (value & 0x0F) | (param3 * 16);
                } else {
                    pBuffer[index] = (value & 0xF0) | param3;
                }
            } else {
                pBuffer[index] = param3;
            }
        }

        if (var_r7_2 < this->mUnk_0B) {
            this->mUnk_0B = var_r7_2;
        }

        if (var_r7_2 > this->mUnk_0C) {
            this->mUnk_0C = var_r7_2;
        }
    }

    this->mUnk_0A = true;
    return true;
}

void AdventureModeManager_1B8_Base::func_ov024_020d0a64() {
    u32 var_r2;
    s32 var_r2_2;
    s32 var_r3;
    u32 var_r6;
    s32 var_r6_2;
    s32 var_r7;
    u8 *temp_r7;
    s32 var_r8;

    if (this->mUnk_0D) {
        this->mUnk_0B = this->mUnk_1C.mUnk_02;
        this->mUnk_0C = 0xBF - this->mUnk_1C.mUnk_02;

        if (this->func_ov024_020d0e98()) {
            if (this->mUnk_10) {
                var_r6 = (this->mUnk_1C.mUnk_02 * 0x100) / 2;
            } else {
                var_r6 = this->mUnk_1C.mUnk_02 * 0x100;
            }

            if (var_r6 != 0) {
                UnkDataStruct2 sp4(var_r6);
                MI_CpuClearFast(sp4.unk_00, var_r6);
                this->TryLoadBGChar(sp4.unk_00, GetUnkValue2(), var_r6);
            }

            var_r6 = this->mUnk_1C.mUnk_02 + this->mUnk_1C.mUnk_06;
            var_r7 = GetUnkValue(0xC0 - var_r6);

            if (var_r7 != 0) {
                UnkDataStruct2 sp0(var_r7);
                MI_CpuClearFast(sp0.unk_00, var_r7);
                this->TryLoadBGChar(sp0.unk_00, GetUnkValue2() + GetUnkValue(var_r6), var_r7);
            }
        }

        this->mUnk_0D = false;
    }

    if (this->func_ov024_020d0e98()) {
        this->mUnk_0B = this->mUnk_0B - this->mUnk_1C.mUnk_02;
        this->mUnk_0C = this->mUnk_0C - this->mUnk_1C.mUnk_02;
    }

    this->mUnk_0B = (this->mUnk_0B / 8) * 8;
    this->mUnk_0C = (((this->mUnk_0C / 8) + 1) * 8) - 1;

    if (this->mUnk_10) {
        var_r6_2 = (this->mUnk_0B * 256) / 2;
    } else {
        var_r6_2 = (this->mUnk_0B * 256);
    }

    temp_r7 = &this->mUnk_18[var_r6_2];

    if (this->func_ov024_020d0e98()) {
        if (this->mUnk_10) {
            var_r6_2 += (this->mUnk_1C.mUnk_02 * 0x100) / 2;
        } else {
            var_r6_2 += this->mUnk_1C.mUnk_02 * 0x100;
        }
    }

    var_r2_2 = GetUnkValue2();

    if (this->mUnk_10) {
        var_r3 = ((this->mUnk_0C - this->mUnk_0B + 1) * 0x100) / 2;
    } else {
        var_r3 = (this->mUnk_0C - this->mUnk_0B + 1) * 0x100;
    }

    this->TryLoadBGChar(temp_r7, var_r6_2 + var_r2_2, var_r3);

    this->mUnk_0A = false;
    this->mUnk_0B = 0xBF;
    this->mUnk_0C = 0;
}

void AdventureModeManager_1B8_Base::TryLoadBGChar(void *ptr, u32 offset, u32 size) {
    DC_func_0002();

    if (!this->mIsTopScreen) {
        switch (this->mBGType) {
            case 0:
                GX_LoadBG0Char(ptr, offset, size);
                break;
            case 1:
                GX_LoadBG1Char(ptr, offset, size);
                break;
            case 2:
                GX_LoadBG2Char(ptr, offset, size);
                break;
            case 3:
                GX_LoadBG3Char(ptr, offset, size);
                break;
            default:
                break;
        }
    } else if (data_0204a110.mUnk_008 != 1) {
        switch (this->mBGType) {
            case 0:
                GXS_LoadBG0Char(ptr, offset, size);
                break;
            case 1:
                GXS_LoadBG1Char(ptr, offset, size);
                break;
            case 2:
                GXS_LoadBG2Char(ptr, offset, size);
                break;
            case 3:
                GXS_LoadBG3Char(ptr, offset, size);
                break;
            default:
                break;
        }
    }
}

unk32 AdventureModeManager_1B8_Base::func_ov024_020d0db4(unk32 param1, unk32 param2) {
    u32 temp_r0;
    s32 temp_r2;
    s32 temp_r3;

    temp_r3 = param2 - this->mUnk_1C.mUnk_02;
    temp_r2 = (param1 >> 3) + ((temp_r3 >> 3) << 5);
    temp_r0 = temp_r3 << 0x1D;

    if (this->mUnk_10) {
        return (temp_r2 << 5) + (temp_r0 >> 0x1B) + ((param1 & 0x07) >> 1);
    }

    return (param1 & 0x07) + ((temp_r2 << 6) + (temp_r0 >> 0x1A));
}

bool AdventureModeManager_1B8_Base::func_ov024_020d0df8(unk32 param1, unk32 param2) {
    bool var_r4 = false;

    if (param1 >= 0 && param1 < 0x100 && param2 >= 0 && param2 < 0xC0) {
        u8 temp_r0 = this->mUnk_18[this->func_ov024_020d0db4(param1, param2)];

        if (this->mUnk_10) {
            if (param1 & 1) {
                if (temp_r0 & 0xF0) {
                    var_r4 = true;
                }
            } else {
                if (temp_r0 & 0x0F) {
                    var_r4 = true;
                }
            }
        } else {
            if (temp_r0 != 0) {
                var_r4 = true;
            }
        }
    }

    return var_r4;
}

void AdventureModeManager_1B8_Base::func_ov024_020d0e64(void *ptr, u32 size) {
    DC_func_0004(ptr, size * 2);
    GXS_BeginLoadBGExtPltt();
    GXS_LoadBGExtPltt(ptr, 0x4000, size * 2);
    GXS_EndLoadBGExtPltt();
}

bool AdventureModeManager_1B8_Base::func_ov024_020d0e98() {
    if (this->mUnk_1C.mUnk_02 > 0 || this->mUnk_1C.mUnk_06 < 0xC0) {
        return true;
    }

    return false;
}

void AdventureModeManager_1B8_Base::func_ov024_020d0ec0(s32 *pFlags, s32 position, bool doSet) {
    if (doSet) {
        SET_FLAG_ALT(pFlags, position);
    } else {
        UNSET_FLAG_ALT(pFlags, position);
    }
}

bool AdventureModeManager_1B8_Base::func_ov024_020d0f0c(s32 *pFlags, s32 position) {
    if (GET_FLAG_ALT(pFlags, position)) {
        return true;
    }

    return false;
}

unk32 AdventureModeManager_1B8_Base::func_ov024_020d0f2c(unk32 param1, unk32 param2) {
    return data_ov024_020d8200.mUnk_04 * (param2 - data_ov024_020d8200.mUnk_02) + (param1 - data_ov024_020d8200.mUnk_00);
}

AdventureModeManager_1B8::AdventureModeManager_1B8(u8 bgType, bool param2, bool param3) :
    AdventureModeManager_1B8_Base(bgType, param2, &data_ov024_020d8200, param3, false) {
    this->mUnk_24 = 0xFF;
    this->mUnk_28 = NULL;
    this->func_ov024_020d0e64(&data_ov024_020d869c, sizeof(data_ov024_020d869c));
}

AdventureModeManager_1B8::~AdventureModeManager_1B8() {}

void AdventureModeManager_1B8::func_ov024_020d0fb4(unk32 param1, unk32 param2, u8 param3, u8 param4, TouchControl *param5) {
    param1 -= data_0204a110.mUnk_E02;

    if (CHECK_TOUCH_FLAGS(param5, TouchFlag_TouchedNow) ||
        (param5->mState.touch && this->mUnk_00 == ADVMGR_UNK && this->mUnk_04 == ADVMGR_UNK)) {
        if (this->func_ov024_020d0924(param1, param2, param3, param4)) {
            this->mUnk_00 = param1;
            this->mUnk_04 = param2;

            if (param3 == 0) {
                data_ov000_020b52b4.func_ov000_0206f778(param1, param2, 0x42);
            } else {
                data_ov000_020b52b4.func_ov000_0206f778(param1, param2, 0x41);
            }
        } else {
            this->mUnk_00 = ADVMGR_UNK;
            this->mUnk_04 = ADVMGR_UNK;
        }
    } else if (param5->mState.touch) {
        if (this->func_ov024_020d0744(this->mUnk_00, this->mUnk_04, param1, param2, param3, param4)) {
            this->mUnk_00 = param1;
            this->mUnk_04 = param2;

            if (param3 == 0) {
                data_ov000_020b52b4.func_ov000_0206f778(param1, param2, 0x42);
            } else {
                data_ov000_020b52b4.func_ov000_0206f778(param1, param2, 0x41);
            }

            data_027e0ce0->func_ov017_020bd69c();
        } else {
            this->mUnk_00 = ADVMGR_UNK;
            this->mUnk_04 = ADVMGR_UNK;
        }
    } else {
        this->mUnk_00 = ADVMGR_UNK;
        this->mUnk_04 = ADVMGR_UNK;
    }
}

void AdventureModeManager_1B8::func_ov024_020d114c() {
    this->mUnk_00 = ADVMGR_UNK;
    this->mUnk_04 = ADVMGR_UNK;
}

bool AdventureModeManager_1B8::func_ov024_020d1160() {
    UnkDataStruct2 sp1C(0x4A90);

    s32 *unk_00  = (s32 *) sp1C.unk_00;
    void *sp14   = (void *) ((u8 *) sp1C.unk_00 + 0x1290);
    void *unk_28 = this->mUnk_28;

    this->func_ov024_020d14a8((AdventureModeManager_1B8_Base_1C *) &data_ov024_020d8200, 0x1290, unk_00);

    for (int spC = 0; spC < 4; spC++) {
        u32 temp_r0 = func_0202955c(unk_00, 0x1290, unk_28, 4, sp14);

        if (temp_r0 != 0 && temp_r0 <= 0xFFC) {
            if (0xFFC - temp_r0 != 0) {
                MI_CpuFill8((void *) ((u8 *) unk_28 + temp_r0), 0, 0xFFC - temp_r0);
            }

            return true;
        }

        if (spC < 3) {
            int sp8 = data_ov024_020d8200.mUnk_00 + data_ov024_020d8200.mUnk_04;
            int sp4 = data_ov024_020d8200.mUnk_02 + data_ov024_020d8200.mUnk_06;
            int var_r5;
            int var_r6;
            int var_r7;
            int var_r8;
            bool var_r9;
            int var_r10;

            for (var_r8 = data_ov024_020d8200.mUnk_02; var_r8 < sp4; var_r8 += 2) {
                for (var_r10 = data_ov024_020d8200.mUnk_00; var_r10 < sp8; var_r10 += 2) {
                    var_r7 = 0;

                    for (var_r5 = 0; var_r5 < 2; var_r5++) {
                        for (var_r6 = 0; var_r6 < 2; var_r6++) {
                            int result = AdventureModeManager_1B8_Base::func_ov024_020d0f2c(var_r10 + var_r6, var_r8 + var_r5);
                            if (AdventureModeManager_1B8_Base::func_ov024_020d0f0c(unk_00, result)) {
                                var_r7++;
                            }
                        }
                    }

                    if (data_ov024_020d7547[spC] == var_r7) {
                        var_r9 = data_ov024_020d7544[spC];

                        for (var_r5 = 0; var_r5 < 2; var_r5++) {
                            for (var_r6 = 0; var_r6 < 2; var_r6++) {
                                int result =
                                    AdventureModeManager_1B8_Base::func_ov024_020d0f2c(var_r10 + var_r6, var_r8 + var_r5);
                                AdventureModeManager_1B8_Base::func_ov024_020d0ec0(unk_00, result, var_r9);
                            }
                        }
                    }
                }
            }
        }
    }

    return false;
}

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
        UnkDataStruct2 sp4(0x2290);
        void *unk_00 = sp4.unk_00;

        if (gSaveManager.func_ov000_020a0b70(unk_00, this->mUnk_24)) {
            s32 *ptr = (s32 *) ((u8 *) sp4.unk_00 + 0x1000);
            func_02029058(unk_00, ptr);
            this->func_ov024_020d1564(&data_ov024_020d8200, 0x1290, ptr, 1);
            return; // this is required
        }
    }
}

bool AdventureModeManager_1B8::func_ov024_020d14a8(AdventureModeManager_1B8_Base_1C *param1, unk32 param2, s32 *pFlags) {
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
    MI_CpuClearFast(this->mUnk_28, 0x1000);
    data_ov017_020c3f70.func_ov017_020bba78();
}

void AdventureModeManager_1B8::func_ov024_020d1638() {
    data_ov017_020c3f70.func_ov017_020bba94();
    this->mUnk_28 = NULL;
}
