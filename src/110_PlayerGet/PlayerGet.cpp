#include <string.h>

#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkNSHD.hpp"
#include "MapObject/MapObjectChestBase.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "Player/PlayerGet.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0cf8.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b34c4.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b51c0.hpp"
#include "Unknown/UnkStruct_ov024_020d86b0.hpp"
#include "versions.h"

#include <nitro/math.h>

struct UnkStruct_02186240 {
    /* 0000 */ unk8 mUnk_0000[0x3F68];
    /* 3F68 */
};
UnkStruct_02186240 data_ov110_02186240;

extern const char *data_ov000_020aa240; // .nsbtx
extern const char *data_ov000_020aa248; // .nsbmd

extern "C" void func_ov000_0205ca74(unk32);
extern "C" void func_01ffb6e4(unk32, const void *, void *);
extern "C" void func_01ffc5a0(UnkSystem4 *, unk32, u16, void *, unk32);
extern "C" void func_ov000_0208f820();
extern "C" unk32 func_ov024_020d5354(unk32 *, u16 *);
extern "C" void func_ov000_02058fc4(unk32 *, UnkStruct_PlayerGet_74 *, Vec3p *);
extern unk32 *data_027e0958;
extern "C" void func_ov000_0208ba10(void *, void *, unk32);
extern "C" void func_02015ea8(unk32, void *);
extern "C" void func_02015628(char *, char *, unk32, void *, size_t);
extern "C" void func_02015664(char *, unk32);
extern "C" void func_020156c8(char *, char *, unk32);
extern "C" void func_020156f4(char *);
extern "C" void func_02015644(char *);

extern "C" UnkResourceStruct *func_ov000_0205abcc(void *, void *, unk32, unk32, unk32);
extern "C" unk32 func_ov000_02077590(unk32);

static const unk32 data_ov110_02185dc4[1] = {8};

static const UnkStruct_ov110_02185dc8 data_ov110_02185dc8[] = {
    {ItemId_NormalSword, ItemFlag_Sword},           {ItemId_NormalShield, ItemFlag_Shield},
    {ItemId_LokomoSword, ItemFlag_LokomoSword},     {ItemId_RecruitUniform, ItemFlag_RecruitUniform},
    {ItemId_ScrollBeam, ItemFlag_ScrollBeam},       {ItemId_ScrollSpinAttack, ItemFlag_ScrollSpinAttack},
    {ItemId_AncientShield, ItemFlag_AncientShield}, {ItemId_PanFlute, ItemFlag_PanFlute},
};

static inline s16 GetItemFlag(ItemId itemId) {
    for (u32 i = 0; i < ARRAY_LEN(data_ov110_02185dc8); i++) {
        if (itemId == data_ov110_02185dc8[i].mItemId) {
            return data_ov110_02185dc8[i].mItemFlag;
        }
    }

    return ItemFlag_None;
}

ARM bool ItemManager::func_ov110_02184a40(ItemId itemId) {
    switch (itemId) {
        case ItemId_NormalKey:
            this->func_ov000_020a87c8(1);
            break;
        case ItemId_GreenRupee:
            this->GiveRupees(1, true, true);
            break;
        case ItemId_BlueRupee:
            this->GiveRupees(5, true, true);
            break;
        case ItemId_RedRupee:
            this->GiveRupees(20, true, true);
            break;
        case ItemId_BigGreenRupee:
            this->GiveRupees(100, true, true);
            break;
        case ItemId_BigRedRupee:
            this->GiveRupees(200, true, true);
            break;
        case ItemId_BigGoldRupee:
            this->GiveRupees(300, true, true);
            break;
        case ItemId_HeartContainer:
            data_027e0ce0->func_ov000_0208a318(4, 1, 1);
            break;
        case ItemId_QuiverMedium:
        case ItemId_QuiverLarge:
            if (this->mQuiverCapacity < UpgradeCapacity_Tier3) {
                this->mQuiverCapacity++;
            }

            this->mArrowAmount = this->func_ov000_020a8728();
            break;
        case ItemId_BombBagMedium:
        case ItemId_BombBagLarge:
            if (this->mBombBagCapacity < UpgradeCapacity_Tier3) {
                this->mBombBagCapacity++;
            }

            this->mBombAmount = this->func_ov000_020a8748();
            break;
        case ItemId_RedPotion:
            this->func_ov000_020a888c(PotionType_Red);
            break;
        case ItemId_PurplePotion:
            this->func_ov000_020a888c(PotionType_Purple);
            break;
        case ItemId_YellowPotion:
            this->func_ov000_020a888c(PotionType_Yellow);
            break;
        case ItemId_ArrowsRefill:
            this->func_ov000_020a87ec(10);
            break;
        case ItemId_BombsRefill:
            this->func_ov000_020a8820(10);
            break;
        case ItemId_TearLight:
            if (this->mTearsAmount >= 3) {
                this->mTearsAmount = 3;
            } else {
                this->mTearsAmount++;
            }
            break;
        default:
            ItemFlag itemFlag = ItemManager::func_ov000_020a8984(itemId);

            if (itemFlag != ItemFlag_None) {
                this->func_ov000_020a863c(itemFlag);

                switch (itemFlag) {
                    case ItemFlag_Bombs:
                        this->mBombBagCapacity = UpgradeCapacity_Tier1;
                        this->mBombAmount      = gBombBagCapacities[UpgradeCapacity_Tier1];
                        break;
                    case ItemFlag_Bow:
                        this->mQuiverCapacity = UpgradeCapacity_Tier1;
                        this->mArrowAmount    = gQuiverCapacities[UpgradeCapacity_Tier1];
                        break;
                    default:
                        break;
                }

                if (this->mEquippedItem == ItemFlag_None) {
                    this->mEquippedItem = itemFlag;
                    data_ov024_020d8698->func_ov024_020cd458(this->mEquippedItem, 0);
                }
            } else {
                itemFlag = GetItemFlag(itemId);

                if (itemFlag != ItemFlag_None) {
                    this->func_ov000_020a863c(itemFlag);
                }
            }
            break;
    }

    AdventureFlag advFlag = ItemManager::func_ov110_02185db4(itemId);

    if (advFlag != AdventureFlag_Nothing) {
        advFlag &= 0xFFFF;
        SET_FLAG(data_027e09b8->mAdventureFlags, advFlag);
    }

    data_027e0ce0->mUnk_34->func_ov110_02185d3c(itemId);
    data_ov000_020b6510->func_ov000_020aa0ac(itemId);
    data_ov024_020d86b0->GiveLetterOrPriceCard(itemId);

    if (!GET_FLAG(this->mUnk_08, ItemFlag_LokomoSword) && itemId == ItemId_TearLight &&
        this->mTearsAmount == MAX_TEARS_OF_LIGHT && (gOverlayManager.mLoadedOverlays[OverlaySlot_8] == OverlayIndex_Tower)) {
        return true;
    }

    return false;
}

