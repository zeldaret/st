#pragma once

#include "Item/ItemManager.hpp"
#include "MainGame/MiscAdvManager.hpp"
#include "MainGame/PassengerManager.hpp"
#include "math.hpp"
#include "types.h"

#include <nitro/mi.h>

// probably related to the map data?
#define NUM_UNK_BLOCKS 120
#define SIZE_UNK_BLOCK 0x1000

#define MAX_SAVE_SLOTS 2
#define COUNT_DATA 2 // main data + backup (?)
#define LENGTH_PLAYER_NAME 8

struct SaveFile_00000_0000_Data_D8 {
    /* 00 */ unk32 unk_00;
    /* 04 */ STRUCT_PAD(0x04, 0x40);
    /* 40 */ UnkStruct_Param1 unk_40;
    /* 58 */ unk32 unk_58;
    /* 5C */ unk32 unk_5C;
    /* 60 */ s8 unk_60[4];
    /* 60 */ s8 unk_64[4];
    /* 68 */ unk8 unk_68;
    /* 69 */ unk8 unk_69;
    /* 6A */ unk8 unk_6A;
    /* 6B */ unk8 unk_6B;
    /* 6C */ u32 trackFlags[3];
    /* 78 */ unk32 spiritTrackFlags;
    /* 7C */ unk16 cargoAmount;
    /* 7E */ unk8 cargoType;
    /* 80 */

    SaveFile_00000_0000_Data_D8();
};

struct SaveFile_00000_0000_Data_184 {
    /* 00 */ unk32 unk_00;
    /* 04 */ unk16 unk_04;
    /* 06 */ unk16 unk_06;
    /* 08 */

    SaveFile_00000_0000_Data_184() :
        unk_00(0),
        unk_04(0) {}
};

struct SaveFile_00000_0000_Data_484 {
    /* 00 */ unk32 unk_00;
    /* 04 */ unk32 unk_04;
    /* 08 */

    SaveFile_00000_0000_Data_484() :
        unk_00(0),
        unk_04(0) {}
};

// same layout as `MiscAdvManager`
struct SaveMiscAdvManager {
    /* 00 */ u16 stampDates[StampType_Max];
    /* 28 */ u16 unk_28;
    /* 2A */ u16 postDate;
    /* 2C */ union {
        Vec2b stampPositions[StampType_Max];
        u16 stampPos[StampType_Max];
    };
    /* 54 */ s8 obtainedLetters[LetterType_Max];
    /* 68 */ s8 obtainedStamps[StampType_Max];
    /* 7C */ u8 lastRandomNum;
    /* 7D */ u8 randomNum;
    /* 7E */ s8 numPriceCards;       // current amount of price cards
    /* 7F */ s8 numPostedPriceCards; // current amount of posted price cards
    /* 80 */ unk8 unk_80;
    /* 81 */ unk8 unk_81;       // pad?
    /* 82 */ unk8 unk_82;       // pad?
    /* 83 */ unk8 unk_83;       // pad?
    /* 84 */ unk32 lettersRead; // bitfield
    /* 88 */ unk32 stampsFlag;  // bitfield, related to the checkmarks from the stampbook
    /* 8C */ unk16 songs;       // bitfield
    /* 8E */ unk16 unk_8E;      // pad?
    /* 90 */

    SaveMiscAdvManager() :
        lettersRead(0),
        stampsFlag(0),
        songs(0) {}
};

struct SaveInventory {
    /* 00 */ u32 adventureFlags[32];
    /* 80 */ unk32 unk_80;
    /* 84 */ u32 unk_84[2];
    /* 8C */ u16 numRupees;
    /* 8E */ u16 unk_8E;
    /* 90 */ ItemFlag equippedItem;
    /* 94 */ unk32 unk_94;
    /* 98 */

    SaveInventory() {
        MI_CpuFill32(0, this->adventureFlags, sizeof(this->adventureFlags));
        MI_CpuFill32(0, this->unk_84, sizeof(this->unk_84));
        this->unk_8E = 0;
    }
};

struct SaveFile_00000_0000_Data_158 {
    /* 00 */ unk8 unk_00[0x0C];
    /* 0C */ unk8 unk_0C[0x20];
    /* 2C */

    SaveFile_00000_0000_Data_158() {
        MI_CpuFill32(0, this->unk_00, sizeof(this->unk_00));
        MI_CpuFill32(0, this->unk_0C, sizeof(this->unk_0C));
    }
};

struct SaveFile_00000_0000_Data_C84 {
    /* 00 */ u32 unk_00[4];
    /* 10 */

