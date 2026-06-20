//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGORY.hpp"
#include "Save/AdventureFlags.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

DECL_PROFILE(ActorProfileUnkGORY);

Actor *ActorProfileUnkGORY::Create() {
    return new(HeapIndex_2) ActorUnkGORY();
}

ActorProfileUnkGORY::ActorProfileUnkGORY() :
    ActorProfile_Derived1(ActorId_GORY) {}

ActorUnkGORY::ActorUnkGORY() {}

void ActorUnkGORY::func_ov036_0211bc20(void) {}
void ActorUnkGORY::func_ov036_0211bc84(void) {}

ItemId ActorUnkGORY::func_ov036_0211bcb0(unk32 param1) {
    switch (param1) {
        case 0:
            return ItemId_BombsRefill;
        case 1:
            return ItemId_YellowPotion;
        case 2:
            return ItemId_PurplePotion;
        case 3:
            return ItemId_NormalShield;
        case 4:
            if (data_027e09b8->HasAdventureFlag(AdventureFlag_BoughtGoronShopQuiver)) {
                return ItemId_TenPriceCard;
            }

            if (data_027e0ce0->mUnk_2C->mQuiverCapacity == UpgradeCapacity_Tier1) {
                return ItemId_QuiverMedium;
            } else if (data_027e0ce0->mUnk_2C->mQuiverCapacity == UpgradeCapacity_Tier2) {
                return ItemId_QuiverLarge;
            } else {
                return ItemId_TenPriceCard;
            }

        default:
            break;
    }

    return ItemId_Nothing;
}

ActorUnkGORY::~ActorUnkGORY() {}
ActorProfileUnkGORY::~ActorProfileUnkGORY() {}