// BMG IDs
static const unk32 data_ov110_02185de8[] = {
    0x00030001, // ItemId_Nothing
    0x00030002, // ItemId_NormalShield
    0x000B00D6, // ItemId_NormalSword
    0x0008007A, // ItemId_Whirlwind
    0x00030003, // ItemId_BombBag
    0x0008007B, // ItemId_NormalBow
    0x0008007C, // ItemId_Boomerang
    0x0008007D, // ItemId_Whip
    0x0008007E, // ItemId_SandRod
    0x00030004, // ItemId_9
    0x00030005, // ItemId_NormalKey
    0x00030006, // ItemId_BossKey
    0x00030007, // ItemId_GreenRupee
    0x00030008, // ItemId_BlueRupee
    0x00030009, // ItemId_RedRupee
    0x0003000A, // ItemId_BigGreenRupee
    0x0003000B, // ItemId_BigRedRupee
    0x0003000C, // ItemId_BigGoldRupee
    0x0003000D, // ItemId_ForceGem_18
    0x0003000E, // ItemId_ForceGem_19
    0x0003000F, // ItemId_ForceGem_20
    0x000D0000, // ItemId_ForestGlyph
    0x000D0001, // ItemId_SnowGlyph
    0x000D0002, // ItemId_OceanGlyph
    0x000D0003, // ItemId_FireGlyph
    0x000F00EB, // ItemId_25
    0x00100000, // ItemId_26
    0x00110000, // ItemId_27
    0x001C008E, // ItemId_28
    0x001E0048, // ItemId_29
    0x00030010, // ItemId_FinalTrack
    0x00030011, // ItemId_31
    0x00030012, // ItemId_32
    0x00030013, // ItemId_33
    0x00030014, // ItemId_34
    0x00030015, // ItemId_ForceGem_35
    0x00030016, // ItemId_ForceGem_36
    0x00030017, // ItemId_ForceGem_37
    0x000B00D7, // ItemId_RecruitUniform
    0x00030018, // ItemId_PostmasterLetter
    0x00030019, // ItemId_HeartContainer
    0x0003001A, // ItemId_QuiverMedium
    0x0003001B, // ItemId_BombBagMedium
    0x0003001C, // ItemId_ForceGem_43
    0x0003001D, // ItemId_ForceGem_44
    0x0003001E, // ItemId_ForceGem_45
    0x0003001F, // ItemId_ForceGem_46
    0x00030020, // ItemId_ForceGem_47
    0x00030021, // ItemId_ForceGem_48
    0x00030022, // ItemId_ForceGem_49
    0x00030023, // ItemId_ForceGem_50
    0x00030024, // ItemId_ForceGem_51
    0x00030025, // ItemId_ForceGem_52
    0x00030026, // ItemId_ForceGem_53
    0x00030027, // ItemId_ForceGem_54
    0x00030028, // ItemId_ForceGem_55
    0x00030029, // ItemId_ForceGem_56
    0x0003002A, // ItemId_ForceGem_57
    0x0003002B, // ItemId_ForceGem_58
    0x0003002C, // ItemId_ForceGem_59
    0x0003002D, // ItemId_ForceGem_60
    0x0003002E, // ItemId_ForceGem_61
    0x0003002F, // ItemId_PanFlute
    0x001400F7, // ItemId_StampBook
    0x0008007F, // ItemId_LightBow
    0x00030030, // ItemId_LokomoSword
    0x00030031, // ItemId_TenPriceCard
    0x00030032, // ItemId_RedPotion
    0x00030033, // ItemId_PurplePotion
    0x00030034, // ItemId_YellowPotion
    0x00030035, // ItemId_DemonFossil
    0x00030036, // ItemId_StalfosSkull
    0x00030037, // ItemId_StarFragment
    0x00030038, // ItemId_BeeLarvae
    0x00030039, // ItemId_WoodHeart
    0x0003003A, // ItemId_DarkPearlLoop
    0x0003003B, // ItemId_WhitePearlLoop
    0x0003003C, // ItemId_RutoCrown
    0x0003003D, // ItemId_DragonScale
    0x0003003E, // ItemId_PirateNecklace
    0x0003003F, // ItemId_PalaceDish
    0x00030040, // ItemId_GoronAmber
    0x00030041, // ItemId_MysticJade
    0x00030042, // ItemId_AncientCoin
    0x00030043, // ItemId_PricelessStone
    0x00030044, // ItemId_RegalRing
    0x00030045, // ItemId_ArrowsRefill
    0x00030046, // ItemId_BombsRefill
    0x00030047, // ItemId_SoldOutSign
    0x001400F8, // ItemId_AncientShield
    0x00030048, // ItemId_QuiverLarge
    0x00030049, // ItemId_BombBagLarge
    0x0003004A, // ItemId_RandCommonTreasure
    0x0003004B, // ItemId_RandUncommonTreasure
    0x0003004C, // ItemId_RandRareTreasure
    0x0003004D, // ItemId_RandLegendaryTreasure
    0x000D0004, // ItemId_TearLight
    0x000D0005, // ItemId_LightCompass
    0x0003004E, // ItemId_ScrollSpinAttack
    0x0003004F, // ItemId_ScrollBeam
    0x001400F9, // ItemId_LinebeckLetter
    0x000F00EC, // ItemId_PanFluteSong_101
    0x00080080, // ItemId_PanFluteSong_102
    0x00110001, // ItemId_PanFluteSong_103
    0x001400FA, // ItemId_PanFluteSong_104
    0x00100001, // ItemId_PanFluteSong_105
    0x00030050, // ItemId_RabbitNet
    0x00030051, // ItemId_BeedleCard
    0x00030052, // ItemId_SilverCard
    0x00030053, // ItemId_GoldCard
    0x00030054, // ItemId_PlatinumCard
    0x00030055, // ItemId_DiamondCard
    0x00030056, // ItemId_FreebieCard
    0x00030057, // ItemId_QuintupleCard
    0x00030058, // ItemId_CarbenLetter
    0x00030059, // ItemId_RecruitUniform2
    0x0003005A, // ItemId_EngineerUniform
};

