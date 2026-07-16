#include "MainGame/CargoManager.hpp"
#include "MainGame/PassengerManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d00.hpp"

extern "C" SceneIndex func_ov000_0205c984();
extern "C" unk32 func_ov026_020f4c9c(SceneIndex);

UnkStruct_027e0ce0_34::UnkStruct_027e0ce0_34() {
    this->mUnk_20           = NULL;
    this->mUnk_24           = 0x03;
    this->mUnk_28           = 0x03;
    this->mUnk_2C           = 0x01;
    this->mSpiritTrackFlags = this->func_ov024_020d3dc0(0x00, 0x01);
    this->mUnk_34           = 0x04;
    this->mUnk_E8           = 0x00;
    this->mUnk_EC           = -1;
    this->mUnk_F0           = 0x00;

    for (int i = 0; i < ARRAY_LEN(this->mUnk_00); i++) {
        this->mUnk_00[i] = -1;
        this->mUnk_10[i] = -1;
    }

    for (u32 i = 0; i < ARRAY_LEN(this->mTrackFlags); i++) {
        this->mTrackFlags[i] = 0x00;
    }

    UnkStruct_027e0d00::Create();
    PassengerManager::Create();
    CargoManager::Create();
}

UnkStruct_027e0ce0_34::~UnkStruct_027e0ce0_34() {
    CargoManager::Destroy();
    PassengerManager::Destroy();
    UnkStruct_027e0d00::Destroy();
}

void UnkStruct_027e0ce0_34::func_ov001_020bf22c(SaveFile_00000_0000_Data_D8 *param1, unk32 param2) {
    this->mUnk_2C           = param1->func_ov000_020a0cf4();
    this->mSpiritTrackFlags = param1->spiritTrackFlags;

    for (int i = 0; i < param1->func_ov000_020a0cf4(); i++) {
        this->mUnk_00[i] = param1->unk_60[i];
        this->mUnk_10[i] = param1->unk_64[i];
    }

    gpPassengerManager->func_ov024_020d41bc(&param1->unk_40);
    this->mUnk_34 = param1->unk_69;

    for (u32 i = 0; i < ARRAY_LEN(this->mTrackFlags); i++) {
        this->mTrackFlags[i] = param1->trackFlags[i];
    }

    gpCargoManager->SetCargo(param1->cargoType, param1->cargoAmount);
    this->func_ov024_020d3d80(this->func_ov024_020d3d20());
    this->mUnk_28 = this->mUnk_24;
}

void UnkStruct_027e0ce0_34::func_ov001_020bf2b8(bool param1) {
    this->func_ov001_020bf3fc();

    if (this->mUnk_2C == 0x02 && data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedTrainCannon)) {
        this->func_ov024_020d3f8c();
    }

    if (this->mUnk_2C == 0x03 && data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedTrainWagon)) {
        this->func_ov024_020d3fc8();
    }

    data_027e0d00->func_ov001_020bf530();
    gpPassengerManager->func_ov001_020bf8e4();
    gpCargoManager->func_ov001_020bf830();

    if (param1) {
        gpPassengerManager->func_ov024_020d4258();
        gpCargoManager->func_ov024_020d591c();
    }

    if (data_027e09a4->IsTrain()) {
        this->func_ov024_020d3d80(this->func_ov024_020d3d20());

        if (param1) {
            this->mUnk_28 = this->mUnk_24;
        }

        SceneIndex sceneIndex = func_ov000_0205c984();
        this->mUnk_F0         = func_ov026_020f4c9c(sceneIndex);
        this->mUnk_20         = new(HeapIndex_1) UnkStruct_027e0ce0_34_20();
    }
}

void UnkStruct_027e0ce0_34::func_ov001_020bf378() {
    if (data_027e09a4->IsTrain()) {
        DELETE(this->mUnk_20);
    }

    gpPassengerManager->func_ov001_020bf90c();
    data_027e0d00->func_ov001_020bf568();
}

void UnkStruct_027e0ce0_34::func_ov001_020bf3bc() {
    if (this->mUnk_20 != NULL) {
        this->mUnk_20->func_ov026_020eb5b8();
    }
}

void UnkStruct_027e0ce0_34::func_ov001_020bf3cc() {
    if (this->mUnk_20 != NULL) {
        this->mUnk_20->func_ov026_020eb6a8();
    }

    if (this->mUnk_2C == 0x02 && data_027e09b8->HasAdventureFlag(AdventureFlag_ObtainedTrainCannon)) {
        this->func_ov024_020d3f8c();
    }
}

void UnkStruct_027e0ce0_34::func_ov001_020bf3fc() {
    bool isTowerSplit = data_027e09b8->HasAdventureFlag(AdventureFlag_WatchedSpiritTowerSplitCS);

    if (!data_027e09b8->HasAdventureFlag(AdventureFlag_MetAnjeanFirstTime) && isTowerSplit) {
        this->func_ov024_020d404c();
    }
}

ARM_BEGIN

void CargoManager::Destroy() {
    if (gpCargoManager != NULL) {
        delete gpCargoManager;
    }
}

void UnkStruct_027e0d00::Destroy() {
    if (data_027e0d00 != NULL) {
        delete data_027e0d00;
    }
}

void PassengerManager::Destroy() {
    if (gpPassengerManager != NULL) {
        delete gpPassengerManager;
    }
}

ARM_END
