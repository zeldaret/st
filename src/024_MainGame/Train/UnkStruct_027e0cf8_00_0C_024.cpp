#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cf8.hpp"
#include "versions.h"

extern "C" bool func_ov000_0205ca18(unk32 param1, unk32 param2);
extern "C" bool func_ov000_0205c9d0(unk32 stationSceneIdx);
extern VecFx32 data_027e07d4;

static const Vec2sb data_ov024_020d8094(0x7F, 0x7F);

static const UnkStruct_ov024_020d8098 data_ov024_020d8098[] = {
    {-1, SceneIndex_d_main_f, data_ov024_020d8094, 0x00, 0x03, false, false},
    {-1, SceneIndex_f_htown, data_ov024_020d8094, 0x01, 0x02, true, false},
    {-1, SceneIndex_f_first, data_ov024_020d8094, 0x02, 0x0A, true, false},
    {-1, SceneIndex_f_forest1, data_ov024_020d8094, 0x03, 0x0B, true, false},
    {-1, SceneIndex_f_snow, data_ov024_020d8094, 0x04, 0x0C, true, false},
    {-1, SceneIndex_f_water, data_ov024_020d8094, 0x05, 0x0E, true, false},
    {-1, SceneIndex_f_flame5, data_ov024_020d8094, 0x06, 0x0D, true, false},
    {-1, SceneIndex_f_forest2, data_ov024_020d8094, 0x07, 0x13, true, true},
    {-1, SceneIndex_f_snow2, data_ov024_020d8094, 0x08, 0x14, true, true},
    {-1, SceneIndex_f_water2, data_ov024_020d8094, 0x09, 0x15, true, true},
    {-1, SceneIndex_f_flame2, data_ov024_020d8094, 0x0A, 0x16, true, true},
    {-1, SceneIndex_d_forest, data_ov024_020d8094, 0x0B, 0x05, false, false},
    {-1, SceneIndex_d_snow26, data_ov024_020d8094, 0x0C, 0x06, false, false},
    {0x0A, SceneIndex_d_water27, data_ov024_020d8094, 0x0E, 0x1D, false, false},
    {0x06, SceneIndex_d_water27, data_ov024_020d8094, 0x0D, 0x07, false, false},
    {-1, SceneIndex_d_flame, data_ov024_020d8094, 0x0F, 0x08, false, false},
    {-1, SceneIndex_d_sand, data_ov024_020d8094, 0x1B, 0x09, false, false},
    {-1, SceneIndex_f_tetsuo, data_ov024_020d8094, 0x10, 0x1F, true, true},
    {-1, SceneIndex_f_bridge, data_ov024_020d8094, 0x11, 0x1E, true, true},
    {-1, SceneIndex_f_bridge2, data_ov024_020d8094, 0x12, 0x19, true, true},
    {-1, SceneIndex_f_flame3, data_ov024_020d8094, 0x1C, 0x20, true, false},
    {-1, SceneIndex_f_ajito, data_ov024_020d8094, 0x1D, 0x26, true, true},
    {-1, SceneIndex_f_sand, data_ov024_020d8094, 0x1E, 0x17, true, true},
    {-1, SceneIndex_f_flame4, data_ov024_020d8094, 0x1F, 0x24, true, true},
    {-1, SceneIndex_f_rabbit, data_ov024_020d8094, 0x20, 0x25, true, true},
    {-1, SceneIndex_f_kakushi1, Vec2sb(0x01, 0x01), 0x26, 0x29, true, true},
    {-1, SceneIndex_f_kakushi2, data_ov024_020d8094, 0x27, 0x21, true, true},
    {-1, SceneIndex_f_kakushi3, data_ov024_020d8094, 0x28, 0x22, true, true},
    {-1, SceneIndex_f_water3, data_ov024_020d8094, 0x29, 0x1C, true, true},
    {-1, SceneIndex_f_kakushi1, Vec2sb(0x0E, 0x01), 0x38, 0x29, true, true},
};

