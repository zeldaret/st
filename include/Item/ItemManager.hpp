#pragma once

#include "Item/Item.hpp"
#include "RefStruct.hpp"
#include "Save/AdventureFlags.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkSystem1.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_027e0ce0_30_00;
class Inventory;

#define IS_ITEM_RESTRICTED(restrictions, itemFlag) (((restrictions) & (1 << (itemFlag))) != 0)

struct UnkStruct_ov000_020afc48 {
    /* 00 */ ItemId_s16 mItemId;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ char mUnk_10[16];
    /* 20 */
};

class UnkStruct_ItemManager_20_00_08 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ bool mUnk_08;
    /* 09 */ bool mUnk_09;
    /* 0A */ unk16 mUnk_0A;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk16 mUnk_10;
    /* 12 */ unk16 mUnk_12;
    /* 14 */

    UnkStruct_ItemManager_20_00_08();
};

class UnkStruct_ItemManager_20_00_20 {
public:
    /* 00 */ unk32 mUnk_00;

    // overlay 31
    void func_ov031_020e096c();
    unk32 func_ov031_020e098c(VecFx32 *param1);
};

class UnkStruct_ItemManager_20_00 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ UnkStruct_ItemManager_20_00_08 mUnk_08;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ UnkStruct_ItemManager_20_00_20 mUnk_20;
    /* 24 */ PAD(0x24, 0x2C);
    /* 2C */ unk16 mUnk_2C;
    /* 2E */ unk16 mUnk_2E; // pad?
    /* 30 */

    UnkStruct_ItemManager_20_00() :
        mUnk_00(0),
        mUnk_04(0),
        mUnk_2C(0) {
        this->mUnk_20.func_ov031_020e096c();
        this->func_ov031_020dba40();
    }

    // overlay 31
    void func_ov031_020d9bd0();
    void func_ov031_020dba40();
    void func_ov031_020dba74(ItemFlag itemFlag);
    bool func_ov031_020dbb38(bool param1, VecFx32 *param2);
    void func_ov031_020dbc18(unk32 param1);
    void func_ov031_020dbc80(bool param1, bool param2);
    void func_ov031_020dbd24(unk32 param1, unk32 param2, unk32 param3);
    void func_ov031_020dbd98(RefStruct ref, VecFx32 *param2, VecFx32 *param3);
};

class UnkStruct_ItemManager_20_04_08_310 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ bool mUnk_0C;
    /* 0D */ PAD(0x0D, 0x10);
    /* 10 */

    UnkStruct_ItemManager_20_04_08_310(); //! TODO: params
};

struct UnkStruct_ItemManager_20_04_32C_00 {
    /* 00 */ RefStruct mRef;
    /* 04 */ u16 mUnk_04;
    /* 08 */ VecFx32 mUnk_08;
    /* 14 */

    UnkStruct_ItemManager_20_04_32C_00() {}
    UnkStruct_ItemManager_20_04_32C_00(const UnkStruct_ItemManager_20_04_32C_00 *other) {
        this->mRef    = other->mRef;
        this->mUnk_04 = other->mUnk_04;
        this->mUnk_08 = other->mUnk_08;
    }
};

class UnkStruct_ItemManager_20_04_32C {
public:
    /* 00 */ UnkStruct_ItemManager_20_04_32C_00 mUnk_00[8];
    /* A0 */ UnkStruct_ItemManager_20_04_32C_00 *mUnk_A0;
    /* A4 */ RefStruct mUnk_A4;
    /* A8 */

    UnkStruct_ItemManager_20_04_32C() :
        mUnk_A0(this->mUnk_00),
        mUnk_A4(0) {}

    UnkStruct_ItemManager_20_04_32C_00 *GetUnk00() const {
        return (UnkStruct_ItemManager_20_04_32C_00 *) this->mUnk_00;
    }

    const UnkStruct_ItemManager_20_04_32C_00 *GetUnkA0() const {
        return this->mUnk_A0;
    }

    const u32 GetCount() const {
        return this->mUnk_A0 - this->mUnk_00;
    }

    void UnkAction1(UnkStruct_ItemManager_20_04_32C_00 *pEntry) {
        this->mUnk_A0--;

        while (pEntry != this->mUnk_A0) {
            pEntry[0] = pEntry[1];
            pEntry++;
        }
    }

