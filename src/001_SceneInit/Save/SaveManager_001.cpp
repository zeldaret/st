#include "Game/Game.hpp"
#include "Save/SaveManager.hpp"

THUMB_BEGIN

void SaveManager::func_ov001_020ba670() {
    this->mUnk_000 = new(HeapIndex_1) SaveManager_00(0);

    SaveSlot *pSaveSlot    = gGame.mpSaveSlot;
    this->mUnk_000->unk_00 = pSaveSlot->mInfoData[0].unk_000;
    MI_CpuCopyFast(&pSaveSlot->mInfoData[0].unk_158, &this->mUnk_000->unk_004, sizeof(SaveFile_00000_0000_Data_158));

    for (int i = 0; i < ARRAY_LEN(this->mUnk_000->unk_030); i++) {
        MI_CpuCopy32(&pSaveSlot->mInfoData[0].unk_184[i], &this->mUnk_000->unk_030[i], sizeof(SaveFile_00000_0000_Data_184));
    }

    for (int i = 0; i < ARRAY_LEN(this->mUnk_000->unk_330); i++) {
        MI_CpuCopy32(&pSaveSlot->mInfoData[0].unk_484[i], &this->mUnk_000->unk_330[i], sizeof(SaveFile_00000_0000_Data_484));
    }

    MI_CpuCopy32(&pSaveSlot->mInfoData[0].unk_C84, &this->mUnk_000->unk_B30, sizeof(SaveFile_00000_0000_Data_C84));
    MI_CpuCopyFast(&pSaveSlot->mInfoData[0].unk_D24, &this->mUnk_000->unk_B40, sizeof(SaveFile_00000_0000_Data_D24));
    MI_CpuCopy32(&pSaveSlot->mInfoData[0].unk_D8C, &this->mUnk_000->unk_B68, sizeof(SaveFile_00000_0000_Data_D8C));
    MI_CpuCopyFast(&pSaveSlot->mInfoData[0].unk_D4C, &this->mUnk_000->unk_B78, sizeof(SaveFile_00000_0000_Data_D4C));
    MI_CpuCopyFast(&pSaveSlot->mInfoData[0].unk_D9C, &this->mUnk_21C, sizeof(SaveFile_00000_0000_Data_D9C));
}

THUMB_END
