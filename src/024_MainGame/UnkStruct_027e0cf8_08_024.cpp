#include "Unknown/UnkStruct_027e0cf8.hpp"

#include <nitro/mi.h>

extern "C" void func_02019cec(u16 param1, unk32 param2);
extern "C" void func_ov024_020d3adc(void *, void *, u32, u32, unk32, unk32, unk32);

u8 UnkStruct_027e0cf8_08::func_ov024_020d3158(SceneIndex sceneIndex) {
    switch (sceneIndex) {
        case SceneIndex_test_trn:
            break;
        case SceneIndex_test_trn2:
            break;
        case SceneIndex_test_pre:
            break;
        case SceneIndex_test_iwa:
            break;
        case SceneIndex_t_area0:
        case SceneIndex_t_tutorial:
            return 0x06;
        case SceneIndex_t_area1:
            return 0x07;
        case SceneIndex_t_area2:
            return 0x08;
        case SceneIndex_t_area3:
            return 0x09;
        case SceneIndex_t_forest:
            break;
        case SceneIndex_t_smarine:
            return 0x0A;
        case SceneIndex_t_smount:
            break;
        case SceneIndex_t_smount2:
            break;
        case SceneIndex_t_smount3:
            break;
        case SceneIndex_t_dark:
            return 0x0B;
        case SceneIndex_t_eviltrain:
        case SceneIndex_t_eviltrain2:
        case SceneIndex_t_eviltrain3:
            return 0x0C;
        case SceneIndex_t_minigame:
            return 0x0D;
        default:
            break;
    }

    return 0x01;
}

UnkStruct_027e0cf8_08::UnkStruct_027e0cf8_08() {
    UnkStruct_027e0cf8_08_00 *ptr = new(HeapIndex_1) UnkStruct_027e0cf8_08_00(1);
    this->mUnk_000                = ptr;
    this->mUnk_004                = -1;
    this->mUnk_008                = 0;
    this->mUnk_00C                = 0;
    this->mUnk_26A                = 0;
    Vec2s_Clear(&ptr->mUnk_174);
    MI_CpuFill8(this->mUnk_010, 0, sizeof(this->mUnk_010));
    MI_CpuFill8(this->mUnk_13C, 0, sizeof(this->mUnk_13C));
}

UnkStruct_027e0cf8_08::~UnkStruct_027e0cf8_08() {
    DELETE(this->mUnk_000);
}

void UnkStruct_027e0cf8_08::func_ov024_020d32b4(unk8 *param1) {
    this->mUnk_000->func_ov024_020d072c(param1);
    func_02019cec(this->mUnk_268, 0x0F);
}

void UnkStruct_027e0cf8_08::func_ov024_020d32d8() {
    this->mUnk_000->func_ov024_020d06d0();
}

void UnkStruct_027e0cf8_08::func_ov024_020d32e8(Vec2s *param1) {
    Vec2s temp;
    temp.x = param1->x;
    temp.y = param1->y;
    Vec2s_Copy(&temp, &this->mUnk_000->mUnk_174);
}

void UnkStruct_027e0cf8_08::func_ov024_020d3324(UnkDataStruct4 *param1) {
    this->func_ov024_020d336c(param1, -1, 0, 0, 0);
}

void UnkStruct_027e0cf8_08::func_ov024_020d3348(UnkDataStruct4 *param1, unk32 param2, u16 param3, unk32 param4, unk32 param5) {
    this->func_ov024_020d336c(param1, param2, param3, param4, param5);
}

