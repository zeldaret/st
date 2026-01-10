#include "Save/SaveManager.hpp"

#include "Unknown/UnkStruct_02049b80.hpp"
#include "Unknown/UnkStruct_02049bd4.hpp"

#include <wstring.h>

extern "C" {
unk32 func_020328c8(void *, void *, size_t);
unk32 func_02030cfc();
void func_02030d48(u16 param1);
void func_02030d58(u16 param1);
unk32 func_020312b8(void *src, uintptr_t dest, unk32 param3, unk32 param4, unk32 param5, unk32 param6, unk32 param7,
                    unk32 param8, unk32 param9);

bool func_ov000_020a0a90(size_t param1, void *param2, size_t param3);
void func_ov000_020a0b58();
};

const size_t data_ov019_020d1bd4[] = {
    sizeof(SaveInfoData), sizeof(TreasureData), sizeof(SaveSub15), sizeof(SaveSub16), sizeof(SaveSub17),
};

const unk32 data_ov019_020d1be8[] = {
    offsetof(SaveSlot, mSaveInfo), offsetof(SaveSlot, mTreasures), offsetof(SaveSlot, mUnk_1D00),
    offsetof(SaveSlot, mUnk_2500), offsetof(SaveSlot, mUnk_2600),
};

ARM void SaveManager::func_ov019_020d086c(u16 param1) {
    func_02030d48(gSaveManager.mUnk_204);

    STATIC_PTMFCALLBACK(SaveFile, gSaveManager.mUnk_23C, gSaveManager.mpSaveFile);
    gSaveManager.mUnk_20C = func_02030cfc();
    func_02030d58(gSaveManager.mUnk_204);

    if (gSaveManager.mUnk_20C != 0) {
        gSaveManager.mUnk_214 = gSaveManager.mUnk_210;
    }

    if (gSaveManager.mUnk_210 != 2) {
        gSaveManager.mUnk_210 = 0;
    } else {
        func_ov000_020a0b58();
    }
}

ARM void SaveManager::func_ov019_020d08fc(unk32 param1, PTMF<SaveFile>::PTMFCallback param2) {
    this->mUnk_23C = param2;

    if (param1 == 2) {
        this->func_ov000_020a0b2c(SaveManager::func_ov019_020d086c, 0);
    } else {
        this->mUnk_210 = 1;
        data_02049b80.func_02013ecc(0, SaveManager::func_ov019_020d086c, 0);
    }
}

ARM bool SaveManager::func_ov019_020d0964() {
    this->mpSaveFile = new(HeapIndex_1) SaveFile();
    data_02049b80.func_02013ee8(0, 1);

    if (this->mUnk_20A == 0) {
        this->func_ov019_020d08fc(1, SaveFile::func_ov019_020d17e0);
        return true;
    }

    return false;
}

ARM void SaveManager::func_ov019_020d09dc(u16 saveSlotIndex) {
    this->mpSaveFile->mSaveSlotIndex = saveSlotIndex;
    this->func_ov019_020d08fc(2, SaveFile::func_ov019_020d1434);
}

ARM void SaveManager::func_ov019_020d0a04(u16 saveSlotIndex) {
    this->mpSaveFile->mSaveSlotIndex = saveSlotIndex;
    this->func_ov019_020d08fc(2, SaveFile::func_ov019_020d1538);
}

ARM void SaveManager::func_ov019_020d0a2c(u16 saveSlotIndex) {
    data_02049bd4.mUnk_04++;
    gSaveManager.mpSaveFile->mSaveSlotIndex = saveSlotIndex;
    func_02030d48(gSaveManager.mUnk_204);
    gSaveManager.mUnk_210 = 1;
    gSaveManager.mpSaveFile->func_ov019_020d1634();
    gSaveManager.mUnk_20C = func_02030cfc();

    if (gSaveManager.mUnk_20C != 0) {
        gSaveManager.mUnk_214 = gSaveManager.mUnk_210;
        return;
    }

    gSaveManager.mUnk_210 = 2;
    gSaveManager.mpSaveFile->func_ov019_020d16d0();
    gSaveManager.mUnk_20C = func_02030cfc();

    if (gSaveManager.mUnk_20C != 0) {
        gSaveManager.mUnk_214 = gSaveManager.mUnk_210;
    }

    func_02030d58(gSaveManager.mUnk_204);
    gSaveManager.mUnk_210 = 0;
    data_02049bd4.mUnk_04--;
}

