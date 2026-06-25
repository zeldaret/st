#include "MainGame/AdventureMode.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

extern "C" unk32 func_02032784(unk32 param1);
extern "C" u8 func_020157f0(unk32 param1, unk32 param2);
extern "C" u8 func_020157c0(unk32 param1, unk32 param2);

static const u8 data_ov024_020d7550[]    = {0x01, 0x04, 0x10, 0x40, 0x00};
static const u8 data_ov024_020d7555[]    = {0x20, 0x10, 0x08, 0x40, 0x00, 0x04, 0x80, 0x01, 0x02, 0x00, 0x00};
static const unk32 data_ov024_020d7560[] = {0x01, 0x00, 0x02};

const u8 UnkDataStruct4_14::func_ov024_020d1a18(unk32 param1) {
    return data_ov024_020d7550[param1];
}

unk32 UnkDataStruct4_14::func_ov024_020d1a28(u8 param1) {
    switch (param1) {
        case 0x10:
            return 2;
        case 0x01:
            return 0;
        case 0x40:
            return 3;
        case 0x04:
            return 1;
        case 0x00:
            return 4;
        default:
            break;
    }

    return 4;
}

u8 UnkDataStruct4_14::func_ov024_020d1a98(unk32 param1, unk32 param2) {
    return data_ov024_020d7555[param1 + 1 + ((param2 + 1) * 3)];
}

void UnkDataStruct4_14::func_ov024_020d1ab8(unk32 param1, unk32 *param2, unk32 *param3) {
    switch (param1) {
        case 0x10:
            *param2 = 0;
            *param3 = -1;
            break;
        case 0x40:
            *param2 = -1;
            *param3 = 0;
            break;
        case 0x80:
            *param2 = -1;
            *param3 = 1;
            break;
        case 0x00:
            *param2 = 0;
            *param3 = 0;
            break;
        case 0x01:
            *param2 = 0;
            *param3 = 1;
            break;
        case 0x04:
            *param2 = 1;
            *param3 = 0;
            break;
        case 0x08:
            *param2 = 1;
            *param3 = -1;
            break;
        case 0x20:
            *param2 = -1;
            *param3 = -1;
            break;
        case 0x02:
            *param2 = 1;
            *param3 = 1;
            break;
        default:
            break;
    }
}

s32 UnkDataStruct4_14::func_ov024_020d1b98(unk32 *param1, unk32 param2) {
    s32 var_r3 = 0;

    if (param2 & 0x01) {
        param1[var_r3++] = 0x00;
    }

    if (param2 & 0x04) {
        param1[var_r3++] = 0x01;
    }

    if (param2 & 0x10) {
        param1[var_r3++] = 0x02;
    }

    if (param2 & 0x40) {
        param1[var_r3++] = 0x03;
    }

    return var_r3;
}

s32 UnkDataStruct4_14::func_ov024_020d1be0(s32 param1) {
    switch (param1) {
        case 0x54:
            return 0x01;
        case 0x51:
            return 0x04;
        case 0x45:
            return 0x10;
        case 0x15:
            return 0x40;
        default:
            break;
    }

    return 0x00;
}

s32 UnkDataStruct4_14::func_ov024_020d1c3c(unk32 *param1, unk32 param2) const {
    s32 j = 0;

    for (int i = 0; i < 4; i++) {
        if (this->func_ov024_020d1cc8(i, param2)) {
            param1[j] = i;
            j++;
        }
    }

    return j;
}

void UnkDataStruct4_14::func_ov024_020d1c84() {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_0F); i++) {
        if (func_02032784(this->mUnk_0F[i]) == 1 && func_02032784(this->mUnk_0C[i]) == 2) {
            this->mUnk_0F[i] = this->mUnk_0C[i];
        }
    }
}

bool UnkDataStruct4_14::func_ov024_020d1cc8(unk32 param1, unk32 param2) const {
    const u8 value = func_ov024_020d1a18(param1);
    return this->mUnk_0F[param2] & value;
}

bool UnkDataStruct4_14::func_ov024_020d1cf4(unk32 param1) const {
    const u8 value = func_ov024_020d1a18(param1);

    for (int i = 0; i < ARRAY_LEN(this->mUnk_0F); i++) {
        if (this->mUnk_0F[i] & value) {
            return true;
        }
    }

    return false;
}