void UnkStruct_027e0cf8_08::func_ov024_020d336c(UnkDataStruct4 *param1, unk32 param2, unk32 param3, unk32 param4,
                                                unk32 param5) {
    this->mUnk_26A = UnkStruct_027e0cf8_08::func_ov024_020d3158(param1->mSceneIndex);
    this->mUnk_008 = param4;
    this->mUnk_00C = param5;

    if (param2 == -1) {
        this->mUnk_004 = -1;
    } else {
        this->mUnk_004 = 0;
        this->mUnk_268 = 0x8000 - 1;
        param1->func_ov024_020d2cfc(this->mUnk_13C, param2, param3);
    }

    this->func_ov024_020d3428(param1, 0x02, 0x03);
    param1->func_ov024_020d2c54(this->mUnk_010, 0);
    this->func_ov024_020d34a0(this->mUnk_010, this->mUnk_26A);
}

void UnkStruct_027e0cf8_08::func_ov024_020d340c() {
    this->mUnk_000->func_ov024_020d0698();
}

void UnkStruct_027e0cf8_08::func_ov024_020d341c(bool param1) {
    this->mUnk_000->mUnk_08 = param1;
}

void UnkStruct_027e0cf8_08::func_ov024_020d3428(const UnkDataStruct4 *param1, unk32 param2, unk32 param3) {
    UnkDataStruct4_14_2 *const *pUnk_14 = NULL;
    unk32 auStack_30[3];

    for (int i = 0; i < ARRAY_LEN(param1->mUnk_14); i++) {
        for (int j = 0; j < ARRAY_LEN(param1->mUnk_14[0]->mUnk_00); j++) {
            pUnk_14                           = param1->mUnk_14;
            UnkDataStruct4_14_2 *const *dummy = pUnk_14; // somehow required to match
            this->func_ov024_020d351c(i, j, auStack_30, pUnk_14[i]->mUnk_00[j].func_ov024_020d1c3c(auStack_30, param2),
                                      param3);
        }
    }
}

void UnkStruct_027e0cf8_08::func_ov024_020d34a0(UnkArrayDataType1 param1, u8 param2) {
    unk32 auStack_30[3];

    for (int i = 0; i < UnkDataStruct4_14_Unk_Max; i++) {
        for (int j = 0; j < 15; j++) {
            unk32 iVar1 = UnkDataStruct4_14::func_ov024_020d1b98(auStack_30, param1[i][j]);

            if (iVar1 > 0) {
                this->func_ov024_020d351c(i, j, auStack_30, iVar1, param2);
            }
        }
    }
}

void UnkStruct_027e0cf8_08::func_ov024_020d351c(unk32 param1, unk32 param2, unk32 *param3, unk32 param4, unk32 param5) {
    unk16 sVar1;
    unk16 sVar2;

    //! TODO: fake match?
    sVar2 = param2 * 12 + this->mUnk_000->mUnk_174.y + 6;
    sVar1 = param1 * 12 + this->mUnk_000->mUnk_174.x + 6;

    switch (param4) {
        case 1: {
            u32 val = param3[0];

            Vec2s temp;
            temp.x = sVar1;
            temp.y = sVar2;
            func_ov024_020d3adc(this->mUnk_000, &temp, param3[0], (val + 2) & 3, param5, 1, 4);
            break;
        }
        case 2: {
            Vec2s temp;
            temp.x = sVar1;
            temp.y = sVar2;
            func_ov024_020d3adc(this->mUnk_000, &temp, param3[0], param3[1], param5, 0, 4);
            break;
        }
        case 3: {
            Vec2s temp1;
            temp1.x = sVar1;
            temp1.y = sVar2;
            func_ov024_020d3adc(this->mUnk_000, &temp1, param3[0], param3[1], param5, 0, 4);

            Vec2s temp2;
            temp2.x = sVar1;
            temp2.y = sVar2;
            func_ov024_020d3adc(this->mUnk_000, &temp2, param3[1], param3[2], param5, 0, 4);

            Vec2s temp3;
            temp3.x = sVar1;
            temp3.y = sVar2;
            func_ov024_020d3adc(this->mUnk_000, &temp3, param3[2], param3[0], param5, 0, 4);
            break;
        }
        case 0:
        default:
            break;
    }
}
