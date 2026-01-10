#pragma once

#include "Item/ItemManager.hpp"
#include "Save/AdventureFlags.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "global.h"
#include "types.h"

// probably related to the map data?
#define NUM_UNK_BLOCKS 120
#define SIZE_UNK_BLOCK 0x1000

#define LENGTH_PLAYER_NAME 8
#define COUNT_DATA 2 // main data + backup (?)

#define SAVE_DATA_SIZE (sizeof(SaveSlot) + sizeof(u8) * NUM_UNK_BLOCKS * SIZE_UNK_BLOCK)

enum {
    SaveDataIndex_SaveInfo,
    SaveDataIndex_Treasures,
    SaveDataIndex_02,
    SaveDataIndex_03,
    SaveDataIndex_04,
};

class SaveAdventureFlags {
public:
    /* 00 */ u32 data[32];
    /* 80 */

    SaveAdventureFlags() {
        Fill32(0, this, sizeof(SaveAdventureFlags));
    };
};

class SaveInventory {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ u32 mUnk_04[2];
    /* 0C */ u16 mNumRupees;
    /* 0E */ u16 mUnk_12;
    /* 10 */ ItemFlag mEquippedItem;
    /* 14 */ unk32 mUnk_14;
    /* 18 */

    SaveInventory() {
        Fill32(0, this->mUnk_04, sizeof(mUnk_04));
        this->mUnk_12 = 0;
    };
};

class TreasureData {
public:
    /* 00 */ unk8 mUnk_00[0x3C];
    /* 3C */ s16 mUnk_3C[TreasureType_Max];
    /* 5C */ unk16 mUnk_5C;
    /* 5E */ unk16 mUnk_5E;
    /* 60 */ unsigned char _pad_0x60[(0x7E) - (0x60)];
    /* 7E */ u16 mUnk_7E;
    /* 80 */

    TreasureData() :
        mUnk_5C(0) {}
};

class SaveTreasures {
public:
    /* 000 */ TreasureData mTreasureData[2];
    /* 100 */

    SaveTreasures() {}
    void func_ov019_020d1600();
};

class SaveInfoSub5 {
public:
    /* 00 */ unk32 mUnk_00;
    SaveInfoSub5();
};

class SaveUnknown158 {
public:
    /* 00 */ unk8 mUnk_00[0x0C];
    SaveUnknown158() {
        Fill32(0, this, sizeof(SaveUnknown158));
    };
};

class SaveUnknown164 {
public:
    /* 00 */ unk8 mUnk_00[0x20];
    SaveUnknown164() {
        Fill32(0, this, sizeof(SaveUnknown164));
    };
};

class Sub1Test {
public:
    int a;
    short b;
    short p;
    Sub1Test() {
        a = 0;
        b = 0;
    }
};

class Sub2Test {
public:
    int a;
    int b;
    Sub2Test() {
        a = 0;
        b = 0;
    }
};
class Sub2Test2 {
public:
    Sub2Test tab2[0xE0];
    /* C84 */ unk32 mUnk_00_SaveInfoSub10[4];

    Sub2Test2() {
        Fill32(0, this->mUnk_00_SaveInfoSub10, 16);
    }
};

class SaveUnknown184_Sub {
public:
    /* */ u8 pad1[390];
    /* */ Sub1Test tab1[0x4F];
    /* */ Sub2Test2 tab2;

    SaveUnknown184_Sub() {}
};

class SaveUnknown184 {
public:
    /* 184 */ SaveUnknown184_Sub mUnk_184;

    SaveUnknown184() {}
};

class SaveUnknown14C {
public:
    /* 14C */ unk32 mSpiritTrackFlags[1];
    /* 150 */ unk32 mUnk_150;
    /* 154 */ unk32 mUnk_154;
    /* 158 */ SaveUnknown158 mUnk_158;
    /* 164 */ SaveUnknown164 mUnk_164;

    /* 184 */ SaveUnknown184 mUnk_184;