// Adventure Flags
static const AdventureFlag data_ov110_02185fbc[] = {
    AdventureFlag_Nothing, // ItemId_Nothing
    AdventureFlag_Nothing, // ItemId_NormalShield
    AdventureFlag_ObtainedRecruitSword, // ItemId_NormalSword
    AdventureFlag_Nothing, // ItemId_Whirlwind
    AdventureFlag_Nothing, // ItemId_BombBag
    AdventureFlag_ObtainedBowAndArrows, // ItemId_NormalBow
    AdventureFlag_Nothing, // ItemId_Boomerang
    AdventureFlag_ObtainedWhip, // ItemId_Whip
    AdventureFlag_ObtainedSandWand, // ItemId_SandRod
    AdventureFlag_Nothing, // ItemId_9
    AdventureFlag_Nothing, // ItemId_NormalKey
    AdventureFlag_Nothing, // ItemId_BossKey
    AdventureFlag_Nothing, // ItemId_GreenRupee
    AdventureFlag_Nothing, // ItemId_BlueRupee
    AdventureFlag_Nothing, // ItemId_RedRupee
    AdventureFlag_Nothing, // ItemId_BigGreenRupee
    AdventureFlag_Nothing, // ItemId_BigRedRupee
    AdventureFlag_Nothing, // ItemId_BigGoldRupee
    AdventureFlag_ObtainedWadatsumiForceGem, // ItemId_ForceGem_18
    AdventureFlag_ObtainedNiboshiForceGem, // ItemId_ForceGem_19
    AdventureFlag_ObtainedGoronAdultMegaIceForceGem, // ItemId_ForceGem_20
    AdventureFlag_ObtainedForestGlyph, // ItemId_ForestGlyph
    AdventureFlag_ObtainedSnowGlyph, // ItemId_SnowGlyph
    AdventureFlag_ObtainedOceanGlyph, // ItemId_OceanGlyph
    AdventureFlag_ObtainedFireGlyph, // ItemId_FireGlyph
    AdventureFlag_CompletedForestRestorationSong, // ItemId_25
    AdventureFlag_CompletedOceanRestorationSong, // ItemId_26
    AdventureFlag_CompletedSnowRestorationSong, // ItemId_27
    AdventureFlag_CompletedFireRestorationSong, // ItemId_28
    AdventureFlag_CompletedSandRestorationSong, // ItemId_29
    AdventureFlag_OpenedDarkRealmPortal, // ItemId_FinalTrack
    AdventureFlag_ObtainedSpiritTrain, // ItemId_31
    AdventureFlag_ObtainedTrainCannon, // ItemId_32
    AdventureFlag_Unk_020, // ItemId_33
    AdventureFlag_ObtainedTrainWagon, // ItemId_34
    AdventureFlag_ObtainedFerrusForceGem2, // ItemId_ForceGem_35
    AdventureFlag_ObtainedKofuForceGem, // ItemId_ForceGem_36
    AdventureFlag_ObtainedChildGoronForceGem, // ItemId_ForceGem_37
    AdventureFlag_Nothing, // ItemId_RecruitUniform
    AdventureFlag_Nothing, // ItemId_PostmasterLetter
    AdventureFlag_Nothing, // ItemId_HeartContainer
    AdventureFlag_Nothing, // ItemId_QuiverMedium
    AdventureFlag_Nothing, // ItemId_BombBagMedium
    AdventureFlag_ObtainedLuciaForceGem, // ItemId_ForceGem_43
    AdventureFlag_ObtainedOrcaForceGem, // ItemId_ForceGem_44
    AdventureFlag_ObtainedCarbenForceGem, // ItemId_ForceGem_45
    AdventureFlag_ObtainedRaelForceGem, // ItemId_ForceGem_46
    AdventureFlag_ObtainedJoeForceGem, // ItemId_ForceGem_47
    AdventureFlag_ObtainedMonaForceGem, // ItemId_ForceGem_48
    AdventureFlag_ObtainedHarryForceGem, // ItemId_ForceGem_49
    AdventureFlag_ObtainedMashForceGem, // ItemId_ForceGem_50
    AdventureFlag_ObtainedFerrusForceGem1, // ItemId_ForceGem_51
    AdventureFlag_ObtainedYekoForceGem, // ItemId_ForceGem_52
    AdventureFlag_ObtainedNokoForceGem, // ItemId_ForceGem_53
    AdventureFlag_ObtainedGoronAdultAnoukiForceGem, // ItemId_ForceGem_54
    AdventureFlag_ObtainedSteemForceGem, // ItemId_ForceGem_55
    AdventureFlag_ObtainedLinebeckForceGem, // ItemId_ForceGem_56
    AdventureFlag_ObtainedAnjeanDesertForceGem, // ItemId_ForceGem_57
    AdventureFlag_Unk_0A7, // ItemId_ForceGem_58
    AdventureFlag_Unk_0A8, // ItemId_ForceGem_59
    AdventureFlag_Unk_0A9, // ItemId_ForceGem_60
    AdventureFlag_Unk_0AA, // ItemId_ForceGem_61
    AdventureFlag_Nothing, // ItemId_PanFlute
    AdventureFlag_Nothing, // ItemId_StampBook
    AdventureFlag_ObtainedBowOfLight, // ItemId_LightBow
    AdventureFlag_Unk_0B1, // ItemId_LokomoSword
    AdventureFlag_Nothing, // ItemId_TenPriceCard
    AdventureFlag_Nothing, // ItemId_RedPotion
    AdventureFlag_Nothing, // ItemId_PurplePotion
    AdventureFlag_Nothing, // ItemId_YellowPotion
    AdventureFlag_Nothing, // ItemId_DemonFossil
    AdventureFlag_Nothing, // ItemId_StalfosSkull
    AdventureFlag_Nothing, // ItemId_StarFragment
    AdventureFlag_Nothing, // ItemId_BeeLarvae
    AdventureFlag_Nothing, // ItemId_WoodHeart
    AdventureFlag_Nothing, // ItemId_DarkPearlLoop
    AdventureFlag_Nothing, // ItemId_WhitePearlLoop
    AdventureFlag_Nothing, // ItemId_RutoCrown
    AdventureFlag_Nothing, // ItemId_DragonScale
    AdventureFlag_Nothing, // ItemId_PirateNecklace
    AdventureFlag_Nothing, // ItemId_PalaceDish
    AdventureFlag_Nothing, // ItemId_GoronAmber
    AdventureFlag_Nothing, // ItemId_MysticJade
    AdventureFlag_Nothing, // ItemId_AncientCoin
    AdventureFlag_Nothing, // ItemId_PricelessStone
    AdventureFlag_Nothing, // ItemId_RegalRing
    AdventureFlag_Nothing, // ItemId_ArrowsRefill
    AdventureFlag_Nothing, // ItemId_BombsRefill
    AdventureFlag_Nothing, // ItemId_SoldOutSign
    AdventureFlag_Nothing, // ItemId_AncientShield
    AdventureFlag_Nothing, // ItemId_QuiverLarge
    AdventureFlag_Nothing, // ItemId_BombBagLarge
    AdventureFlag_Nothing, // ItemId_RandCommonTreasure
    AdventureFlag_Nothing, // ItemId_RandUncommonTreasure
    AdventureFlag_Nothing, // ItemId_RandRareTreasure
    AdventureFlag_Nothing, // ItemId_RandLegendaryTreasure
    AdventureFlag_Nothing, // ItemId_TearLight
    AdventureFlag_ObtainedCompassOfLight, // ItemId_LightCompass
    AdventureFlag_Nothing, // ItemId_ScrollSpinAttack
    AdventureFlag_Nothing, // ItemId_ScrollBeam
    AdventureFlag_ObtainedLinebecksLetter, // ItemId_LinebeckLetter
    AdventureFlag_Nothing, // ItemId_PanFluteSong_101
    AdventureFlag_Nothing, // ItemId_PanFluteSong_102
    AdventureFlag_Nothing, // ItemId_PanFluteSong_103
    AdventureFlag_Nothing, // ItemId_PanFluteSong_104
    AdventureFlag_Nothing, // ItemId_PanFluteSong_105
    AdventureFlag_ObtainedRabbitNet, // ItemId_RabbitNet
    AdventureFlag_ObtainedBeedlePointsCard, // ItemId_BeedleCard
    AdventureFlag_Unk_18E, // ItemId_SilverCard
    AdventureFlag_Unk_18F, // ItemId_GoldCard
    AdventureFlag_Unk_190, // ItemId_PlatinumCard
    AdventureFlag_Unk_191, // ItemId_DiamondCard
    AdventureFlag_ObtainedBeedleFreebieCard, // ItemId_FreebieCard
    AdventureFlag_ObtainedBeedleQuintuplePointsCard, // ItemId_QuintupleCard
    AdventureFlag_ReceivedCarbensLetter, // ItemId_CarbenLetter
    AdventureFlag_Nothing, // ItemId_RecruitUniform2
    AdventureFlag_Nothing, // ItemId_EngineerUniform
};