ARM void SaveManager::func_ov019_020d0ae0(unk32 param1) {
    data_02049b80.func_02013ecc(0, SaveManager::func_ov019_020d0a2c, param1);
}

#pragma optimization_level 2

ARM SaveFile::SaveFile() :
    mUnk_04E08(0),
    mSaveSlotIndex(0) {}

#pragma optimization_level reset

ARM unk16 SaveFile::func_ov019_020d0c4c(unk32 param1, unk32 param2) {
    s16 i = 0;

    do {
        if ((this->mUnk_04E00[param1][i].mUnk_00 & (1 << param1)) != 0) {
            return i;
        }

        i++;
    } while (i < MAX_SAVE_SLOTS);

    return -1;
}

ARM unk16 SaveFile::func_ov019_020d0c90(unk32 param1) {
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

ARM void SaveFile::func_ov019_020d0d50() {
    stack_struct stack[MAX_SAVE_SLOTS];

    for (int i = 0; i < 2; i++) {
        this->mSlots[i].func_ov000_020a1124();
        this->func_ov019_020d0e18(i);
    }

    stack[0].mUnk_00 = 0x0C1D2E3F;
    stack[0].mUnk_1C = 0xF4E5D6C7;
    stack[0].mUnk_04 = 0x1A;
    Fill16(0, &stack[0].mUnk_06, 0x16);

    stack[1].mUnk_00 = 0x0C1D2E3F;
    stack[1].mUnk_1C = 0xF4E5D6C7;
    stack[1].mUnk_04 = 0x1A;
    Fill16(0, &stack[1].mUnk_06, 0x16);

    func_020312b8(stack, SAVE_DATA_SIZE * 2, sizeof(stack_struct) * 2, 0, 0, 0, 7, 10, 2);
}

// https://decomp.me/scratch/gJJbb
ARM void SaveFile::func_ov019_020d0e18(unk32 param1) {
    size_t offset    = param1 * SAVE_DATA_SIZE;
    SaveSlot *puVar3 = &this->mSlots[param1];

    if (!func_ov000_020a0a90(offset, &puVar3->mSaveInfo, sizeof(puVar3->mSaveInfo))) {
        return;
    }

    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mTreasures), &puVar3->mTreasures, sizeof(puVar3->mTreasures))) {
        return;
    }

    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_1D00), &puVar3->mUnk_1D00, sizeof(puVar3->mUnk_1D00))) {
        return;
    }

    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_2500), &puVar3->mUnk_2500, sizeof(puVar3->mUnk_2500))) {
        return;
    }

    func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_2600), &puVar3->mUnk_2600, sizeof(puVar3->mUnk_2600));
}

ARM void SaveFile::func_ov019_020d0ea8() {}
ARM void SaveFile::func_ov019_020d1108() {}
ARM void SaveFile::func_ov019_020d127c() {}

// https://decomp.me/scratch/lmC67
ARM void SaveFile::func_ov019_020d13b8() {
    u16 saveSlotIndex = this->mSaveSlotIndex;

    this->mSlots[this->mSaveSlotIndex].mUnk_2600.func_ov019_020d1400();

    func_ov000_020a0a90(saveSlotIndex * SAVE_DATA_SIZE + offsetof(SaveSlot, mUnk_2600),
                        &this->mSlots[this->mSaveSlotIndex].mUnk_2600, sizeof(this->mSlots->mUnk_2600));
}

