#include "Game/GameModeAdventure.hpp"
#include "Save/SaveManager.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b4eec.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"
#include "versions.h"

extern "C" {
unk32 func_0200e234();
}

THUMB_BEGIN

GameModeAdventure::~GameModeAdventure() {
    UnkStruct_027e09a4::Destroy();
    DELETE(gSaveManager.mUnk_000);
    func_0200e234();
    data_ov000_020b504c.func_ov001_020be6f4();
    data_ov000_020b50c0.func_ov001_020bd87c();
}

void GameModeAdventure::vfunc_08() {
    this->GameModeBase::vfunc_08();

    data_ov000_020b504c.func_ov001_020be510();
    data_ov000_020b50c0.func_ov001_020bd854();

    GameSaveSlot *pSaveFile = data_ov000_020b4eec.func_ov001_020be12c();

#if IS_JP
    SaveInfoData *pSaveInfoData = &pSaveFile->mInfoData;

    if (pSaveInfoData->sceneIndex == SceneIndex_f_ajito2) {
        pSaveInfoData->sceneIndex = SceneIndex_f_ajito;
        pSaveInfoData->roomIndex  = 0;
        pSaveInfoData->spawnIndex = 0;
        UNSET_FLAG(pSaveInfoData->inventory.adventureFlags, AdventureFlag_WadatsumiMinigameSequence);
    }
#endif

    data_027e09a4->func_ov000_020705e8(pSaveFile, 0);
}

THUMB_END

void GameModeAdventure::vfunc_0C() {
    unk32 value = data_0204a110.mUnk_DF8;
    data_027e09a4->func_ov000_0207087c(value);
    data_ov024_020d8660->func_ov024_020c4b4c(value);
}

void GameModeAdventure::vfunc_10() {
    data_027e09a4->func_ov000_020708d8(data_0204a110.mUnk_DF8);
}

void GameModeAdventure::vfunc_14() {
    data_027e09a4->func_ov000_02070834(&data_0204a110.mUnk_DF2);
}

void GameModeAdventure::vfunc_18() {
    unk32 value = data_0204a110.mUnk_DF8;
    data_027e09a4->func_ov000_02070938(value);

    if (data_ov024_020d8660->mUnk_00 != NULL) {
        data_ov024_020d8660->mUnk_00->vfunc_1C(value);
    }
}

void GameModeAdventure::vfunc_1C() {
    data_027e09a4->func_ov000_02070a4c(data_0204a110.mUnk_DF8);
}

void GameModeAdventure::vfunc_20() {
    UnkStruct_027e09a4 *temp = data_027e09a4;
    unk8 *ptr                = &data_0204a110.mUnk_DF2;

    if (data_0204a088->mUnk_120 & 1) {
        temp->func_ov017_020bb994(ptr);
    }

    if (data_ov024_020d8660->mUnk_00 != NULL) {
        data_ov024_020d8660->mUnk_00->vfunc_18(ptr);
    }
}

void UnkStruct_027e09a4::Destroy() {
    delete data_027e09a4;
}
