#include "MainGame/CargoManager.hpp"
#include "MainGame/PassengerManager.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d00.hpp"

#include <nns/g3d/g3d.h>

static const s8 data_ov024_020d7570[]   = {0x04, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x08};
static const s32 data_ov024_020d7578[4] = {0, 0, -1, -1};
static const s32 data_ov024_020d7588[4] = {0, 2, -1, -1};

THUMB_BEGIN

s8 UnkStruct_027e0ce0_34::func_ov024_020d3c54(unk32 param1) {
    return data_ov024_020d7570[param1];
}

void UnkStruct_027e0ce0_34::func_ov024_020d3c60(SaveFile_00000_0000_Data_D8 *param1) {
    param1->spiritTrackFlags = this->mSpiritTrackFlags;

    for (s32 i = 0; i < ARRAY_LEN(param1->unk_60); i++) {
        if (i < this->mUnk_2C) {
            param1->unk_60[i] = this->mUnk_00[i];
            param1->unk_64[i] = this->mUnk_10[i];
        } else {
            param1->unk_60[i] = -1;
            param1->unk_64[i] = -1;
        }
    }

    gpPassengerManager->func_ov024_020d41f4(&param1->unk_40);
    param1->unk_69 = this->mUnk_34;

    for (u32 i = 0; i < ARRAY_LEN(param1->trackFlags); i++) {
        param1->trackFlags[i] = this->mTrackFlags[i];
    }

    unk32 cargoType   = CargoType_None;
    unk32 cargoAmount = 0;
    gpCargoManager->GetTypeAndAmount(&cargoType, &cargoAmount);

    param1->cargoType   = cargoType;
    param1->cargoAmount = cargoAmount;
}

unk32 UnkStruct_027e0ce0_34::func_ov024_020d3cf4(unk32 param1) {
    unk32 iVar1 = this->func_ov024_020d3dec(param1);
    unk32 iVar2 = this->func_ov024_020d3e0c(param1);
    return data_027e0d00->mUnk_020[iVar1][iVar2]->mUnk_B0;
}

unk32 UnkStruct_027e0ce0_34::func_ov024_020d3d20() {
    unk32 iVar1 = this->mUnk_2C;

    if (iVar1 == 4) {
        unk32 iVar2 = this->func_ov024_020d3e0c(0);
        bool bVar1  = true;

        for (int i = 1; i < 4; i++) {
            if (iVar2 != this->func_ov024_020d3e0c(i)) {
                bVar1 = false;
                break;
            }
        }

        if (bVar1) {
            return UnkStruct_027e0ce0_34::func_ov024_020d3c54(iVar2);
        }
    }

    for (int i = 0; i < iVar1; i++) {
        if (this->func_ov024_020d3e0c(i) != 0) {
            return 0x05;
        }
    }

    return 4;
}

void UnkStruct_027e0ce0_34::func_ov024_020d3d80(unk32 param1) {
    unk32 *puVar1;

    this->mUnk_24 = param1;

    if (this->mUnk_24 < this->mUnk_28) {
        puVar1 = &this->mUnk_24;
    } else {
        puVar1 = &this->mUnk_28;
    }

    this->mUnk_28 = *puVar1;
}

void UnkStruct_027e0ce0_34::func_ov024_020d3d98(unk32 param1, unk32 param2) {
    this->mSpiritTrackFlags |= this->func_ov024_020d3dc0(param1, param2);
}

bool UnkStruct_027e0ce0_34::func_ov024_020d3da8(unk32 param1, unk32 param2) {
    if (this->mSpiritTrackFlags & this->func_ov024_020d3dc0(param1, param2)) {
        return true;
    }

    return false;
}

u32 UnkStruct_027e0ce0_34::func_ov024_020d3dc0(unk32 param1, unk32 param2) {
    return 1 << (param1 + param2 * 4);
}

bool UnkStruct_027e0ce0_34::func_ov024_020d3dcc() {
    //! TODO: fake match?
    for (int i = 0; i < *(volatile unk32 *) &this->mUnk_2C; i++) {
        if (this->mUnk_00[i] == 3) {
            return true;
        }
    }

    return false;
}

THUMB_END

unk32 UnkStruct_027e0ce0_34::func_ov024_020d3dec(unk32 param1) {
    if (param1 >= 0 && param1 < this->mUnk_2C) {
        return this->mUnk_00[param1];
    }

    return -1;
}