    // overlay 31
    s32 func_ov031_020d9ccc(RefStruct ref);
    bool func_ov031_020d9d10(RefStruct ref, u16 param2);
    bool func_ov031_020d9f34(RefStruct ref);
    bool func_ov031_020d9fd0(u16 param1, VecFx32 *param2);
    void func_ov031_020da144(unk32 param1);

    static Actor *func_ov031_020d9c64(RefStruct ref);
    static void func_ov031_020da104(RefStruct *pRef, UnkStruct_ItemManager_20_04_32C *thisx, u16 param3);
};

class UnkStruct_ItemManager_20_04_08 : public LinkList<UnkStruct_ItemManager_20_04_08> {
public:
    /* 000 (vtable) */
    /* 004 (base) */
    /* 00C */ unk32 mUnk_00C;
    /* 010 */ PAD(0x10, 0x310);
    /* 310 */ UnkStruct_ItemManager_20_04_08_310 mUnk_310;
    /* 320 */ unk32 mUnk_320;
    /* 324 */ unk16 mUnk_324;
    /* 326 */ bool mUnk_326;
    /* 327 */ bool mUnk_327;
    /* 328 */ unk32 mUnk_328;
    /* 32C */ UnkStruct_ItemManager_20_04_32C mUnk_32C;
    /* 3D4 */

    UnkStruct_ItemManager_20_04_08();
    ~UnkStruct_ItemManager_20_04_08();

    // data_ov031_02112b6c
    /* 00 */ virtual void vfunc_00();
    /* 04 */

    // overlay 31
    void func_ov031_020dc480();
    bool func_ov031_020dc700(VecFx32 *param1, unk32 param2, VecFx32 *param3, RefStruct *param4);
    void func_ov031_020dc8a0(void *param1, bool param2, u32 param3);
};

class UnkStruct_ItemManager_20_04 {
public:
    /* 000 */ RefStruct mRef;
    /* 004 */ bool mUnk_004; // mIsBoomerangAlive?
    /* 005 */ unk8 mUnk_005; // pad?
    /* 006 */ unk8 mUnk_006; // pad?
    /* 007 */ unk8 mUnk_007; // pad?
    /* 008 */ UnkStruct_ItemManager_20_04_08 mUnk_008;
    /* 3DC */

    UnkStruct_ItemManager_20_04();
    ~UnkStruct_ItemManager_20_04();

    // overlay 31
    void func_ov031_020db338();
    void func_ov031_020db350(ItemFlag itemFlag);
    bool func_ov031_020db374(VecFx32 *param1);
    bool func_ov031_020db3e8();
    bool func_ov031_020db400(const VecFx32 *pInitialPos, UnkAngleStruct initialAngle, RefStruct ref);
    unk32 func_ov031_020db498(VecFx32 *param1);
    void func_ov031_020db4f0(bool param1, bool param2);
    void func_ov031_020db528(void *param1);
};

class UnkStruct_ItemManager_20_08 {
public:
    /* 00 */ u16 mUnk_00;
    /* 02 */ u16 mUnk_02;
    /* 04 */ VecFx32 mUnk_04;
    /* 10 */ u16 mUnk_10;
    /* 12 */ u8 mUnk_12;
    /* 13 */ u8 mUnk_13;
    /* 14 */

    UnkStruct_ItemManager_20_08() {
        this->mUnk_10 = 0;
        this->mUnk_00 = 0;
        this->mUnk_02 = 0x01;
        this->func_ov031_020db5b4();
    }

    // overlay 31
    void func_ov031_020d9658();
    void func_ov031_020db5b4();
    void func_ov031_020db5d4(ItemFlag itemFlag);
    u16 func_ov031_020db5e8();
    void func_ov031_020db614(u16 param1, const VecFx32 *param2);
    unk32 func_ov031_020db6a4(VecFx32 *param1);
    void func_ov031_020db704(bool param1, bool param2);
};

class UnkStruct_ItemManager_20_0C {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk8 mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ unk8 mUnk_06;
    /* 07 */ unk8 mUnk_07;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A; // pad?
    /* 0C */

    UnkStruct_ItemManager_20_0C();
    ~UnkStruct_ItemManager_20_0C();

    // overlay 31
    void func_ov031_020db954();
    void func_ov031_020db958(bool param1, bool param2);
    void func_ov031_020dba3c(void *param1);
};

