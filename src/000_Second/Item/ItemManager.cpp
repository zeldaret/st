#include "Item/ItemManager.hpp"
#include "Unknown/UICounterManager.hpp"
#include "global.h"

const u8 gQuiverCapacities[UpgradeCapacity_Max] = {
    CAPACITY_QUIVER_TIER_1,
    CAPACITY_QUIVER_TIER_2,
    CAPACITY_QUIVER_TIER_3,
};

const u8 gBombBagCapacities[UpgradeCapacity_Max] = {
    CAPACITY_BOMB_BAG_TIER_1,
    CAPACITY_BOMB_BAG_TIER_2,
    CAPACITY_BOMB_BAG_TIER_3,
};

void ItemManager::SetFlag(ItemFlag itemFlag) {
    SET_FLAG(this->mFlags, itemFlag);
}

void ItemManager::ClearFlag(ItemFlag itemFlag) {
    UNSET_FLAG(this->mFlags, itemFlag);
}

bool ItemManager::HasRecruitUniform() {
    return GET_FLAG(this->mFlags, ItemFlag_RecruitUniform) && (this->mUnk_12 & 1);
}

unk32 ItemManager::func_ov000_020a86a4() {
    if (GET_FLAG(this->mFlags, ItemFlag_AncientShield) && (this->mUnk_12 & 2)) {
        return 1;
    }

    if (GET_FLAG(this->mFlags, ItemFlag_Shield)) {
        return 0;
    }

    return -1;
}

u32 ItemManager::GetItemAmount(ItemFlag itemFlag) {
    bool canUse = GET_FLAG(this->mFlags, itemFlag);

    switch (itemFlag) {
        case ItemFlag_Bow:
            return canUse ? this->mArrowAmount : 0;
        case ItemFlag_Bombs:
            return canUse ? this->mBombAmount : 0;
        default:
            break;
    }

    return canUse;
}

u8 ItemManager::GetQuiverCapacity() {
    if (GET_FLAG(this->mFlags, ItemFlag_Bow) == 0) {
        return 0;
    }

    return gQuiverCapacities[this->mQuiverCapacity];
}

u8 ItemManager::GetBombBagCapacity() {
    if (GET_FLAG(this->mFlags, ItemFlag_Bombs) == 0) {
        return 0;
    }

    return gBombBagCapacities[this->mBombBagCapacity];
}

void ItemManager::GiveRupees(s32 amount, bool param2, bool param3) {
    u16 prevNumRupees = this->mNumRupees;
    s32 newAmount     = this->mNumRupees + amount;

    if (newAmount > 9999) {
        newAmount = 9999;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mNumRupees = newAmount;

    if (param3) {
        gpUICounterManager->func_ov024_020cd368(param2 && prevNumRupees != this->mNumRupees, true);
    }
}

void ItemManager::GiveSmallKeys(s32 amount) {
    s32 newAmount = this->mKeyAmount + amount;

    if (newAmount > MAX_KEYS) {
        newAmount = MAX_KEYS;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mKeyAmount = newAmount;
}

void ItemManager::GiveArrows(s32 amount) {
    s32 maxArrows = this->GetQuiverCapacity();
    s32 newAmount = this->mArrowAmount + amount;

    if (newAmount > maxArrows) {
        newAmount = maxArrows;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mArrowAmount = newAmount;
}

void ItemManager::GiveBombs(s32 amount) {
    s32 maxBombs  = this->GetBombBagCapacity();
    s32 newAmount = this->mBombAmount + amount;

    if (newAmount > maxBombs) {
        newAmount = maxBombs;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mBombAmount = newAmount;
}

bool ItemManager::TryEquipForcedItem() {
    if (this->mForcedItem != ItemFlag_None) {
        this->mEquippedItem = this->mForcedItem;
        this->mForcedItem   = ItemFlag_None;
        gpUICounterManager->func_ov024_020cd458(this->mEquippedItem, false);
        return true;
    }

    return false;
}

void ItemManager::GivePotion(PotionType type) {
    switch (type) {
        case PotionType_Red:
        case PotionType_Purple:
        case PotionType_Yellow:
            for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
                if (this->mPotions[i] == PotionType_None) {
                    this->mPotions[i] = type;
                    break;
                }
            }
            break;
        default:
            break;
    }
}

bool ItemManager::HasPotion() {
    for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
        if (this->mPotions[i] != PotionType_None) {
            return true;
        }
    }

    return false;
}

bool ItemManager::HasPurplePotion() {
    for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
        if (this->mPotions[i] == PotionType_Purple) {
            return true;
        }
    }

    return false;
}

void ItemManager::RemovePurplePotion() {
    for (s32 i = ARRAY_LEN(this->mPotions) - 1; i >= 0; i--) {
        if (this->mPotions[i] == PotionType_Purple) {
            this->mPotions[i] = PotionType_None;
            return;
        }
    }
}

bool ItemManager::PotionSlotsFull() {
    for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
        if (this->mPotions[i] == PotionType_None) {
            return false;
        }
    }

    return true;
}

UnkStruct_ov000_020afc48 *ItemManager::func_ov000_020a8974(ItemFlag itemFlag) {
    return &data_ov000_020afc48[itemFlag];
}

ItemFlag ItemManager::GetEquippedItemFlag(ItemId itemId) {
    ItemFlag itemFlag;

    for (itemFlag = 0; itemFlag < ItemFlag_EQUIP_COUNT; itemFlag++) {
        UnkStruct_ov000_020afc48 *pEquipItem = ItemManager::func_ov000_020a8974(itemFlag);

        if (itemId == pEquipItem->mItemId) {
            return itemFlag;
        }
    }

    return ItemFlag_None;
}

THUMB_BEGIN

void ItemManager::func_ov000_020a89bc() {
    if (this->mUnk_20->mUnk_14.func_ov053_0213caf0() != 0) {
        this->mUnk_24 = 0;
    }
}

THUMB_END

bool ItemManager::func_ov000_020a89d4() {
    if (this->mUnk_20 != NULL) {
        return (this->mUnk_20->mUnk_14.mUnk_08 & 0xFFFF) != 0xFFFF;
    }

    return false;
}

bool ItemManager::func_ov000_020a8a0c() {
    if (this->mUnk_20 == NULL || this->mEquippedItem == ItemFlag_None ||
        IS_ITEM_RESTRICTED(this->mItemRestrictions, this->mEquippedItem) || this->GetItemAmount(this->mEquippedItem) == 0) {
        return false;
    }

    return this->mUnk_20->func_ov031_020db874(this->mEquippedItem);
}

void ItemManager::func_ov000_020a8a5c() {
    if (this->mUnk_20 == NULL) {
        return;
    }

    this->mUnk_20->func_ov031_020db8cc();
}

bool ItemManager::func_ov000_020a8a74() {
    if (this->mUnk_20 == NULL) {
        return false;
    }

    return this->mUnk_20->func_ov031_020db8f8();
}

unk32 ItemManager::func_ov000_020a8a90() {
    return this->mUnk_20 != NULL ? this->mUnk_20->mUnk_00 : 0;
}

unk32 ItemManager::func_ov000_020a8aa4() {
    return this->mUnk_20 != NULL ? this->mUnk_20->mUnk_04 : 0;
}

unk32 ItemManager::func_ov000_020a8ab8() {
    return this->mUnk_20 != NULL ? this->mUnk_20->mUnk_0C : 0;
}

unk32 ItemManager::func_ov000_020a8acc() {
    return this->mUnk_20 != NULL ? this->mUnk_20->mUnk_10 : 0;
}
