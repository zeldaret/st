#pragma once

#include "Item/Item.hpp"
#include "Save/AdventureFlags.hpp"
#include "System/SysNew.hpp"
#include "global.h"
#include "types.h"

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

class UnkStruct_ItemManager_20_14 {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;

    /* 00 */ virtual void vfunc_00();                //! TODO: name symbol func_ov000_020667d8
    /* 04 */ virtual void vfunc_04();                //! TODO: name symbol func_ov000_020667f4
    /* 08 */ virtual void vfunc_08();                //! TODO: name symbol func_ov000_020673c8
    /* 0C */ virtual void vfunc_0C();                //! TODO: name symbol func_ov000_02067434
    /* 10 */ virtual void vfunc_10();                //! TODO: name symbol func_ov000_02067474
    /* 14 */ virtual void vfunc_14();                //! TODO: name symbol func_ov000_02066dfc
    /* 18 */ virtual void vfunc_18();                //! TODO: name symbol func_ov000_020669d8
    /* 1C */ virtual void vfunc_1C();                //! TODO: name symbol func_ov000_02067234
    /* 20 */ virtual void vfunc_20();                //! TODO: name symbol func_ov000_0206723c
    /* 24 */ virtual ~UnkStruct_ItemManager_20_14(); //! TODO: name symbols func_ov000_020672ac, func_ov000_020672f4

    UnkStruct_ItemManager_20_14();

    unk32 func_ov053_0213caf0();
};

class UnkStruct_ItemManager_20 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ UnkStruct_ItemManager_20_14 mUnk_14;

    bool func_ov031_020db874(ItemFlag itemFlag);
    void func_ov031_020db8cc();
    bool func_ov031_020db8f8();
};

class ItemManager : public SysObject {
public:
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
    /* 1E */ unk16 mUnk_1E;
    /* 20 */ UnkStruct_ItemManager_20 *mUnk_20;
    /* 24 */ unk8 mUnk_24;
    /* 24 */ unk8 mUnk_25;
    /* 24 */ unk8 mUnk_26;
    /* 24 */ unk8 mUnk_27;
    /* 28 */

    u8 GetTearsAmount() const {
        return this->mTearsAmount;
    }

    u8 GetKeyAmount() const {
        return this->mKeyAmount;
    }

    ItemManager();
    ~ItemManager();

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
    static UnkStruct_ov000_020afc48 *func_ov000_020a8974(ItemFlag itemFlag);
    static ItemFlag GetEquippedItemFlag(ItemId itemId);
    void func_ov000_020a89bc();
    bool func_ov000_020a89d4();
    bool func_ov000_020a8a0c();
    void func_ov000_020a8a5c();
    bool func_ov000_020a8a74();
    unk32 func_ov000_020a8a90();
    unk32 func_ov000_020a8aa4();
    unk32 func_ov000_020a8ab8();
    unk32 func_ov000_020a8acc();

    void func_ov001_020bb9f8();

    bool func_ov110_02184a40(ItemId itemId);
    static u32 GetBmgIDFromItem(ItemId itemId);
    static AdventureFlag GetAdvFlagFromItem(ItemId itemId);
};

class TreasureManager : public AutoInstance<TreasureManager>, public ItemManager {
public:
    /* 28 */ unk8 mUnk_28[0x3C - 0x28];
    /* 3C */ s16 mUnk_3C[TreasureType_Max]; // treasures
    /* 5C */ unk16 mUnk_5C;
    /* 5E */ unk16 mUnk_5E;
    /* 60 */ STRUCT_PAD(0x60, 0x7E);
    /* 7E */ u16 mUnk_7E;
    /* 80 */

    TreasureManager();
    ~TreasureManager();

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
};

extern TreasureManager *gpTreasureManager;
extern UnkStruct_ov000_020afc48 data_ov000_020afc48[ItemFlag_EQUIP_COUNT];
extern const u8 gQuiverCapacities[UpgradeCapacity_Max];
extern const u8 gBombBagCapacities[UpgradeCapacity_Max];