    /* C94 */ unk8 mUnk_C94[0x84];
    /* D18 */ unk32 mUnk_D18;
    /* D1C */ unk32 mUnk_D1C;
    /* D20 */ unk16 mSongs;
    /* D22 */ unk16 mUnk_D22;
    /* D24 */ unk8 mUnk_00_SaveUnknownD24[0x48];
    /* D6C */ unk8 mUnk_48_SaveUnknownD24[8];
    /* D74 */ unk16 mUnk_50_SaveUnknownD24;
    /* D76 */ unk16 mUnk_52_SaveUnknownD24;
    /* D78 */ STRUCT_PAD(0xD78, 0xD8C);
    /* D8C */

    SaveUnknown14C() {
        mUnk_D18 = 0;
        mUnk_D1C = 0;
        mSongs   = 0;
        Fill32(0, this->mUnk_48_SaveUnknownD24, sizeof(this->mUnk_48_SaveUnknownD24));
        this->mUnk_50_SaveUnknownD24 = 0;
    }
};

class SaveInfoData {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ unk32 mUnk_004;
    /* 008 */ unk32 mUnk_008;
    /* 00C */ unk32 mUnk_00C;
    /* 010 */ unk32 mUnk_010;
    /* 014 */ unk16 mUnk_014;
    /* 016 */ unk16 mSceneIndex;
    /* 018 */ u8 mInteriorIndex; // "house" index but could be more?
    /* 019 */ u8 mSpawnIndex;
    /* 01A */ unk16 mUnk_01A;
    /* 01C */ unk32 mUnk_01C;
    /* 020 */ unk32 mUnk_020;
    /* 024 */ unk32 mUnk_024;
    /* 028 */ STRUCT_PAD(0x28, 0x40);
    /* 040 */ SaveAdventureFlags mAdventureFlags;
    /* 0C0 */ SaveInventory mInventory;
    /* 0D8 */ SaveInfoSub5 mUnk_0D8;
    /* 0DC */ STRUCT_PAD(0xDC, 0x144);
    /* 144 */ u32 mTrackFlags[2];
    /* 14C */ SaveUnknown14C mUnk_14C;
    /* D8C */ STRUCT_PAD(0xD8C, 0xDA2);
    /* DA2 */ wchar_t mPlayerName[LENGTH_PLAYER_NAME + 1];
    /* DB4 */ STRUCT_PAD(0xDB4, 0xDFE);
    /* DFE */ u16 mUnk_DFE;
    /* E00 */

    SaveInfoData() :
        mUnk_014(0) {}
};

class SaveInfo {
public:
    /* 0000 */ SaveInfoData mSaveInfoData[COUNT_DATA];
    /* 1C00 */

    SaveInfo() {}

    void func_ov000_020a1028(void);
    void func_ov019_020d14fc(void);
};

class SaveSub15 {
public:
    /* 000 */ unk8 mUnk_000[(0x3C4) - (0x000)];
    /* 3C4 */ wchar_t mUnk_3C4[LENGTH_PLAYER_NAME + 1];
    /* 3D6 */ STRUCT_PAD(0x3D6, 0x3FE);
    /* 3FE */ u16 mUnk_3FE;
    /* 400 */

    // SaveSub15() {}
};

class SaveSub5 {
public:
    /* 000 */ SaveSub15 mUnk_000[COUNT_DATA];
    /* 800 */

    void func_ov000_020a12a0();
    void func_ov019_020d14c0();
};

class SaveSub16 {
public:
    /* 00 */ unk8 mUnk_00[0x7E];
    /* 7E */ u16 mUnk_7E;
    /* 80 */
};

class SaveSub6 {
public:
    /* 000 */ SaveSub16 mUnk_00[COUNT_DATA];
    /* 100 */

    void func_ov019_020d15cc();
};

class SaveSub17 {
public:
    // /* 00 */ unk8 mUnk_00[0x7E];
    /* 00 */ u8 mUnk_00;
    /* 01 */ u8 mUnk_01;
    /* 02 */ u8 mUnk_02;
    /* 03 */ u8 mUnk_03; // bool?
    /* 04 */ STRUCT_PAD(0x04, 0x7E);
    /* 7E */ u16 mUnk_7E;
};