class UnkStruct_ItemManager_20_10 {
public:
    /* 00 */ RefElem mUnk_00[3];

    UnkStruct_ItemManager_20_10() {
        this->func_ov031_020db2b0();
    }

    // overlay 31
    void func_ov031_020db2b0();
    s32 func_ov031_020db2dc();
};

class UnkStruct_ItemManager_20_14 {
public:
    /* 00 */ UnkSystem1_ov000_Derived1 mUnk_00;
    /* 14 */ unk32 mUnk_14;
    /* 18 */

    UnkStruct_ItemManager_20_14();

    ~UnkStruct_ItemManager_20_14() {
        this->func_ov031_020db7d8();
    }

    // overlay 31
    void func_ov031_020db7d8();
    void func_ov031_020db7f4();

    // overlay 53
    unk32 func_ov053_0213caf0();
};

class UnkStruct_ItemManager_20 {
public:
    /* 00 */ UnkStruct_ItemManager_20_00 *mUnk_00;
    /* 04 */ UnkStruct_ItemManager_20_04 *mUnk_04;
    /* 08 */ UnkStruct_ItemManager_20_08 *mUnk_08;
    /* 0C */ UnkStruct_ItemManager_20_0C *mUnk_0C;
    /* 10 */ UnkStruct_ItemManager_20_10 *mUnk_10;
    /* 14 */ UnkStruct_ItemManager_20_14 mUnk_14;
    /* 2C */

    UnkStruct_ItemManager_20();
    ~UnkStruct_ItemManager_20();

    // overlay 31
    void func_ov031_020db844(ItemFlag itemFlag);
    bool func_ov031_020db874(ItemFlag itemFlag);
    void func_ov031_020db8cc();
    bool func_ov031_020db8f8(UnkStruct_027e0ce0_30_00 *param1);

    // overlay 101
    void func_ov101_02182d5c();

    // overlay 102
    void func_ov102_02182fa8(bool param1, bool param2);
    void func_ov102_02182ffc(void *param1);
};

struct InvImportData {
    /* 00 */ u32 quiverCapacity : 2;
    /*    */ u32 bombBagCapacity : 2;
    /*    */ u32 arrowAmount : 6;
    /*    */ u32 bombsAmount : 6;
    /*    */ u32 pad : 12;
    /*    */ u32 potion1 : 2;
    /*    */ u32 potion2 : 2;
    /* 04 */ u32 flags[2];
    /* 0C */ u16 numRupees;
    /* 0E */ u16 unk_0E;
    /* 10 */ s8 equippedItem;
    /* 14 */
};

class Inventory {
private:
    /* 00 */ ItemFlag mEquippedItem;
    /* 04 */ ItemFlag mForcedItem;
    /* 08 */ u32 mFlags[2]; // inventory items bitfield & collection/equipment bitfield
    /* 10 */ u16 mNumRupees;
    /* 12 */ u16 mUnk_12;           // "toggle bitfield"
    /* 14 */ u16 mItemRestrictions; // bitfield
    /* 16 */ u8 mTearsAmount;       // number of tears of light
    /* 17 */ u8 mKeyAmount;         // number of small keys
    /* 18 */ UpgradeCapacity mQuiverCapacity;
    /* 19 */ UpgradeCapacity mBombBagCapacity;
    /* 1A */ u8 mArrowAmount;
    /* 1B */ u8 mBombAmount;
    /* 1C */ u8 mPotions[MAX_POTIONS];
    /* 1E */ unk16 mUnk_1E; // pad?
    /* 20 */

public:
    // clang-format off
    const ItemFlag GetCurrentItem() const { return this->mEquippedItem; }
    void SetCurrentItem(ItemFlag item) { this->mEquippedItem = item; }
    const bool HasItem(int flag) const { return GET_FLAG(this->mFlags, flag); }
    const u16 GetNumRupees() const { return this->mNumRupees; }
    const u16 GetRestrictions() const { return this->mItemRestrictions; }
    const bool HasUnk12(int value) const { return (this->mUnk_12 & value) != 0; }
    const bool HasRestriction(int flag) const { return IS_ITEM_RESTRICTED(this->mItemRestrictions, flag); }
    const u8 GetTearsAmount() const { return this->mTearsAmount; }
    void SetTearsAmount(u8 amount) { this->mTearsAmount = amount; }
    const u8 GetKeyAmount() const { return this->mKeyAmount; }
    void SetKeyAmount(u8 amount) { this->mKeyAmount = amount; }
    const UpgradeCapacity GetQuiverCap() const { return this->mQuiverCapacity; }
    void SetQuiverCap(UpgradeCapacity value) { this->mQuiverCapacity = value; }
    const UpgradeCapacity GetBombsCap() const { return this->mBombBagCapacity; }
    void SetBombsCap(UpgradeCapacity value) { this->mBombBagCapacity = value; }
    const UpgradeCapacity GetArrowAmount() const { return this->mArrowAmount; }
    void SetArrowAmount(UpgradeCapacity value) { this->mArrowAmount = value; }
    const UpgradeCapacity GetBombAmount() const { return this->mBombAmount; }
    void SetBombAmount(UpgradeCapacity value) { this->mBombAmount = value; }