    SaveFile_00000_0000_Data_C84() {
        MI_CpuFill32(0, this->unk_00, sizeof(this->unk_00));
    }
};

struct SaveFile_00000_0000_Data_D4C {
    /* D24 */ unk32 unk_D4C;
    /* D24 */ unk32 unk_D50;
    /* D24 */ unk32 unk_D54;
    /* D24 */ unk32 unk_D58;
    /* D24 */ unk32 unk_D5C;
    /* D24 */ unk32 unk_D60;
    /* D24 */ unk32 unk_D64;
    /* D24 */ unk32 unk_D68;
    /* D6C */ unk8 unk_D6C[0x08];
    /* D74 */ unk16 unk_D74;

    SaveFile_00000_0000_Data_D4C() {
        MI_CpuFill32(0, this->unk_D6C, sizeof(this->unk_D6C));
        this->unk_D74 = 0;
    }
};

struct SaveInfoData {
    /* 000 */ unk32 unk_000;
    /* 004 */ unk32 unk_004;
    /* 008 */ unk32 unk_008;
    /* 00C */ unk32 unk_00C;
    /* 010 */ unk32 unk_010;
    /* 014 */ unk16 unk_014;
    /* 016 */ u16 sceneIndex;
    /* 018 */ u8 roomIndex;
    /* 019 */ u8 spawnIndex;
    /* 01A */ unk16 unk_01A;
    /* 01C */ unk32 unk_01C;
    /* 020 */ unk32 unk_020;
    /* 024 */ unk32 unk_024;
    /* 028 */ STRUCT_PAD(0x28, 0x40);
    /* 040 */ SaveInventory inventory;
    /* 0D8 */ SaveFile_00000_0000_Data_D8 unk_0D8;
    /* 158 */ SaveFile_00000_0000_Data_158 unk_158;
    /* 184 */ SaveFile_00000_0000_Data_184 unk_184[96];
    /* 484 */ SaveFile_00000_0000_Data_484 unk_484[256];
    /* C84 */ SaveFile_00000_0000_Data_C84 unk_C84;
    /* C94 */ SaveMiscAdvManager miscAdvManager;
    /* D24 */ unk32 unk_D24;
    /* D24 */ unk32 unk_D28;
    /* D24 */ unk32 unk_D2C;
    /* D24 */ unk32 unk_D30;
    /* D24 */ unk32 unk_D34;
    /* D24 */ unk32 unk_D38;
    /* D24 */ unk32 unk_D3C;
    /* D24 */ unk32 unk_D40;
    /* D24 */ unk32 unk_D44;
    /* D24 */ unk32 unk_D48;
    /* D4C */ SaveFile_00000_0000_Data_D4C unk_D4C;
    /* D78 */ unk32 unk_D78;
    /* D7C */ unk32 unk_D7C;
    /* D80 */ unk32 unk_D80;
    /* D84 */ unk32 unk_D84;
    /* D88 */ unk32 unk_D88;
    /* D8C */ unk32 unk_D8C;
    /* D90 */ unk32 unk_D90;
    /* D94 */ unk32 unk_D94;
    /* D98 */ unk32 unk_D98;
    /* D9C */ unk32 unk_D9C;
    /* DA0 */ unk16 unk_DA0;
    /* DA2 */ wchar_t mPlayerName[LENGTH_PLAYER_NAME + 1];
    /* DB4 */ unk32 unk_DB4;
    /* DB8 */ unk32 unk_DB8;
    /* DBC */ unk32 unk_DBC;
    /* DC0 */ unk32 unk_DC0;
    /* DC4 */ unk32 unk_DC4;
    /* DC8 */ unk32 unk_DC8;
    /* DCC */ unk32 unk_DCC;
    /* DD0 */ unk32 unk_DD0;
    /* DD4 */ unk32 unk_DD4;
    /* DD8 */ unk32 unk_DD8;
    /* DDC */ unk32 unk_DDC;
    /* DE0 */ unk32 unk_DE0;
    /* DE4 */ unk32 unk_DE4;
    /* DE8 */ unk32 unk_DE8;
    /* DEC */ unk32 unk_DEC;
    /* DF0 */ unk32 unk_DF0;
    /* DF4 */ unk32 unk_DF4;
    /* DF8 */ unk32 unk_DF8;
    /* DFC */ unk16 unk_DFC;
    /* DFE */ u16 unk_DFE;
    /* E00 */

    SaveInfoData() :
        unk_014(0) {}
};

