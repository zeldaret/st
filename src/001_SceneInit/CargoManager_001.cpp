#include "MainGame/CargoManager.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "global.h"

THUMB_BEGIN

CargoManager::CargoManager() {
    this->mUnk_18 = 0;
    this->mUnk_1C = 0;
}

CargoManager::~CargoManager() {}

void CargoManager::func_ov001_020bf830() {
    if (this->mCargo.mAmount == 0 && !data_027e09a4->IsTrain()) {
        this->mCargo.mType = CargoType_None;
    }

    this->mUnk_18 = 0;
    this->mUnk_1C = 0;
}

DECL_INSTANCE(CargoManager, gpCargoManager);

THUMB_END
