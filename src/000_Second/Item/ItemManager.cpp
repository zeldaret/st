#include "Item/ItemManager.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
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

// SetInventoryFlag?
ARM void ItemManager::func_ov000_020a863c(ItemFlag itemFlag) {
    SET_FLAG(this->mUnk_08, itemFlag);
}

// removeEquipmentItem
ARM void ItemManager::func_ov000_020a865c(ItemFlag itemFlag) {
    UNSET_FLAG(this->mUnk_08, itemFlag);
}

ARM bool ItemManager::func_ov000_020a8680() {
    return GET_FLAG(this->mUnk_08, ItemFlag_RecruitUniform) && (this->mUnk_12 & 1);
}

ARM unk32 ItemManager::func_ov000_020a86a4() {
    if (GET_FLAG(this->mUnk_08, ItemFlag_AncientShield) && (this->mUnk_12 & 2)) {
        return 1;
    }

    if (GET_FLAG(this->mUnk_08, ItemFlag_Shield)) {
        return 0;
    }

    return -1;
}

// getItemAmmo
ARM u32 ItemManager::func_ov000_020a86d0(ItemFlag itemFlag) {
    bool canUse = GET_FLAG(this->mUnk_08, itemFlag);

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

// getMaxArrows
ARM u8 ItemManager::func_ov000_020a8728() {
    if (GET_FLAG(this->mUnk_08, ItemFlag_Bow) == 0) {
        return 0;
    }

    return gQuiverCapacities[this->mQuiverCapacity];
}

// getMaxBombs
ARM u8 ItemManager::func_ov000_020a8748() {
    if (GET_FLAG(this->mUnk_08, ItemFlag_Bombs) == 0) {
        return 0;
    }

    return gBombBagCapacities[this->mBombBagCapacity];
}

ARM void ItemManager::GiveRupees(s32 amount, bool param2, bool param3) {
    u16 prevNumRupees = this->mNumRupees;
    s32 newAmount     = this->mNumRupees + amount;

    if (newAmount > 9999) {
        newAmount = 9999;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mNumRupees = newAmount;

    if (param3) {
        data_ov024_020d8698->func_ov024_020cd368(param2 && prevNumRupees != this->mNumRupees, 1);
    }
}

// addKeys
ARM void ItemManager::func_ov000_020a87c8(s32 amount) {
    s32 newAmount = this->mKeyAmount + amount;

    if (newAmount > MAX_KEYS) {
        newAmount = MAX_KEYS;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mKeyAmount = newAmount;
}

// gainArrows
ARM void ItemManager::func_ov000_020a87ec(s32 amount) {
    s32 maxArrows = this->func_ov000_020a8728();
    s32 newAmount = this->mArrowAmount + amount;

    if (newAmount > maxArrows) {
        newAmount = maxArrows;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mArrowAmount = newAmount;
}

// gainBombs
ARM void ItemManager::func_ov000_020a8820(s32 amount) {
    s32 maxBombs  = this->func_ov000_020a8748();
    s32 newAmount = this->mBombAmount + amount;

    if (newAmount > maxBombs) {
        newAmount = maxBombs;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mBombAmount = newAmount;
}

ARM bool ItemManager::func_ov000_020a8854() {
    if (this->mForcedItem != ItemFlag_None) {
        this->mEquippedItem = this->mForcedItem;
        this->mForcedItem   = ItemFlag_None;
        data_ov024_020d8698->func_ov024_020cd458(this->mEquippedItem, 0);
        return true;
    }

    return false;
}

// gainPotion
ARM void ItemManager::func_ov000_020a888c(PotionType type) {
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

// hasPotion
ARM bool ItemManager::func_ov000_020a88c8() {
    for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
        if (this->mPotions[i] != PotionType_None) {
            return true;
        }
    }

    return false;
}

// hasPurplePotion
ARM bool ItemManager::func_ov000_020a88f4() {
    for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
        if (this->mPotions[i] == PotionType_Purple) {
            return true;
        }
    }

    return false;
}

// removePurplePotion
ARM void ItemManager::func_ov000_020a8920() {
    for (s32 i = ARRAY_LEN(this->mPotions) - 1; i >= 0; i--) {
        if (this->mPotions[i] == PotionType_Purple) {
            this->mPotions[i] = PotionType_None;
            return;
        }
    }
}

// potionInventoryFull
ARM bool ItemManager::func_ov000_020a8948() {
    for (u32 i = 0; i < ARRAY_LEN(this->mPotions); i++) {
        if (this->mPotions[i] == PotionType_None) {
            return false;
        }
    }
    return true;
}

ARM UnkStruct_ov000_020afc48 *ItemManager::func_ov000_020a8974(ItemFlag itemFlag) {
    return &data_ov000_020afc48[itemFlag];
}

// GetEquipItemFlag?
ARM ItemFlag ItemManager::func_ov000_020a8984(ItemId itemId) {
    ItemFlag itemFlag;

    for (itemFlag = 0; itemFlag < ItemFlag_EQUIP_COUNT; itemFlag++) {
        UnkStruct_ov000_020afc48 *pEquipItem = ItemManager::func_ov000_020a8974(itemFlag);

        if (itemId == pEquipItem->mItemId) {
            return itemFlag;
        }
    }

    return ItemFlag_None;
}

THUMB void ItemManager::func_ov000_020a89bc() {
    if (this->mUnk_20->mUnk_14.func_ov053_0213caf0() != 0) {
        this->mUnk_24 = 0;
    }
}

ARM bool ItemManager::func_ov000_020a89d4() {
    if (this->mUnk_20 != NULL) {
        return (this->mUnk_20->mUnk_14.mUnk_08 & 0xFFFF) != 0xFFFF;
    }

    return false;
}

ARM bool ItemManager::func_ov000_020a8a0c() {
    if (this->mUnk_20 == NULL || this->mEquippedItem == ItemFlag_None ||
        IS_ITEM_RESTRICTED(this->mItemRestrictions, this->mEquippedItem) ||
        this->func_ov000_020a86d0(this->mEquippedItem) == 0) {
        return false;
    }

    return this->mUnk_20->func_ov031_020db874(this->mEquippedItem);
}

ARM void ItemManager::func_ov000_020a8a5c() {
    if (this->mUnk_20 == NULL) {
        return;
    }

    this->mUnk_20->func_ov031_020db8cc();
}

ARM bool ItemManager::func_ov000_020a8a74() {
    if (this->mUnk_20 == NULL) {
        return false;
    }

    return this->mUnk_20->func_ov031_020db8f8();
}

ARM unk32 ItemManager::func_ov000_020a8a90() {
    return this->mUnk_20 != NULL ? this->mUnk_20->mUnk_00 : 0;
}

ARM unk32 ItemManager::func_ov000_020a8aa4() {
    return this->mUnk_20 != NULL ? this->mUnk_20->mUnk_04 : 0;
}

ARM unk32 ItemManager::func_ov000_020a8ab8() {
    return this->mUnk_20 != NULL ? this->mUnk_20->mUnk_0c : 0;
}

ARM unk32 ItemManager::func_ov000_020a8acc() {
    return this->mUnk_20 != NULL ? this->mUnk_20->mUnk_10 : 0;
}
