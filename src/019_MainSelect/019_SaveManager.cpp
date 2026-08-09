#include "Save/SaveManager.hpp"

#include "Unknown/UnkStruct_02049b80.hpp"
#include "Unknown/UnkStruct_02049bd4.hpp"

#include <nitro/card.h>
#include <wstring.h>

extern "C" {
unk32 func_020328c8(void *, void *, size_t);
bool func_ov000_020a0a90(size_t param1, void *param2, size_t param3);
void func_ov000_020a0b58();
};

extern const size_t data_ov019_020d1bd4[];
const size_t data_ov019_020d1bd4[] = {
    sizeof(SaveInfoData),
    sizeof(SaveTreasureData),
    sizeof(SaveFile_00000_1D00_Data),
    sizeof(SaveFile_00000_2500_Data),
    sizeof(SaveFile_00000_2600_Data),
};

extern const unk32 data_ov019_020d1be8[];
const unk32 data_ov019_020d1be8[] = {
    offsetof(SaveSlot, mInfoData), offsetof(SaveSlot, mTreasureData), offsetof(SaveSlot, mUnk_1D00),
    offsetof(SaveSlot, mUnk_2500), offsetof(SaveSlot, mUnk_2600),
};

void SaveManager::func_ov019_020d086c(u16 param1) {
    CARD_LockBackup(gSaveManager.mCardId);

    STATIC_PTMFCALLBACK(PTMF<SaveFile>, gSaveManager.mUnk_23C, gSaveManager.mpSaveFile);
    gSaveManager.mResultCode = CARD_GetResultCode();
    CARD_UnlockBackup(gSaveManager.mCardId);

    if (gSaveManager.mResultCode != CARD_RESULT_SUCCESS) {
        gSaveManager.mUnk_214 = gSaveManager.mUnk_210;
    }

    if (gSaveManager.mUnk_210 != 2) {
        gSaveManager.mUnk_210 = 0;
    } else {
        func_ov000_020a0b58();
    }
}

PTMF<SaveFile>::PTMFCallback data_ov019_020d24a8 = SaveFile::func_ov019_020d1434;
PTMF<SaveFile>::PTMFCallback data_ov019_020d24a0 = SaveFile::func_ov019_020d17e0;
PTMF<SaveFile>::PTMFCallback data_ov019_020d24b0[2] = { SaveFile::func_ov019_020d1538 };

void SaveManager::func_ov019_020d08fc(unk32 param1, PTMF<SaveFile>::PTMFCallback param2) {
    this->mUnk_23C = param2;

    if (param1 == 2) {
        this->func_ov000_020a0b2c(SaveManager::func_ov019_020d086c, 0);
    } else {
        this->mUnk_210 = 1;
        data_02049b80.func_02013ecc(0, SaveManager::func_ov019_020d086c, 0);
    }
}

bool SaveManager::func_ov019_020d0964() {
    this->mpSaveFile = new(HeapIndex_1) SaveFile();
    data_02049b80.func_02013ee8(0, 1);

    if (this->mUnk_20A == 0) {
        this->func_ov019_020d08fc(1, data_ov019_020d24a0);
        return true;
    }

    return false;
}

void SaveManager::func_ov019_020d09dc(u16 saveSlotIndex) {
    this->mpSaveFile->mSaveSlotIndex = saveSlotIndex;
    this->func_ov019_020d08fc(2, data_ov019_020d24a8);
}

void SaveManager::func_ov019_020d0a04(u16 saveSlotIndex) {
    this->mpSaveFile->mSaveSlotIndex = saveSlotIndex;
    this->func_ov019_020d08fc(2, data_ov019_020d24b0[0]);
}