static const UnkStruct_ov024_020d7454 data_ov024_020d7454[] = {
    {
        .mSceneIndex = SceneIndex_t_area1,
        .mUnk_02     = 0x000B,
        .mUnk_04     = 0x1B,
        .mAdvFlag    = AdventureFlag_AnoukiPuzzleComplete,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x14,
    },
    {
        .mSceneIndex = SceneIndex_t_area2,
        .mUnk_02     = 0x000A,
        .mUnk_04     = 0x1A,
        .mAdvFlag    = AdventureFlag_OpenedMarineTemplePath,
        .mUnk_08     = true,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x15,
    },
    {
        .mSceneIndex = SceneIndex_t_area3,
        .mUnk_02     = 0xFFFF,
        .mUnk_04     = 0x1B,
        .mAdvFlag    = AdventureFlag_ObtainedThreeKeysToMountainTemple,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x16,
    },
    {
        .mSceneIndex = SceneIndex_t_area0,
        .mUnk_02     = 0x000F,
        .mUnk_04     = 0x28,
        .mAdvFlag    = AdventureFlag_ZeldaTextAfterCompassOfLight,
        .mUnk_08     = true,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x21,
    },
    {
        .mSceneIndex = SceneIndex_t_area0,
        .mUnk_02     = 0x0014,
        .mUnk_04     = 0x0F,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x17,
    },
    {
        .mSceneIndex = SceneIndex_t_area1,
        .mUnk_02     = 0x0014,
        .mUnk_04     = 0x11,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x18,
    },
    {
        .mSceneIndex = SceneIndex_t_area2,
        .mUnk_02     = 0x0014,
        .mUnk_04     = 0x12,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x19,
    },
    {
        .mSceneIndex = SceneIndex_t_area3,
        .mUnk_02     = 0x0014,
        .mUnk_04     = 0x10,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x1A,
    },
    {
        .mSceneIndex = SceneIndex_t_smarine,
        .mUnk_02     = 0x0006,
        .mUnk_04     = 0x1A,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x22,
    },
    {
        .mSceneIndex = SceneIndex_t_dark,
        .mUnk_02     = 0x000F,
        .mUnk_04     = 0x04,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x2A,
    },
    {
        .mSceneIndex = SceneIndex_t_dark,
        .mUnk_02     = 0x000F,
        .mUnk_04     = 0x04,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x2B,
    },
    {
        .mSceneIndex = SceneIndex_t_dark,
        .mUnk_02     = 0x000F,
        .mUnk_04     = 0x04,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x2C,
    },
    {
        .mSceneIndex = SceneIndex_t_dark,
        .mUnk_02     = 0x000F,
        .mUnk_04     = 0x04,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x2D,
    },
    {
        .mSceneIndex = SceneIndex_t_dark,
        .mUnk_02     = 0x000F,
        .mUnk_04     = 0x04,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x2E,
    },
    {
        .mSceneIndex = SceneIndex_t_dark,
        .mUnk_02     = 0x000F,
        .mUnk_04     = 0x04,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x2F,
    },
    {
        .mSceneIndex = SceneIndex_t_dark,
        .mUnk_02     = 0x000F,
        .mUnk_04     = 0x04,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x36,
    },
    {
        .mSceneIndex = SceneIndex_t_dark,
        .mUnk_02     = 0x000F,
        .mUnk_04     = 0x04,
        .mAdvFlag    = AdventureFlag_Unset,
        .mUnk_08     = false,
        .mUnk_09     = false,
        .mUnk_0A     = false,
        .mUnk_0B     = 0x00,
        .mUnk_0C     = 0x37,
    },
};

UnkStruct_027e0cf8_00::UnkStruct_027e0cf8_00() {
    this->mUnk_2238   = &this->mUnk_0018.mUnk_18C0;
    this->mUnk_223C   = 0;
    this->mUnk_2240.x = 0;
    this->mUnk_2240.y = 0;
    this->mUnk_2244   = 0;
    this->mUnk_2248   = 0;
    this->mUnk_224C   = 0;
    this->mUnk_2250   = 0;
    this->mUnk_2254   = 1;
}

UnkStruct_027e0cf8_00::~UnkStruct_027e0cf8_00() {}

