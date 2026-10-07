#include "CommonFuncs.hpp"
#include "Save/SaveFile.hpp"
#include "Save/SaveManager.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "nitro/card.h"
#include "nitro/math.h"
#include "nitro/types.h"

void SaveManager::func_ov017_020c2b68(u16 param1) {
    CARD_LockBackup(gSaveManager.mCardId);

    u32 temp_r5 = gSaveManager.GetOffset();
    if (func_ov000_020a0a90(temp_r5 + 0, param1, sizeof(SaveInfoData)) &&
        func_ov000_020a0a90(temp_r5 + sizeof(SaveInfoData), param1, sizeof(SaveInfoData))) {
        func_ov000_020a0a90(temp_r5 + sizeof(SaveInfoData) * 2, param1 + sizeof(SaveInfoData), 0x100);
    }

    gSaveManager.mResultCode = CARD_GetResultCode();

    if (gSaveManager.mResultCode != CARD_RESULT_SUCCESS) {
        gSaveManager.mUnk_214 = 2;
    }

    CARD_UnlockBackup(gSaveManager.mCardId);
    gSaveManager.func_ov000_020a0b58();
}

void SaveManager::func_ov017_020c2c08(GameSaveSlot *param1) {
    SaveSlot::func_ov000_020a1028(&param1->mInfoData);

    MI_CpuClearFast(&param1->mTreasureData, sizeof(SaveTreasureData));
    for (int var_r7 = 0; var_r7 < ARRAY_LEN(param1->mTreasureData.unk_3C); var_r7++) {
        param1->mTreasureData.unk_3C[var_r7] = TreasureType_None;
    }

    //! TODO: clarify what is `SaveFile_00000_2600_Data` exactly
    MI_CpuClearFast(&param1->mUnk_2600, sizeof(SaveFile_00000_2600_Data));
    for (int var_r7_2 = 0; var_r7_2 < ARRAY_LEN(((SaveTreasureData *) &param1->mUnk_2600)->unk_3C); var_r7_2++) {
        ((SaveTreasureData *) &param1->mUnk_2600)->unk_3C[var_r7_2] = -1;
    }

    data_027e0cd8->func_ov000_02081ca0();
    data_027e0ce0->func_ov000_0208ba40(&param1->mInfoData.inventory.data);
    data_027e0ce0->mUnk_34->func_ov024_020d3c60(&param1->mInfoData.unk_0D8);

    EntranceInfo *pInfos         = &data_027e09a4->mUnk_14;
    param1->mInfoData.unk_000    = this->mUnk_000->unk_00;
    param1->mInfoData.unk_004    = 0;
    param1->mInfoData.sceneIndex = pInfos->sceneIndex;
    param1->mInfoData.roomIndex  = pInfos->roomIndex;
    param1->mInfoData.spawnIndex = pInfos->spawnIndex;

    if (data_027e0cd8->mUnk_16) {
        param1->mInfoData.unk_014 |= 0x01;
    } else {
        param1->mInfoData.unk_014 &= ~0x01;
    }

    VecFx32_Copy(&data_027e0cd8->mUnk_24, &param1->mInfoData.unk_008);

    param1->mInfoData.mUnk_02C = data_027e09a4->mUnk_28;
    UnkStruct_027e09a4_2C *ptr = &data_027e09a4->mUnk_40;
    VecFx32_Copy(&data_027e09a4->mUnk_40.mUnk_04, &param1->mInfoData.mUnk_01C);
    param1->mInfoData.mSceneIndex = ptr->mSceneIndex;
    param1->mInfoData.mUnk_02A    = ptr->mUnk_10;
    param1->mInfoData.mUnk_028    = ptr->mUnk_02;

    MI_CpuCopy32(data_027e09b8->mAdventureFlags, &param1->mInfoData.inventory.adventureFlags,
                 sizeof(data_027e09b8->mAdventureFlags));
    MI_CpuCopyFast(&this->mUnk_000->unk_004, &param1->mInfoData.unk_158, sizeof(SaveFile_00000_0000_Data_158));
    MI_CpuCopy32(&this->mUnk_000->unk_B30, &param1->mInfoData.unk_C84, sizeof(SaveFile_00000_0000_Data_C84));
    MI_CpuCopyFast(gpMiscAdvManager, &param1->mInfoData.miscAdvManager, sizeof(MiscAdvManager));
    MI_CpuCopyFast(&this->mUnk_000->unk_B40, &param1->mInfoData.unk_D24, sizeof(SaveFile_00000_0000_Data_D24));
    MI_CpuCopy32(&this->mUnk_000->unk_B68, &param1->mInfoData.unk_D8C, sizeof(SaveFile_00000_0000_Data_D8C));
    MI_CpuCopyFast(&this->mUnk_000->unk_B78, &param1->mInfoData.unk_D4C, sizeof(SaveFile_00000_0000_Data_D4C));
    MI_CpuCopyFast(&this->mUnk_21C, &param1->mInfoData.unk_D9C, sizeof(SaveFile_00000_0000_Data_D9C));

    for (int var_r8 = 0; var_r8 < ARRAY_LEN(this->mUnk_000->unk_030); var_r8++) {
        MI_CpuCopy32(&this->mUnk_000->unk_030[var_r8], &param1->mInfoData.unk_184[var_r8],
                     sizeof(SaveFile_00000_0000_Data_184));
    }

    for (int var_r4 = 0; var_r4 < ARRAY_LEN(this->mUnk_000->unk_330); var_r4++) {
        MI_CpuCopy32(&this->mUnk_000->unk_330[var_r4], &param1->mInfoData.unk_484[var_r4],
                     sizeof(SaveFile_00000_0000_Data_484));
    }

    param1->mInfoData.unk_DFE = func_020328c8(&this->mUnk_004, param1, offsetof(SaveInfoData, unk_DFE));

#if __MWERKS__
    param1->mTreasureData.unk_00 = gpTreasureManager->mUnk_00;
    param1->mTreasureData.unk_3C = gpTreasureManager->mUnk_3C;
#else
    MI_CpuCopy32(&gpTreasureManager->mUnk_00, &param1->mTreasureData.unk_00, sizeof(gpTreasureManager->mUnk_00));
    MI_CpuCopy32(&gpTreasureManager->mUnk_3C, &param1->mTreasureData.unk_3C, sizeof(gpTreasureManager->mUnk_3C));
#endif
    param1->mTreasureData.unk_5C        = gpTreasureManager->mUnk_5C;
    param1->mTreasureData.unk_5C.unk_22 = func_020328c8(
        &this->mUnk_004, &param1->mTreasureData, offsetof(SaveTreasureData, unk_5C) + offsetof(TreasureManager_5C, unk_22));

    MI_CpuCopyFast(&param1->mTreasureData, &param1->mUnk_2600, sizeof(param1->mTreasureData));
}