void SaveManager::func_ov019_020d0a2c(u16 saveSlotIndex) {
    data_02049bd4.mUnk_04++;
    gSaveManager.mpSaveFile->mSaveSlotIndex = saveSlotIndex;
    CARD_LockBackup(gSaveManager.mCardId);
    gSaveManager.mUnk_210 = 1;
    gSaveManager.mpSaveFile->func_ov019_020d1634();
    gSaveManager.mResultCode = CARD_GetResultCode();

    if (gSaveManager.mResultCode != CARD_RESULT_SUCCESS) {
        gSaveManager.mUnk_214 = gSaveManager.mUnk_210;
        return;
    }

    gSaveManager.mUnk_210 = 2;
    gSaveManager.mpSaveFile->func_ov019_020d16d0();
    gSaveManager.mResultCode = CARD_GetResultCode();

    if (gSaveManager.mResultCode != CARD_RESULT_SUCCESS) {
        gSaveManager.mUnk_214 = gSaveManager.mUnk_210;
    }

    CARD_UnlockBackup(gSaveManager.mCardId);
    gSaveManager.mUnk_210 = 0;
    data_02049bd4.mUnk_04--;
}

void SaveManager::func_ov019_020d0ae0(unk32 param1) {
    data_02049b80.func_02013ecc(0, SaveManager::func_ov019_020d0a2c, param1);
}

SaveFile::SaveFile() :
    mUnk_04E08(0),
    mSaveSlotIndex(0) {}

#pragma optimization_level 2

unk16 SaveFile::func_ov019_020d0c4c(unk32 param1, unk32 param2) {
    s16 i = 0;

    do {
        if ((this->mUnk_04E00[i][param2].unk_00 & (1 << param1)) != 0) {
            return i;
        }

        i++;
    } while (i < MAX_SAVE_SLOTS);

    return -1;
}

#pragma optimization_level reset

unk16 SaveFile::func_ov019_020d0c90(unk32 param1) {
    unk16 var_r7;
    unk16 var_r8;
    bool isParam1;

    // that's the best use of a switch I have ever seen
    switch (param1) {
        case 0:
            isParam1 = false;
            break;
        default:
            isParam1 = true;
            break;
    }

    var_r8 = this->func_ov019_020d0c4c(0, isParam1);
    if (var_r8 >= 0 && param1 == 2 && var_r8 != this->func_ov019_020d0c4c(0, 0)) {
        var_r8 = -1;
    }

    var_r7 = this->func_ov019_020d0c4c(1, isParam1);
    if (var_r7 >= 0 && param1 == 2 && var_r7 != this->func_ov019_020d0c4c(1, 0)) {
        var_r7 = -1;
    }

    if (var_r8 >= 0) {
        if (var_r7 >= 0) {
            if (var_r8 >= var_r7) {
                var_r8 = var_r7;
            }

            return var_r8;
        }

        return var_r8;
    }

    return var_r7;
}

struct stack_struct {
    unk32 mUnk_00;
    unk16 mUnk_04;
    u16 mUnk_06;
    unk32 mUnk_08;
    unk32 mUnk_0C;
    unk32 mUnk_10;
    unk32 mUnk_14;
    unk32 mUnk_18;
    unk32 mUnk_1C;
};

void SaveFile::func_ov019_020d0d50() {
    stack_struct stack[MAX_SAVE_SLOTS];

    for (int i = 0; i < 2; i++) {
        this->mSlots[i].func_ov000_020a1124();
        this->func_ov019_020d0e18(i);
    }

    stack[0].mUnk_00 = 0x0C1D2E3F;
    stack[0].mUnk_1C = 0xF4E5D6C7;
    stack[0].mUnk_04 = 0x1A;
    MI_CpuFill16(0, &stack[0].mUnk_06, 0x16);

    stack[1].mUnk_00 = 0x0C1D2E3F;
    stack[1].mUnk_1C = 0xF4E5D6C7;
    stack[1].mUnk_04 = 0x1A;
    MI_CpuFill16(0, &stack[1].mUnk_06, 0x16);

    CARD_WriteAndVerifyFlashAsync((u32) stack, (void *) (SAVE_DATA_SIZE * 2), sizeof(stack_struct) * 2, NULL, NULL);
}

