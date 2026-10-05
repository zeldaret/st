#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e0cf8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

void UnkStruct_027e0cf8_00::func_ov017_020c3414() {
    if (this->mUnk_224C == this->mUnk_2244) {
        data_ov000_020b5214.func_ov000_0206db44(0x9F);
    }

    if (this->UnkCheck1()) {
        for (int var_r7 = 0; var_r7 < this->mUnk_223C; var_r7++) {
            this->func_ov017_020c3644(&this->mUnk_0018.mUnk_00[var_r7]);
        }

        s32 var_r7_2;
        s32 var_r8;
        unk32 temp_r9 = this->mUnk_2250 - this->func_ov017_020c35e8();

        if (temp_r9 > 0) {
            for (var_r7_2 = 0, var_r8 = 0; var_r8 < this->mUnk_223C; var_r8++) {
                if (var_r7_2 >= temp_r9 / this->mUnk_2254) {
                    break;
                }

                if (this->mUnk_0018.mUnk_00[var_r8].mUnk_00.func_ov000_02060af8()) {
                    this->func_ov024_020cf9d4(&this->mUnk_0018.mUnk_00[var_r8]);
                    var_r7_2++;
                }
            }
        }

        this->mUnk_2250 = (this->mUnk_223C * (this->mUnk_2248 - (this->mUnk_224C - this->mUnk_2244))) / this->mUnk_2248;
    }

    if (*(volatile unk32 *) &this->mUnk_224C < this->mUnk_2244 + this->mUnk_2248) {
        this->mUnk_224C++;
    }
}

void UnkStruct_027e0cf8_00::func_ov017_020c3574(unk8 *param1) {
    if (this->UnkCheck1()) {
        for (int var_r4 = 0; var_r4 < this->mUnk_223C; var_r4++) {
            this->func_ov017_020c3668(&this->mUnk_0018.mUnk_00[var_r4], param1);
        }
    }
}

s32 UnkStruct_027e0cf8_00::func_ov017_020c35e8() {
    s32 var_r4 = 0;

    for (int var_r5 = 0; var_r5 < this->mUnk_223C; var_r5++) {
        UnkStruct_027e0cf8_00_18_00 *ptr = &this->mUnk_0018.mUnk_00[var_r5];

        if (ptr->mUnk_80 > 0 || !ptr->mUnk_00.func_ov000_02060af8()) {
            var_r4++;
        }
    }

    return var_r4;
}

void UnkStruct_027e0cf8_00::func_ov017_020c3644(UnkStruct_027e0cf8_00_18_00 *param1) {
    if (param1->mUnk_80 > 0) {
        param1->mUnk_80--;
        return;
    }

    param1->mUnk_00.func_ov000_020609c4();
}

void UnkStruct_027e0cf8_00::func_ov017_020c3668(const UnkStruct_027e0cf8_00_18_00 *param1, const unk8 *param2) const {
    VecFx32 spC;
    Vec2s sp8;

    if (param1->mUnk_80 > 0) {
        return;
    }

    VecFx32_Init(param1->mUnk_78, 0, param1->mUnk_7C, &spC);
    Vec2s sp4(0x200, 0x000);

    if (!data_027e0998->func_ov000_02061a48(&spC, &sp8, &sp4)) {
        return;
    }

    sp8.x += this->mUnk_2240.x;
    sp8.y += this->mUnk_2240.y;

    bool var_r4 = param1->mUnk_00.mUnk_60 & 0x01 ? true : false;

    if (param2[0x00] == var_r4 || param2[0x01] == var_r4) {
        data_0204af1c.func_0201aad0((CellAnimObject *) &param1->mUnk_00, &sp8, 0x02, NULL);
    }
}

void UnkStruct_027e0cf8_0C::func_ov017_020c3748(unk8 *param1) {
    for (int var_r5 = 0; var_r5 < this->mUnk_16C; var_r5++) {
        this->func_ov017_020c378c(param1, &this->mUnk_000[var_r5]);
    }
}

void UnkStruct_027e0cf8_0C::func_ov017_020c378c(const unk8 *param1, const UnkStruct_027e0cf8_0C_00 *param2) const {
    VecFx32 spC;
    Vec2s sp8;

    if (!param2->mUnk_18) {
        return;
    }

    VecFx32_Init(param2->mUnk_0C.x, 0, param2->mUnk_0C.y, &spC);
    Vec2s sp4(0x200, 0x000);

    if (!data_027e0998->func_ov000_02061a48(&spC, &sp8, &sp4)) {
        return;
    }

    sp8.x += this->mUnk_168.x;
    sp8.y += this->mUnk_168.y;

    if (param2->mUnk_1B) {
        bool var_r5 = param2->mUnk_00.mUnk_04 & 0x01 ? true : false;

        if (param1[0x00] == var_r5 || param1[0x01] == var_r5) {
            data_0204af1c.func_0201aa44((UnkStruct_ov019_020d24c8_28_258_00 *) &param2->mUnk_00, &sp8, 2, 0);
        }
    }

    if (param2->mUnk_1A) {
        bool var_r1 = this->mUnk_150.mUnk_04 & 0x01 ? true : false;

        if (param1[0x00] == var_r1 || param1[0x01] == var_r1) {
            data_0204af1c.func_0201aa44((UnkStruct_ov019_020d24c8_28_258_00 *) &this->mUnk_150, &sp8, 2, 0);
        }
    }

    if (param2->mUnk_19) {
        bool var_r1_2 = this->mUnk_15C.mUnk_04 & 0x01 ? true : false;

        if (param1[0x00] == var_r1_2 || param1[0x01] == var_r1_2) {
            data_0204af1c.func_0201aa44((UnkStruct_ov019_020d24c8_28_258_00 *) &this->mUnk_15C, &sp8, 2, 0);
        }
    }
}

void UnkStruct_027e0cf8::func_ov017_020c390c(Input *pButtons, TouchControl *pTouchControl) {
#pragma unused(pButtons, pTouchControl)

    data_0204a110.mUnk_D9C.func_0201c4d8(0x01, 0x0A, 0x06);

    if (this->mUnk_18 >= 0) {
        this->mUnk_18++;
        this->mUnk_08->func_ov017_020be8a8();
        this->mUnk_00->func_ov017_020c3414();
    }

    if (data_027e09a4->IsDarkRealm()) {
        this->mUnk_04->func_ov026_020dc33c();
    }
}

void UnkStruct_027e0cf8::func_ov017_020c397c(unk8 *param1) {
    this->mUnk_0C->func_ov017_020c3748(param1);

    if (this->mUnk_18 >= 0) {
        this->mUnk_00->func_ov017_020c3574(param1);
    }

    if (data_027e09a4->IsDarkRealm()) {
        this->mUnk_04->func_ov026_020dc394();
    }
}

void UnkStruct_027e0cf8::func_ov017_020c39d4(unk8 *param1) {
    if (this->mUnk_18 >= 0) {
        this->mUnk_08->func_ov024_020d32b4(param1);
    }
}