void UnkStruct_027e0cf8_00::func_ov024_020cf9d4(UnkStruct_027e0cf8_00_18_00 *param1) {
    switch (this->mRandom.Next32(3)) {
        case 0:
            param1->mUnk_00.func_ov000_0206082c(0x64, 0x00);
            break;
        case 1:
            param1->mUnk_00.func_ov000_0206082c(0x64, 0x01);
            break;
        case 2:
            param1->mUnk_00.func_ov000_0206082c(0x64, 0x02);
            break;
        default:
            break;
    }

    u32 value1 = this->mRandom.Next32(((u8 *) this->mUnk_2238 - (u8 *) &this->mUnk_0018.mUnk_18C0) / 8);

    u32 value2      = this->mRandom.Next32(17);
    u32 value3      = *(u32 *) ((u8 *) &this->mUnk_0018.mUnk_18C0 + (value1 << 3));
    param1->mUnk_78 = value3 + ((value2 - 8) << 12);

    u32 value4      = this->mRandom.Next32(17);
    u32 value5      = *(u32 *) ((u8 *) &this->mUnk_0018.mUnk_18C0 + (value1 << 3) + 4);
    param1->mUnk_7C = value5 + ((value4 - 8) << 12);

    param1->mUnk_80 = this->mRandom.Next32(25);
}

void UnkStruct_027e0cf8_00::func_ov024_020cfb7c(UnkDataStruct4 *param1, Vec2s *param2, unk32 param3, u16 param4, unk32 param5,
                                                unk32 param6) {
    this->mUnk_224C = 0;
    this->mUnk_2244 = param5;
    this->mUnk_2248 = param6;

    if (param3 == -1) {
        this->mUnk_223C = 0;
        return;
    }

    Vec2s_Copy(param2, &this->mUnk_2240);
    this->mRandom.Setup();
    this->mUnk_2238 = &this->mUnk_0018.mUnk_18C0;

    VecFx32 spC = data_027e07d4;

    for (s16 i = 0; i < ARRAY_LEN(param1->mUnk_14); i++) {
        UnkDataStruct4_14_2 **pUnk_14 = param1->mUnk_14;

        for (s16 j = 0; j < ARRAY_LEN(param1->mUnk_14[0]->mUnk_00); j++) {
            if (pUnk_14[i]->mUnk_00[j].func_ov024_020d1d30(param3, param4)) {
                param1->func_ov024_020d2b08(i, j, &spC);

                Vec2p temp2;
                temp2.x = spC.x;
                temp2.y = spC.z;

                Vec2p *unk_2238 = this->mUnk_2238;
                if (unk_2238 != NULL) {
                    Vec2p_Copy(&temp2, unk_2238);
                    Vec2p_Copy(&temp2, unk_2238); //! TODO: fake match?
                }

                this->mUnk_2238++;
            }
        }
    }

    s32 value = (((u8 *) this->mUnk_2238 - (u8 *) &this->mUnk_0018.mUnk_18C0) / 8) * 2;

    if (value > ARRAY_LEN(this->mUnk_0018.mUnk_00)) {
        value = ARRAY_LEN(this->mUnk_0018.mUnk_00);
    }

    this->mUnk_223C = value;

    for (int i = 0; i < value; i++) {
        this->func_ov024_020cf9d4(&this->mUnk_0018.mUnk_00[i]);
        value = this->mUnk_223C;
    }

    this->mUnk_2250 = value;
}

s32 UnkStruct_027e0cf8_00::func_ov024_020cfd54(s32 param1, s32 stationSceneIdx, s32 param3, s32 param4) {
    u32 i;
    const UnkStruct_ov024_020d8098 *ptr;
    bool var_r8;
    bool var_r9;
    bool var_r10;

    for (i = 0; i < ARRAY_LEN(data_ov024_020d8098); i++) {
        ptr = &data_ov024_020d8098[i];

        var_r8 = 1;
        if (ptr->mUnk_00 != -1 && ptr->mUnk_00 != param1) {
            var_r8 = 0;
        }

        var_r10 = 1;
        if (ptr->mStationSceneIdx != stationSceneIdx) {
            var_r10 = 0;
        }

        var_r9 = 1;
        if (ptr->mUnk_04.x != data_ov024_020d8094.x || ptr->mUnk_04.y != data_ov024_020d8094.y) {
            s8 temp[2];
            temp[0] = param3;
            temp[1] = param4;

            s8 *new_var4 = temp;
            if (ptr->mUnk_04.x != new_var4[0] || ptr->mUnk_04.y != new_var4[1]) {
                var_r9 = 0;
            }
        }

        if (var_r8 && var_r10 && var_r9) {
            return i;
        }
    }

    return -1;
}