    void FlipUnk12(int value) { this->mUnk_12 ^= value; }
    // clang-format on

    void SetNextQuiverCapacity() {
        if (this->mQuiverCapacity < UpgradeCapacity_Tier3) {
            this->mQuiverCapacity++;
        }

        this->mArrowAmount = this->GetQuiverCapacity();
    }

    void SetNextBombBagCapacity() {
        if (this->mBombBagCapacity < UpgradeCapacity_Tier3) {
            this->mBombBagCapacity++;
        }

        this->mBombAmount = this->GetBombBagCapacity();
    }

    Inventory();
    ~Inventory();

    // overlay 0
    void SetFlag(ItemFlag itemFlag);
    void ClearFlag(ItemFlag itemFlag);
    bool HasRecruitUniform();
    unk32 func_ov000_020a86a4();
    u32 GetItemAmount(ItemFlag itemFlag);
    u8 GetQuiverCapacity();
    u8 GetBombBagCapacity();
    void GiveRupees(s32 amount, bool param2, bool param3);
    void GiveSmallKeys(s32 amount);
    void GiveArrows(s32 amount);
    void GiveBombs(s32 amount);
    bool TryEquipForcedItem();
    void GivePotion(PotionType type);
    bool HasPotion();
    bool HasPurplePotion();
    void RemovePurplePotion();
    bool PotionSlotsFull();

    // overlay 1
    void func_ov001_020bb8bc(const InvImportData *pSrc);
    void func_ov001_020bb9f8();
    void func_ov001_020bba54();
    void func_ov001_020bba6c();

    // overlay 96
    void func_ov096_02179b20();

    // overlay 110
    bool func_ov110_02184a40(ItemId itemId);
};

class ItemManager {
private:
    /* 00 */ Inventory mInventory;
    /* 20 */ UnkStruct_ItemManager_20 *mUnk_20;
    /* 24 */ unk8 mUnk_24;
    /* 24 */ unk8 mUnk_25;
    /* 24 */ unk8 mUnk_26;
    /* 24 */ unk8 mUnk_27;
    /* 28 */

public:
    // clang-format off
    Inventory* GetInventory() { return &this->mInventory; }
    const Inventory* GetInventory() const { return &this->mInventory; }

    const ItemFlag GetCurrentItem() const { return this->GetInventory()->GetCurrentItem(); }
    void SetCurrentItem(ItemFlag item) { this->GetInventory()->SetCurrentItem(item); }
    const bool HasItem(int flag) const { return this->GetInventory()->HasItem(flag); }
    const u16 GetNumRupees() const { return this->GetInventory()->GetNumRupees(); }
    const u16 GetRestrictions() const { return this->GetInventory()->GetRestrictions(); }
    const bool HasUnk12(int value) const { return this->GetInventory()->HasUnk12(value); }
    const bool HasRestriction(int flag) const { return this->GetInventory()->HasRestriction(flag); }
    const u8 GetTearsAmount() const { return this->GetInventory()->GetTearsAmount(); }
    const u8 GetKeyAmount() const { return this->GetInventory()->GetKeyAmount(); }
    void SetTearsAmount(u8 amount) { this->GetInventory()->SetTearsAmount(amount); }
    void SetKeyAmount(u8 amount) { this->GetInventory()->SetKeyAmount(amount); }
    const UpgradeCapacity GetQuiverCap() const { return this->GetInventory()->GetQuiverCap(); }
    void SetQuiverCap(UpgradeCapacity value) { this->GetInventory()->SetQuiverCap(value); }
    const UpgradeCapacity GetBombsCap() const { return this->GetInventory()->GetBombsCap(); }
    void SetBombsCap(UpgradeCapacity value) { this->GetInventory()->SetBombsCap(value); }
    const UpgradeCapacity GetArrowAmount() const { return this->GetInventory()->GetArrowAmount(); }
    void SetArrowAmount(UpgradeCapacity value) { this->GetInventory()->SetArrowAmount(value); }
    const UpgradeCapacity GetBombAmount() const { return this->GetInventory()->GetBombAmount(); }
    void SetBombAmount(UpgradeCapacity value) { this->GetInventory()->SetBombAmount(value); }

