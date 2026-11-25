#include "Item/ItemManager.hpp"
#include "Unknown/UnkStruct_027e0cdc.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "nitro/math.h"

void UnkStruct_ItemManager_20_08::func_ov031_020db5b4() {
    this->mUnk_04.x = 0;
    this->mUnk_04.y = 0;
    this->mUnk_04.z = 0;
    this->mUnk_10   = 0;
    this->mUnk_12   = 0;
    this->mUnk_13   = 0;
}

void UnkStruct_ItemManager_20_08::func_ov031_020db5d4(unk32 param1) {
    if (param1 != 0x03) {
        this->func_ov031_020db5b4();
    }
}

u16 UnkStruct_ItemManager_20_08::func_ov031_020db5e8() {
    u16 var_r3 = this->mUnk_02;

    this->mUnk_02++;

    if (this->mUnk_02 == 0) {
        this->mUnk_00 = 0;
        this->mUnk_02 = 1;
    }

    return var_r3;
}

void UnkStruct_ItemManager_20_08::func_ov031_020db614(u16 param1, const VecFx32 *param2) {
    if (param1 > this->mUnk_00) {
        this->mUnk_00 = param1;

        VecFx32_Copy(param2, &this->mUnk_04);
        this->mUnk_10 |= 0x01;
        this->mUnk_12 = 20;
        this->mUnk_13 = 45;
        data_027e0ce0->func_ov000_0208bf88(0x03);
        return;
    }

    if (param1 != this->mUnk_00) {
        return;
    }

    if (!(this->mUnk_10 & 0x01)) {
        return;
    }

    VecFx32_Copy(param2, &this->mUnk_04);
    this->mUnk_13 = 45;
}

unk32 UnkStruct_ItemManager_20_08::func_ov031_020db6a4(VecFx32 *param1) {
    if ((this->mUnk_10 & 0x01) && !data_027e0cdc->func_ov000_02082a28(0x0F)) {
        VecFx32 temp;

        temp.x = this->mUnk_04.x;
        temp.y = this->mUnk_04.y;
        temp.z = this->mUnk_04.z;

        param1->x = 0;
        param1->y = 0;
        param1->z = 0;

        param1->x = temp.x;
        param1->y = temp.y;
        param1->z = temp.z;

        return 0x0F;
    }

    return 0x00;
}

void UnkStruct_ItemManager_20_08::func_ov031_020db704(bool param1, bool param2) {
    if (param1) {
        this->func_ov031_020db5b4();
        return;
    }

    bool var_r3 = param2 && !(this->mUnk_10 & 0x02);

    if (param2) {
        this->mUnk_10 |= 0x02;
    } else {
        this->mUnk_10 &= ~0x02;
    }

    //! TODO: fake match
    if (!(*(vu16 *) &this->mUnk_10 & 0x01)) {
        return;
    }

    if (var_r3) {
        this->mUnk_10 |= 0x04;
    }

    if (this->mUnk_12 != 0) {
        this->mUnk_12--;
    }

    if (this->mUnk_13 != 0) {
        this->mUnk_13--;

        if (this->mUnk_13 <= 0) {
            this->mUnk_10 |= 0x04;
        }
    }

    if (this->mUnk_10 & 0x04 && this->mUnk_12 == 0) {
        this->func_ov031_020db5b4();
    }
}
