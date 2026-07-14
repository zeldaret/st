//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSHIT.hpp"
#include "Item/ItemManager.hpp"
#include "MainGame/MiscAdvManager.hpp"
#include "Save/AdventureFlags.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

DECL_PROFILE(ActorProfileUnkSHIT);

Actor *ActorProfileUnkSHIT::Create() {
    return new(HeapIndex_2) ActorUnkSHIT();
}

ActorProfileUnkSHIT::ActorProfileUnkSHIT() :
    ActorProfile_Derived1(ActorId_SHIT) {}

ActorUnkSHIT::ActorUnkSHIT() {}

void ActorUnkSHIT::func_ov036_0211c1fc(void) {}
void ActorUnkSHIT::func_ov036_0211c21c(void) {}
void ActorUnkSHIT::func_ov036_0211c280(void) {}
void ActorUnkSHIT::func_ov036_0211c580(void) {}
void ActorUnkSHIT::func_ov036_0211c7dc(void) {}
void ActorUnkSHIT::func_ov036_0211c7e4(void) {}
void ActorUnkSHIT::func_ov036_0211c938(void) {}
void ActorUnkSHIT::func_ov036_0211c94c(void) {}
void ActorUnkSHIT::func_ov036_0211c96c(void) {}
void ActorUnkSHIT::func_ov036_0211c970(void) {}
void ActorUnkSHIT::func_ov036_0211c974(void) {}
void ActorUnkSHIT::func_ov036_0211c978(void) {}
void ActorUnkSHIT::func_ov036_0211c97c(void) {}
void ActorUnkSHIT::func_ov036_0211c980(void) {}
void ActorUnkSHIT::func_ov036_0211c984(void) {}
void ActorUnkSHIT::func_ov036_0211c994(void) {}
void ActorUnkSHIT::func_ov036_0211c998(void) {}
void ActorUnkSHIT::func_ov036_0211c9ac(void) {}
void ActorUnkSHIT::func_ov036_0211c9cc(void) {}
void ActorUnkSHIT::func_ov036_0211c9d4(void) {}
unk32 ActorUnkSHIT::func_ov036_0211cddc(void) {}
void ActorUnkSHIT::func_ov036_0211cdfc(void) {}

u16 ActorUnkSHIT::func_ov036_0211ceec(void) {
    switch (this->mItemId) {
        case ItemId_NormalShield: {
            u16 param = this->mUnk_5C.mParams[3];
            if (param == 4) {
                return 200;
            }
            if (param == 2) {
                return 150;
            }
            return 80;
        }
        case ItemId_RedPotion:
            return 100;
        case ItemId_PurplePotion:
            return 150;
        case ItemId_YellowPotion:
            return 200;
        case ItemId_TenPriceCard:
            return 100;
        case ItemId_DemonFossil:
        case ItemId_StalfosSkull:
        case ItemId_StarFragment:
        case ItemId_BeeLarvae:
        case ItemId_WoodHeart:
        case ItemId_DarkPearlLoop:
        case ItemId_WhitePearlLoop:
        case ItemId_RutoCrown:
        case ItemId_DragonScale:
        case ItemId_PirateNecklace:
        case ItemId_PalaceDish:
        case ItemId_GoronAmber:
        case ItemId_MysticJade:
        case ItemId_AncientCoin:
        case ItemId_PricelessStone:
        case ItemId_RegalRing: {
            return gpTreasureManager->func_ov000_020a9b4c(this->mItemId - ItemId_DemonFossil) * 2;
        }
        case ItemId_HeartContainer:
            return 2000;
        case ItemId_BombsRefill: {
            u16 param = this->mUnk_5C.mParams[3];

            if (param == 4) {
                return 200;
            }

            if (param == 3) {
                return 150;
            }

            return 100;
        }
        case ItemId_ArrowsRefill:
            return 50;
        case ItemId_QuiverMedium:
        case ItemId_QuiverLarge:
            return 2000;
        case ItemId_BombBag:
        case ItemId_BombBagMedium:
        case ItemId_BombBagLarge:
            return 500;
        default:
            break;
    }

    return MAX_RUPEES;
}