class SaveSub7 {
public:
    /* 000 */ SaveSub17 mUnk_00[COUNT_DATA];
    /* 100 */

    void func_ov000_020a10f4();
    void func_ov019_020d1400();
};

class SaveSlot {
public:
    /* 0000 */ SaveInfo mSaveInfo;
    /* 1C00 */ SaveTreasures mTreasures;
    // /* 1D00 */ u8 mUnk_1D00[0x2500 - 0x1D00];
    // /* 2500 */ u8 mUnk_2500[0x100];
    // /* 2600 */ u8 mUnk_2600[0x100];
    /* 1D00 */ SaveSub5 mUnk_1D00;
    /* 2500 */ SaveSub6 mUnk_2500;
    /* 2600 */ SaveSub7 mUnk_2600;
    /* 2700 */

    SaveSlot() {}
    void func_ov000_020a1124(void);

    bool GetAdventureFlag(AdventureFlag flag) {
        return GET_FLAG(this->mSaveInfo.mSaveInfoData[0].mAdventureFlags.data, flag);
    }

    wchar_t *GetPlayerName() {
        return this->mSaveInfo.mSaveInfoData[0].mPlayerName;
    }

    bool IsPlayerNameSet() {
        return this->mSaveInfo.mSaveInfoData[0].mPlayerName[0] != L'\0';
    }

    SaveSub17 *Get2600Ptr() {
        return this->mUnk_2600.mUnk_00;
    }

    u8 Get2600_00() {
        return this->mUnk_2600.mUnk_00[0].mUnk_00;
    }

    u8 Get2600_01() {
        return this->mUnk_2600.mUnk_00[0].mUnk_01;
    }

    u8 Get2600_02() {
        return this->mUnk_2600.mUnk_00[0].mUnk_02;
    }
};

class SaveFileSub1 {
public:
    u16 mUnk_00;

    SaveFileSub1() :
        mUnk_00(0) {}
};

// save data
class SaveFile : public SysObject {
public:
    /* 00000 */ SaveSlot mSlots[MAX_SAVE_SLOTS];
    /* 04E00 */ SaveFileSub1 mUnk_04E00[2][2];
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

class SaveManager {
public:
    /* 000 */ void *mUnk_000; // related to mUnk_184
    /* 000 */ unk8 mUnk_004[0x204 - 0x004];
    /* 204 */ unk16 mUnk_204;
    /* 206 */ unk16 mUnk_206;
    /* 208 */ unk8 mUnk_208;
    /* 208 */ unk8 mUnk_209;
    /* 20A */ u8 mUnk_20A; // bool?
    /* 20B */ unk8 mUnk_20B;
    /* 20C */ unk32 mUnk_20C;
    /* 210 */ unk32 mUnk_210;
    /* 214 */ unk32 mUnk_214;
    /* 218 */ SaveFile *mpSaveFile;
    /* 21C */ unk8 mUnk_21C[0x23C - 0x21C];
    /* 23C */ PTMF<SaveFile>::PTMFCallback mUnk_23C;
    // /* 240 */ void* mUnk_240;

    bool IsUnk20A() {
        return mUnk_20A == 0;
    }

    unk32 IsUnk210() {
        return mUnk_210 == 0;
    }

    SaveSlot *GetSaveSlot(int saveSlotIndex) {
        return &this->mpSaveFile->mSlots[saveSlotIndex];
    }

    SaveSlot *GetSaveSlots() {
        return this->mpSaveFile->mSlots;
    }

    void func_ov000_020a0b2c(UnkCallback param1, unk32 param2);
    void func_ov000_020ba7c8(u16 saveSlotIndex);

    void func_ov019_020d08fc(unk32 param1, PTMF<SaveFile>::PTMFCallback param2);
    bool func_ov019_020d0964(void);
    void func_ov019_020d09dc(u16 saveSlotIndex);
    void func_ov019_020d0a04(u16 saveSlotIndex);
    void func_ov019_020d0ae0(unk32 param1);

    static void func_ov019_020d086c(u16 param1);
    static void func_ov019_020d0a2c(u16 param1);
};

extern SaveManager gSaveManager;