unk32 UnkStruct_027e0ce0_34::func_ov024_020d3e0c(unk32 param1) {
    if (param1 >= 0 && param1 < this->mUnk_2C) {
        return this->mUnk_10[param1];
    }

    return -1;
}

void UnkStruct_027e0ce0_34::func_ov024_020d3e30(unk32 param1, unk32 param2) {
    if (param1 < 0) {
        return;
    }

    if (param1 >= this->mUnk_2C) {
        return;
    }

    this->mUnk_10[param1] = param2;
    this->func_ov024_020d3d80(this->func_ov024_020d3d20());
}

void *UnkStruct_027e0ce0_34::func_ov024_020d3e68(unk32 param1) {
    unk32 iVar1 = this->func_ov024_020d3e0c(param1);
    unk32 iVar2 = this->func_ov024_020d3dec(param1);
    return G3d_GetModelPtr(data_027e0d00->mUnk_020[iVar2][iVar1]->mUnk_50);
}

void UnkStruct_027e0ce0_34::SetTrackFlag(s32 flagPos, u16 flagValue, bool doSet) {
    if (flagPos == ARRAY_LEN(this->mTrackFlags)) {
        // glyphs
        data_027e0cd8->func_ov000_02081d7c(flagValue, 0x03, doSet);
        return;
    }

    // force gems
    if (doSet) {
        SET_FLAG_ALT2(this->mTrackFlags, flagPos, flagValue);
    } else {
        UNSET_FLAG_ALT2(this->mTrackFlags, flagPos, flagValue);
    }
}

bool UnkStruct_027e0ce0_34::func_ov024_020d3f4c(s8 param1, u16 param2) {
    if (param1 == ARRAY_LEN(this->mTrackFlags)) {
        return data_027e0cd8->func_ov000_02081e30(param2, 0x03);
    }

    return GET_FLAG_ALT2(this->mTrackFlags, param1, param2);
}

void UnkStruct_027e0ce0_34::func_ov024_020d3f8c() {
    this->func_ov024_020d3d98(1, 0);
    this->mUnk_2C    = 3;
    this->mUnk_00[1] = 1;
    this->mUnk_10[1] = 0;
    this->mUnk_00[2] = 2;
    this->mUnk_10[2] = 0;
}

void UnkStruct_027e0ce0_34::func_ov024_020d3fc8() {
    this->func_ov024_020d3d98(3, 0);
    this->mUnk_00[this->mUnk_2C] = 3;
    this->mUnk_10[this->mUnk_2C] = 0;
    this->mUnk_2C++;
}

void UnkStruct_027e0ce0_34::func_ov024_020d4008(unk32 param1) {
    unk32 temp_r2;
    unk32 var_r3;
    unk32 temp_ip;

    temp_r2 = this->mUnk_24;
    temp_ip = this->mUnk_28;
    var_r3  = temp_ip + param1;

    if (var_r3 > temp_r2) {
        var_r3 = temp_r2;
    } else if (var_r3 < 0) {
        var_r3 = 0;
    }

    this->mUnk_28 = var_r3;
    data_ov024_020d8698->func_ov024_020cd348(temp_ip, var_r3);
}

void UnkStruct_027e0ce0_34::func_ov024_020d404c() {
    s32 temp1[4];
    s32 temp2[4];

#if __MWERKS__
    temp1 = data_ov024_020d7588;
    temp2 = data_ov024_020d7578;
#else
    temp1[0] = data_ov024_020d7588[0];
    temp1[1] = data_ov024_020d7588[1];
    temp1[2] = data_ov024_020d7588[2];
    temp1[3] = data_ov024_020d7588[3];

    temp2[0] = data_ov024_020d7578[0];
    temp2[1] = data_ov024_020d7578[1];
    temp2[2] = data_ov024_020d7578[2];
    temp2[3] = data_ov024_020d7578[3];
#endif

    this->func_ov024_020d4098(temp1, temp2);
}

void UnkStruct_027e0ce0_34::func_ov024_020d4098(s32 *param1, s32 *param2) {
    s32 value1;
    s32 value2;
    s32 var_r6 = 0;

    for (int i = 0; i < 4; i++) {
        value1 = param1[i];

        if (value1 > -1 && value1 < 4 && (value2 = param2[i]) > -1 && value2 < 8) {
            this->mUnk_00[i] = value1;
            this->mUnk_10[i] = value2;
            this->func_ov024_020d3d98(value1, value2);
            var_r6++;
        } else {
            this->mUnk_00[i] = -1;
            this->mUnk_10[i] = -1;
            break;
        }
    }

    this->mUnk_2C = var_r6;
}
