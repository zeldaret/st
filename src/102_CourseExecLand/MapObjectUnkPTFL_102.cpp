#include "MapObject/MapObjectUnkPTFL.hpp"
#include "Unknown/UnkStruct_027e0208.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "nns/g3d/sbc.h"

extern "C" void func_01ff9318(void *, unk32, unk32);
extern "C" fx32 func_01ffb464(fx32);

static unk32 data_ov102_02184980[] = {
    0x1FF00000, 0x0007FC00, 0x000001FF, 0x20000000, 0x00080000, 0x00000200, 0x16A5A800, 0x00000000, 0x00000000, 0x00000000,
};

static u16 data_ov102_021849a8[] = {
    0x0800, 0x0800, 0x0800, 0x0800, 0x0800, 0xF800, 0x0800, 0xF800, 0x0800, 0x0800, 0xF800, 0xF800, 0xF800,
    0x0800, 0x0800, 0xF800, 0x0800, 0xF800, 0xF800, 0xF800, 0x0800, 0xF800, 0xF800, 0xF800, 0x1000, 0x1000,
    0x0800, 0x1000, 0x1000, 0xF800, 0x1000, 0x0000, 0x0800, 0x1000, 0x0000, 0xF800, 0x0000, 0x1000, 0x0800,
    0x0000, 0x1000, 0xF800, 0x0000, 0x0000, 0x0800, 0x0000, 0x0000, 0xF800, 0x0000, 0x0800, 0x0000, 0x0000,
};

void func_ov102_02183c14(s32 param1) {
    u32 sp0[2];

    sp0[0] = data_ov102_021849a8[param1 * 3] | (data_ov102_021849a8[param1 * 3 + 1] << 0x10);
    sp0[1] = data_ov102_021849a8[param1 * 3 + 2];

    PushGeometryCommand(0x23, sp0, 2);
}

void func_ov102_02183c6c(s32 param0) {
    u32 sp0 = data_ov102_02184980[param0];
    PushGeometryCommand(0x21, &sp0, 1);
}

void func_ov102_02183c94(s32 param0, s32 param1, s32 param2, s32 param3, s32 param4, u16 param5, u16 param6, u16 param7,
                         u16 param8, s32 param9) {
    u32 spC;
    u32 sp8;
    u32 sp4;
    u32 sp0;

    func_ov102_02183c6c(param4);

    s16 x2 = param8 * 16;
    s16 y2 = (param7 + param9) * 16;

    spC = ((u16) x2 << 16) | (u16) y2;
    PushGeometryCommand(0x22, &spC, 1);
    func_ov102_02183c14(param0);

    s16 x1 = param6 * 16;

    sp8 = ((u16) x1 << 16) | (u16) y2;
    PushGeometryCommand(0x22, &sp8, 1);
    func_ov102_02183c14(param1);

    s16 y1 = (param5 + param9) * 16;

    sp4 = ((u16) x1 << 16) | (u16) y1;
    PushGeometryCommand(0x22, &sp4, 1);
    func_ov102_02183c14(param2);

    sp0 = ((u16) x2 << 16) | (u16) y1;
    PushGeometryCommand(0x22, &sp0, 1);
    func_ov102_02183c14(param3);
}

void func_ov102_02183da4(s32 param0, s32 param1, s32 param2, s32 param3, s32 param4, u16 param5, u16 param6, u16 param7,
                         u16 param8, s32 param9) {
    func_ov102_02183c94(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9);
}