struct SaveTreasureData {
    /* 00 */ STRUCT_PAD(0x00, 0x3C);
    /* 3C */ s16 unk_3C[TreasureType_Max];
    /* 5C */ unk16 unk_5C;
    /* 5E */ unk16 unk_5E;
    /* 60 */ STRUCT_PAD(0x60, 0x7E);
    /* 7E */ u16 unk_7E;
    /* 80 */

    SaveTreasureData() :
        unk_5C(0) {}
};

struct SaveFile_00000_1D00_Data {
    /* 000 */ STRUCT_PAD(0x00, 0x3C4);
    /* 3C4 */ wchar_t unk_3C4[LENGTH_PLAYER_NAME + 1];
    /* 3D6 */ STRUCT_PAD(0x3D6, 0x3FE);
    /* 3FE */ u16 unk_3FE;
    /* 400 */
};

struct SaveFile_00000_2500_Data {
    /* 00 */ unk8 unk_00[0x7E];
    /* 7E */ u16 unk_7E;
    /* 80 */
};

struct SaveFile_00000_2600_Data {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 unk_02;
    /* 03 */ Vec2b unk_03[61];
    /* 7E */ u16 unk_7E;
    /* 80 */
};

class SaveSlot {
public:
    /* 0000 */ SaveInfoData mInfoData[COUNT_DATA];
    /* 1C00 */ SaveTreasureData mTreasureData[COUNT_DATA];
    /* 1D00 */ SaveFile_00000_1D00_Data mUnk_1D00[COUNT_DATA];
    /* 2500 */ SaveFile_00000_2500_Data mUnk_2500[COUNT_DATA];
    /* 2600 */ SaveFile_00000_2600_Data mUnk_2600[COUNT_DATA];
    /* 2700 */

    void func_ov000_020a1124(void);

    bool GetAdventureFlag(AdventureFlag flag) {
        return GET_FLAG(this->mInfoData[0].inventory.adventureFlags, flag);
    }

    wchar_t *GetPlayerName() {
        return this->mInfoData[0].mPlayerName;
    }

    bool IsPlayerNameSet() {
        return this->mInfoData[0].mPlayerName[0] != L'\0';
    }

    SaveFile_00000_2600_Data *Get2600Ptr() {
        return this->mUnk_2600;
    }

    u8 Get2600_00() {
        return this->mUnk_2600[0].unk_00;
    }

    u8 Get2600_01() {
        return this->mUnk_2600[0].unk_01;
    }

    u8 Get2600_02() {
        return this->mUnk_2600[0].unk_02;
    }

    static void func_ov000_020a1028(SaveInfoData *param1);
    static void func_ov000_020a10f4(SaveFile_00000_2600_Data *param1);
    static void func_ov000_020a12a0(SaveFile_00000_1D00_Data *param1);

    static void func_ov019_020d14c0(SaveFile_00000_1D00_Data *param1);
    static void func_ov019_020d14fc(SaveInfoData *param1);
    static void func_ov019_020d15cc(SaveFile_00000_2500_Data *param1);
    static void func_ov019_020d1400(SaveFile_00000_2600_Data *param1);
    static void func_ov019_020d1600(SaveTreasureData *param1);
};

struct SaveFile_04E00 {
    u16 unk_00;

    SaveFile_04E00() :
        unk_00(0) {}
};

class SaveFile {
public:
    /* 00000 */ SaveSlot mSlots[MAX_SAVE_SLOTS];
    /* 04E00 */ SaveFile_04E00 mUnk_04E00[2][2];
    /* 04E08 */ unk16 mUnk_04E08;
    /* 04E0A */ u16 mSaveSlotIndex;
    /* 04E0C */ u8 mUnk_04E0C[NUM_UNK_BLOCKS * SIZE_UNK_BLOCK];
    /* 7CE0C */

    SaveFile();

    unk16 func_ov019_020d0c4c(unk32 param1, unk32 param2);
    unk16 func_ov019_020d0c90(unk32 param1);
    void func_ov019_020d0d50();
    void func_ov019_020d0e18(unk32 param1);
    void func_ov019_020d0ea8();
    void func_ov019_020d1108();
    void func_ov019_020d127c();
    void func_ov019_020d13b8();
    void func_ov019_020d1434();
    void func_ov019_020d1538();
    void func_ov019_020d1634();
    void func_ov019_020d16d0();
    void func_ov019_020d17e0();
    void func_ov019_020d1808(unk32 param1);
    void func_ov019_020d1aac(unk32 param1, const wchar_t *param2);
    void func_ov019_020d1b14(unk32 param1);
};