ARM void SaveSub7::func_ov019_020d1400() {
    this->mUnk_00[0].mUnk_7E = func_020328c8(&gSaveManager.mUnk_004, &this->mUnk_00, sizeof(SaveSub17) - sizeof(u16));
    Copy256(&this->mUnk_00[0], &this->mUnk_00[1], sizeof(SaveSub17));
}

// non-matching
ARM void SaveFile::func_ov019_020d1434() {
    size_t offset = this->mSaveSlotIndex * SAVE_DATA_SIZE;

    this->mSlots[this->mSaveSlotIndex].mSaveInfo.func_ov019_020d14fc();
    if (!func_ov000_020a0a90(offset, &this->mSlots[this->mSaveSlotIndex].mSaveInfo,
                             sizeof(this->mSlots[this->mSaveSlotIndex].mSaveInfo))) {
        return;
    }

    this->mSlots[this->mSaveSlotIndex].mUnk_1D00.func_ov019_020d14c0();
    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_1D00), &this->mSlots[this->mSaveSlotIndex].mUnk_1D00,
                             sizeof(this->mSlots[this->mSaveSlotIndex].mUnk_1D00))) {
        return;
    }

    this->func_ov019_020d13b8();
}
ARM void SaveSub5::func_ov019_020d14c0() {
    this->mUnk_000[0].mUnk_3FE = func_020328c8(&gSaveManager.mUnk_004, &this->mUnk_000, offsetof(SaveSub15, mUnk_3FE));
    Copy256(&this->mUnk_000[0], &this->mUnk_000[1], sizeof(SaveSub15));
}

ARM void SaveInfo::func_ov019_020d14fc() {
    this->mSaveInfoData[0].mUnk_DFE =
        func_020328c8(&gSaveManager.mUnk_004, &this->mSaveInfoData[0].mUnk_000, offsetof(SaveInfoData, mUnk_DFE));
    Copy256(&this->mSaveInfoData[0], &this->mSaveInfoData[1], sizeof(SaveInfoData));
}

//! TODO: weird sizeof
ARM void SaveFile::func_ov019_020d1538() {
    size_t offset;

    offset = this->mSaveSlotIndex * SAVE_DATA_SIZE;

    this->mSlots[this->mSaveSlotIndex].mTreasures.func_ov019_020d1600();
    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mTreasures), &this->mSlots[this->mSaveSlotIndex].mTreasures,
                             0x1C00)) {
        return;
    }

    this->mSlots[this->mSaveSlotIndex].mUnk_2500.func_ov019_020d15cc();
    if (!func_ov000_020a0a90(offset + offsetof(SaveSlot, mUnk_2500), &this->mSlots[this->mSaveSlotIndex].mUnk_2500, 0x800)) {
        return;
    }

    this->func_ov019_020d1434();
}

ARM void SaveSub6::func_ov019_020d15cc() {
    this->mUnk_00[0].mUnk_7E = func_020328c8(&gSaveManager.mUnk_004, &this->mUnk_00, offsetof(SaveSub16, mUnk_7E));
    Copy256(&this->mUnk_00[0], &this->mUnk_00[1], sizeof(SaveSub16));
}

ARM void SaveTreasures::func_ov019_020d1600() {
    this->mTreasureData[0].mUnk_7E =
        func_020328c8(&gSaveManager.mUnk_004, &this->mTreasureData, offsetof(TreasureData, mUnk_7E));
    Copy256(&this->mTreasureData[0], &this->mTreasureData[1], sizeof(TreasureData));
}

// https://decomp.me/scratch/ibnQS
ARM void SaveFile::func_ov019_020d1634() {
    SaveSlot *pSlot = &this->mSlots[this->mSaveSlotIndex];
    size_t offset   = this->mSaveSlotIndex * SAVE_DATA_SIZE;

    for (int i = 0; i < 120; i++) {
        // if (pSlot->mSaveInfo.mSaveInfoData[0].mUnk_C84.mUnk_00[(u32) i >> 5] & (1 << (i & 0x1F))) {
        //     u32 dest = (i << 12) + sizeof(SaveSlot);
        //     u8 *src  = &this->mUnk_04E0C[i << 12];
        //     func_020312b8(src, offset + dest, 0x1000, 0, 0, 0, 6, 1, 0);
        // }
    }
}