// non-matching
ARM void UnkStruct_PlayerGet_74::vfunc_00(unk32 param1, unk32 param2, unk32 param3) {
    PlayerGet *unk_14 = (PlayerGet *) this->mUnk_14;

    func_01ffc5a0(&unk_14->mUnk_8C, unk_14->mUnk_6C, unk_14->mUnk_70, &this->mUnk_04, param3);
}

ARM PlayerGet::PlayerGet() :
    mUnk_54(0, 0, -1, ItemId_None),
    mUnk_64(mUnk_44, -1),
    mUnk_6C(0x1000),
    mUnk_70(0),
    mUnk_72(0),
    mUnk_73(0),
    mUnk_74(this),
    mUnk_8C(0) {}

ARM PlayerGet::~PlayerGet() {
    func_ov000_0205ca74(this->mUnk_54.mUnk_08);

    UnkStruct_027e0cec *pData_027e0cec = data_027e0cec;
    if (pData_027e0cec != NULL) {
        UnkStruct_PlayerGet_ec *pUnk_ec = &this->mUnk_EC[0];

        while (pUnk_ec != (UnkStruct_PlayerGet_ec *) &this->mUnk_FC) {
            pData_027e0cec->func_ov000_020a0110(pUnk_ec);
            pUnk_ec++;
        }
    }

    UnkStruct_ov000_0208f820_28_98 *pUnk_28_98 = this->mUnk_28->mUnk_98;
    if (pUnk_28_98 != 0) {
        pUnk_28_98->mUnk_38.mUnk_40 &= ~0x10;

        if (pUnk_28_98->mUnk_38.mUnk_40 == 0) {
            // real?
            pUnk_28_98->mUnk_38.~UnkStruct_PlayerGet_64();
        }
    }
}

