#include "Unknown/UnkStruct_027e0cf8.hpp"

extern "C" bool func_ov024_020d1d30(void *param1, unk32 param3, u16 param4);
extern "C" bool func_ov024_020d5340(s16 param1);
extern VecFx32 data_027e07d4;

struct UnkStruct_ov024_020d8094 {
    /* 00 */ unk8 mUnk_00;
    /* 01 */ unk8 mUnk_01;
    /* 02 */ unk8 mUnk_02;
    /* 03 */ unk8 mUnk_03;
    /* 04 */
};
extern UnkStruct_ov024_020d8094 data_ov024_020d8094;

extern "C" {
typedef union Vec2sb {
    struct {
        s8 x, y;
    };
    s8 coords[2];
} Vec2sb;
}

struct UnkStruct_ov024_020d8098 {
    /* 00 */ unk16 mUnk_00;
    /* 02 */ s16 mUnk_02;
    /* 04 */ unk8 mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ s16 mUnk_06;
    /* 08 */ unk8 mUnk_08;
    /* 09 */ unk8 mUnk_09;
    /* 0A */ bool mUnk_0A;
    /* 0B */ bool mUnk_0B;
    /* 0C */
};
extern UnkStruct_ov024_020d8098 data_ov024_020d8098[];

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

    for (s16 i = 0; i < 20; i++) {
        UnkDataStruct4_14 **pUnk_14 = param1->mUnk_14;

        for (s16 j = 0; j < ARRAY_LEN(param1->mUnk_14); j++) {
            if (func_ov024_020d1d30(&pUnk_14[i][j], param3, param4)) {
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

s32 UnkStruct_027e0cf8_00::func_ov024_020cfd54(s32 param1, s32 param2, s32 param3, s32 param4) {
    u32 i;
    UnkStruct_ov024_020d8098 *ptr;
    bool var_r8;
    bool var_r9;
    bool var_r10;

    for (i = 0; i < 0x1E; i++) {
        ptr = &data_ov024_020d8098[i];

        var_r8 = 1;
        if (ptr->mUnk_00 != -1 && ptr->mUnk_00 != param1) {
            var_r8 = 0;
        }

        var_r10 = 1;
        if (ptr->mUnk_02 != param2) {
            var_r10 = 0;
        }

        var_r9 = 1;
        if (ptr->mUnk_04 != data_ov024_020d8094.mUnk_00 || ptr->mUnk_05 != data_ov024_020d8094.mUnk_01) {
            s8 temp[2];
            temp[0] = param3;
            temp[1] = param4;

            s8 *new_var4 = temp;
            if (ptr->mUnk_04 != new_var4[0] || ptr->mUnk_05 != new_var4[1]) {
                var_r9 = 0;
            }
        }

        if (var_r8 && var_r10 && var_r9) {
            return i;
        }
    }

    return -1;
}

bool UnkStruct_027e0cf8_00::func_ov024_020cfe24(s16 param1) {
    for (u32 i = 0; i < 0x1E; i++) {
        if (param1 == data_ov024_020d8098[i].mUnk_02) {
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

s16 UnkStruct_027e0cf8_00::func_ov024_020cfe94(s16 param1) {
    for (u32 i = 0; i < 0x1E; i++) {
        UnkStruct_ov024_020d8098 *ptr = &data_ov024_020d8098[i];

        if (ptr->mUnk_06 == param1) {
            return ptr->mUnk_02;
        }
    }

    return -1;
}

bool UnkStruct_027e0cf8_00::func_ov024_020cfed0(s16 param1) {
    for (u32 i = 0; i < 0x1E; i++) {
        if (param1 == data_ov024_020d8098[i].mUnk_02) {
            return data_ov024_020d8098[i].mUnk_0B;
        }
    }

    func_ov024_020d5340(param1);
    return false;
}

void UnkStruct_027e0cf8_0C::func_ov024_020cff1c() {}
UnkStruct_027e0cf8_0C::UnkStruct_027e0cf8_0C() {}
UnkStruct_027e0cf8_0C::~UnkStruct_027e0cf8_0C() {}
void UnkStruct_027e0cf8_0C::func_ov024_020cff8c(void *param1, Vec2s *param2) {}
void UnkStruct_027e0cf8_0C::func_ov024_020d0004() {}
void UnkStruct_027e0cf8_0C::func_ov024_020d002c() {}
void UnkStruct_027e0cf8_0C::func_ov024_020d01c0() {}
void UnkStruct_027e0cf8_0C::func_ov024_020d02e0() {}
void UnkStruct_027e0cf8_0C::func_ov024_020d0340() {}
void UnkStruct_027e0cf8_0C::func_ov024_020d03f8(Vec2s *param1) {}
void UnkStruct_027e0cf8_0C::func_ov024_020d041c(Vec2s *param1) {}
void UnkStruct_027e0cf8_0C::func_ov024_020d0510() {}
void UnkStruct_027e0cf8_0C::func_ov024_020d05d0(unk32 param1, unk32 param2) {}
