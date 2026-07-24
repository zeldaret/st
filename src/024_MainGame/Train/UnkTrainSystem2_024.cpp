#include "MainGame/AdventureMode.hpp"
#include "MainGame/CargoManager.hpp"
#include "MainGame/UnkTrainSystems.hpp"
#include "System/Random.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0d00.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

extern "C" void func_01ffcb94(unk16, unk16, Mat3p *);
extern "C" void func_01ffa60c(const Mat3p *, Mat3p *, Mat3p *);

const UnkStruct_ov024_020d86a8 data_ov024_020d78bc = {0};

const UnkCargoStruct data_ov024_020d78c0[] = {
    {.type = CargoType_MegaIce, .requiredAmount = 1},  {.type = CargoType_DarkOre, .requiredAmount = 5},
    {.type = CargoType_MegaIce, .requiredAmount = 10}, {.type = CargoType_Iron, .requiredAmount = 5},
    {.type = CargoType_Fish, .requiredAmount = 10},    {.type = CargoType_Cuccos, .requiredAmount = 10},
    {.type = CargoType_Wood, .requiredAmount = 15},    {.type = CargoType_Vessel, .requiredAmount = 1},
    {.type = CargoType_Cuccos, .requiredAmount = 5},   {.type = CargoType_MegaIce, .requiredAmount = 10},
};

struct UnkStruct_ov024_020d86a8_Mgr {
    const UnkStruct_ov024_020d86a8 *pInstance;

    UnkStruct_ov024_020d86a8_Mgr(const UnkStruct_ov024_020d86a8 *pInstance) {
        this->pInstance = pInstance;
    }
};

UnkStruct_ov024_020d86a8_Mgr data_ov024_020d86ac(&data_ov024_020d78bc);

UnkTrainSystem2::UnkTrainSystem2() :
    mUnk_00(0),
    mModelRender(NULL),
    mUnk_64(0),
    mUnk_66(0) {
    if (this->func_ov024_020d5c40()) {
        this->mUnk_00 = 0x1000;
    }
}

UnkTrainSystem2::~UnkTrainSystem2() {}

extern "C" bool func_01ff916c(void *, int, int);

void UnkTrainSystem2::func_ov024_020d5990() {
    if (this->func_ov024_020d5c40()) {
        this->mUnk_00 = 0x1000;
    } else {
        unk32 temp_r6 = this->mUnk_00;
        func_01ff916c(&this->mUnk_00, 0, 0x7B);

        if (data_027e09a4->IsTrain() && temp_r6 != 0 && this->mUnk_00 == 0 && gpCargoManager->mUnk_1C) {
            data_ov000_020b5214.func_ov000_0206dc4c(0x141);
        }
    }

    if (data_027e09b8->func_01ffd420() == 0) {
        if (gpCargoManager->mUnk_18 <= 0) {
            this->mUnk_64 = 0;
            this->mUnk_66 = 0;
        } else {
            this->mUnk_64 = ((s16) gRandom.Next16(0) + this->mUnk_64 / 2) >> 4;
            this->mUnk_66 = ((s16) gRandom.Next16(0) + this->mUnk_66 / 2) >> 4;
        }
    }
}

void UnkTrainSystem2::func_ov024_020d5afc(const Mat3p *param1, const VecFx32 *param2, unk32 param3) {
    if (this->mUnk_00 <= 0) {
        return;
    }

    if (data_027e0d00->mUnk_0F4 == NULL) {
        return;
    }

    fx32 scale = MUL_FX32(this->mUnk_00, param3);
    this->SetModel();

    if (gpCargoManager->mUnk_18 > 0) {
        Mat3p auStack_40;
        VecFx32 temp;
        func_01ffcb94(this->mUnk_64, this->mUnk_66, &auStack_40);
        func_01ffa60c(param1, &auStack_40, &auStack_40);
        this->SetTransform(&auStack_40, param2, scale);
    } else {
        this->SetTransform(param1, param2, scale);
    }
}

bool UnkTrainSystem2::func_ov024_020d5c40() {
    if (gpCargoManager->GetCargo()->IsTypeSet() && gpCargoManager->GetCargo()->GetAmount() != 0 ||
        data_ov024_020d86ac.pInstance->mUnk_00_0 != 0) {
        return true;
    }

    return false;
}
