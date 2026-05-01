//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSHIT.hpp"
#include "Item/ItemManager.hpp"
#include "System/SysNew.hpp"

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
ARM void ActorUnkSHIT::func_ov036_0211cddc(void) {}
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
ARM void ActorUnkSHIT::func_ov036_0211d2dc(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d570(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d75c(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d774(void) {}
ARM void ActorUnkSHIT::func_ov036_0211d790(void) {}

ARM ActorUnkSHIT::~ActorUnkSHIT() {}
ARM ActorProfileUnkSHIT::~ActorProfileUnkSHIT() {}