bool UnkDataStruct4_14::func_ov024_020d1d30(unk32 param1, u16 param2) const {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_0C); i++) {
        if (this->mUnk_0C[i] != 0) {
            if (param1 == this->mUnk_02[i] && param2 == this->mUnk_06[i]) {
                return true;
            }
        }
    }

    return false;
}

u8 UnkDataStruct4_14::func_ov024_020d1d78() const {
    u8 value = 0;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_0F); i++) {
        value |= this->mUnk_0F[i];
    }

    return value;
}

u8 UnkDataStruct4_14::func_ov024_020d1da0() const {
    u8 value = 0;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_0C); i++) {
        value |= this->mUnk_0C[i];
    }

    return value;
}

bool UnkDataStruct4_14::func_ov024_020d1dc8(unk32 param1, unk32 param2) const {
    const u8 value = func_ov024_020d1a18(param1);
    return this->mUnk_0C[param2] & value;
}

bool UnkDataStruct4_14::func_ov024_020d1df4(unk32 param1) const {
    return func_ov024_020d1a18(param1) & this->func_ov024_020d1da0();
}

void UnkDataStruct4_14::func_ov024_020d1e20(unk16 *param1, unk32 param2) {
    switch (param2) {
        case 0x10:
            param1[0] = 0;
            param1[1] = -1;
            break;
        case 0x01:
            param1[0] = 0;
            param1[1] = 1;
            break;
        case 0x40:
            param1[0] = -1;
            param1[1] = 0;
            break;
        case 0x04:
            param1[0] = 1;
            param1[1] = 0;
            break;
        default:
            param1[0] = 0;
            param1[1] = 0;
            break;
    }
}

u8 UnkDataStruct4_14::func_ov024_020d1eac(const unk32 param1) {
    switch (param1) {
        case 0x10:
            return 0x01;
        case 0x01:
            return 0x10;
        case 0x04:
            return 0x40;
        case 0x40:
            return 0x04;
        case 0x08:
            return 0x80;
        case 0x20:
            return 0x02;
        case 0x02:
            return 0x20;
        case 0x80:
            return 0x08;
        default:
            break;
    }

    return 0x00;
}

void UnkDataStruct4_14::func_ov024_020d1f60(u32 param1) {
    if (param1 >= 0x78) {
        param1 = 0;
    }

    this->mUnk_12 = param1;
}

unk32 UnkDataStruct4_14::func_ov024_020d1f70() const {
    u8 val = this->mUnk_12;

    if (this->mUnk_12 == 0) {
        return 0x6000;
    }

    return (this->mUnk_12 * 0xC000) / 120;
}

bool UnkDataStruct4_14::func_ov024_020d1fa4(unk32 param1) const {
    if (this->mUnk_0C[param1] != 0) {
        if (this->mUnk_06[param1] != 0 && !this->func_ov024_020d2320(param1)) {
            return true;
        }

        return false;
    }

    return false;
}

void UnkDataStruct4_14::func_ov024_020d1fe8() {
    this->mUnk_00            = 0;
    this->mStationSceneIndex = SceneIndex_Max;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_0C); i++) {
        this->mUnk_0C[i] = 0;
        this->mUnk_0F[i] = 0;
        this->mUnk_02[i] = -1;
        this->mUnk_06[i] = 0;
    }

    this->mUnk_12 = 0;
}

bool UnkDataStruct4_14::func_ov024_020d2030(unk32 param1, unk32 param2) {
    if (this->func_ov024_020d1dc8(param1, param2) && !this->func_ov024_020d1cc8(param1, param2)) {
        this->mUnk_0F[param2] |= func_ov024_020d1a18(param1);
        return true;
    }

    return false;
}

u8 UnkDataStruct4_14::func_ov024_020d208c(unk32 param1) const {
    return this->mUnk_0F[param1];
}

void UnkDataStruct4_14::func_ov024_020d2098(unk32 param1, unk32 param2) {
    this->mUnk_0C[param2] |= func_ov024_020d1a18(param1);
}

unk32 UnkDataStruct4_14::func_ov024_020d20c0(unk32 param1, unk32 param2) const {
    u8 var_r6;
    s32 var_r7;
    s32 temp_r8;

    var_r6  = func_ov024_020d1a18(param1);
    temp_r8 = this->func_ov024_020d1d78();

    switch (func_02032784(temp_r8)) {
        case 0:
            return 4;
        case 1:
            return 4;
        case 2:
            return func_ov024_020d1a28(temp_r8 & ~var_r6);
        case 3:
            if ((param2 == 1) || (param2 == 3)) {
                for (var_r7 = 1; var_r7 < 4; var_r7++) {
                    if (param2 == 1) {
                        var_r6 = func_020157f0(var_r6, 2);
                    } else {
                        var_r6 = func_020157c0(var_r6, 2);
                    }

                    if (temp_r8 & var_r6) {
                        return func_ov024_020d1a28(var_r6);
                    }
                }

                return 4;
            }

            return 4;
        default:
            break;
    }

    return 4;
}

