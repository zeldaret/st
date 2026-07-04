#include "Unknown/UnkStruct_027e0cf8.hpp"

extern s16 data_ov001_020c2750[];
extern s16 data_ov001_020c275e[];

UnkStruct_027e0cf8_08_00::UnkStruct_027e0cf8_08_00(u8 bgType) :
    AdventureModeManager_1B8_Base(bgType, true, AdventureModeManager_1B8_Base_1C(0x00, 0x00, 0x100, 0xC0), true, true) {
    this->func_ov001_020bfb20();

    if (bgType == 1) {
        this->mUnk_08 = true;
    }

    Vec2s *local_58[4][4] = {
        {NULL, this->mUnk_024, this->mUnk_040, this->mUnk_05C},
        {this->mUnk_0B0, NULL, this->mUnk_078, this->mUnk_094},
        {this->mUnk_0E8, this->mUnk_104, NULL, this->mUnk_0CC},
        {this->mUnk_120, this->mUnk_13C, this->mUnk_158, NULL},
    };

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            this->mUnk_178[i][j] = local_58[i][j];
        }
    }
}

UnkStruct_027e0cf8_08_00::~UnkStruct_027e0cf8_08_00() {}

void UnkStruct_027e0cf8_08_00::func_ov001_020bfb20() {
    for (int i = 0; i <= ARRAY_LEN(this->mUnk_0CC) - 1; i++) {
        this->mUnk_0CC[i].x = data_ov001_020c2750[i];
        this->mUnk_0CC[i].y = data_ov001_020c275e[i];
    }

    for (int i = 0; i <= ARRAY_LEN(this->mUnk_104) - 1; i++) {
        this->mUnk_104[i].x = -this->mUnk_0CC[i].x;
        this->mUnk_104[i].y = this->mUnk_0CC[i].y;
    }

    for (int i = 0; i <= ARRAY_LEN(this->mUnk_05C) - 1; i++) {
        this->mUnk_05C[i].x = this->mUnk_0CC[i].x;
        this->mUnk_05C[i].y = -this->mUnk_0CC[i].y;
    }

    for (int i = 0; i <= ARRAY_LEN(this->mUnk_024) - 1; i++) {
        this->mUnk_024[i].x = -this->mUnk_0CC[i].x;
        this->mUnk_024[i].y = -this->mUnk_0CC[i].y;
    }

    for (int i = 0; i <= ARRAY_LEN(this->mUnk_0E8) - 1; i++) {
        this->mUnk_0E8[i].x = 0;
        this->mUnk_0E8[i].y = ((i * 12) / 6) - 6;
    }

    for (int i = 0; i <= ARRAY_LEN(this->mUnk_13C) - 1; i++) {
        this->mUnk_13C[i].x = ((i * 12) / 6) - 6;
        this->mUnk_13C[i].y = 0;
    }

    for (int i = 0; i <= ARRAY_LEN(this->mUnk_0CC) - 1; i++) {
        s32 iVar2 = 6 - i;

        Vec2s_Copy(&this->mUnk_0CC[i], &this->mUnk_158[iVar2]);
        Vec2s_Copy(&this->mUnk_104[i], &this->mUnk_078[iVar2]);
        Vec2s_Copy(&this->mUnk_05C[i], &this->mUnk_120[iVar2]);
        Vec2s_Copy(&this->mUnk_024[i], &this->mUnk_0B0[iVar2]);
        Vec2s_Copy(&this->mUnk_0E8[i], &this->mUnk_040[iVar2]);
        Vec2s_Copy(&this->mUnk_13C[i], &this->mUnk_094[iVar2]);
    }
}
