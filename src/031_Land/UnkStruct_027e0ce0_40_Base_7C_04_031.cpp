#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/types.h"

static const char data_ov031_02110724[16] = "yaji";

struct UnkStruct_ov031_02110738 {
    /* 00 */ BOOL unk_00;
    /* 04 */ char unk_04[16];
    /* 14 */
};

static const UnkStruct_ov031_02110738 data_ov031_02110734[] = {
    {false, "yaji_on"},
    {true, "yaji_wait"},
    {false, "yaji_off"},
};

THUMB_BEGIN

UnkStruct_027e0ce0_40_Base_7C_04::UnkStruct_027e0ce0_40_Base_7C_04() {}

UnkStruct_027e0ce0_40_Base_7C_04::~UnkStruct_027e0ce0_40_Base_7C_04() {}

THUMB_END

void UnkStruct_027e0ce0_40_Base_7C_04::func_ov031_020dca3c() {
    this->func_ov031_020dcc1c(0x1000);
}

THUMB_BEGIN
#pragma optimization_level 2

UnkStruct_027e0ce0_40_Base_7C_04_Base::UnkStruct_027e0ce0_40_Base_7C_04_Base() :
    mUnk_00(0),
    mUnk_04(data_027e0ce0->mUnk_1C->func_ov000_0208ed30(0x00, 0x01, data_ov031_02110724)),
    mUnk_64(this->mUnk_04.mpModel),
    mUnk_A4(0x03) {
    UnkStruct_027e0ce0_1C *temp_r6 = data_027e0ce0->mUnk_1C;

    for (u32 var_r4 = 0; var_r4 < ARRAY_LEN(this->mUnk_A8); var_r4++) {
        const char *ptr = data_ov031_02110734[0].unk_04;
        this->mUnk_A8[var_r4] =
            temp_r6->func_ov000_0208ee94(0x00, 0x01, ptr + (var_r4 * sizeof(UnkStruct_ov031_02110738)), 0x00);
    }

    this->func_ov031_020dcad0(0);
    this->mUnk_04.func_ov000_02057c98(&this->mUnk_64.mUnk_00);
}

#pragma optimization_level reset
THUMB_END

void UnkStruct_027e0ce0_40_Base_7C_04_Base::func_ov031_020dcad0(s32 index) {
    const UnkStruct_ov031_02110738 *ptr = &data_ov031_02110734[1];
    this->mUnk_64.mUnk_00.func_ov000_020577a4(this->mUnk_A8[index], 0x00, ptr[index].unk_00);
    this->mUnk_A4 = index;
}

void UnkStruct_027e0ce0_40_Base_7C_04_Base::func_ov031_020dcb0c(RefStruct param1) {
    s16 sp0;

    if (func_ov000_0205cf84(param1, &sp0)) {
        this->mUnk_00 = param1;
        this->func_ov031_020dcad0(0);
    }
}

void UnkStruct_027e0ce0_40_Base_7C_04_Base::func_ov031_020dcb60(RefStruct param1) {
    STACK_PAD(4);

    if (this->mUnk_00.IsEmpty()) {
        return;
    }

    switch (this->mUnk_A4) {
        case 0:
            if (this->mUnk_64.mUnk_00.mUnk_04.func_01ff8fa8()) {
                this->func_ov031_020dcad0(param1.Get32() == this->GetRef() ? 1 : 2);
            }
            break;
        case 1:
            if (param1.Get32() != this->GetRef()) {
                this->func_ov031_020dcad0(2);
            }
            break;
        case 2:
            if (this->mUnk_64.mUnk_00.mUnk_04.func_01ff8fa8()) {
                this->mUnk_00.Init();
            }
            break;
        default:
            break;
    }

    this->mUnk_64.mUnk_00.func_01ffc3b4();
}

void UnkStruct_027e0ce0_40_Base_7C_04_Base::func_ov031_020dcc1c(unk32 param1) {
    VecFx32 spC;
    UnkAngleStruct sp2;

    if (param1 <= 0 || this->mUnk_00.Copy().IsEmpty()) {
        return;
    }

    if (!func_ov000_0205cbc4(this->mUnk_00, &spC) || !func_ov000_0205cf84(this->mUnk_00, &sp2.angle_s)) {
        return;
    }

    spC.y += sp2.angle_s;
    func_01ffc5a0(&this->mUnk_04, param1, UnkAngleStruct(0), &spC);
}