void SaveFile::func_ov019_020d0e18(unk32 param1) {
    size_t offset    = SAVE_SLOT_OFFSET(param1);
    SaveSlot *puVar3 = &this->mSlots[param1];

    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mInfoData), &puVar3->mInfoData, sizeof(puVar3->mInfoData))) {
        return;
    }

    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mTreasureData), &puVar3->mTreasureData,
                             sizeof(puVar3->mTreasureData))) {
        return;
    }

    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_1D00), &puVar3->mUnk_1D00, sizeof(puVar3->mUnk_1D00))) {
        return;
    }

    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_2500), &puVar3->mUnk_2500, sizeof(puVar3->mUnk_2500))) {
        return;
    }

    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_2600), &puVar3->mUnk_2600, sizeof(puVar3->mUnk_2600))) {
        return;
    }
}

void SaveFile::func_ov019_020d0ea8() {
    bool infoBad[MAX_SAVE_SLOTS][COUNT_DATA];
    bool treasureBad[MAX_SAVE_SLOTS][COUNT_DATA];

    infoBad[0][0]     = (this->mUnk_04E00[0][0].unk_00 & 1) != 0;
    infoBad[0][1]     = (this->mUnk_04E00[0][1].unk_00 & 1) != 0;
    infoBad[1][0]     = (this->mUnk_04E00[1][0].unk_00 & 1) != 0;
    infoBad[1][1]     = (this->mUnk_04E00[1][1].unk_00 & 1) != 0;
    treasureBad[0][0] = (this->mUnk_04E00[0][0].unk_00 & 2) != 0;
    treasureBad[0][1] = (this->mUnk_04E00[0][1].unk_00 & 2) != 0;
    treasureBad[1][0] = (this->mUnk_04E00[1][0].unk_00 & 2) != 0;
    treasureBad[1][1] = (this->mUnk_04E00[1][1].unk_00 & 2) != 0;

    u32 slotIndex = (!infoBad[0][0] && !infoBad[0][1] && !treasureBad[0][0] && !treasureBad[0][1]) ? 1 : 0;

    if ((infoBad[slotIndex][0] && infoBad[slotIndex][1]) ||
        (treasureBad[slotIndex][0] && treasureBad[slotIndex][1])) {
        this->mSlots[slotIndex].func_ov000_020a1124();
    } else {

        if (infoBad[slotIndex][0] || treasureBad[slotIndex][0]) {
            MI_CpuCopyFast(&this->mSlots[slotIndex].mInfoData[1], &this->mSlots[slotIndex].mInfoData[0], sizeof(SaveInfoData));
            MI_CpuCopyFast(&this->mSlots[slotIndex].mTreasureData[1], &this->mSlots[slotIndex].mTreasureData[0], sizeof(SaveTreasureData));
            MI_CpuCopyFast(&this->mSlots[slotIndex].mUnk_1D00[1], &this->mSlots[slotIndex].mUnk_1D00[0], sizeof(SaveFile_00000_1D00_Data));
            MI_CpuCopyFast(&this->mSlots[slotIndex].mUnk_2500[1], &this->mSlots[slotIndex].mUnk_2500[0], sizeof(SaveFile_00000_2500_Data));
            MI_CpuCopyFast(&this->mSlots[slotIndex].mUnk_2600[1], &this->mSlots[slotIndex].mUnk_2600[0], sizeof(SaveFile_00000_2600_Data));
        } else {
            MI_CpuCopyFast(&this->mSlots[slotIndex].mInfoData[0], &this->mSlots[slotIndex].mInfoData[1], sizeof(SaveInfoData));
            MI_CpuCopyFast(&this->mSlots[slotIndex].mTreasureData[0], &this->mSlots[slotIndex].mTreasureData[1], sizeof(SaveTreasureData));
            MI_CpuCopyFast(&this->mSlots[slotIndex].mUnk_1D00[0], &this->mSlots[slotIndex].mUnk_1D00[1], sizeof(SaveFile_00000_1D00_Data));
            MI_CpuCopyFast(&this->mSlots[slotIndex].mUnk_2500[0], &this->mSlots[slotIndex].mUnk_2500[1], sizeof(SaveFile_00000_2500_Data));
            MI_CpuCopyFast(&this->mSlots[slotIndex].mUnk_2600[0], &this->mSlots[slotIndex].mUnk_2600[1], sizeof(SaveFile_00000_2600_Data));
        }
    }

    this->func_ov019_020d0e18(slotIndex);

    for (int i = 0; i < COUNT_DATA; i++) {
        this->mUnk_04E00[slotIndex][i].unk_00 &= ~1;
        this->mUnk_04E00[slotIndex][i].unk_00 &= ~2;
        this->mUnk_04E00[slotIndex][i].unk_00 &= ~4;
        this->mUnk_04E00[slotIndex][i].unk_00 &= ~8;
        this->mUnk_04E00[slotIndex][i].unk_00 &= ~0x10;
    }
}

