//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSHIT.hpp"
#include "Item/ItemManager.hpp"
#include "MainGame/MiscAdvManager.hpp"
#include "Save/AdventureFlags.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

ARM DECL_PROFILE(ActorProfileUnkSHIT);

ARM Actor *ActorProfileUnkSHIT::Create() {
    return new(HeapIndex_2) ActorUnkSHIT();
}

ARM ActorProfileUnkSHIT::ActorProfileUnkSHIT() :
    ActorProfile_Derived1(ActorId_SHIT) {}

ARM ActorUnkSHIT::ActorUnkSHIT() {}

ARM void ActorUnkSHIT::func_ov036_0211c1fc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c21c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c280(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c580(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c7dc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c7e4(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c938(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c94c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c96c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c970(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c974(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c978(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c97c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c980(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c984(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c994(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c998(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c9ac(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c9cc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211c9d4(void) {}
ARM unk32 ActorUnkSHIT::func_ov036_0211cddc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211cdfc(void) {}

ARM u16 ActorUnkSHIT::func_ov036_0211ceec(void) {
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
            return data_ov000_020b6510->func_ov000_020a9b4c(this->mItemId - ItemId_DemonFossil) * 2;
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

    return 9999;
}

ARM unk32 ActorUnkSHIT::func_ov036_0211d0a8(void) {
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

ARM void ActorUnkSHIT::func_ov036_0211d22c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d254(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d270(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d28c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d2a8(void) {}

ARM bool ActorUnkSHIT::func_ov036_0211d2dc(void) {
    ItemManager *pIVar4 = data_027e0ce0->mUnk_2C;

    switch (this->mItemId) {
        case ItemId_NormalShield:
            if (GET_FLAG(pIVar4->mUnk_08, ItemFlag_Shield)) {
                return false;
            }

            break;
        case ItemId_RedPotion:
        case ItemId_PurplePotion:
        case ItemId_YellowPotion:
            if (pIVar4->func_ov000_020a8948()) {
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
            if (data_ov000_020b6510->func_ov000_020a9ca4(this->mItemId - ItemId_DemonFossil)) {
                return false;
            }

            break;
        case ItemId_PricelessStone:
        case ItemId_RegalRing:
            return false;
        case ItemId_HeartContainer:
            if (this->mUnk_5C.mParams[3] == 5) {
                if (GET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_Unk_10F)) {
                    return false;
                }
            } else {
                if (GET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_Unk_10E)) {
                    return false;
                }
            }

            break;
        case ItemId_BombsRefill:
            if (!GET_FLAG(pIVar4->mUnk_08, ItemFlag_Bombs)) {
                return false;
            }

            {
                u8 amount = pIVar4->mBombAmount;
                if (amount >= pIVar4->func_ov000_020a8748()) {
                    return false;
                }
            }

            break;
        case ItemId_ArrowsRefill:
            if (!GET_FLAG(pIVar4->mUnk_08, ItemFlag_Bow)) {
                return false;
            }

            {
                u8 amount = pIVar4->mArrowAmount;
                if (amount >= pIVar4->func_ov000_020a8728()) {
                    return false;
                }
            }

            break;
        case ItemId_QuiverMedium:
        case ItemId_QuiverLarge:
            if (!GET_FLAG(pIVar4->mUnk_08, ItemFlag_Bow)) {
                return false;
            }

            if (GET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_BoughtGoronShopQuiver)) {
                return false;
            }

            break;
        case ItemId_BombBag:
        case ItemId_BombBagMedium:
        case ItemId_BombBagLarge:
            if (GET_FLAG(data_027e09b8->mAdventureFlags, AdventureFlag_BoughtBombBagFromBeedle)) {
                return false;
            }

            break;
        default:
            break;
    }

    return true;
}

ARM void ActorUnkSHIT::func_ov036_0211d570(unk32 param1) {
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
            pIVar4->func_ov000_020a8820(10);
            break;
        case ItemId_ArrowsRefill:
            pIVar4->func_ov000_020a87ec(10);
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
        pIVar4->GiveRupees(-this->func_ov036_0211cddc(), false, false);
    }
}

ARM void ActorUnkSHIT::func_ov036_0211d75c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d774(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d790(void) {}

ARM ActorUnkSHIT::~ActorUnkSHIT() {}
ARM ActorProfileUnkSHIT::~ActorProfileUnkSHIT() {}