bool SaveManager::func_ov017_020c2f88(GameSaveSlot *param1) {
    if (this->mUnk_214 != 0) {
        return false;
    }

    this->func_ov017_020c2c08(param1);
    this->func_ov000_020a0b2c(SaveManager::func_ov017_020c2b68, param1);
    return true;
}

void SaveManager::func_ov017_020c2fc4(u16 param1) {
    CARD_LockBackup(gSaveManager.mCardId);

    u32 offset = gSaveManager.GetOffset();
    offset += (gSaveManager.mUnk_208 * 0x1000 + sizeof(SaveSlot));

    func_ov000_020a0a90(offset, param1, 0x1000);
    gSaveManager.mResultCode = CARD_GetResultCode();
    CARD_UnlockBackup(gSaveManager.mCardId);

    if (gSaveManager.mResultCode != CARD_RESULT_SUCCESS) {
        gSaveManager.mUnk_214 = 2;
    }

    gSaveManager.func_ov000_020a0b58();
}

bool SaveManager::func_ov017_020c3040(GameSaveSlot *param1, unk32 param2) {
    if (this->mUnk_206 < 0) {
        return false;
    }

    if (this->mUnk_214 != 0) {
        return false;
    }

    param1->mUnk_1D00.unk_0FE = func_020328c8(&this->mUnk_004, param1,
                                              offsetof(GameSaveSlot, mUnk_1D00) + offsetof(SaveFile_00000_1D00_Data, unk_0FE));
    this->mUnk_208            = param2;
    this->func_ov000_020a0b2c(SaveManager::func_ov017_020c2fc4, param1);
    return true;
}
