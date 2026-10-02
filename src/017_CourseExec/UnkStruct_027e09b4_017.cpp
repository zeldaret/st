#include "Unknown/UnkStruct_027e09ac.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "nitro/fx.h"
#include "nitro/g3.h"
#include "nitro/math.h"
#include "nitro/types.h"

#include <nitro/reg.h>

extern "C" void FlushGfxQueue();
extern "C" void func_ov000_0205dbe4(u16);
extern "C" void func_ov017_020c0c50(u16);

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
    G3_TexImageParam(0, 0, 0, 0, 0, 0, 0, 0);
    G3_Color(data_027e09ac->mUnk_014.mUnk_08);
    G3_PushMtx();
    G3_Translate(param1->x, param1->y + this->mUnk_308, param1->z);
    G3_Scale(param2, param7, param3);
    G3_PolygonAttr(0, 1, FALSE, FALSE, TRUE, 3, 0);
    func_ov017_020c0c50(param5);
    G3_PolygonAttr(param4, param6, TRUE, TRUE, FALSE, 3, 0);
    func_ov017_020c0c50(param5);
    G3_PopMtx(1);
}

void UnkStruct_027e09b4::func_ov017_020c0a30(const VecFx32 *param1, unk32 param2, unk32 param3, u16 param4, u16 param5) {
    this->func_ov017_020c0970(param1, param2, param3, param4, param5, data_027e09ac->mUnk_014.mUnk_06, this->mUnk_304);
}

void UnkStruct_027e09b4::func_ov017_020c0a6c(const VecFx32 *param1, s32 param2, s32 param3, s32 param4, u16 param5, u16 param6,
                                             s32 param7, u16 param8) {
    FlushGfxQueue();
    G3_TexImageParam(0, 0, 0, 0, 0, 0, 0, 0);
    G3_Color(param8);
    G3_PushMtx();
    G3_Translate(param1->x, param1->y + this->mUnk_308 - param4, param1->z);
    G3_Scale(param2, param4, param3);
    G3_PolygonAttr(0, 1, FALSE, FALSE, TRUE, 3, 0);
    func_ov000_0205dbe4(param6);
    G3_PolygonAttr(param5, param7, FALSE, TRUE, FALSE, 3, 0);
    func_ov000_0205dbe4(param6);
    G3_PopMtx(1);
}
