#pragma once

#include "FileSelect/FileSelect.hpp"
#include "Game/GameModeManager.hpp"
#include "Unknown/UnkStruct_02049a2c.hpp"
#include "Unknown/UnkStruct_02049bd4.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"

class GameModeFileSelect : public GameModeBase {
public:
    /* 00 (vtable) */
    /* 04 */ UnkSystem1_ov019_Derived1 mUnk_04;
    /* 20 */ u16 mSaveSlotIndex;
    /* 20 */ unk16 mUnk_22;
    /* 24 */

    GameModeFileSelect() NO_INLINE {
        this->mSaveSlotIndex = 0;
        data_02049bd4.func_02014cdc(2);
        data_02049bd4.mUnk_02 &= 0xFFFB;
        data_02049a2c.func_02013370(1);
        data_0204999c.mUnk_60 = 0xD6D8;
        data_ov000_020b504c.func_ov001_020be668();
        data_0204a110.func_ov001_020bd514(2, FileSelectManager::Create, 0, 1);
    }

    void LoadAdventureMode(u16 saveSlotIndex);
    void LoadBattleMode(u16 saveSlotIndex);
    void LoadContactMode(u16 saveSlotIndex);

    // data_ov019_020d1d8c vtable
    /* 00 */ virtual ~GameModeFileSelect() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 30 */

    static GameModeFileSelect *Create();
};