#if IS_JP
ARM bool PlayerGet::func_ov110_02186b8c() {
    switch (this->mUnk_54.mItemId) {
        case ItemId_NormalShield:
            if (this->mUnk_28->pItemManager->mUnk_12 & 2) {
                return true;
            }
            break;
        case ItemId_AncientShield:
            if (!(this->mUnk_28->pItemManager->mUnk_12 & 2)) {
                return true;
            }
            break;
        default:
            break;
    }

    return false;
}
#endif

// https://decomp.me/scratch/ZAW2N
ARM void PlayerGet::vfunc_0c(UnkStruct_PlayerGet_vfunc_0c_param1 *param1) {
    ItemId itemId;
    ItemManager *pItemManager;
    Actor *iVar10;
    Vec3p *pUnk_38;
    Vec3p *pUnk_3c;

    switch (param1->mUnk_04) {
        case 0x39:
            Vec3p temp;
            itemId                    = param1->mUnk_1C;
            temp.x                    = param1->mUnk_10.x;
            temp.y                    = param1->mUnk_10.y;
            temp.z                    = param1->mUnk_10.z;
            this->mUnk_54.mUnk_08     = temp.z;
            this->mUnk_54.mUnk_00_s32 = temp.x;
            this->mUnk_54.mUnk_04_s32 = temp.y;
            pItemManager              = this->mUnk_28->pItemManager;

            switch (itemId) {
                case ItemId_BombBag:
                case ItemId_BombBagMedium:
                case ItemId_BombBagLarge:
                    if (GET_FLAG(pItemManager->mUnk_08, ItemFlag_Bombs) == 0) {
                        itemId = ItemId_BombBag;
                    } else if (pItemManager->mBombBagCapacity == UpgradeCapacity_Tier1) {
                        itemId = ItemId_BombBagMedium;
                    } else if (pItemManager->mBombBagCapacity == UpgradeCapacity_Tier2) {
                        itemId = ItemId_BombBagLarge;
                    }
                    break;
                case ItemId_NormalBow:
                case ItemId_QuiverMedium:
                case ItemId_QuiverLarge:
                    if (GET_FLAG(pItemManager->mUnk_08, ItemFlag_Bow) == 0) {
                        itemId = ItemId_NormalBow;
                    } else if (pItemManager->mQuiverCapacity == UpgradeCapacity_Tier1) {
                        itemId = ItemId_QuiverMedium;
                    } else if (pItemManager->mQuiverCapacity == UpgradeCapacity_Tier2) {
                        itemId = ItemId_QuiverLarge;
                    }
                    break;
                default:
                    itemId = data_ov000_020b6510->func_ov000_020aa02c(itemId);
                    break;
            }

            this->mUnk_54.mItemId  = itemId;
            this->mUnk_70          = 0;
            this->mUnk_2C->mUnk_58 = 0;
            char auStack_108[12];
            func_ov000_0208ba10(auStack_108, &this->mUnk_24->mUnk_94, 0);
            *(s16 *) &this->mUnk_40->mUnk_00 = 0x8000;

            pUnk_38    = this->mUnk_38;
            pUnk_38->x = 0;
            pUnk_38->z = 0;

            pUnk_3c    = this->mUnk_3C;
            pUnk_3c->x = 0;
            pUnk_3c->y = 0;
            pUnk_3c->z = 0;

            if (((u32) (u16) this->mUnk_54.mUnk_00_s16 << 16) >> 30 != 1) {
                return;
            }

            iVar10 = gpActorManager->func_01fff3b4(*(u32 *) this->mUnk_54.mUnk_00);

            if (iVar10 == NULL) {
                return;
            }

            if (iVar10->GetActorId() == ActorId_NormalShield) {
                UNSET_FLAG(iVar10->mFlags, ActorFlag_Visible);
                iVar10->mUnk_4A = 0;
            }
            break;
        case 0x3A:
            if (this->mUnk_54.mItemId != ItemId_Nothing) {
                u32 niVar10 = func_ov000_020a4c00(this->mUnk_54.mItemId);

                if (niVar10 == GIModel_None) {
                    this->mUnk_8C.vfunc_08(NULL);
                } else {
                    if (this->mUnk_54.mItemId == ItemId_LokomoSword) {
                        niVar10 = func_ov000_020a4c00(ItemId_NormalSword);
                    }

                    wchar_t pathBuffer[32];
                    char modelPath[64];
                    u16 idStr[5];

                    idStr[0] = 0;
                    idStr[1] = 0;
                    func_02015ea8(niVar10, idStr);
                    idStr[4] = '\0';

                    strncpy((char *) pathBuffer, "Player/get/", 0x39);
                    size_t l = strlen((char *) pathBuffer);
                    strncpy((char *) pathBuffer + l, (char *) idStr, 0x39 - l);
                    pathBuffer[31] = '\0';

                    strncpy(modelPath, (char *) pathBuffer, 0x3F);
                    l = strlen(modelPath);
                    strncpy(modelPath + l, data_ov000_020aa248, 0x3F - l);

                    UnkFileSystem4 fs4(modelPath, 0, (unk32) &data_ov110_02186240, sizeof(UnkStruct_02186240));
                    fs4.vfunc_08(0x10);

                    strncpy(modelPath, (char *) pathBuffer, 0x3F);
                    l = strlen(modelPath);
                    strncpy(modelPath + l, data_ov000_020aa240, 0x3F - l);

                    UnkFileSystem2 fs2(modelPath, 0);
                    UnkResourceStruct *res = func_ov000_0205abcc((void *) &fs4, (void *) &fs2, 0, 1, this->mUnk_30->mUnk_24);

                    this->mUnk_8C.vfunc_08(GetUnkPointer1_Impl(res));
                }

                switch (this->mUnk_54.mItemId) {
                    case ItemId_BigGreenRupee:
                    case ItemId_BigRedRupee:
                    case ItemId_BigGoldRupee:
                        this->mUnk_6C = 0x1666;
                        break;
                    default:
                        this->mUnk_6C = 0x1000;
                        break;
                }
            }

            UnkStruct_027e09bc_0c *uVar11 = data_027e09bc->mUnk_0C;
            uVar11->func_ov000_0207834c(this->mUnk_34, func_ov000_02077590(4), 0);

            UnkStruct_PlayerGet_48 *pUnk_48 = this->mUnk_48;
            pUnk_48->mUnk_42                = 0x1000;
            pUnk_48->mUnk_47                = 0;
            pUnk_48->mUnk_5E                = 0x1000;
            pUnk_48->mUnk_63                = 0;

            if (this->mUnk_44->mUnk_00 != NULL) {
                this->mUnk_64.func_ov000_0208a100();
            }

            bool var_r1_4    = 0;
            void **temp_r5_2 = this->mUnk_24->mUnk_78;
            if (temp_r5_2 != NULL) {
                u16 temp_r6 = *(u16 *) temp_r5_2;
                bool var_r3 = 1;
                bool var_r2 = 0;

                if ((temp_r6 != 0x100) && (temp_r6 != 0x101)) {
                    var_r3 = 0;
                }

                if (var_r3 != 0) {
                    bool var_r0_2;

                    if (temp_r6 == 0x101) {
                        var_r0_2 = 0;
                    } else {
                        var_r0_2 = ((u16 *) temp_r5_2)[1];
                    }

                    if (var_r0_2 == 1) {
                        var_r2 = 1;
                    }
                }

                if (var_r2 != 0) {
                    var_r1_4 = 1;
                }
            }

            if (!var_r1_4) {
                UnkStruct_ov000_0208f820_28_98 *pUnk28_98 = this->mUnk_28->mUnk_98;

                if (pUnk28_98 != NULL) {
                    UnkStruct_PlayerGet_64 *ptr = &pUnk28_98->mUnk_38;
                    ptr->mUnk_40 |= 0x10;
                    this->mUnk_64.func_ov000_0208a100();
                }
            }

            this->mUnk_73 = 0;

            switch (this->mUnk_54.mItemId) {
                case ItemId_25:
                case ItemId_26:
                case ItemId_27:
                case ItemId_28:
                case ItemId_29:
                    data_ov000_020b51b8.func_ov000_0206c96c(data_027e0cd8->mUnk_0C->func_ov000_02080a44());
                    this->mUnk_73 = 1;
                    break;
                default:
                    break;
            }

            break;
        case 0x3B:
            this->mUnk_72 = 0;

            if (this->mUnk_54.mItemId != ItemId_Nothing) {
                unk32 uStack_f0[4];
                Vec3p VStack_fc;

                Vec3p_Add(this->mUnk_34, &data_ov110_021861ec.mUnk_00, &VStack_fc);
                data_027e0cec->func_ov000_0209feac(0x874, &VStack_fc, 1, 0, 0);
                uStack_f0[0] = 0x870;
                uStack_f0[1] = 0x871;
                uStack_f0[2] = 0x872;
                uStack_f0[3] = 0x873;
                data_027e0cec->func_ov000_020a0000(this->mUnk_EC, &this->mUnk_FC, uStack_f0, &VStack_fc, 1);
            }

            data_027e0cf8->func_ov024_020c7828(this->mUnk_54.mItemId);
            UnkStruct_ov000_02067bc4::UnkStruct1 auStack_30;
            data_ov000_020b504c.func_ov000_02067cf8(ItemManager::func_ov110_02185da4(this->mUnk_54.mItemId), 0, &auStack_30);
            break;
        default:
            break;
    }
}

