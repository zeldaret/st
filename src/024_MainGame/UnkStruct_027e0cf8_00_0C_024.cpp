#include "Unknown/UnkStruct_027e0cf8.hpp"

UnkStruct_027e0cf8_00::UnkStruct_027e0cf8_00() {
    this->mUnk_2238 = &this->mUnk_0018.mUnk_00[ARRAY_LEN(this->mUnk_0018.mUnk_00)];
    this->mUnk_223C = 0;
    this->mUnk_2240 = 0;
    this->mUnk_2242 = 0;
    this->mUnk_2244 = 0;
    this->mUnk_2248 = 0;
    this->mUnk_224C = 0;
    this->mUnk_2250 = 0;
    this->mUnk_2254 = 1;
}

UnkStruct_027e0cf8_00::~UnkStruct_027e0cf8_00() {}

void UnkStruct_027e0cf8_00::func_ov024_020cf9d4(UnkStruct_027e0cf8_00_18_00 *param1) {
    switch (this->mUnk_0000.Next32(3)) {
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

    u32 value1 = this->mUnk_0000.Next32(((u8 *) this->mUnk_2238 - (u8 *) &this->mUnk_0018.mUnk_00[48]) / 8);

    u32 value2      = this->mUnk_0000.Next32(17);
    u32 value3      = *(u32 *) ((u8 *) &this->mUnk_0018.mUnk_00[48] + (value1 << 3));
    param1->mUnk_78 = value3 + ((value2 - 8) << 12);

    u32 value4      = this->mUnk_0000.Next32(17);
    u32 value5      = *(u32 *) ((u8 *) &this->mUnk_0018.mUnk_00[48] + (value1 << 3) + 4);
    param1->mUnk_7C = value5 + ((value4 - 8) << 12);

    param1->mUnk_80 = this->mUnk_0000.Next32(25);
}

void UnkStruct_027e0cf8_00::func_ov024_020cfb7c(void *param1, Vec2s *param2, unk32 param3, u16 param4, unk32 param5,
                                                unk32 param6) {}

void UnkStruct_027e0cf8_00::func_ov024_020cfd54() {}

void UnkStruct_027e0cf8_00::func_ov024_020cfe24() {}

void UnkStruct_027e0cf8_00::func_ov024_020cfe6c() {}

void UnkStruct_027e0cf8_00::func_ov024_020cfe94() {}

void UnkStruct_027e0cf8_00::func_ov024_020cfed0() {}

void UnkStruct_027e0cf8_00::func_ov024_020cff1c() {}

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