void SaveFile::func_ov019_020d1108() {
    bool bad[MAX_SAVE_SLOTS][COUNT_DATA];

    bad[0][0] = (this->mUnk_04E00[0][0].unk_00 & 4) != 0;
    bad[0][1] = (this->mUnk_04E00[0][1].unk_00 & 4) != 0;
    bad[1][0] = (this->mUnk_04E00[1][0].unk_00 & 4) != 0;
    bad[1][1] = (this->mUnk_04E00[1][1].unk_00 & 4) != 0;

    u32 slotIndex = (!bad[0][0] && !bad[0][1]) ? 1 : 0;
    size_t base = SAVE_SLOT_OFFSET(slotIndex);

    if (bad[slotIndex][0] && bad[slotIndex][1]) {

        SaveSlot::func_ov000_020a12a0(&this->mSlots[slotIndex].mUnk_1D00[0]);
        this->mSlots[slotIndex].mUnk_1D00[0].unk_3FE = func_020328c8(&gSaveManager.mUnk_004, &this->mSlots[slotIndex].mUnk_1D00[0],
                                                   sizeof(SaveFile_00000_1D00_Data) - sizeof(u16));
        MI_CpuCopyFast(&this->mSlots[slotIndex].mUnk_1D00[0], &this->mSlots[slotIndex].mUnk_1D00[1], sizeof(SaveFile_00000_1D00_Data));
    }

    for (int i = 0; i < COUNT_DATA; i++) {
        if (bad[slotIndex][i]) {
            if (!func_ov000_020a0a90(base + (i * sizeof(SaveFile_00000_1D00_Data) + offsetof(SaveSlot, mUnk_1D00)),
                                     &this->mSlots[slotIndex].mUnk_1D00[i],
                                     sizeof(SaveFile_00000_1D00_Data))) {
                return;
            }

            this->mUnk_04E00[slotIndex][i].unk_00 &= ~4;
        }
    }
}

void SaveFile::func_ov019_020d127c() {
    bool bad[MAX_SAVE_SLOTS][COUNT_DATA];

    bad[0][0] = (this->mUnk_04E00[0][0].unk_00 & 0x10) != 0;
    bad[0][1] = (this->mUnk_04E00[0][1].unk_00 & 0x10) != 0;
    bad[1][0] = (this->mUnk_04E00[1][0].unk_00 & 0x10) != 0;
    bad[1][1] = (this->mUnk_04E00[1][1].unk_00 & 0x10) != 0;

    u32 slotIndex = (!bad[0][0] && !bad[0][1]) ? 1 : 0;
    size_t offset = slotIndex * SAVE_DATA_SIZE;

    if (bad[slotIndex][0] && bad[slotIndex][1]) {

        SaveSlot::func_ov000_020a10f4(&this->mSlots[slotIndex].mUnk_2600[0]);
        this->mSlots[slotIndex].mUnk_2600[0].unk_7E = func_020328c8(&gSaveManager.mUnk_004, &this->mSlots[slotIndex].mUnk_2600[0],
                                                  sizeof(SaveFile_00000_2600_Data) - sizeof(u16));
        MI_CpuCopyFast(&this->mSlots[slotIndex].mUnk_2600[0], &this->mSlots[slotIndex].mUnk_2600[1], sizeof(SaveFile_00000_2600_Data));
    }

    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_2600), &this->mSlots[slotIndex].mUnk_2600,
                             sizeof(this->mSlots[slotIndex].mUnk_2600))) {
        return;
    }

    this->mUnk_04E00[slotIndex][0].unk_00 &= ~0x10;
    this->mUnk_04E00[slotIndex][1].unk_00 &= ~0x10;
}