// non-matching
ARM void SaveFile::func_ov019_020d16d0() {
    u16 saveSlotIndex = this->mSaveSlotIndex == 0;
    SaveSlot *pSub2   = &this->mSlots[this->mSaveSlotIndex];
    SaveSlot *pSub3   = &this->mSlots[saveSlotIndex];

    Copy256(&pSub2->mSaveInfo, &pSub3->mSaveInfo, sizeof(SaveInfo));
    Copy256(&pSub2->mTreasures, &pSub3->mTreasures, sizeof(SaveTreasures));
    Copy256(&pSub2->mUnk_2600, &pSub3->mUnk_2600, sizeof(SaveSub7));

    pSub3->mUnk_1D00.func_ov000_020a12a0();
    Copy256(&pSub2->mUnk_1D00, &pSub3->mUnk_1D00, sizeof(SaveSub5));

    Fill256(0, &pSub3->mUnk_2500, sizeof(SaveSub6));
    Copy256(&pSub2->mUnk_2500, &pSub3->mUnk_2500, sizeof(SaveSub6));

    this->mSaveSlotIndex = saveSlotIndex;
    this->func_ov019_020d1538();

    for (int i = 0; i < NUM_UNK_BLOCKS; i++) {
        // if (pSub2->mSaveInfo.mSaveInfoData[i >> 5].mUnk_C84.mUnk_00[0] & (1 << (i & 0x1F))) {
        //     func_ov000_020a0a90(slot * SAVE_DATA_SIZE + i * SIZE_UNK_BLOCK + sizeof(SaveSlot),
        //                         &this->mUnk_04E0C[i * SIZE_UNK_BLOCK], SIZE_UNK_BLOCK);
        // }
    }
}
ARM void SaveFile::func_ov019_020d17e0() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->func_ov019_020d1808(i);
    }
}

struct stack_struct2 {
    u16 mUnk_00;
    u16 mUnk_02;
    bool mUnk_04;
};