bool UnkStruct_027e0cf8_00::func_ov024_020cfe24(s16 stationSceneIdx) {
    for (u32 i = 0; i < ARRAY_LEN(data_ov024_020d8098); i++) {
        if (stationSceneIdx == data_ov024_020d8098[i].mStationSceneIdx) {
            return data_ov024_020d8098[i].mUnk_0A;
        }
    }

    return false;
}

s32 UnkStruct_027e0cf8_00::func_ov024_020cfe6c(s32 param1, s32 param2, s32 param3, s32 param4) {
    s32 index = UnkStruct_027e0cf8_00::func_ov024_020cfd54(param1, param2, param3, param4);

    if (index >= 0) {
        return data_ov024_020d8098[index].mUnk_06;
    }

    return -1;
}

s16 UnkStruct_027e0cf8_00::func_ov024_020cfe94(s32 param1) {
    for (u32 i = 0; i < ARRAY_LEN(data_ov024_020d8098); i++) {
        const UnkStruct_ov024_020d8098 *ptr = &data_ov024_020d8098[i];

        if (ptr->mUnk_06 == param1) {
            return ptr->mStationSceneIdx;
        }
    }

    return SceneIndex_None;
}

bool UnkStruct_027e0cf8_00::func_ov024_020cfed0(s16 sceneIndex) {
    for (u32 i = 0; i < ARRAY_LEN(data_ov024_020d8098); i++) {
        if (sceneIndex == data_ov024_020d8098[i].mStationSceneIdx) {
            return data_ov024_020d8098[i].mUnk_0B;
        }
    }

    func_ov024_020d5340(sceneIndex);
    return false;
}

void UnkStruct_027e0cf8_0C_00::func_ov024_020cff1c() {
    this->mUnk_0C.x = 0;
    this->mUnk_0C.y = 0;
    this->mUnk_14   = -1;
    this->mUnk_16   = -1;
    this->mUnk_18   = false;
    this->mUnk_19   = false;
    this->mUnk_1A   = false;
    this->mUnk_1B   = false;
}

UnkStruct_027e0cf8_0C::UnkStruct_027e0cf8_0C() :
    mUnk_150(NULL, 0),
    mUnk_15C(NULL, 0) {
    this->mUnk_168.x = 0;
    this->mUnk_168.y = 0;
    this->mUnk_16C   = 0;
}

UnkStruct_027e0cf8_0C::~UnkStruct_027e0cf8_0C() {}

void UnkStruct_027e0cf8_0C::func_ov024_020cff8c(UnkDataStruct4 *param1, Vec2s *param2) {
    Vec2s_Copy(param2, &this->mUnk_168);
    this->mUnk_150.func_ov000_0205fc20(0x66, 0x00, NULL, NULL);
    this->mUnk_15C.func_ov000_0205fc20(0x66, 0x01, NULL, NULL);
    this->mUnk_16C = 0;
    this->func_ov024_020d002c(param1);
    this->func_ov024_020d01c0(param1);
}

void UnkStruct_027e0cf8_0C::func_ov024_020d0004() {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_000); i++) {
        this->mUnk_000[i].func_ov024_020cff1c();
    }
}

