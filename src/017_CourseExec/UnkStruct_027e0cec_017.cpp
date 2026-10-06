#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_027e0954.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "nitro/types.h"
#include "nns/g3d/sbc.h"

extern unk32 data_027e0154;

void UnkStruct_027e0cec::func_ov017_020c1e54(unk32 param1, unk32 param2) {
    unk32 var_r5 = param2 != 0 ? 0x4000 : 0x0000;

    for (int var_r4 = 0; var_r4 < ARRAY_LEN(this->mUnk_18); var_r4++) {
        if (this->mUnk_18[var_r4] != NULL) {
            this->mUnk_18[var_r4]->func_ov017_020c297c(param1, var_r5);
        }
    }
}

void UnkStruct_027e0cec::func_ov017_020c1e9c(unk32 param1, unk32 param2) {
    s32 var_r2  = data_0204a088->mUnk_00 != 0x11 ? 0 : 1;
    s32 var_r1  = param1 == 1 ? 0x40 : 0x80;
    s32 var_r7  = var_r2 == 0 ? var_r1 | 0x10 : -0x101;
    bool var_r5 = false;

    if (data_0204a088->mUnk_00 == 7 ||
        (data_0204a088->mUnk_04 == 7 && (data_0204a088->mUnk_04 != -1 || data_0204a088->mUnk_08 != -1))) {
        param2 |= 0x20;
    } else if (var_r2 != 0) {
        param2 = 0x100;
    }

    PushGeometryCommand(0x11, NULL, 0);

    for (s32 var_r6 = 0; var_r6 < ARRAY_LEN(this->mUnk_18); var_r6++) {
        if (this->mUnk_18[var_r6] != NULL &&
            this->mUnk_18[var_r6]->func_ov017_020c2ad8(&data_027e09bc->mUnk_04[param1]->mUnk_058, param2, var_r7)) {
            var_r5 = true;
        }
    }

    unk32 sp0 = 1;
    PushGeometryCommand(0x12, &sp0, 1);

    if (var_r5) {
        this->mUnk_00.mUnk_14 = param1;
        data_027e0954->mUnk_00[3].mUnk_04.Prepend(&this->mUnk_00);
    }
}

void UnkStruct_027e0cec::func_ov017_020c1fc0(unk32 param1, unk32 param2) {
    unk32 var_r1 = param1 == 1 ? 0x40 : 0x80;

    for (int var_r7 = 0; var_r7 < ARRAY_LEN(this->mUnk_18); var_r7++) {
        if (this->mUnk_18[var_r7] != NULL) {
            this->mUnk_18[var_r7]->func_ov017_020c2ad8(&data_027e0154, param2, var_r1 | ~0x10);
        }
    }
}

void UnkStruct_027e0cec_00::vfunc_00() {
    this->mUnk_10->func_ov017_020c1fc0(this->mUnk_14, 0x00);
}