    void FlipUnk12(int value) { this->GetInventory()->FlipUnk12(value); }
    // clang-format on

    ItemManager();
    ~ItemManager() {}

    // overlay 0
    void func_ov000_020a89bc();
    bool func_ov000_020a89d4();
    bool func_ov000_020a8a0c();
    void func_ov000_020a8a5c();
    bool func_ov000_020a8a74(UnkStruct_027e0ce0_30_00 *param1);
    UnkStruct_ItemManager_20_00 *func_ov000_020a8a90();
    UnkStruct_ItemManager_20_04 *func_ov000_020a8aa4();
    UnkStruct_ItemManager_20_0C *func_ov000_020a8ab8();
    UnkStruct_ItemManager_20_10 *func_ov000_020a8acc();

    static UnkStruct_ov000_020afc48 *func_ov000_020a8974(ItemFlag itemFlag);
    static ItemFlag GetEquippedItemFlag(ItemId itemId);

    // overlay 1
    void func_ov001_020bc24c();
    void func_ov001_020bc27c();
    void func_ov001_020bc29c();
    void func_ov001_020bc2b8();

    // overlay 17
    void func_ov017_020bd2a0(bool param1, bool param2);
    void func_ov017_020bd2e8(void *param1);

    // overlay 110
    static u32 GetBmgIDFromItem(ItemId itemId);
    static AdventureFlag GetAdvFlagFromItem(ItemId itemId);
};

struct TreasureManager_5C {
    /* 00 */ u16 unk_00;
    /* 02 */ u8 unk_02[32];
    /* 22 */ u16 unk_22;
    /* 24 */
};

class TreasureManager : public AutoInstance<TreasureManager> {
public:
    /* 00 */ unk16 mUnk_00[30];
    /* 3C */ s16 mUnk_3C[TreasureType_Max]; // treasures
    /* 5C */ TreasureManager_5C mUnk_5C;
    /* 80 */

    TreasureManager();
    ~TreasureManager();

    // overlay 0
    void func_ov000_020a9b10(void *param1);
    static unk32 func_ov000_020a9b2c(unk32 param1);
    static unk32 func_ov000_020a9b3c(unk32 param1);
    unk32 func_ov000_020a9b4c(unk32 param1);
    bool func_ov000_020a9c4c(TreasureType type);
    bool func_ov000_020a9c64();
    unk32 func_ov000_020a9c90(TreasureType type);
    bool func_ov000_020a9ca4(TreasureType type);
    void func_ov000_020a9cbc(TreasureType type, s32 amount);
    static u32 func_ov000_020a9cfc(u8 *param1, u8 param2);
    static unk32 func_ov000_020a9d78(unk32 param1);
    static unk32 func_ov000_020a9e14(unk32 param1);
    static unk32 func_ov000_020a9eb0(unk32 param1);
    static unk32 func_ov000_020a9f4c(unk32 param1);
    ItemId func_ov000_020aa02c(ItemId itemId);
    void func_ov000_020aa0ac(ItemId itemId);

    static TreasureManager *Create();

    // overlay 1
    static void Destroy();
};

extern TreasureManager *gpTreasureManager;
extern UnkStruct_ov000_020afc48 data_ov000_020afc48[ItemFlag_EQUIP_COUNT];
extern const u8 gQuiverCapacities[UpgradeCapacity_Max];
extern const u8 gBombBagCapacities[UpgradeCapacity_Max];