void UnkStruct_027e0cf8_0C::func_ov024_020d002c(const UnkDataStruct4 *param1) {
    int i;
    int j;
    unk32 unk_16C;
    const UnkStruct_ov024_020d8098 *temp_r6;
    UnkStruct_027e0cf8_0C_00 *temp_r9;
    s8 temp_r8;
    UnkDataStruct4_14_2 *const *sp8;
    const UnkDataStruct4_14 *pUnk_14;
    const UnkDataStruct4_14 *new_var;
    SceneIndex temp_r11;
    VecFx32 spC;
    s32 temp_r0;
    bool var_r0_2;
    bool var_r0_3;

    temp_r11 = param1->mSceneIndex;
    spC.x    = 0;
    spC.y    = 0;
    spC.z    = 0;

    for (i = 0; i < ARRAY_LEN(param1->mUnk_14); i++) {
        for (j = 0; j < ARRAY_LEN(param1->mUnk_14[0]->mUnk_00); j++) {
            sp8     = param1->mUnk_14;
            pUnk_14 = sp8[i]->mUnk_00;
            temp_r8 = sp8[i]->mUnk_00[j].mStationSceneIndex;
            new_var = &pUnk_14[j];

            if (temp_r8 == SceneIndex_Max) {
                continue;
            }

            temp_r0 = UnkStruct_027e0cf8_00::func_ov024_020cfd54(temp_r11, temp_r8, i, j);
            if (temp_r0 < 0) {
                continue;
            }

            temp_r6 = &data_ov024_020d8098[temp_r0];

            if (temp_r8 == SceneIndex_Max) {
                continue;
            }

            unk_16C                         = this->mUnk_16C;
            this->mUnk_000[unk_16C].mUnk_18 = UnkStruct_027e0cf8_0C::func_ov024_020d0510(temp_r6->mUnk_06);

            if (temp_r6->mUnk_08 != 0xFFFF) {
                this->mUnk_000[unk_16C].mUnk_00.func_ov000_0205fc20(0x66, temp_r6->mUnk_08, NULL, NULL);
                this->mUnk_000[unk_16C].mUnk_1B = true;
            } else {
                this->mUnk_000[unk_16C].mUnk_1B = false;
            }

            param1->func_ov024_020d2b08(i, j, &spC);

            this->mUnk_000[unk_16C].mUnk_0C.x = spC.x;
            this->mUnk_000[unk_16C].mUnk_0C.y = spC.z;

#if IS_JP
            if (temp_r8 == SceneIndex_d_main_f) {
                if (param1->mSceneIndex == SceneIndex_t_area1 || param1->mSceneIndex == SceneIndex_t_area3) {
                    this->mUnk_000[unk_16C].mUnk_0C.y -= 0xC000;
                }
            }
#endif

            this->mUnk_000[unk_16C].mUnk_14 = UnkStruct_027e0cf8_00::func_ov024_020cfe6c(temp_r11, temp_r8, i, j);
            this->mUnk_000[unk_16C].mUnk_16 = temp_r8;

            if (new_var->func_ov024_020d23bc() && UnkStruct_027e0cf8_00::func_ov024_020cfe24(temp_r8)) {
                var_r0_2 = true;
            } else {
                var_r0_2 = false;
            }
            this->mUnk_000[unk_16C].mUnk_19 = var_r0_2;

            if (new_var->func_ov024_020d239c() && UnkStruct_027e0cf8_00::func_ov024_020cfe24(temp_r8)) {
                var_r0_3 = true;
            } else {
                var_r0_3 = false;
            }
            this->mUnk_000[unk_16C].mUnk_1A = var_r0_3;

            this->mUnk_16C++;
        }
    }
}

void UnkStruct_027e0cf8_0C::func_ov024_020d01c0(const UnkDataStruct4 *param1) {
    SceneIndex sceneIndex = param1->mSceneIndex;

    for (u32 i = 0; i < ARRAY_LEN(data_ov024_020d7454); i++) {
        const UnkStruct_ov024_020d7454 *temp_r7 = &data_ov024_020d7454[i];

        if (sceneIndex == temp_r7->mSceneIndex) {
            UnkStruct_027e0cf8_0C_00 *temp_r8 = &this->mUnk_000[this->mUnk_16C];

            if (temp_r7->mAdvFlag == AdventureFlag_Unset) {
                temp_r8->mUnk_18 = true;
            } else {
                bool var_r1;

                if (data_027e09b8->HasAdventureFlag(temp_r7->mAdvFlag)) {
                    var_r1 = true;
                } else {
                    var_r1 = false;
                }

                if (temp_r7->mUnk_08 == var_r1) {
                    temp_r8->mUnk_18 = true;
                } else {
                    temp_r8->mUnk_18 = false;
                }
            }

            temp_r8->mUnk_00.func_ov000_0205fc20(0x66, temp_r7->mUnk_04, NULL, NULL);

            if (!param1->func_ov024_020d308c(&temp_r8->mUnk_0C.x, &temp_r8->mUnk_0C.y, temp_r7->mUnk_0C)) {
                temp_r8->mUnk_0C.x = 0;
                temp_r8->mUnk_0C.y = 0;
            }

            temp_r8->mUnk_14 = temp_r7->mUnk_0C;
            temp_r8->mUnk_16 = temp_r7->mUnk_02;
            temp_r8->mUnk_19 = temp_r7->mUnk_09;
            temp_r8->mUnk_1A = temp_r7->mUnk_0A;
            temp_r8->mUnk_1B = true;
            this->mUnk_16C++;
        }
    }
}