void SaveFile::func_ov019_020d13b8() {
    u16 saveSlotIndex = (unsigned long)this->mSaveSlotIndex;

    SaveSlot::func_ov019_020d1400(this->mSlots[this->mSaveSlotIndex].mUnk_2600);

    func_ov000_020a0a90(saveSlotIndex * SAVE_DATA_SIZE + offsetof(SaveSlot, mUnk_2600),
                        this->mSlots[this->mSaveSlotIndex].mUnk_2600, sizeof(this->mSlots->mUnk_2600));
}

void SaveSlot::func_ov019_020d1400(SaveFile_00000_2600_Data *param1) {
    param1->unk_7E = func_020328c8(&gSaveManager.mUnk_004, param1, sizeof(SaveFile_00000_2600_Data) - sizeof(u16));
    MI_CpuCopyFast(param1, (u8 *) param1 + sizeof(SaveFile_00000_2600_Data), sizeof(SaveFile_00000_2600_Data));
}

void SaveFile::func_ov019_020d1434() {
    size_t offset = SAVE_SLOT_OFFSET(this->mSaveSlotIndex);

    SaveSlot::func_ov019_020d14fc(this->mSlots[this->mSaveSlotIndex].mInfoData);
    if (!func_ov000_020a0a90(offset, &this->mSlots[this->mSaveSlotIndex].mInfoData,
                             sizeof(this->mSlots[this->mSaveSlotIndex].mInfoData))) {
        return;
    }

    SaveSlot::func_ov019_020d14c0(this->mSlots[this->mSaveSlotIndex].mUnk_1D00);
    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_1D00), &this->mSlots[this->mSaveSlotIndex].mUnk_1D00,
                             sizeof(this->mSlots[this->mSaveSlotIndex].mUnk_1D00))) {
        return;
    }

    this->func_ov019_020d13b8();
}

void SaveSlot::func_ov019_020d14c0(SaveFile_00000_1D00_Data *param1) {
    param1->unk_3FE = func_020328c8(&gSaveManager.mUnk_004, param1, offsetof(SaveFile_00000_1D00_Data, unk_3FE));
    MI_CpuCopyFast(param1, (u8 *) param1 + sizeof(SaveFile_00000_1D00_Data), sizeof(SaveFile_00000_1D00_Data));
}

void SaveSlot::func_ov019_020d14fc(SaveInfoData *param1) {
    param1->unk_DFE = func_020328c8(&gSaveManager.mUnk_004, param1, offsetof(SaveInfoData, unk_DFE));
    MI_CpuCopyFast(param1, (u8 *) param1 + sizeof(SaveInfoData), sizeof(SaveInfoData));
}

//! TODO: weird sizeof
void SaveFile::func_ov019_020d1538() {
    size_t offset;

    offset = this->mSaveSlotIndex * SAVE_DATA_SIZE;

    SaveSlot::func_ov019_020d1600(this->mSlots[this->mSaveSlotIndex].mTreasureData);
    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mTreasureData), &this->mSlots[this->mSaveSlotIndex].mTreasureData,
                             0x1C00)) {
        return;
    }

    SaveSlot::func_ov019_020d15cc(this->mSlots[this->mSaveSlotIndex].mUnk_2500);
    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_2500), &this->mSlots[this->mSaveSlotIndex].mUnk_2500, 0x800)) {
        return;
    }

    this->func_ov019_020d1434();
}

void SaveSlot::func_ov019_020d15cc(SaveFile_00000_2500_Data *param1) {
    param1->unk_7E = func_020328c8(&gSaveManager.mUnk_004, param1, offsetof(SaveFile_00000_2500_Data, unk_7E));
    MI_CpuCopyFast(param1, (u8 *) param1 + sizeof(SaveFile_00000_2500_Data), sizeof(SaveFile_00000_2500_Data));
}

