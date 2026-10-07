#include "CommonFuncs.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09ac.hpp"

#include <nitro/fx.h>
#include <nitro/g3.h>
#include <nitro/gx.h>
#include <nitro/math.h>
#include <nitro/reg.h>
#include <nitro/types.h>

void UnkStackStruct_ov017_020c1104::func_ov017_020c1104(const VecFx32 *param2, s32 param3, u16 param4) {
    s16 var_r1;

    this->unk_10   = param4;
    this->unk_00.x = param2->x;
    this->unk_00.y = param2->y;
    this->unk_00.z = param2->z;
    this->unk_12   = 0x1000;

    if (param3 <= 0x1000) {
        this->unk_0C = 0x1000;
        var_r1       = param3;
    } else {
        this->unk_0C = param3;
        var_r1       = 0x1000;
    }

    for (s16 *var_r4 = this->unk_14; var_r4 != &this->unk_14[(u16) (1 << this->unk_10)]; var_r4++) {
        *var_r4 = var_r1;
    }
}

// https://decomp.me/scratch/5P44c
void UnkStackStruct_ov017_020c1104::func_ov017_020c117c(const VecFx32 *param2, unk16 param3) {
    VecFx32 sp0;
    func_01ffb714(param2, &this->unk_00, &sp0);

    s16 temp_r0   = func_01ffbbe0(sp0.x, sp0.z);
    s16 temp_r0_2 = 0x10000 >> *(volatile u16 *) &this->unk_10;

    u16 value1  = temp_r0 - temp_r0_2 / 2;
    s32 temp_r3 = (value1 << this->unk_10);

    s32 temp_r5    = temp_r3 + ((u32) (temp_r3 >> 15) >> 16);
    fx32 temp_r0_3 = func_01ff9258(sp0.x, sp0.z);

    for (s32 var_r7 = -(this->unk_10 - 3); var_r7 <= (this->unk_10 - 2); var_r7++) {
        u16 *new_var = &this->unk_10;

        s16 temp_r0_4  = 0x10000 >> *new_var;
        s32 value2     = var_r7 + (temp_r5 >> 16);
        fx32 temp_r2_3 = FX_MUL(temp_r0_3, COS((u16) (s16) (temp_r0 - ((s16) (value2 * temp_r0_4 + temp_r0_4 / 2)))));

        s16 temp_r0_5 = func_01ffb428(param3 + temp_r2_3, this->unk_0C);
        u32 temp_r2_4 = ~(0xFF << *(volatile u16 *) &this->unk_10) & ((u16) (1 << *new_var) + (temp_r5 >> 16) + var_r7);

        s16 *ptr = &this->unk_14[temp_r2_4];
        *ptr     = temp_r0_5 < *ptr ? temp_r0_5 : *ptr;
    }
}

void UnkStackStruct_ov017_020c1104::func_ov017_020c12fc(u8 param2, unk16 param3) {
    FlushGfxQueue();
    G3_TexImageParam(0, 0, 0, 0, 0, 0, 0, 0);
    G3_Color(data_027e09ac->mUnk_014.mUnk_08);
    G3_PushMtx();
    G3_Translate(this->unk_00.x, this->unk_00.y + 0x333, this->unk_00.z);
    G3_Scale(this->unk_0C, param3, this->unk_0C);
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, 1, 0, 1, FALSE);
    this->func_ov017_020c13b4();
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, 2, param2, data_027e09ac->mUnk_014.mUnk_06, TRUE);
    this->func_ov017_020c13b4();
    G3_PopMtx(1);
}

#define MUL_FXUNK(a, b) (fx32)((((s16) (a)) * ((s16) (b)) + 0x800) >> FX32_SHIFT)

