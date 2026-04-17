#include "Item/ItemManager.hpp"
#include "global.h"

extern ItemId data_ov000_020afde8[];

ARM void TreasureManager::func_ov000_020a9b10() {}
ARM void TreasureManager::func_ov000_020a9b2c() {}
ARM void TreasureManager::func_ov000_020a9b3c() {}
ARM void TreasureManager::func_ov000_020a9b4c() {}

ARM bool TreasureManager::func_ov000_020a9c4c(TreasureType type) {
    return this->mUnk_3C[type] >= 0;
}

// hasAnyTreasure
ARM bool TreasureManager::func_ov000_020a9c64() {
    for (s32 i = 0; i < ARRAY_LEN(this->mUnk_3C); i++) {
        if (this->mUnk_3C[i] >= 0) {
            return true;
        }
    }

    return false;
}

// getTreasureAmount
ARM unk32 TreasureManager::func_ov000_020a9c90(TreasureType type) {
    if (this->mUnk_3C[type] >= 0) {
        return this->mUnk_3C[type];
    }

    return 0;
}

// isTreasureAmountMaxed
ARM bool TreasureManager::func_ov000_020a9ca4(TreasureType type) {
    return this->func_ov000_020a9c90(type) >= MAX_TREASURE;
}

// gainTreasure
ARM void TreasureManager::func_ov000_020a9cbc(TreasureType type, s32 amount) {
    s32 newAmount;

    if (this->mUnk_3C[type] < 0) {
        this->mUnk_3C[type] = 0;
    }

    newAmount = this->mUnk_3C[type] + amount;

    if (newAmount > MAX_TREASURE) {
        newAmount = MAX_TREASURE;
    } else if (newAmount < 0) {
        newAmount = 0;
    }

    this->mUnk_3C[type] = newAmount;
}

ARM unk32 TreasureManager::func_ov000_020a9d78(unk32 param1) {}
ARM unk32 TreasureManager::func_ov000_020a9e14(unk32 param1) {}
ARM unk32 TreasureManager::func_ov000_020a9eb0(unk32 param1) {}
ARM unk32 TreasureManager::func_ov000_020a9f4c(unk32 param1) {}

ARM ItemId TreasureManager::func_ov000_020aa02c(ItemId itemId) {
    switch (itemId) {
        case ItemId_RandCommonTreasure:
            return data_ov000_020afde8[TreasureManager::func_ov000_020a9d78(-1)];
        case ItemId_RandUncommonTreasure:
            return data_ov000_020afde8[TreasureManager::func_ov000_020a9e14(-1)];
        case ItemId_RandRareTreasure:
            return data_ov000_020afde8[TreasureManager::func_ov000_020a9eb0(-1)];
        case ItemId_RandLegendaryTreasure:
            return data_ov000_020afde8[TreasureManager::func_ov000_020a9f4c(-1)];
        default:
            break;
    }

    return itemId;
}

// gainTreasureFromItem
ARM void TreasureManager::func_ov000_020aa0ac(ItemId itemId) {
    switch (itemId) {
        case ItemId_DemonFossil:
            this->func_ov000_020a9cbc(TreasureType_DemonFossil, 1);
            break;
        case ItemId_StalfosSkull:
            this->func_ov000_020a9cbc(TreasureType_StalfosSkull, 1);
            break;
        case ItemId_StarFragment:
            this->func_ov000_020a9cbc(TreasureType_StarFragment, 1);
            break;
        case ItemId_BeeLarvae:
            this->func_ov000_020a9cbc(TreasureType_BeeLarvae, 1);
            break;
        case ItemId_WoodHeart:
            this->func_ov000_020a9cbc(TreasureType_WoodHeart, 1);
            break;
        case ItemId_DarkPearlLoop:
            this->func_ov000_020a9cbc(TreasureType_DarkPearlLoop, 1);
            break;
        case ItemId_WhitePearlLoop:
            this->func_ov000_020a9cbc(TreasureType_WhitePearlLoop, 1);
            break;
        case ItemId_RutoCrown:
            this->func_ov000_020a9cbc(TreasureType_RutoCrown, 1);
            break;
        case ItemId_DragonScale:
            this->func_ov000_020a9cbc(TreasureType_DragonScale, 1);
            break;
        case ItemId_PirateNecklace:
            this->func_ov000_020a9cbc(TreasureType_PirateNecklace, 1);
            break;
        case ItemId_PalaceDish:
            this->func_ov000_020a9cbc(TreasureType_PalaceDish, 1);
            break;
        case ItemId_GoronAmber:
            this->func_ov000_020a9cbc(TreasureType_GoronAmber, 1);
            break;
        case ItemId_MysticJade:
            this->func_ov000_020a9cbc(TreasureType_MysticJade, 1);
            break;
        case ItemId_AncientCoin:
            this->func_ov000_020a9cbc(TreasureType_AncientCoin, 1);
            break;
        case ItemId_PricelessStone:
            this->func_ov000_020a9cbc(TreasureType_PricelessStone, 1);
            break;
        case ItemId_RegalRing:
            this->func_ov000_020a9cbc(TreasureType_RegalRing, 1);
            break;
        default:
            break;
    }
}

void TreasureManager::func_ov000_020aa200() {
    data_ov000_020b6510 = this;
}

void TreasureManager::func_ov000_020aa210() {
    data_ov000_020b6510 = NULL;
}
