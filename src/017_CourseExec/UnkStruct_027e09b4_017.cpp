#include "CommonFuncs.hpp"
#include "Unknown/UnkStruct_027e095c.hpp"
#include "Unknown/UnkStruct_027e09ac.hpp"
#include "Unknown/UnkStruct_027e09b0.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_ov000_020b4ec4.hpp"

#include <nitro/fx.h>
#include <nitro/g3.h>
#include <nitro/math.h>
#include <nitro/reg.h>
#include <nitro/types.h>

static const fx16 data_ov017_020c3dec[] = {
    0x1000, 0x1000, 0x0000, 0x0800, 0x0800, 0xF000, 0x1000, 0xF000, 0x0000, 0x0800, 0xF800, 0xF000, 0xF000, 0x1000,
    0x0000, 0xF800, 0x0800, 0xF000, 0xF000, 0xF000, 0x0000, 0xF800, 0xF800, 0xF000, 0x0000, 0x0000, 0x0266, 0x0000,
};

void UnkStruct_027e09b4::func_ov017_020c0774(s32 param1, s32 param2, s32 param3, s32 param4) {
    G3_Vtx10(data_ov017_020c3dec[param1 * 3 + 0] >> 6, data_ov017_020c3dec[param1 * 3 + 1] >> 6,
             data_ov017_020c3dec[param1 * 3 + 2] >> 6);

    G3_Vtx10(data_ov017_020c3dec[param2 * 3 + 0] >> 6, data_ov017_020c3dec[param2 * 3 + 1] >> 6,
             data_ov017_020c3dec[param2 * 3 + 2] >> 6);

    G3_Vtx10(data_ov017_020c3dec[param3 * 3 + 0] >> 6, data_ov017_020c3dec[param3 * 3 + 1] >> 6,
             data_ov017_020c3dec[param3 * 3 + 2] >> 6);

    G3_Vtx10(data_ov017_020c3dec[param4 * 3 + 0] >> 6, data_ov017_020c3dec[param4 * 3 + 1] >> 6,
             data_ov017_020c3dec[param4 * 3 + 2] >> 6);
}

s32 UnkStruct_027e09b4::func_ov017_020c08a4(void) {
    return data_027e09ac->mUnk_014.mUnk_06 * 3 < 0x1F ? data_027e09ac->mUnk_014.mUnk_06 * 3 : 0x1F;
}

bool UnkStruct_027e09b4::func_ov017_020c08c4(const VecFx32 *param1, unk32 param2, unk32 param3, s32 param4, s16 param5,
                                             u8 param6) {
    fx32 temp_r0_2 = data_027e0cd8->mUnk_0C->vfunc_28((VecFx32 *) param1, 1, 0);

    if (param1->y >= temp_r0_2 && temp_r0_2 >= -0x3000) {
        VecFx32 temp;
        VecFx32_Copy(param1, &temp);

        VecFx32 spC;
        spC.x = temp.x;
        spC.y = temp_r0_2;
        spC.z = temp.z;

        this->func_01fff60c(&spC, param2, param3, param4, param5, param6);
        return true;
    }

    return false;
}

void UnkStruct_027e09b4::func_ov017_020c0970(const VecFx32 *param1, unk32 param2, unk32 param3, u16 param4, u16 param5,
                                             u32 param6, fx32 param7) {
    FlushGfxQueue();
    G3_TexImageParam(GX_TEXFMT_NONE, GX_TEXGEN_NONE, GX_TEXSIZE_S8, GX_TEXSIZE_T8, GX_TEXREPEAT_NONE, GX_TEXFLIP_NONE,
                     GX_TEXPLTTCOLOR0_USE, 0);
    G3_Color(data_027e09ac->mUnk_014.mUnk_08);
    G3_PushMtx();
    G3_Translate(param1->x, param1->y + this->mUnk_308, param1->z);
    G3_Scale(param2, param7, param3);
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, 1, 0, 1, FALSE);
    UnkStruct_027e09b4::func_ov017_020c0c50(param5);
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, 2, param4, param6, TRUE);
    UnkStruct_027e09b4::func_ov017_020c0c50(param5);
    G3_PopMtx(1);
}

void UnkStruct_027e09b4::func_ov017_020c0a30(const VecFx32 *param1, unk32 param2, unk32 param3, u16 param4, u16 param5) {
    this->func_ov017_020c0970(param1, param2, param3, param4, param5, data_027e09ac->mUnk_014.mUnk_06, this->mUnk_304);
}