bool UnkStruct_027e0cf8_0C::func_ov024_020d02e0(fx32 *pX, fx32 *pZ, s32 param3) {
    //! TODO: fake match?
    for (int i = 0; i < *(volatile unk32 *) &this->mUnk_16C; i++) {
        UnkStruct_027e0cf8_0C_00 *iVar2 = &this->mUnk_000[i];

        if (iVar2->mUnk_14 == param3) {
            if (pX != NULL) {
                *pX = iVar2->mUnk_0C.x;
            }

            if (pZ != NULL) {
                *pZ = iVar2->mUnk_0C.y;
            }

            return true;
        }
    }

    return false;
}

bool UnkStruct_027e0cf8_0C::func_ov024_020d0340(Vec2s *param1, unk32 param2) {
    VecFx32 sp4 = data_027e07d4;

    if (this->func_ov024_020d02e0(&sp4.x, &sp4.z, param2)) {
        Vec2s local_28;
        local_28.x = 0x200;
        local_28.y = 0x000;

        if (!data_027e0998->func_ov000_02061a48(&sp4, param1, &local_28)) {
            return false;
        }

        Vec2s_Add2(&this->mUnk_168, param1);
        return true;
    }

    return false;
}

void UnkStruct_027e0cf8_0C::func_ov024_020d03f8(Vec2s *param1) {
    Vec2s local_8;
    local_8.x = param1->x;
    local_8.y = param1->y;
    UnkStruct_027e0cf8_00::func_ov024_020cfe94(this->func_ov024_020d041c(&local_8));
}

s32 UnkStruct_027e0cf8_0C::func_ov024_020d041c(Vec2s *param1) {
    Vec2s sp0;
    s16 var_r0;
    s16 var_r2;
    s16 var_r6;
    s16 var_r7;

    for (int i = 0; i < 0x39; i++) {
        switch (i) {
            case 0x02:
                var_r6 = 0;
                var_r7 = -8;
                break;
            case 0x1D:
            case 0x20:
                var_r6 = -8;
                var_r7 = 0;
                break;
            default:
                var_r6 = 0;
                var_r7 = 8;
                break;
        }

        if (this->func_ov024_020d0340(&sp0, i)) {
            sp0.x -= var_r6;
            sp0.y -= var_r7;

            sp0.x -= param1->x;
            sp0.y -= param1->y;

            var_r2 = sp0.x;
            if (var_r2 < 0) {
                var_r2 = -var_r2;
            }

            if (var_r2 < 12) {
                var_r0 = sp0.y;
                if (var_r0 < 0) {
                    var_r0 = -var_r0;
                }

                if (var_r0 < 12) {
                    return i;
                }
            }
        }
    }

    return -1;
}

bool UnkStruct_027e0cf8_0C::func_ov024_020d0510(s16 param1) {
    for (u32 i = 0; i < ARRAY_LEN(data_ov024_020d8098); i++) {
        const UnkStruct_ov024_020d8098 *ptr = &data_ov024_020d8098[i];

        if (ptr->mUnk_06 == param1) {
            if (ptr->mUnk_0B) {
                if (param1 == 0x26) {
                    return func_ov000_0205ca18(0x3F, 0x00);
                }

                if (param1 == 0x38) {
                    return func_ov000_0205ca18(0x3F, 0x0A);
                }

                if (param1 == 0x29) {
                    return func_ov000_0205ca18(0x39, 0x0A);
                }

                return func_ov000_0205c9d0(ptr->mStationSceneIdx);
            }

            return true;
        }
    }

    return false;
}

void UnkStruct_027e0cf8_0C::func_ov024_020d05d0(unk32 param1, bool param2) {
    for (int i = 0; i < this->mUnk_16C; i++) {
        if (param1 == this->mUnk_000[i].mUnk_14) {
            this->mUnk_000[i].mUnk_18 = param2;
            break;
        }
    }
}
