#include "Game/Game.hpp"
#include "Save/SaveManager.hpp"
#include "Unknown/UnkStruct_02049b80.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"

extern "C" unk32 func_020328c8(void *, void *, size_t);

void SaveManager::func_ov001_020ba670() {
    this->mUnk_000 = new(HeapIndex_1) SaveManager_00(0);

    GameSaveSlot *pGameSlot = gGame.mpSaveSlot;
    this->mUnk_000->unk_00  = pGameSlot->mInfoData.unk_000;
    MI_CpuCopyFast(&pGameSlot->mInfoData.unk_158, &this->mUnk_000->unk_004, sizeof(SaveFile_00000_0000_Data_158));

    for (int i = 0; i < ARRAY_LEN(this->mUnk_000->unk_030); i++) {
        MI_CpuCopy32(&pGameSlot->mInfoData.unk_184[i], &this->mUnk_000->unk_030[i], sizeof(SaveFile_00000_0000_Data_184));
    }

    for (int i = 0; i < ARRAY_LEN(this->mUnk_000->unk_330); i++) {
        MI_CpuCopy32(&pGameSlot->mInfoData.unk_484[i], &this->mUnk_000->unk_330[i], sizeof(SaveFile_00000_0000_Data_484));
    }

    MI_CpuCopy32(&pGameSlot->mInfoData.unk_C84, &this->mUnk_000->unk_B30, sizeof(SaveFile_00000_0000_Data_C84));
    MI_CpuCopyFast(&pGameSlot->mInfoData.unk_D24, &this->mUnk_000->unk_B40, sizeof(SaveFile_00000_0000_Data_D24));
    MI_CpuCopy32(&pGameSlot->mInfoData.unk_D8C, &this->mUnk_000->unk_B68, sizeof(SaveFile_00000_0000_Data_D8C));
    MI_CpuCopyFast(&pGameSlot->mInfoData.unk_D4C, &this->mUnk_000->unk_B78, sizeof(SaveFile_00000_0000_Data_D4C));
    MI_CpuCopyFast(&pGameSlot->mInfoData.unk_D9C, &this->mUnk_21C, sizeof(SaveFile_00000_0000_Data_D9C));
}

void SaveManager::func_ov001_020ba7a8() {
    data_ov000_020b50c0.func_ov000_0206a6a4(gGame.mpSaveSlot->mUnk_2600.unk_01);
}

void SaveManager::func_ov001_020ba7c8(u16 saveSlotIndex) {
    SaveSlot *pMgrSlot      = &this->mpSaveFile->mSlots[saveSlotIndex];
    GameSaveSlot *pGameSlot = gGame.mpSaveSlot;

    MI_CpuCopyFast(pMgrSlot->mInfoData, &pGameSlot->mInfoData, sizeof(SaveInfoData));
    MI_CpuCopyFast(pMgrSlot->mTreasureData, &pGameSlot->mTreasureData, sizeof(SaveTreasureData));
    MI_CpuCopyFast(pMgrSlot->mUnk_2600, &pGameSlot->mUnk_2600, sizeof(SaveFile_00000_2600_Data));
    MI_CpuCopyFast(pMgrSlot->mUnk_1D00, &pGameSlot->mUnk_1D00, sizeof(SaveFile_00000_1D00_Data));

    data_02049b80.func_02013f80(0x00);
    DELETE(this->mpSaveFile);

    if (this->mUnk_214 == 0) {
        this->mUnk_206 = saveSlotIndex;
    }
}

// https://decomp.me/scratch/PykmO
void SaveManager::func_ov001_020ba858(void) {
    if (this->mUnk_244 != NULL) {
        return;
    }

    this->mUnk_244 = new(HeapIndex_1) SaveManager_244[2];
    MI_CpuClearFast(&this->mUnk_244[0], sizeof(this->mUnk_244[0]));
    MI_CpuClearFast(&this->mUnk_244[1], sizeof(this->mUnk_244[1]));

    if (this->mUnk_206 >= 0 && this->mUnk_214 == 0) {
        CARD_LockBackup(this->mCardId);
        CARD_ReadFlashAsync(this->mUnk_206 * 0x7A700 + offsetof(SaveSlot, mUnk_2500), this->mUnk_244,
                            sizeof(SaveManager_244) * 2, NULL, NULL);
        this->mResultCode = CARD_GetResultCode();
        CARD_UnlockBackup(this->mCardId);

        if (this->mResultCode != CARD_RESULT_SUCCESS) {
            this->mUnk_214 = 1;
        }

        unk32 uVar3 = func_020328c8(&this->mUnk_004, &this->mUnk_244[0], sizeof(SaveManager_244) - 2);
        unk32 uVar4 = func_020328c8(&this->mUnk_004, &this->mUnk_244[1], sizeof(SaveManager_244) - 2);

        bool unk_7E_0 = uVar3 == this->mUnk_244[0].mUnk_7E;
        bool unk_7E_1 = uVar4 == this->mUnk_244[1].mUnk_7E;

        if (!unk_7E_0 && !unk_7E_1) {
            MI_CpuClearFast(&this->mUnk_244[0], sizeof(SaveManager_244));
            MI_CpuClearFast(&this->mUnk_244[1], sizeof(SaveManager_244));
            return;
        }

        if (!unk_7E_0) {
            MI_CpuCopyFast(&this->mUnk_244[1], &this->mUnk_244[0], sizeof(SaveManager_244));
            return;
        }

        if (!unk_7E_1) {
            MI_CpuCopyFast(&this->mUnk_244[0], &this->mUnk_244[1], sizeof(SaveManager_244));
            return;
        }

        if (uVar3 != uVar4) {
            MI_CpuCopyFast(&this->mUnk_244[1], &this->mUnk_244[0], sizeof(SaveManager_244));
            return;
        }
    }
}

SaveManager_244::SaveManager_244() {}
