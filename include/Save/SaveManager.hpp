#pragma once

#include "Item/ItemManager.hpp"
#include "MainGame/MiscAdvManager.hpp"
#include "Save/AdventureFlags.hpp"
#include "Save/SaveFile.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "global.h"
#include "types.h"

//! TODO: kinda draft state for now

#define SAVE_DATA_SIZE (sizeof(SaveSlot) + sizeof(u8) * NUM_UNK_BLOCKS * SIZE_UNK_BLOCK)

enum {
    SaveDataIndex_SaveInfo,
    SaveDataIndex_Treasures,
    SaveDataIndex_02,
    SaveDataIndex_03,
    SaveDataIndex_04,
};

class SaveManager_21C {
public:
    /* 00 */ unk32 mUnk_00;

    unk32 func_ov000_020a1000();
};

struct SaveManager_36 {
    /* 00 */ u8 mKeyAmount;
    /* 01 */ STRUCT_PAD(0x01, 0x08);
    /* 08 */
};

struct SaveManager_00 {
    /* 000 */ STRUCT_PAD(0x00, 0x36);
    /* 036 */ SaveManager_36 mUnk_36[0x60];
    /* 336 */ STRUCT_PAD(0x336, 0xB30);
    /* B30 */ unk32 mUnk_B30[1]; // flags, at least 1
    /* BB8 */
};

class SaveManager {
public:
    /* 000 */ SaveManager_00 *mUnk_000; // related to mUnk_184, allocated from func_ov001_020ba670
    /* 004 */ unk32 mUnk_004;
    /* 008 */ STRUCT_PAD(0x08, 0x204);
    /* 204 */ unk16 mUnk_204;
    /* 206 */ unk16 mUnk_206;
    /* 208 */ unk16 mUnk_208;
    /* 20A */ u8 mUnk_20A; // bool?
    /* 20B */ unk8 mUnk_20B;
    /* 20C */ unk32 mUnk_20C;
    /* 210 */ unk32 mUnk_210;
    /* 214 */ unk32 mUnk_214;
    /* 218 */ SaveFile *mpSaveFile;
    /* 21C */ SaveManager_21C mUnk_21C;
    /* 220 */ STRUCT_PAD(0x220, 0x23C);
    /* 23C */ PTMF<SaveFile>::PTMFCallback mUnk_23C;
    /* 244 */ unk32 mUnk_244;

    bool IsUnk20A() {
        return this->mUnk_20A == 0;
    }

    BOOL IsUnk210() {
        return this->mUnk_210 == 0;
    }

    SaveSlot *GetSaveSlot(int saveSlotIndex) {
        return &this->mpSaveFile->mSlots[saveSlotIndex];
    }

    SaveSlot *GetSaveSlots() {
        return this->mpSaveFile->mSlots;
    }

    SaveManager();

    void func_ov000_020a0b2c(UnkCallback param1, unk32 param2);
    bool func_ov000_020a0b70(void *param1, unk32 param2);

    void func_ov001_020ba670();
    void func_ov001_020ba7a8();
    void func_ov001_020ba7c8(u16 saveSlotIndex);

    void func_ov017_020c3040(void *param1, unk32 param2);

    void func_ov019_020d08fc(unk32 param1, PTMF<SaveFile>::PTMFCallback param2);
    bool func_ov019_020d0964(void);
    void func_ov019_020d09dc(u16 saveSlotIndex);
    void func_ov019_020d0a04(u16 saveSlotIndex);
    void func_ov019_020d0ae0(unk32 param1);

    static void func_ov019_020d086c(u16 param1);
    static void func_ov019_020d0a2c(u16 param1);
};

extern SaveManager gSaveManager;