const UnkStruct_ov110_021861ec data_ov110_021861ec(0x5E3, 0x152D, 0xCD);

ARM void PlayerGet::vfunc_10(unk32 param1, unk32 param2) {
    unk32 var_r1;
    s32 temp_r5;
    bool temp_r6;
    s32 var_r0;
    s32 var_r0_2;
    bool var_r1_2;
    u32 var_r5_2;
    ActorUnkNSHD *temp_r0_3;

    switch (param1) {
        case 0x39:
            if (data_027e09b8->func_ov000_020732ec(this->mUnk_54.mUnk_08) == 0) {
                break;
            }

            if (this->mUnk_30->mUnk_70 < 0xF) {
                break;
            }

            this->mUnk_30->func_ov000_020921e4(0x3A);
            break;
        case 0x3A:
            if (this->mUnk_50->func_01ff8fa8() != 0) {
                this->mUnk_30->func_ov000_020921e4(0x3B);
                break;
            }
            if (this->mUnk_50->func_02015080(0x1C000) == 0) {
                break;
            }

            var_r1 = 0x64;
            switch (this->mUnk_54.mItemId) {
                case ItemId_Nothing:
                case ItemId_NormalShield:
                case ItemId_NormalSword:
                case ItemId_Whirlwind:
                    break;
                case ItemId_NormalKey:
                case ItemId_GreenRupee:
                case ItemId_BlueRupee:
                case ItemId_RedRupee:
                case ItemId_DemonFossil:
                case ItemId_StalfosSkull:
                case ItemId_StarFragment:
                case ItemId_BeeLarvae:
                case ItemId_WoodHeart:
                    var_r1 = 0x65;
                    break;
                case ItemId_HeartContainer:
                    var_r1 = 0x67;
                    break;
                case ItemId_ForestGlyph:
                case ItemId_SnowGlyph:
                case ItemId_OceanGlyph:
                case ItemId_FireGlyph:
                    var_r1 = 0x68;
                    break;
                case ItemId_25:
                case ItemId_26:
                case ItemId_27:
                case ItemId_28:
                case ItemId_29:
                case ItemId_PanFluteSong_101:
                case ItemId_PanFluteSong_102:
                case ItemId_PanFluteSong_103:
                case ItemId_PanFluteSong_104:
                case ItemId_PanFluteSong_105:
                    var_r1 = 0x66;
                    break;
                case ItemId_ForceGem_18:
                case ItemId_ForceGem_19:
                case ItemId_ForceGem_20:
                case ItemId_ForceGem_35:
                case ItemId_ForceGem_36:
                case ItemId_ForceGem_37:
                case ItemId_ForceGem_43:
                case ItemId_ForceGem_44:
                case ItemId_ForceGem_45:
                case ItemId_ForceGem_46:
                case ItemId_ForceGem_47:
                case ItemId_ForceGem_48:
                case ItemId_ForceGem_49:
                case ItemId_ForceGem_50:
                case ItemId_ForceGem_51:
                case ItemId_ForceGem_52:
                case ItemId_ForceGem_53:
                case ItemId_ForceGem_54:
                case ItemId_ForceGem_55:
                case ItemId_ForceGem_56:
                case ItemId_ForceGem_57:
                case ItemId_ForceGem_58:
                case ItemId_ForceGem_59:
                case ItemId_ForceGem_60:
                case ItemId_ForceGem_61:
                    var_r1 = 0x6A;
                    break;
                default:
                    break;
            }
            data_ov000_020b51b8.func_ov000_0206d274(var_r1);
            break;
        case 0x3B:
            var_r1_2 = false;

            if (data_ov000_020b504c.func_ov000_02067bc4(0)->vfunc_08() == 0) {
                var_r1_2 = true;
            }

            if (var_r1_2) {
                if (this->mUnk_54.mItemId == ItemId_Nothing) {
                    var_r1_2 = true;
                } else {
                    if (this->mUnk_30->mUnk_70 >= 0x1E) {
                        var_r1_2 = true;
                    } else {
                        goto todo_remove_me;
                    }
                }
            } else {
            todo_remove_me:
                var_r1_2 = false;
            }

            if (this->mUnk_72 == 0 && var_r1_2) {
                temp_r6 = this->mUnk_28->pItemManager->func_ov110_02184a40(this->mUnk_54.mItemId);

                switch (this->mUnk_54.mItemId) {
                    case ItemId_NormalShield:
                    case ItemId_AncientShield:
                        this->mUnk_30->func_ov000_020936ec();

                        if (((*(u16 *) this->mUnk_54.mUnk_00 << 0x10) >> 0x1E) == 1) {
                            temp_r0_3 = (ActorUnkNSHD *) gpActorManager->func_01fff3b4(*(u32 *) this->mUnk_54.mUnk_00);

                            if ((temp_r0_3 != NULL) && (temp_r0_3->GetActorId() == ActorId_NormalShield)) {
                                if (this->func_ov110_02186b8c()) {
                                    this->mUnk_28->pItemManager->mUnk_12 ^= 2;
                                }

                                temp_r0_3->func_ov062_02158ce8();
                            }
                        } else {
                            if (this->mUnk_54.mItemId == ItemId_AncientShield) {
                                if (this->func_ov110_02186b8c()) {
                                    this->mUnk_28->pItemManager->mUnk_12 ^= 2;
                                }
                            } else if (this->mUnk_54.mItemId == ItemId_NormalShield) {
                                if (this->func_ov110_02186b8c()) {
                                    this->mUnk_28->pItemManager->mUnk_12 ^= 2;
                                }
                            }
                        }

                        this->mUnk_30->func_ov000_02093a04();
                        break;
                    case ItemId_NormalSword:
                    case ItemId_LokomoSword:
                        this->mUnk_30->func_ov000_020936ec();
                        this->mUnk_30->mUnk_10->func_ov031_020e076c();
                        break;
                    case ItemId_RecruitUniform2:
                    case ItemId_EngineerUniform:
                        if (data_027e09a4->mSceneIndex == SceneIndex_f_first) {
                            this->mUnk_28->func_ov058_02152a24();
                        }
                        break;
                    default:
                        break;
                }

                if (*(u16 *) this->mUnk_54.mUnk_00 == 0x1000) {
                    UnkStruct_func_01fff498 stack;
                    stack.ptrIndex   = this->mUnk_54.mUnk_00[0];
                    stack.valueIndex = this->mUnk_54.mUnk_00[1];

                    MapObject *pMapObj = gpMapObjManager->func_01fff498(stack);

                    if (pMapObj != NULL) {
                        var_r5_2 = MapObjectId_None;

                        switch (pMapObj->GetMapObjectId()) {
                            case MapObjectId_TRLN:
                                var_r5_2 = MapObjectId_TREN;
                                break;
                            case MapObjectId_TREN:
                                var_r5_2 = MapObjectId_TRLN;
                                break;
                            default:
                                break;
                        }

                        if (var_r5_2 != MapObjectId_None) {
                            data_ov000_020b34c4.mUnk_04    = var_r5_2;
                            MapObjectChestBase **temp_r0_6 = (MapObjectChestBase **) gpMapObjManager->func_01fff520(
                                &data_ov000_020b34c4, gpMapObjManager->mMapObjTable);

                            if ((MapObject **) temp_r0_6 == gpMapObjManager->mUnk_08) {
                                (*temp_r0_6)->func_ov031_02103878();
                            }
                        }
                    }
                }

                if (this->mUnk_54.mItemId == ItemId_ForestGlyph) {
                    this->mUnk_72 = data_027e09a4->func_ov000_02070bd0(CutsceneIndex_ForestTracksRestoredFromGlyph, 0);
                } else if (this->mUnk_54.mItemId == ItemId_FireGlyph) {
                    this->mUnk_72 = data_027e09a4->func_ov000_02070bd0(CutsceneIndex_StavenInTOSAfterFireGlyph_01, 0);
                }

                if (this->mUnk_72 != 0) {
                    break;
                }

                if (!temp_r6) {
                    data_027e09bc->mUnk_0C->func_ov000_02078230(0);
                }

                if (data_027e09b8->func_ov000_020732fc(this->mUnk_54.mUnk_08) != 0) {
                    this->mUnk_54.mUnk_08 = -1;
                }

                this->mUnk_40->mUnk_00 = 0;

                if (temp_r6) {
                    this->mUnk_30->func_ov000_020921e4(0x49);
                    break;
                }

                if ((((u32) (*(u16 *) this->mUnk_54.mUnk_04 << 0x10) >> 0x1E) == 1) &&
                    (data_027e09b8->func_ov000_020732dc(2) != 0)) {
                    *(u32 *) this->mUnk_04.mUnk_00 = *(u32 *) this->mUnk_54.mUnk_04;
                    this->mUnk_30->func_ov000_020921e4(0x57);
                    break;
                }

                this->mUnk_30->func_ov000_020921e4(0);
                break;
            }

            this->mUnk_70 += 0x10E;

            if (this->mUnk_73 == 0) {
                break;
            }

            temp_r5 = data_027e0cd8->mUnk_0C->func_ov000_02080a44();

            if (data_ov000_020b51b8.mUnk_08[2] != NULL) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }

            if (var_r0 != 0) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }

            if (var_r0_2 != 0) {
                break;
            }

            if (temp_r5 == data_ov000_020b51c0.func_02002f04()) {
                break;
            }

            data_ov000_020b51b8.func_ov000_0206c9a8(temp_r5, 0x3C, 0x7F, 0);
            this->mUnk_73 = 0;
            break;
        default:
            break;
    }
}