void MapObjectUnkPTFL::vfunc_08() {
    switch (this->mState) {
        case MapObjectUnkPTFLState_0:
            this->mUnk_48--;

            if (this->mUnk_48 > 0) {
                func_01ff9318(&this->mUnk_54, 0, func_01ffb464(this->mUnk_48 << 0xC));
            }

            if (this->mUnk_48 <= 0) {
                this->func_ov070_0214bbd0(MapObjectUnkPTFLState_1, false);
            }
            break;
        case MapObjectUnkPTFLState_1:
            switch (this->mUnk_20.mParams[0]) {
                case 0:
                    if (!this->func_ov070_0214bf6c()) {
                        this->func_ov070_0214bbd0(MapObjectUnkPTFLState_2, false);
                    }
                    break;
                case 1:
                    if (this->func_ov070_0214bf5c()) {
                        this->func_ov070_0214bbd0(MapObjectUnkPTFLState_2, false);
                    }
                    break;
                default:
                    break;
            }
            break;
        case MapObjectUnkPTFLState_2:
            func_01ff9318(&this->mUnk_54, 0x3C72, 0x333);

            if (this->mUnk_54 == 0x3C72) {
                if (this->mUnk_5B == 1) {
                    this->func_ov070_0214bbd0(MapObjectUnkPTFLState_4, false);
                } else {
                    this->func_ov070_0214bbd0(MapObjectUnkPTFLState_3, false);
                }
            }
            break;
        case MapObjectUnkPTFLState_3:
            switch (this->mUnk_20.mParams[0]) {
                case 0:
                    if (this->func_ov070_0214bf6c()) {
                        this->func_ov070_0214bbd0(MapObjectUnkPTFLState_0, false);
                    }
                    break;
                case 1:
                    if (!this->func_ov070_0214bf5c()) {
                        this->func_ov070_0214bbd0(MapObjectUnkPTFLState_0, false);
                    }
                    break;
                case 2:
                    if (this->mUnk_56 >= this->mUnk_58) {
                        this->func_ov070_0214bbd0(MapObjectUnkPTFLState_0, false);
                    }
                    break;
                default:
                    break;
            }
            break;
        case MapObjectUnkPTFLState_4:
        default:
            break;
    }

    if (this->mUnk_56 < this->mUnk_58) {
        this->mUnk_56++;
    }
}

void MapObjectUnkPTFL::vfunc_0C() {
    this->vfunc_08();
}

void MapObjectUnkPTFL::vfunc_14() {
    Mat4p sp44;
    VecFx32 sp38;
    VecFx32 sp2C;
    VecFx32 sp20;
    u32 sp1C;
    u32 sp18;
    u32 sp14;
    u32 sp10;
    u32 spC;
    u32 sp8;
    u32 sp4;
    u32 sp0;
    s32 temp_r4;
    s32 var_r5;
    s32 var_r7;

    PushGeometryCommand(0x11, NULL, 0);

    sp1C = data_027e0208.mUnk_094;
    PushGeometryCommand(0x30, &sp1C, 1);

    sp18 = 0;
    PushGeometryCommand(0x31, &sp18, 1);

    sp14 = 0x1F8081;
    PushGeometryCommand(0x29, &sp14, 1);

    sp10 = 3;
    PushGeometryCommand(0x10, &sp10, 1);

    PushGeometryCommand(0x15, NULL, 0);

    sp2C.x = this->mUnk_5A << 0xB;
    sp2C.y = INT_TO_FX32(this->mUnk_5A);
    sp2C.z = 0x1000;
    PushGeometryCommand(0x1B, &sp2C, 3);

    Mat4p_InitIdentity(&sp44);
    sp44.zColumn.z = 0x10000;
    sp44.wColumn.w = 0x10000;
    PushGeometryCommand(0x18, &sp44, 0x10);
    spC = 2;
    PushGeometryCommand(0x10, &spC, 1);
    temp_r4 = this->mUnk_40;

    var_r7 = (this->mUnk_5C ? 3 : 0);

    sp8 = 0 | 0x40030000 | ((u16) temp_r4 & ~0xE0000000) | (((u32) (temp_r4 & 0x1C000000) >> 0x1A) << 0x1A) |
          (((u32) (temp_r4 & 0x03800000) >> 0x17) << 0x17) | (((u32) (temp_r4 & 0x20000000) >> 0x1D) << 0x1D) |
          (((u32) (temp_r4 & 0x00700000) >> 0x14) << 0x14) | (var_r7 << 0x12);

    PushGeometryCommand(0x2A, &sp8, 1);

    sp4 = (u32) ((u32) (this->mUnk_44 << 0x11) >> 0xD) >> (4 - (((u32) (this->mUnk_40 & 0x1C000000) >> 0x1A) == 2 ? 1 : 0));
    PushGeometryCommand(0x2B, &sp4, 1);

    sp38   = this->mPos;
    sp20.x = sp38.x;
    sp20.y = sp38.y;
    sp20.z = sp38.z;
    PushGeometryCommand(0x1C, &sp20, 3);

    this->func_ov102_0218419c();
    this->func_ov102_021843b4();

    sp0 = 1;
    PushGeometryCommand(0x12, &sp0, 1);
}