unk32 ActorUnkSHIT::func_ov036_0211d0a8(void) {
    if (this->mUnk_2D3) {
        return 0x12;
    }

    switch (this->mItemId) {
        case ItemId_SoldOutSign:
            return 0x12;
        case ItemId_NormalShield:
            return 0x08;
        case ItemId_RedPotion:
            return 0x09;
        case ItemId_PurplePotion:
            return 0x0A;
        case ItemId_YellowPotion:
            return 0x0B;
        case ItemId_TenPriceCard:
            return 0x13;
        case ItemId_DemonFossil:
        case ItemId_StalfosSkull:
        case ItemId_StarFragment:
        case ItemId_BeeLarvae:
        case ItemId_WoodHeart:
        case ItemId_DarkPearlLoop:
        case ItemId_WhitePearlLoop:
        case ItemId_RutoCrown:
        case ItemId_DragonScale:
        case ItemId_PirateNecklace:
        case ItemId_PalaceDish:
        case ItemId_GoronAmber:
        case ItemId_MysticJade:
        case ItemId_AncientCoin:
        case ItemId_PricelessStone:
        case ItemId_RegalRing:
            return 0x06;
        case ItemId_HeartContainer:
            return 0x07;
        case ItemId_BombsRefill:
            return 0x05;
        case ItemId_ArrowsRefill:
            return 0x03;
        case ItemId_QuiverMedium:
        case ItemId_QuiverLarge:
            return 0x02;
        case ItemId_BombBag:
        case ItemId_BombBagMedium:
        case ItemId_BombBagLarge:
            return 0x04;
        default:
            break;
    }

    return 0x0D;
}

void ActorUnkSHIT::func_ov036_0211d22c(void) {}
void ActorUnkSHIT::func_ov036_0211d254(void) {}
void ActorUnkSHIT::func_ov036_0211d270(void) {}
void ActorUnkSHIT::func_ov036_0211d28c(void) {}
void ActorUnkSHIT::func_ov036_0211d2a8(void) {}

bool ActorUnkSHIT::func_ov036_0211d2dc(void) {
    ItemManager *pIVar4 = data_027e0ce0->mUnk_2C;

    switch (this->mItemId) {
        case ItemId_NormalShield:
            if (pIVar4->HasItem(ItemFlag_Shield)) {
                return false;
            }

            break;
        case ItemId_RedPotion:
        case ItemId_PurplePotion:
        case ItemId_YellowPotion:
            if (pIVar4->GetInventory()->PotionSlotsFull()) {
                return false;
            }

            break;
        case ItemId_TenPriceCard:
            if (gpMiscAdvManager->GotMaxPriceCards()) {
                return false;
            }

            break;
        case ItemId_DemonFossil:
        case ItemId_StalfosSkull:
        case ItemId_StarFragment:
        case ItemId_BeeLarvae:
        case ItemId_WoodHeart:
        case ItemId_DarkPearlLoop:
        case ItemId_WhitePearlLoop:
        case ItemId_RutoCrown:
        case ItemId_DragonScale:
        case ItemId_PirateNecklace:
        case ItemId_PalaceDish:
        case ItemId_GoronAmber:
        case ItemId_MysticJade:
        case ItemId_AncientCoin:
            if (gpTreasureManager->func_ov000_020a9ca4(this->mItemId - ItemId_DemonFossil)) {
                return false;
            }

            break;
        case ItemId_PricelessStone:
        case ItemId_RegalRing:
            return false;
        case ItemId_HeartContainer:
            if (this->mUnk_5C.mParams[3] == 5) {
                if (data_027e09b8->HasAdventureFlag(AdventureFlag_Unk_10F)) {
                    return false;
                }
            } else {
                if (data_027e09b8->HasAdventureFlag(AdventureFlag_Unk_10E)) {
                    return false;
                }
            }

            break;
        case ItemId_BombsRefill:
            if (!pIVar4->HasItem(ItemFlag_Bombs)) {
                return false;
            }

            {
                u8 amount = pIVar4->GetBombAmount();
                if (amount >= pIVar4->GetInventory()->GetBombBagCapacity()) {
                    return false;
                }
            }

            break;
        case ItemId_ArrowsRefill:
            if (!pIVar4->HasItem(ItemFlag_Bow)) {
                return false;
            }

            {
                u8 amount = pIVar4->GetArrowAmount();
                if (amount >= pIVar4->GetInventory()->GetQuiverCapacity()) {
                    return false;
                }
            }

            break;
        case ItemId_QuiverMedium:
        case ItemId_QuiverLarge:
            if (!pIVar4->HasItem(ItemFlag_Bow)) {
                return false;
            }

            if (data_027e09b8->HasAdventureFlag(AdventureFlag_BoughtGoronShopQuiver)) {
                return false;
            }

            break;
        case ItemId_BombBag:
        case ItemId_BombBagMedium:
        case ItemId_BombBagLarge:
            if (data_027e09b8->HasAdventureFlag(AdventureFlag_BoughtBombBagFromBeedle)) {
                return false;
            }

            break;
        default:
            break;
    }

    return true;
}

