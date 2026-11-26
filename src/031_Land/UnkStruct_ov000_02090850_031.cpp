#include "CommonFuncs.hpp"
#include "Player/PlayerLink.hpp"
#include "Unknown/UnkStruct_027e0958.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_02090850.hpp"
#include "Unknown/UnkStruct_ov000_020b4ec4.hpp"
#include "Unknown/UnkStruct_ov000_020b4f70.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"

extern VecFx32 data_027e07d4;

static const char data_ov031_021106ec[16] = "link_ice1";

void UnkStruct_ov000_02090850_84::func_ov031_020dac20() {
    this->mUnk_10[0].mUnk_04 = 0x890;
    this->mUnk_10[0].mUnk_08 = 0x001;

    this->mUnk_10[1].mUnk_04 = 0x891;
    this->mUnk_10[1].mUnk_08 = 0x001;
}

void UnkStruct_ov000_02090850_84::func_ov031_020dac40() {
    this->mUnk_0C = 6;
    data_027e09a8->func_ov000_020717cc(0x8C0D, &this->mpLink->mPos.vec);
    data_ov000_020b4f70->func_ov000_02066364();
}

bool UnkStruct_ov000_02090850_84::func_ov031_020dac80() {
    if (this->mUnk_08->func_01ff8fa8() != 0x00) {
        this->mUnk_0C--;

        if (this->mUnk_0C <= 0) {
            return false;
        }

        this->mUnk_04->func_02015054(0x01, this->mUnk_04->mUnk_10);
        this->mUnk_08->func_02015054(0x01, this->mUnk_08->mUnk_10);
    }

    return true;
}

void UnkStruct_ov000_02090850_84::func_ov031_020dacdc(bool param1) {
    if (param1) {
        VecFx32 sp0;
        this->mpLink->func_ov000_0208cc20(&sp0);

        UnkStruct_027e0cec *temp_r0 = data_027e0cec;

        for (UnkStruct_ov000_02090850_84_10 *ptr = this->mUnk_10; ptr != &this->mUnk_10[ARRAY_LEN(this->mUnk_10)]; ptr++) {
            temp_r0->func_ov000_020a0140(ptr, &sp0);
        }
    } else {
        UnkStruct_027e0cec *temp_r0 = data_027e0cec;

        for (UnkStruct_ov000_02090850_84_10 *ptr = this->mUnk_10; ptr != &this->mUnk_10[ARRAY_LEN(this->mUnk_10)]; ptr++) {
            temp_r0->func_ov000_020a0110(ptr);
        }
    }
}

void UnkStruct_ov000_02090850_AC::func_ov031_020dad80() {
    this->mUnk_D0 = 0x896;
    this->mUnk_D4 = 0x01;
}

void UnkStruct_ov000_02090850_AC::func_ov031_020dad98() {
    PlayerActorBase_70 *temp_r2 = this->mUnk_1C;
    VecFx32_Copy(&data_027e07d4, &temp_r2->mUnk_118.vec);

    data_027e0cec->func_ov000_0209feac(0x894, &this->mpLink2->mPos.vec, 0x01, 0x00, 0x00);
    data_027e0cec->func_ov000_0209feac(0x895, &this->mpLink2->mPos.vec, 0x01, 0x00, 0x00);
    data_027e09a8->func_ov000_02071700(0x8C82, &this->mpLink2->mPos.vec);
}

void UnkStruct_ov000_02090850_AC::func_ov031_020dae3c() {
    this->mUnk_24 = 0x00;
    this->mUnk_28 = 0x0F;
    this->mUnk_8C.mUnk_04.func_02015054(0x01, this->mUnk_8C.mUnk_04.mUnk_10);
    this->mUnk_8C.func_01ffc3b4();
    data_027e09a8->func_ov000_02071700(0x8C81, &this->mpLink2->mPos.vec);
}

bool UnkStruct_ov000_02090850_AC::func_ov031_020dae8c(unk32 param1) {
    VecFx32 sp0;
    s32 temp_ip;
    s32 temp_r0;
    s32 temp_r4;
    PlayerActorBase_70 *temp_r1;
    UnkStruct_ov000_0208f820_2c *temp_r2;
    void *temp_r3;

    this->mUnk_24++;
    this->mUnk_1C->mUnk_12B = true;

    temp_r2          = this->mUnk_18;
    temp_r2->mUnk_B1 = 0x1E;
    temp_r2->mUnk_B2 = 0x01;

    if (this->mUnk_24 % 60 == 0) {
        this->mUnk_8C.mUnk_04.func_02015054(0x01, this->mUnk_8C.mUnk_04.mUnk_10);
    }

    this->mUnk_8C.func_01ffc3b4();
    VecFx32_Copy(&data_027e07d4, &this->mUnk_1C->mUnk_118.vec);

    if (func_ov000_02088854(param1)) {
        data_ov000_020b5214.func_ov000_0206db44(0x70);
    }

    if (func_ov000_02088854(param1) || data_027e0ce0->mHealth == 0) {
        this->mUnk_28--;

        if (this->mUnk_28 <= 0) {
            return false;
        }

        func_ov000_02088d10(param1, &sp0);
        VecFx32_Copy(&sp0, &this->mUnk_1C->mUnk_118.vec);
    } else if (this->mUnk_24 % 60 == 0) {
        data_027e0ce0->func_ov000_0208bc9c(-1, 0x01);
    }

    return true;
}

void UnkStruct_ov000_02090850_AC::func_ov031_020dafe8(bool param1) {
    if (param1) {
        data_027e0cec->func_ov000_020a0140(&this->mUnk_CC, &this->mpLink2->mPos.vec);
    } else {
        data_027e0cec->func_ov000_020a0110(&this->mUnk_CC);
    }
}

void UnkStruct_ov000_02090850_AC::func_ov031_020db028() {
    VecFx32 sp0;

    VecFx32_Copy(&this->mUnk_1C->mUnk_0E4.mUnk_00, &sp0);
    sp0.y = 0;
    VEC_Add(&sp0, &this->mpLink2->mPos.vec, &sp0);
    VEC_Add(&sp0, &this->mUnk_1C->mUnk_118.vec, &sp0);
    data_027e0958->func_ov000_02058fc4(this, &sp0);

    s32 matId          = NNS_G3dGetUnkMatDataByName(NNS_G3dGetMat(this->mUnk_2C.mpModel), data_ov031_021106ec);
    G3d_Model *temp_r4 = this->mUnk_2C.mpModel;
    func_0200ea38(temp_r4, matId, data_ov000_020b4ec4.func_01ffc768(0x00));
}