void UnkStruct_027e09b4::func_ov017_020c0a6c(const VecFx32 *param1, s32 param2, s32 param3, s32 param4, u16 param5, u16 param6,
                                             s32 param7, u16 param8) {
    FlushGfxQueue();
    G3_TexImageParam(GX_TEXFMT_NONE, GX_TEXGEN_NONE, GX_TEXSIZE_S8, GX_TEXSIZE_T8, GX_TEXREPEAT_NONE, GX_TEXFLIP_NONE,
                     GX_TEXPLTTCOLOR0_USE, 0);
    G3_Color(param8);
    G3_PushMtx();
    G3_Translate(param1->x, param1->y + this->mUnk_308 - param4, param1->z);
    G3_Scale(param2, param4, param3);
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, 1, 0, 1, FALSE);
    func_ov000_0205dbe4(param6);
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, 2, param5, param7, FALSE);
    func_ov000_0205dbe4(param6);
    G3_PopMtx(1);
}

void UnkStruct_027e09b4::func_ov017_020c0b24(const VecFx32 *param1, s32 param2, s32 param3) {
    MtxFx33 sp0;
    u16 temp_r7    = data_027e09ac->mUnk_014.mUnk_06;
    unk16 *temp_r0 = data_027e09b0->func_ov000_02072cb4(1);
    unk32 temp_r8;
    unk32 temp_r9;
    unk32 temp_r10;

    temp_r9  = temp_r0[0];
    temp_r10 = temp_r0[1];
    temp_r8  = temp_r0[2];

    s16 temp_r8_2 = func_01ffbbe0(-temp_r9, -temp_r8);
    func_01ffcb94(func_01ffbbe0(temp_r10, func_01ff9258(temp_r9, temp_r8)), temp_r8_2, &sp0);

    if (temp_r10 > 0) {
        return;
    }

    FlushGfxQueue();
    G3_TexImageParam(GX_TEXFMT_NONE, GX_TEXGEN_NONE, GX_TEXSIZE_S8, GX_TEXSIZE_T8, GX_TEXREPEAT_NONE, GX_TEXFLIP_NONE,
                     GX_TEXPLTTCOLOR0_USE, 0);
    G3_Color(data_027e09ac->mUnk_014.mUnk_08);
    G3_PushMtx();
    G3_Translate(param1->x, param1->y, param1->z);
    func_02024a84(&sp0);
    G3_Scale(param2, param2, 0x666);
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, 1, 0, 1, FALSE);
    UnkStruct_027e09b4::func_ov017_020c0dec();
    G3_PolygonAttr(GX_LIGHTMASK_NONE, GX_POLYGONMODE_MODULATE, 2, param3, temp_r7, TRUE);
    UnkStruct_027e09b4::func_ov017_020c0dec();
    G3_PopMtx(1);
}

void UnkStruct_027e09b4::func_ov017_020c0c50(u16 param1) {
    int new_var;
    s16 temp_r0_2;
    s16 temp_ip;
    s32 var_r1;
    s16 var_r2;
    long var_lr;
    s16 var_r5;
    s16 var_r6;
    s32 temp_r7;
    s32 temp_r8;

    temp_ip = func_01ffb66c(0x10000, param1);
    new_var = -temp_ip;

    temp_r0_2 = new_var / 2;
    new_var   = temp_ip / 2;

    temp_r7 = (param1 + 1) / 2;
    temp_r8 = new_var;

    {
        var_r5 = temp_r0_2;
        var_r6 = temp_r8;

        G3_Begin(GX_BEGIN_QUAD_STRIPS);
        for (var_lr = 0; var_lr < temp_r7; var_lr++) {
            G3_Vtx10(SIN((u16) var_r5) >> 6, 0, COS((u16) var_r5) >> 6);
            G3_Vtx10(SIN((u16) var_r6) >> 6, 0, COS((u16) var_r6) >> 6);
            var_r5 -= temp_ip;
            var_r6 += temp_ip;
        }
        G3_End();
    }

    {
        var_r2 = temp_r8;

        G3_Begin(GX_BEGIN_QUAD_STRIPS);
        for (var_r1 = 0; var_r1 <= param1; var_r1++) {
            G3_Vtx10(SIN((u16) var_r2) >> 6, 0, COS((u16) var_r2) >> 6);
            G3_Vtx10(0, 0x3C0, 0);
            var_r2 += temp_ip;
        }
        G3_End();
    }
}