void SaveSlot::func_ov019_020d1600(SaveTreasureData *param1) {
    param1->unk_7E = func_020328c8(&gSaveManager.mUnk_004, param1, offsetof(SaveTreasureData, unk_7E));
    MI_CpuCopyFast(param1, (u8 *) param1 + sizeof(SaveTreasureData), sizeof(SaveTreasureData));
}

void SaveFile::func_ov019_020d1634() {
    SaveSlot *pSlot = &this->mSlots[this->mSaveSlotIndex];
    size_t offset   = SAVE_SLOT_OFFSET(this->mSaveSlotIndex);

    for (int i = 0; i < NUM_UNK_BLOCKS; i++) {
        if (GET_FLAG(pSlot->mInfoData[0].unk_C84.unk_00, i)) {
            u32 dest = (i * SIZE_UNK_BLOCK) + sizeof(SaveSlot);
            CARD_ReadFlashAsync(offset + dest, &this->mUnk_04E0C[i * SIZE_UNK_BLOCK], 0x1000, 0, 0);
        }
    }
}

void SaveFile::func_ov019_020d16d0() {
    void *pTreasure;
    SaveSlot *pSub3;
    void *pNext1D00;
    SaveSlot *pCur;
    u16 saveSlotIndex = this->mSaveSlotIndex == 0 ? 1 : 0;
    SaveSlot *pSub2;

    pCur  = &this->mSlots[this->mSaveSlotIndex];
    pSub2 = pCur;
    pSub3 = &this->mSlots[saveSlotIndex];

    MI_CpuCopyFast(&pSub2->mInfoData, &pSub3->mInfoData, sizeof(pSub2->mInfoData));
    pTreasure = &pSub3->mTreasureData;
    MI_CpuCopyFast(&pSub2->mTreasureData, pTreasure, sizeof(pSub2->mTreasureData));
    MI_CpuCopyFast(&pSub2->mUnk_2600, &pSub3->mUnk_2600, sizeof(pSub2->mUnk_2600));

    pNext1D00 = &pSub3->mUnk_1D00[1];
    SaveSlot::func_ov000_020a12a0(pSub3->mUnk_1D00);
    MI_CpuCopyFast(&pSub3->mUnk_1D00[0], pNext1D00, sizeof(SaveFile_00000_1D00_Data));

    MI_CpuClearFast(&pSub3->mUnk_2500, sizeof(SaveFile_00000_2500_Data));
    MI_CpuCopyFast(&pSub3->mUnk_2500[0], &pSub3->mUnk_2500[1], sizeof(SaveFile_00000_2500_Data));

    this->mSaveSlotIndex = saveSlotIndex;
    this->func_ov019_020d1538();

    for (int i = 0; i < NUM_UNK_BLOCKS; i++) {
        if (GET_FLAG(pSub2->mInfoData[0].unk_C84.unk_00, i)) {
            func_ov000_020a0a90(SAVE_SLOT_OFFSET(saveSlotIndex) + (i * SIZE_UNK_BLOCK + sizeof(SaveSlot)),
                                &this->mUnk_04E0C[i * SIZE_UNK_BLOCK], SIZE_UNK_BLOCK);
        }
    }
}

void SaveFile::func_ov019_020d17e0() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->func_ov019_020d1808(i);
    }
}

struct stack_struct2 {
    u16 mUnk_00;
    u16 mUnk_02;
    bool mUnk_04;
};