// non-matching
ARM void SaveFile::func_ov019_020d1808(unk32 param1) {
    SaveSlot *pSub2 = &this->mSlots[param1];
    stack_struct2 stack1[5];

    if (func_020312b8(pSub2, param1 * SAVE_DATA_SIZE, sizeof(SaveSlot), 0, 0, 0, 6, 1, 0) == 0) {
        return;
    }

    for (int i = 0; i < COUNT_DATA; i++) {
        stack1[SaveDataIndex_SaveInfo].mUnk_00 =
            func_020328c8(&gSaveManager.mUnk_004, &pSub2->mSaveInfo.mSaveInfoData[i], sizeof(SaveInfoData) - sizeof(u16));
        stack1[SaveDataIndex_SaveInfo].mUnk_04 =
            pSub2->mSaveInfo.mSaveInfoData[i].mUnk_DFE == stack1[SaveDataIndex_SaveInfo].mUnk_00;

        stack1[SaveDataIndex_Treasures].mUnk_00 =
            func_020328c8(&gSaveManager.mUnk_004, &pSub2->mTreasures.mTreasureData[i], sizeof(TreasureData) - sizeof(u16));
        stack1[SaveDataIndex_Treasures].mUnk_04 =
            pSub2->mTreasures.mTreasureData[i].mUnk_7E == stack1[SaveDataIndex_Treasures].mUnk_00 ? true : false;

        stack1[SaveDataIndex_02].mUnk_00 =
            func_020328c8(&gSaveManager.mUnk_004, &pSub2->mUnk_1D00.mUnk_000[i], sizeof(SaveSub15) - sizeof(u16));
        stack1[SaveDataIndex_02].mUnk_04 =
            pSub2->mUnk_1D00.mUnk_000[i].mUnk_3FE == stack1[SaveDataIndex_02].mUnk_00 ? true : false;

        stack1[SaveDataIndex_03].mUnk_00 =
            func_020328c8(&gSaveManager.mUnk_004, &pSub2->mUnk_2500.mUnk_00[i], sizeof(SaveSub16) - sizeof(u16));
        stack1[SaveDataIndex_03].mUnk_04 =
            pSub2->mUnk_2500.mUnk_00[i].mUnk_7E == stack1[SaveDataIndex_03].mUnk_00 ? true : false;

        stack1[SaveDataIndex_04].mUnk_00 =
            func_020328c8(&gSaveManager.mUnk_004, &pSub2->mUnk_2600.mUnk_00[i], sizeof(SaveSub17) - sizeof(u16));
        stack1[SaveDataIndex_04].mUnk_04 =
            pSub2->mUnk_2600.mUnk_00[i].mUnk_7E == stack1[SaveDataIndex_04].mUnk_00 ? true : false;
    }

    for (u32 i = 0; i < 5; i++) {
        u8 *puVar5 = &((u8 *) pSub2)[data_ov019_020d1be8[i]];

        if (stack1[i].mUnk_00 != 0) {
            if (stack1[i].mUnk_04 == 0 || stack1[i].mUnk_00 != stack1[i * 2].mUnk_04) {
                Copy256(puVar5, puVar5 + data_ov019_020d1bd4[i], data_ov019_020d1bd4[i]);
                this->mUnk_04E00[param1][1].mUnk_00 |= 1 << (i & 0xFF);
            }
        } else {
            this->mUnk_04E00[param1][0].mUnk_00 |= 1 << (i & 0xFF);

            if (stack1[i * 2].mUnk_04 == 0) {
                this->mUnk_04E00[param1][1].mUnk_00 |= 1 << (i & 0xFF);
            } else {
                Copy256(puVar5 + data_ov019_020d1bd4[i], puVar5, data_ov019_020d1bd4[i]);
            }
        }
    }
}

ARM void SaveFile::func_ov019_020d1aac(unk32 param1, const wchar_t *param2) {
    wchar_t awStack_28[LENGTH_PLAYER_NAME + 1];

    awStack_28[8] = L'\0';
    wcsncpy(awStack_28, param2, LENGTH_PLAYER_NAME);
    Copy16((u16 *) awStack_28, (u16 *) this->mSlots[param1].mSaveInfo.mSaveInfoData[0].mPlayerName,
           sizeof(wchar_t) * (LENGTH_PLAYER_NAME + 1));
    Copy16((u16 *) awStack_28, (u16 *) this->mSlots[param1].mUnk_1D00.mUnk_000[0].mUnk_3C4,
           sizeof(wchar_t) * (LENGTH_PLAYER_NAME + 1));
}

// https://decomp.me/scratch/34KCr
ARM void SaveFile::func_ov019_020d1b14(unk32 param1) {
    SaveSlot *pSVar3;

    pSVar3 = this->mSlots + param1;
    pSVar3->mSaveInfo.func_ov000_020a1028();
    pSVar3->mSaveInfo.func_ov019_020d14fc();

    Fill256(0, &pSVar3->mTreasures, sizeof(SaveTreasures));
    for (int i = 0; i < TreasureType_Max; i++) {
        pSVar3->mTreasures.mTreasureData[0].mUnk_3C[i] = TreasureType_None;
    }
    pSVar3->mTreasures.func_ov019_020d1600();

    this->mSlots[param1].mUnk_1D00.func_ov000_020a12a0();
    this->mSlots[param1].mUnk_1D00.func_ov019_020d14c0();

    Fill256(0, &this->mSlots[param1].mUnk_2500, 0x80);
    this->mSlots[param1].mUnk_2500.func_ov019_020d15cc();

    this->mSlots[param1].mUnk_2600.func_ov000_020a10f4();
    this->mSlots[param1].mUnk_2600.func_ov019_020d1400();
}
