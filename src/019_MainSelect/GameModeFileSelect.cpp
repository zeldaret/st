#include "Game/GameModeFileSelect.hpp"
#include "FileSelect/FileSelect.hpp"
#include "Save/AdventureFlags.hpp"
#include "Unknown/UnkStruct_02049a2c.hpp"
#include "Unknown/UnkStruct_02049bd4.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"

extern "C" {
void func_ov001_020be054();
void func_ov001_020be0d8();
void func_ov001_020be0ec();
};

static const UnkStruct_ov019_020d1d80 data_ov019_020d1d80(0x00020001);

ARM GameModeFileSelect *GameModeFileSelect::Create() {
    return new(HeapIndex_1) GameModeFileSelect();
}

ARM GameModeFileSelect::~GameModeFileSelect() {
    data_0204a088->func_ov000_02061098();
    gSaveManager.func_ov000_020ba7c8(this->mSaveSlotIndex);
    data_ov000_020b504c.func_ov001_020be6f4();
    data_02049bd4.func_02014c60(2);
    data_ov000_020b51b8.func_ov000_0206d0bc(1);
    data_ov000_020b50c0.func_ov001_020bd8dc();
}

// https://decomp.me/scratch/bJVks
ARM void GameModeFileSelect::vfunc_08(unk32 param1, unk32 param2, unk32 param3) {
    gSaveManager.func_ov019_020d0964();
    this->func_02018374();

    const UnkStruct_ov019_020d1d80 *ptr2 = &data_ov019_020d1d80;
    this->mUnk_04.mUnk_14                = gSaveManager.mpSaveFile;
    data_ov000_020b504c.func_ov000_0206807c((void *) &data_ov019_020d1d80, &this->mUnk_04);

    data_ov000_020b50c0.func_ov000_020bd8ac();
    data_ov000_020b51b8.func_ov000_0206c9a8(3, 0, 0x7F, 0);
}

ARM void GameModeFileSelect::vfunc_14() {}

ARM void GameModeFileSelect::vfunc_0C() {
    if ((this->mUnk_04.mUnk_08 & 0xFFFF) != 0xFFFF) {
        this->mUnk_04.vfunc_04();
    }
}

ARM void GameModeFileSelect::vfunc_18() {}

ARM void GameModeFileSelect::vfunc_20() {}

ARM void GameModeFileSelect::LoadAdventureMode(u16 saveSlotIndex) {
    this->mSaveSlotIndex = saveSlotIndex;
    data_0204a060.func_020183d4(gSaveManager.GetSaveSlot(saveSlotIndex)->GetAdventureFlag(AdventureFlag_WatchedIntroCS),
                                func_ov001_020be054, 1);
}

ARM void GameModeFileSelect::LoadBattleMode(u16 saveSlotIndex) {
    this->mSaveSlotIndex = saveSlotIndex;
    data_0204a060.func_020183d4(true, func_ov001_020be0ec, 1);
}

ARM void GameModeFileSelect::LoadContactMode(u16 saveSlotIndex) {
    this->mSaveSlotIndex = saveSlotIndex;
    data_0204a060.func_020183d4(true, func_ov001_020be0d8, 1);
}