void SaveFile::func_ov019_020d1808(unk32 param1) {
    SaveSlot *pSub2 = &this->mSlots[param1];
    u16 sums[5][2];
    bool matches[5][2];

    if (CARD_ReadFlashAsync(SAVE_SLOT_OFFSET(param1), pSub2, sizeof(SaveSlot), NULL, NULL) == 0) {
        return;
    }

    for (int i = 0; i < COUNT_DATA; i++) {
        sums[0][i] = func_020328c8(&gSaveManager.mUnk_004, &pSub2->mInfoData[i], sizeof(SaveInfoData) - sizeof(u16));
        matches[0][i] = pSub2->mInfoData[i].unk_DFE == sums[0][i];

        sums[1][i] =
            func_020328c8(&gSaveManager.mUnk_004, &pSub2->mTreasureData[i], sizeof(SaveTreasureData) - sizeof(u16));
        matches[1][i] = pSub2->mTreasureData[i].unk_7E == sums[1][i];

        sums[2][i] = func_020328c8(&gSaveManager.mUnk_004, &pSub2->mUnk_1D00[i],
                                    sizeof(SaveFile_00000_1D00_Data) - sizeof(u16));
        matches[2][i] = pSub2->mUnk_1D00[i].unk_3FE == sums[2][i];

        sums[3][i] = func_020328c8(&gSaveManager.mUnk_004, &pSub2->mUnk_2500[i],
                                    sizeof(SaveFile_00000_2500_Data) - sizeof(u16));
        matches[3][i] = pSub2->mUnk_2500[i].unk_7E == sums[3][i];

        sums[4][i] = func_020328c8(&gSaveManager.mUnk_004, &pSub2->mUnk_2600[i],
                                    sizeof(SaveFile_00000_2600_Data) - sizeof(u16));
        matches[4][i] = pSub2->mUnk_2600[i].unk_7E == sums[4][i];
    }

    for (u32 i = 0; i < 5; i++) {
        size_t len = data_ov019_020d1bd4[i];
        u8 *puVar5 = &((u8 *) pSub2)[data_ov019_020d1be8[i]];

        if (matches[i][0]) {
            if (!matches[i][1] || sums[i][0] != sums[i][1]) {
                MI_CpuCopyFast(puVar5, puVar5 + len, len);
                this->mUnk_04E00[param1][1].unk_00 |= 1 << i;
            }
        } else {
            this->mUnk_04E00[param1][0].unk_00 |= 1 << i;

            if (!matches[i][1]) {
                this->mUnk_04E00[param1][1].unk_00 |= 1 << i;
            } else {
                MI_CpuCopyFast(puVar5 + len, puVar5, len);
            }
        }
    }
}

void SaveFile::func_ov019_020d1aac(unk32 param1, const wchar_t *param2) {
    wchar_t awStack_28[LENGTH_PLAYER_NAME + 1];

    awStack_28[8] = L'\0';
    wcsncpy(awStack_28, param2, LENGTH_PLAYER_NAME);
    MI_CpuCopy16((u16 *) awStack_28, (u16 *) this->mSlots[param1].mInfoData[0].unk_D9C.mPlayerName,
                 sizeof(wchar_t) * (LENGTH_PLAYER_NAME + 1));
    MI_CpuCopy16((u16 *) awStack_28, (u16 *) this->mSlots[param1].mUnk_1D00[0].unk_3C4,
                 sizeof(wchar_t) * (LENGTH_PLAYER_NAME + 1));
}

void SaveFile::func_ov019_020d1b14(unk32 param1) {
    SaveSlot *pSVar3 = &this->mSlots[param1];

    SaveSlot::func_ov000_020a1028(this->mSlots[param1].mInfoData);
    SaveSlot::func_ov019_020d14fc(this->mSlots[param1].mInfoData);

    _MI_CpuFill(0, this->mSlots[param1].mTreasureData, sizeof(SaveTreasureData));

    SaveSlot(*pSlots)[MAX_SAVE_SLOTS] = &this->mSlots;
    SaveSlot *slots                   = *pSlots;

    for (int i = 0; i < TreasureType_Max; i++) {
        pSVar3->mTreasureData[0].unk_3C[i] = TreasureType_None;
    }

    SaveFile_00000_1D00_Data(*p1D00)[2] = &slots[param1].mUnk_1D00;

    SaveSlot::func_ov019_020d1600(pSVar3->mTreasureData);

    SaveSlot::func_ov000_020a12a0(*p1D00);
    SaveSlot::func_ov019_020d14c0(*p1D00);

    _MI_CpuFill(0, slots[param1].mUnk_2500, sizeof(SaveFile_00000_2500_Data));
    SaveSlot::func_ov019_020d15cc(slots[param1].mUnk_2500);

    SaveSlot::func_ov000_020a10f4(slots[param1].mUnk_2600);
    SaveSlot::func_ov019_020d1400(slots[param1].mUnk_2600);
}
