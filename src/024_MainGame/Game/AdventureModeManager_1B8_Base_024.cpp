#include "MainGame/AdventureMode.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"

extern "C" {
void GX_LoadBG0Char(void *ptr, u32 offset, u32 size);
void GX_LoadBG1Char(void *ptr, u32 offset, u32 size);
void GX_LoadBG2Char(void *ptr, u32 offset, u32 size);
void GX_LoadBG3Char(void *ptr, u32 offset, u32 size);

void GXS_LoadBG0Char(void *ptr, u32 offset, u32 size);
void GXS_LoadBG1Char(void *ptr, u32 offset, u32 size);
void GXS_LoadBG2Char(void *ptr, u32 offset, u32 size);
void GXS_LoadBG3Char(void *ptr, u32 offset, u32 size);

void GXS_BeginLoadBGExtPltt(void);
void GXS_LoadBGExtPltt(void *ptr, u32 offset, u32 size);
void GXS_EndLoadBGExtPltt(void);

void DC_func_0004(void *, int);
void DC_func_0002();

void func_ov000_0205a950(u8 bgType, bool isTopScreen, bool);
void func_ov000_0205a944(u8 bgType, bool isTopScreen, bool);
void func_01ffb644(q20 x, q20 y);
unk32 func_01ffb558();
}

extern s16 data_ov024_020d8200[4];

AdventureModeManager_1B8_Base::AdventureModeManager_1B8_Base(u8 bgType, bool param2,
                                                             const AdventureModeManager_1B8_Base_1C *param3, bool param4,
                                                             bool param5) {
    this->mUnk_00      = (s16) 0x8000;
    this->mUnk_04      = (s16) 0x8000;
    this->mUnk_08      = false;
    this->mUnk_09      = param5;
    this->mUnk_0A      = false;
    this->mUnk_0B      = 0xBF;
    this->mUnk_0C      = 0x00;
    this->mBGType      = bgType;
    this->mIsTopScreen = param2;
    this->mUnk_10      = param4;
    this->mUnk_14      = GetUnkValue_Impl(param3->mUnk_06, param4);
    this->mUnk_18      = (u8 *) ::operator new(this->mUnk_14, HeapIndex_1, 4);
    MI_CpuCopy16((void *) param3, &this->mUnk_1C, sizeof(AdventureModeManager_1B8_Base_1C));
    this->func_ov024_020d0698();
}

AdventureModeManager_1B8_Base::~AdventureModeManager_1B8_Base() {
    delete this->mUnk_18;
}