void ActorUnkSHIT::func_ov036_0211d570(unk32 param1) {
    ItemManager *pIVar4 = data_027e0ce0->mUnk_2C;

    switch (this->mItemId) {
        case ItemId_NormalShield:
            break;
        case ItemId_RedPotion:
            break;
        case ItemId_PurplePotion:
            break;
        case ItemId_YellowPotion:
            break;
        case ItemId_TenPriceCard:
            break;
        case ItemId_DemonFossil:
        case ItemId_StalfosSkull:
        case ItemId_StarFragment:
        case ItemId_BeeLarvae:
        case ItemId_WoodHeart:
        case ItemId_DarkPearlLoop:
        case ItemId_WhitePearlLoop:
        case ItemId_RutoCrown:
        case ItemId_DragonScale:
        case ItemId_PirateNecklace:
        case ItemId_PalaceDish:
        case ItemId_GoronAmber:
        case ItemId_MysticJade:
        case ItemId_AncientCoin:
        case ItemId_PricelessStone:
        case ItemId_RegalRing:
            this->mUnk_2D3 = true;
            break;
        case ItemId_HeartContainer:
            if (this->mUnk_5C.mParams[3] == 5) {
                SET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_Unk_10F);
            } else {
                SET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_Unk_10E);
            }

            this->mUnk_2D3 = true;
            break;
        case ItemId_BombsRefill:
            pIVar4->GetInventory()->GiveBombs(10);
            break;
        case ItemId_ArrowsRefill:
            pIVar4->GetInventory()->GiveArrows(10);
            break;
        case ItemId_QuiverMedium:
        case ItemId_QuiverLarge:
            SET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_BoughtGoronShopQuiver);
            this->mUnk_2D3 = true;
            break;
        case ItemId_BombBag:
        case ItemId_BombBagMedium:
        case ItemId_BombBagLarge:
            SET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_BoughtBombBagFromBeedle);
            this->mUnk_2D3 = true;
            break;
        default:
            break;
    }

    if (param1 == 0) {
        pIVar4->GetInventory()->GiveRupees(-this->func_ov036_0211cddc(), false, false);
    }
}

void ActorUnkSHIT::func_ov036_0211d75c(void) {}
void ActorUnkSHIT::func_ov036_0211d774(void) {}
void ActorUnkSHIT::func_ov036_0211d790(void) {}

ActorUnkSHIT::~ActorUnkSHIT() {}
ActorProfileUnkSHIT::~ActorProfileUnkSHIT() {}