bool UnkDataStruct4_14::IsStationDungeon() const {
    switch (this->mStationSceneIndex) {
        case SceneIndex_d_forest:
        case SceneIndex_d_snow26:
        case SceneIndex_d_water27:
        case SceneIndex_d_flame:
        case SceneIndex_d_sand:
            return true;
        default:
            break;
    }

    return false;
}

bool UnkDataStruct4_14::func_ov024_020d21d8() const {
    switch (this->func_ov024_020d1da0()) {
        case 0x01:
        case 0x04:
        case 0x44:
        case 0x40:
        case 0x11:
        case 0x10:
            return true;
        default:
            break;
    }

    return false;
}

bool UnkDataStruct4_14::func_ov024_020d223c() const {
    if (!this->func_ov024_020d21d8() && func_02032784(this->func_ov024_020d1da0()) == 2) {
        return true;
    }

    return false;
}

bool UnkDataStruct4_14::func_ov024_020d2270(unk32 param1, unk32 param2) const {
    u8 value = func_ov024_020d1a18(param1);

    if (this->mUnk_0C[param2] & value && !(this->mUnk_0F[param2] & value)) {
        return true;
    }

    return false;
}

unk32 UnkDataStruct4_14::func_ov024_020d22ac(unk32 param1) const {
    u8 temp_r7  = func_ov024_020d1a18(param1);
    bool var_r5 = false;

    for (int i = 0; i < ARRAY_LEN(data_ov024_020d7560); i++) {
        unk32 temp_r2 = data_ov024_020d7560[i];

        if (this->mUnk_0F[temp_r2] & temp_r7) {
            return temp_r2;
        }

        if (this->func_ov024_020d2270(param1, temp_r2)) {
            var_r5 = true;
        }
    }

    return var_r5 ? -1 : -2;
}

bool UnkDataStruct4_14::func_ov024_020d2320(unk32 param1) const {
    UnkStruct_027e0ce0::func_ov000_0205c904()->func_ov024_020d3f4c(this->mUnk_02[param1], this->mUnk_06[param1]);
}

unk32 UnkDataStruct4_14::func_ov024_020d2348(unk32 param1) const {
    unk32 var_r6 = 0;

    for (int i = 0; i < ARRAY_LEN(data_ov024_020d7684) - 1; i++) {
        //! TODO: fake match, how is this accessed??
        if (GET_FLAG2(data_ov024_020d7684[this->func_ov024_020d22ac(i)][12], param1)) {
            var_r6++;
        }
    }

    return var_r6;
}

bool UnkDataStruct4_14::func_ov024_020d239c() const {
    u8 temp_r0 = func_ov024_020d1da0();

    if (temp_r0 == 4 || temp_r0 == 0x40 || temp_r0 == 0x44) {
        return true;
    }

    return false;
}

bool UnkDataStruct4_14::func_ov024_020d23bc() const {
    u8 temp_r0  = func_ov024_020d1da0() + 0xFF;
    bool var_r0 = false;

    if (temp_r0 > 0x10) {
        return false;
    }

    if (GET_FLAG2(0x18001, temp_r0)) {
        var_r0 = true;
    }

    return var_r0;
}

bool UnkDataStruct4_14::func_ov024_020d23ec() const {
    bool var_r4 = false;
    u8 value    = this->func_ov024_020d1d78();

    if (func_02032784(value) == 3 && (this->func_ov024_020d2464(1) || this->func_ov024_020d2464(0))) {
        var_r4 = true;
    }

    return var_r4;
}

bool UnkDataStruct4_14::func_ov024_020d243c() const {
    return this->func_ov024_020d23ec();
}

bool UnkDataStruct4_14::func_ov024_020d2448() const {
    u8 value = this->func_ov024_020d1da0();
    return value == 0x11 || value == 0x44 ? true : false;
}

bool UnkDataStruct4_14::func_ov024_020d2464(bool param1) const {
    if (param1) {
        return this->mUnk_13 == 0x01;
    }

    return this->mUnk_13 == 0x02;
}