void AdventureModeManager_1B8_Base::func_ov024_020d0698() {
    _MI_CpuFill(0, this->mUnk_18, this->mUnk_14);
    this->mUnk_0A = true;
    this->mUnk_0D = true;
    this->mUnk_00 = -0x8000;
    this->mUnk_04 = -0x8000;
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

// https://decomp.me/scratch/LhXwS
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

        var_r11 = temp_r1;

        if (temp_r1 < 0) {
            var_r11 = -temp_r1;
        }

        if (sp8 >= var_r11) {
            func_01ffb644(INT_TO_Q20(temp_r1), INT_TO_Q20(temp_r2));
            s32 var_r11_2;

            var_r11_2 = 1;
            if (!(arg1 <= arg3)) {
                var_r11_2 = -1;
            }

            unk32 var_r5 = INT_TO_Q20(arg2);
            unk32 var_r6 = func_01ffb558();

            if (arg2 <= arg4) {
                if (var_r6 < 0) {
                    var_r6 = -var_r6;
                }
            } else if (var_r6 > 0) {
                var_r6 = -var_r6;
            }

            for (int i = 0; i <= sp8; i++) {
                if (this->func_ov024_020d0924(arg1, ROUND_Q20(var_r5), arg5, arg6)) {
                    sp10 = true;
                }

                arg1 += var_r11_2;
                var_r5 += var_r6;
            }
        } else {
            func_01ffb644(INT_TO_Q20(temp_r2), INT_TO_Q20(temp_r1));
            s32 var_r11_2;
            unk32 var_r5 = INT_TO_Q20(arg1);

            if (arg2 <= arg4) {
                var_r11_2 = 1;
            } else {
                var_r11_2 = -1;
            }

            unk32 var_r6 = func_01ffb558();

            if (arg1 <= arg3) {
                if (var_r6 < 0) {
                    var_r6 = -var_r6;
                }
            } else if (var_r6 > 0) {
                var_r6 = -var_r6;
            }

            for (int i = 0; i <= var_r11; i++) {
                if (this->func_ov024_020d0924(ROUND_Q20(var_r5), arg2, arg5, arg6)) {
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

//! TODO figure this out
struct SomeSaveFileStruct {
    /* 00 */ void *unk_00;

    SomeSaveFileStruct(unk32 param1);
    ~SomeSaveFileStruct();
};

// https://decomp.me/scratch/e7SZ5
void AdventureModeManager_1B8_Base::func_ov024_020d0a64() {
    if (this->mUnk_0D) {
        this->mUnk_0B = this->mUnk_1C.mUnk_02;
        this->mUnk_0C = 0xBF - this->mUnk_1C.mUnk_02;

        if (this->func_ov024_020d0e98()) {
            u32 var_r6;
            s32 var_r7;
            s32 var_r8;
            u32 var_r2;

            if (this->mUnk_10) {
                var_r6 = (this->mUnk_1C.mUnk_02 * 0x100) / 2;
            } else {
                var_r6 = this->mUnk_1C.mUnk_02 * 0x100;
            }

            if (var_r6 != 0) {
                SomeSaveFileStruct sp4(var_r6);

                _MI_CpuFill(0, sp4.unk_00, var_r6);

                var_r7 = 0;
                if (this->mUnk_08) {
                    var_r7 = 0x2000;
                }

                this->TryLoadBGChar(sp4.unk_00, var_r7, var_r6);
            }

            var_r6 = this->mUnk_1C.mUnk_02 + this->mUnk_1C.mUnk_06;

            if (this->mUnk_10) {
                var_r7 = ((0xC0 - var_r6) * 0x100) / 2;
            } else {
                var_r7 = (0xC0 - var_r6) * 0x100;
            }

            if (var_r7 != 0) {
                SomeSaveFileStruct sp0(var_r7);

                _MI_CpuFill(0, sp0.unk_00, var_r7);

                var_r8 = 0;
                if (this->mUnk_08) {
                    var_r8 = 0x2000;
                }

                var_r2;
                if (this->mUnk_10) {
                    var_r2 = (var_r6 * 0x100) / 2;
                } else {
                    var_r2 = var_r6 * 0x100;
                }

                this->TryLoadBGChar(sp0.unk_00, var_r8 + var_r2, var_r7);
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

    s32 var_r6  = GetUnkValue(this->mUnk_0B);
    u8 *temp_r7 = &this->mUnk_18[var_r6];

    if (this->func_ov024_020d0e98()) {
        if (this->mUnk_10) {
            var_r6 += (this->mUnk_1C.mUnk_02 * 0x100) / 2;
        } else {
            var_r6 += this->mUnk_1C.mUnk_02 * 0x100;
        }
    }

    s32 var_r2_2 = 0x2000;
    if (!this->mUnk_08) {
        var_r2_2 = 0;
    }

    s32 var_r3;
    if (this->mUnk_10) {
        var_r3 = ((this->mUnk_0C - this->mUnk_0B + 1) * 0x100) / 2;
    } else {
        var_r3 = (this->mUnk_0C - this->mUnk_0B + 1) * 0x100;
    }

    this->TryLoadBGChar(temp_r7, var_r6 + var_r2_2, var_r3);
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
    return data_ov024_020d8200[2] * (param2 - data_ov024_020d8200[1]) + (param1 - data_ov024_020d8200[0]);
}