void UnkStruct_027e09b4::func_ov017_020c0dec(void) {
    {
        G3_Begin(GX_BEGIN_TRIS);
        G3_Vtx10(0x000, 0x000, 0x009);
        G3_Vtx10(0x040, 0x3C0, 0x000);
        G3_Vtx10(0x040, 0x040, 0x000);
        G3_Vtx10(0x000, 0x000, 0x009);
        G3_Vtx10(0x3C0, 0x3C0, 0x000);
        G3_Vtx10(0x040, 0x3C0, 0x000);
        G3_Vtx10(0x000, 0x000, 0x009);
        G3_Vtx10(0x3C0, 0x040, 0x000);
        G3_Vtx10(0x3C0, 0x3C0, 0x000);
        G3_Vtx10(0x000, 0x000, 0x009);
        G3_Vtx10(0x040, 0x040, 0x000);
        G3_Vtx10(0x3C0, 0x040, 0x000);
        G3_End();
    }

    {
        G3_Begin(GX_BEGIN_QUADS);
        UnkStruct_027e09b4::func_ov017_020c0774(7, 5, 1, 3);
        UnkStruct_027e09b4::func_ov017_020c0774(6, 4, 5, 7);
        UnkStruct_027e09b4::func_ov017_020c0774(3, 1, 0, 2);
        UnkStruct_027e09b4::func_ov017_020c0774(5, 4, 0, 1);
        UnkStruct_027e09b4::func_ov017_020c0774(6, 7, 3, 2);
        G3_End();
    }
}

void UnkStruct_027e09b4::func_ov017_020c0edc() {
    UnkStruct_027e095c *temp_r4 = data_027e095c;

    FlushGfxQueue();
    G3_TexImageParam(GX_TEXFMT_NONE, GX_TEXGEN_NONE, GX_TEXSIZE_S8, GX_TEXSIZE_T8, GX_TEXREPEAT_NONE, GX_TEXFLIP_NONE,
                     GX_TEXPLTTCOLOR0_USE, temp_r4->mUnk_000[0].z);
    G3_TexPlttBase(((u32) (temp_r4->mUnk_000[0].y << 0x10) >> 0xD), (((u32) temp_r4->mUnk_000[0].z >> 0x1A) & 7));

    for (UnkStruct_027e09b4_00 *var_r8 = this->mUnk_000; var_r8 != this->mUnk_300; var_r8++) {
        u16 unk14  = var_r8->unk_14;
        u32 polyId = data_ov000_020b4ec4.func_01ffc768(2);

        //! TODO: make this work with G3_PolygonAttr
        REG_GFX_FIFO_POLYGON_ATTR = (unk14 & 0x4000) | ((1 << 0x0F) | (2 << 0x06)) |
                                    ((polyId << 0x18) | (GX_POLYGONMODE_UNK_00 << 0x04) | (0 << 0x10) | GX_LIGHTMASK_NONE) |
                                    ((u32) (unk14 << 0x1B) >> 0xB);

        G3_PushMtx();

        fx32 trans_z = var_r8->trans.z;

        s16 var_r3;
        if (!(var_r8->unk_14 & 0x4000)) {
            var_r3 = this->mUnk_30A;
        } else {
            var_r3 = 0;
        }

        G3_Translate(var_r8->trans.x, var_r8->trans.y + var_r3, trans_z);

        if (var_r8->unk_16 != 0) {
            func_02024fc4(SIN((u16) var_r8->unk_16), COS((u16) var_r8->unk_16));
        }

        G3_Scale(var_r8->scale.x, 0x1000, var_r8->scale.z);

        {
            G3_Begin(GX_BEGIN_QUADS);
            G3_Direct1(G3OP_TEXCOORD, 0x04000400);
            G3_Vtx10(0x40, 0x00, 0x40);
            G3_Direct1(G3OP_TEXCOORD, 0x400);
            G3_VtxXZ(0x1000, 0xF000);
            G3_Direct1(G3OP_TEXCOORD, 0);
            G3_VtxXZ(0xF000, 0xF000);
            G3_Direct1(G3OP_TEXCOORD, 0x04000000);
            G3_VtxXZ(0xF000, 0x1000);
            G3_End();
        }

        G3_PopMtx(1);
    }
}