void MapObjectUnkPTFL::func_ov102_0218419c() {
    VecFx32 sp68;
    VecFx32 sp5C;
    VecFx32 sp50;
    VecFx32 sp44;
    Mat3p sp20;
    u32 sp1C;
    u32 sp18;
    s32 temp_r0_3;
    s32 temp_r1_3;
    s32 temp_r7;

    PushGeometryCommand(0x11, NULL, 0);

    if (this->mState == 1) {
        sp68.x = (this->mUnk_5A << 0xB) + 0x52;
        sp68.y = FLOAT_TO_FX32(0.0f);
        sp68.z = FLOAT_TO_FX32(0.0f);
        PushGeometryCommand(0x1C, &sp68, 3);

        temp_r0_3 = INT_TO_FX32(this->mUnk_5A);
        sp5C.x    = MUL_FX32(temp_r0_3, FLOAT_TO_FX32(0.54f));
        sp5C.y    = FLOAT_TO_FX32(1.0f);
        sp5C.z    = MUL_FX32(temp_r0_3, FLOAT_TO_FX32(1.04f));
        PushGeometryCommand(0x1B, &sp5C, 3);
    } else {
        sp50.x = this->mUnk_5A << 0xB;
        sp50.y = FLOAT_TO_FX32(0.0f);
        sp50.z = FLOAT_TO_FX32(0.0f);
        PushGeometryCommand(0x1C, &sp50, 3);

        temp_r7 = INT_TO_FX32(this->mUnk_5A);
        sp44.x  = MUL_FX32(temp_r7, FLOAT_TO_FX32(0.5f));
        sp44.y  = FLOAT_TO_FX32(1.0f);
        sp44.z  = MUL_FX32(temp_r7, FLOAT_TO_FX32(1.0f));
        PushGeometryCommand(0x1B, &sp44, 3);
    }

    temp_r1_3 = (u16) (this->mUnk_54 - 0x8000);
    Mat3p_InitZRotation(&sp20, SIN(temp_r1_3), COS(temp_r1_3));

    PushGeometryCommand(0x1A, &sp20, 9);

    sp1C = 1;
    PushGeometryCommand(0x40, &sp1C, 1);

    func_ov102_02183da4(0xB, 0xA, 0xE, 0xF, 4, 0, 0, 0x20, 0x20, 0x20);

    PushGeometryCommand(0x41, NULL, 0);

    sp18 = 1;
    PushGeometryCommand(0x12, &sp18, 1);
}

void MapObjectUnkPTFL::func_ov102_021843b4() {
    VecFx32 sp68;
    VecFx32 sp5C;
    VecFx32 sp50;
    VecFx32 sp44;
    Mat3p sp20;
    u32 sp1C;
    u32 sp18;
    s32 temp_r0_3;
    s32 temp_r7;

    PushGeometryCommand(0x11, NULL, 0);

    if (this->mState == 1) {
        sp68.x = (-this->mUnk_5A << 0xB) - 0x52;
        sp68.y = FLOAT_TO_FX32(0.0f);
        sp68.z = FLOAT_TO_FX32(0.0f);
        PushGeometryCommand(0x1C, &sp68, 3);

        temp_r0_3 = INT_TO_FX32(this->mUnk_5A);
        sp5C.x    = MUL_FX32(temp_r0_3, FLOAT_TO_FX32(0.54f));
        sp5C.y    = FLOAT_TO_FX32(1.0f);
        sp5C.z    = MUL_FX32(temp_r0_3, FLOAT_TO_FX32(1.04f));
        PushGeometryCommand(0x1B, &sp5C, 3);
    } else {
        sp50.x = -this->mUnk_5A << 0xB;
        sp50.y = FLOAT_TO_FX32(0.0f);
        sp50.z = FLOAT_TO_FX32(0.0f);
        PushGeometryCommand(0x1C, &sp50, 3);

        temp_r7 = INT_TO_FX32(this->mUnk_5A);
        sp44.x  = MUL_FX32(temp_r7, FLOAT_TO_FX32(0.5f));
        sp44.y  = FLOAT_TO_FX32(1.0f);
        sp44.z  = MUL_FX32(temp_r7, FLOAT_TO_FX32(1.0f));
        PushGeometryCommand(0x1B, &sp44, 3);
    }

    Mat3p_InitZRotation(&sp20, -SIN(this->mUnk_54), COS(this->mUnk_54));

    PushGeometryCommand(0x1A, &sp20, 9);

    sp1C = 1;
    PushGeometryCommand(0x40, &sp1C, 1);

    func_ov102_02183da4(0xF, 0xE, 0xA, 0xB, 1, 0, 0, 0x20, 0x20, 0);

    PushGeometryCommand(0x41, NULL, 0);

    sp18 = 1;
    PushGeometryCommand(0x12, &sp18, 1);
}