// https://decomp.me/scratch/bsO9Z
void UnkStackStruct_ov017_020c1104::func_ov017_020c13b4() {
    s16 temp_r1;
    s16 temp_r1_2;
    s16 temp_r2;
    s16 temp_r4_3;
    s16 temp_r4_6;
    s16 temp_r5_3;
    s16 temp_r6;
    s16 temp_r7;
    s16 temp_r9;
    s32 temp_r10;
    s32 temp_r10_2;
    s32 temp_r10_3;
    s32 temp_r11;
    s32 temp_r4_5;
    s32 temp_r5_2;
    s32 temp_r5_4;
    s32 temp_r6_3;
    s32 var_ip;
    s32 var_ip_2;
    s32 var_ip_3;
    s32 var_lr;
    s32 var_lr_2;
    s32 var_r10;
    s32 var_r2;
    s32 var_r4;
    s32 var_r6;
    s32 var_r7;
    u16 temp_r2_2;
    u16 temp_r2_3;
    u16 temp_r4;
    u16 temp_r4_2;
    u16 temp_r4_4;
    u16 temp_r5;
    u16 temp_r5_5;
    u16 temp_r6_2;
    u16 temp_r7_2;

    {
        G3_Begin(GX_BEGIN_QUAD_STRIPS);

        temp_r2   = 0x10000 >> this->unk_10;
        u16 value = temp_r2 / 2;
        var_ip    = ((u32) (value >> 15) >> 16);

        for (var_r10 = 0; var_r10 <= (1 << this->unk_10); var_r10++) {
            temp_r2_3 = 1 << this->unk_10;

            if (var_r10 < temp_r2_3) {
                var_r2 = var_r10;
            } else {
                var_r2 = var_r10 - temp_r2_3;
            }

            temp_r6 = this->unk_14[var_r4];
            G3_Vtx10(0, 0, 0);
            G3_Vtx10(MUL_FXUNK(SIN((u16) var_ip), temp_r6), 0, MUL_FXUNK(COS((u16) var_ip), temp_r6));

            var_ip = (s32) (s16) (var_ip + (s16) (0x10000 >> this->unk_10));
        }

        G3_End();
    }

    temp_r1   = 0x10000 >> this->unk_10;
    u16 value = temp_r1 / 2;
    var_lr    = ((u32) (value >> 15) >> 16);

    if (this->unk_12 >= 0x1000) {
        G3_Begin(GX_BEGIN_QUAD_STRIPS);

        for (var_ip_2 = 0; var_ip_2 <= (1 << this->unk_10); var_ip_2++) {
            temp_r4_2 = 1 << this->unk_10;

            if (var_ip_2 < temp_r4_2) {
                var_r4 = var_ip_2;
            } else {
                var_r4 = var_ip_2 - temp_r4_2;
            }

            temp_r4_3 = this->unk_14[var_r4];
            G3_Vtx10(MUL_FXUNK(SIN((u16) var_lr), temp_r4_3), 0, MUL_FXUNK(COS((u16) var_lr), temp_r4_3));
            G3_Vtx10(0, 0x3C0, 0);

            var_lr = (s32) (s16) (var_lr + (s16) (0x10000 >> this->unk_10));
        }

        G3_End();
        return;
    }

    {
        G3_Begin(GX_BEGIN_QUAD_STRIPS);

        for (var_ip_2 = 0; var_ip_2 <= (1 << this->unk_10); var_ip_2++) {
            temp_r5 = 1 << this->unk_10;

            if (var_ip_2 < temp_r5) {
                var_r6 = var_ip_2;
            } else {
                var_r6 = var_ip_2 - temp_r5;
            }

            temp_r5_3 = this->unk_14[var_r6];
            fx16 sin  = SIN((u16) var_lr);
            fx16 cos  = COS((u16) var_lr);
            G3_Vtx10(MUL_FXUNK((u16) sin, temp_r5_3), 0, MUL_FXUNK((u16) cos, temp_r5_3));

            temp_r10_2 = 0x1000 - this->unk_12;
            G3_Vtx10(MUL_FXUNK((u16) sin, temp_r10_2), 0, MUL_FXUNK((u16) cos, temp_r10_2));

            var_lr = (s32) (s16) (var_lr + (s16) (0x10000 >> this->unk_10));
        }

        G3_End();
    }

    {
        G3_Begin(GX_BEGIN_QUAD_STRIPS);

        temp_r1   = 0x10000 >> this->unk_10;
        u16 value = temp_r1 / 2;
        var_lr_2  = ((u32) (value >> 15) >> 16);

        for (var_ip_3 = 0; var_ip_3 <= (1 << this->unk_10); var_ip_3++) {
            temp_r4_4 = 1 << this->unk_10;

            if (var_ip_2 < temp_r4_4) {
                var_r7 = var_ip_2;
            } else {
                var_r7 = var_ip_2 - temp_r4_4;
            }

            temp_r4_6  = this->unk_14[var_r7];
            temp_r10_3 = 0x1000 - this->unk_12;
            G3_Vtx10(MUL_FXUNK(SIN((u16) temp_r10_3), temp_r4_6), -this->unk_12, MUL_FXUNK(COS((u16) temp_r10_3), temp_r4_6));
            G3_Vtx10(0, -this->unk_12, 0);

            var_lr_2 = (s32) (s16) (var_lr_2 + (s16) (0x10000 >> this->unk_10));
        }

        G3_End();
    }
}
