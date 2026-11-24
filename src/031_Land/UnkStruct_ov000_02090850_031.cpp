#include "Player/PlayerLink.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_02090850.hpp"
#include "Unknown/UnkStruct_ov000_020b4f70.hpp"
#include "nitro/fx.h"
#include "nitro/types.h"

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
        VecFx32 vec;
        this->mpLink->func_ov000_0208cc20(&vec);

        UnkStruct_027e0cec *pUnkStruct_027e0cec = data_027e0cec;

        for (UnkStruct_ov000_02090850_84_10 *ptr = this->mUnk_10; ptr != &this->mUnk_10[ARRAY_LEN(this->mUnk_10)]; ptr++) {
            pUnkStruct_027e0cec->func_ov000_020a0140(ptr, &vec);
        }
    } else {
        UnkStruct_027e0cec *pUnkStruct_027e0cec = data_027e0cec;

        for (UnkStruct_ov000_02090850_84_10 *ptr = this->mUnk_10; ptr != &this->mUnk_10[ARRAY_LEN(this->mUnk_10)]; ptr++) {
            pUnkStruct_027e0cec->func_ov000_020a0110(ptr);
        }
    }
}