ARM void PlayerGet::vfunc_18(unk32 param1, unk32 param2, unk32 param3) {
    Vec3p auStack_18;

    switch (param2) {
        case 0x39:
        case 0x3A:
            break;
        case 0x3B:
            if (param3 != 0 && this->mUnk_54.mItemId != ItemId_Nothing && this->mUnk_8C.mUnk_04 != 0) {
                Vec3p_Add(this->mUnk_34, (Vec3p *) &data_ov110_021861ec.mUnk_00, &auStack_18);
                func_ov000_02058fc4(data_027e0958, &this->mUnk_74, &auStack_18);
            }
            break;
        default:
            break;
    }
}

ARM UnkStruct_PlayerGet_ec::UnkStruct_PlayerGet_ec() :
    UnkSystem7(NULL) {}

// non-matching
THUMB void UnkStruct_027e0ce0_34::func_ov110_02185d3c(ItemId itemId) {
    unk32 uStack_14;
    u16 auStack_18[2];

    switch (itemId) {
        case ItemId_31:
            this->func_ov024_020d3d98(0, 0);
            this->mUnk_2C = 1;
            this->mUnk_00 = 0;
            this->mUnk_10 = 0;
            break;
        case ItemId_33:
            this->func_ov024_020d3d98(2, 0);
            this->mUnk_2C = 2;
            this->mUnk_04 = 2;
            this->mUnk_14 = 0;
            break;
        default:
            uStack_14     = -1;
            auStack_18[0] = 0;

            if (func_ov024_020d5354(&uStack_14, auStack_18) != 0) {
                this->func_ov024_020d3ee8(uStack_14, auStack_18[0], 1);
            }
            break;
    }
}

ARM unk32 ItemManager::func_ov110_02185da4(unk32 param1) {
    return data_ov110_02185de8[param1];
}

ARM AdventureFlag ItemManager::func_ov110_02185db4(ItemId itemId) {
    return data_ov110_02185fbc[itemId];
}
