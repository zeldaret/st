#pragma once

#include "Item/ItemManager.hpp"
#include "MainGame/MiscAdvManager.hpp"
#include "Save/AdventureFlags.hpp"
#include "Save/SaveFile.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "global.h"
#include "types.h"

#include <nitro/card.h>
#include <nitro/mi.h>

#define SAVE_DATA_SIZE (sizeof(SaveSlot) + sizeof(u8) * NUM_UNK_BLOCKS * SIZE_UNK_BLOCK)

enum {
    SaveDataIndex_SaveInfo,
    SaveDataIndex_Treasures,
    SaveDataIndex_02,
    SaveDataIndex_03,
    SaveDataIndex_04,
};

struct SaveManager_00 {
    /* 000 */ unk32 unk_00;
    /* 004 */ SaveFile_00000_0000_Data_158 unk_004;
    /* 030 */ SaveFile_00000_0000_Data_184 unk_030[SaveCourseIndex_Max];
    /* 330 */ SaveFile_00000_0000_Data_484 unk_330[256];
    /* B30 */ SaveFile_00000_0000_Data_C84 unk_B30;
    /* B40 */ SaveFile_00000_0000_Data_D24 unk_B40;
    /* B68 */ SaveFile_00000_0000_Data_D8C unk_B68;
    /* B78 */ SaveFile_00000_0000_Data_D4C unk_B78;
    /* BB8 */

    SaveManager_00(unk16 param1) :
        unk_B78(param1) {}
};

class SaveManager_244 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x7E);
    /* 7E */ u16 mUnk_7E;
    /* 80 */

    SaveManager_244();
};

class SaveManager {
public:
    /* 000 */ SaveManager_00 *mUnk_000; // related to mUnk_184, allocated from func_ov001_020ba670
    /* 004 */ unk32 mUnk_004;
    /* 008 */ STRUCT_PAD(0x08, 0x204);
    /* 204 */ u16 mCardId;
    /* 206 */ s16 mUnk_206; // this is a save slot index?
    /* 208 */ unk16 mUnk_208;
    /* 20A */ u8 mUnk_20A; // bool?
    /* 20B */ unk8 mUnk_20B;
    /* 20C */ CARDResult mResultCode;
    /* 210 */ unk32 mUnk_210;
    /* 214 */ unk32 mUnk_214;
    /* 218 */ SaveFile *mpSaveFile;
    /* 21C */ SaveFile_00000_0000_Data_D9C mUnk_21C;
    /* 23C */ PTMF<SaveFile>::PTMFCallback mUnk_23C;
    /* 244 */ SaveManager_244 *mUnk_244;
    /* 248 */

    const size_t GetOffset() const {
        return mUnk_206 * 0x7A700;
    }

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

    SaveManager_00 *GetUnk000() {
        return this->mUnk_000;
    }

    SaveManager();

    // overlay 0
    void func_ov000_020a0b2c(UnkCallback param1, unk32 param2);
    bool func_ov000_020a0b70(void *param1, unk32 param2);

    // overlay 1
    void func_ov001_020ba670();
    void func_ov001_020ba7a8();
    void func_ov001_020ba7c8(u16 saveSlotIndex);

    // overlay 17
    void func_ov017_020c3040(void *param1, unk32 param2);

    // overlay 19
    void func_ov019_020d08fc(unk32 param1, PTMF<SaveFile>::PTMFCallback param2);
    bool func_ov019_020d0964(void);
    void func_ov019_020d09dc(u16 saveSlotIndex);
    void func_ov019_020d0a04(u16 saveSlotIndex);
    void func_ov019_020d0ae0(unk32 param1);
    void func_ov001_020ba858(void);

    static void func_ov019_020d086c(u16 param1);
    static void func_ov019_020d0a2c(u16 param1);
};

extern SaveManager gSaveManager;
