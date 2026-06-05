#include <string.h>

#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkNSHD.hpp"
#include "MainGame/AdventureMode.hpp"
#include "MainGame/MiscAdvManager.hpp"
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
#include "versions.h"

#include "math.hpp"

struct UnkStruct_02186240 {
    /* 0000 */ unk8 mUnk_0000[0x3F68];
    /* 3F68 */
};
UnkStruct_02186240 data_ov110_02186240;

extern const char *data_ov000_020aa240; // .nsbtx
extern const char *data_ov000_020aa248; // .nsbmd

extern "C" void func_ov000_0205ca74(unk32);
extern "C" void func_01ffb6e4(unk32, const void *, void *);
extern "C" void func_01ffc5a0(ModelRender *, unk32, u16, void *, unk32);
extern "C" void func_ov000_0208f820();
extern "C" void func_ov000_02058fc4(unk32 *, UnkStruct_PlayerGet_74 *, VecFx32 *);
extern unk32 *data_027e0958;
extern "C" void func_ov000_0208ba10(void *, void *, unk32);
extern "C" void func_02015ea8(unk32, void *);
extern "C" void func_02015628(char *, char *, unk32, void *, size_t);
extern "C" void func_02015664(char *, unk32);
extern "C" void func_020156c8(char *, char *, unk32);
extern "C" void func_020156f4(char *);
extern "C" void func_02015644(char *);

extern "C" BMDSectionModel *func_ov000_0205abcc(void *, void *, unk32, unk32, unk32);
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
            this->GiveSmallKeys(1);
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

            this->mArrowAmount = this->GetQuiverCapacity();
            break;
        case ItemId_BombBagMedium:
        case ItemId_BombBagLarge:
            if (this->mBombBagCapacity < UpgradeCapacity_Tier3) {
                this->mBombBagCapacity++;
            }

            this->mBombAmount = this->GetBombBagCapacity();
            break;
        case ItemId_RedPotion:
            this->GivePotion(PotionType_Red);
            break;
        case ItemId_PurplePotion:
            this->GivePotion(PotionType_Purple);
            break;
        case ItemId_YellowPotion:
            this->GivePotion(PotionType_Yellow);
            break;
        case ItemId_ArrowsRefill:
            this->GiveArrows(10);
            break;
        case ItemId_BombsRefill:
            this->GiveBombs(10);
            break;
        case ItemId_TearLight:
            if (this->mTearsAmount >= 3) {
                this->mTearsAmount = 3;
            } else {
                this->mTearsAmount++;
            }
            break;
        default:
            ItemFlag itemFlag = ItemManager::GetEquippedItemFlag(itemId);

            if (itemFlag != ItemFlag_None) {
                this->SetFlag(itemFlag);

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
                    data_ov024_020d8698->func_ov024_020cd458(this->mEquippedItem, false);
                }
            } else {
                itemFlag = GetItemFlag(itemId);

                if (itemFlag != ItemFlag_None) {
                    this->SetFlag(itemFlag);
                }
            }
            break;
    }

    AdventureFlag advFlag = ItemManager::GetAdvFlagFromItem(itemId);

    if (advFlag != AdventureFlag_Nothing) {
        advFlag &= 0xFFFF;
        SET_FLAG(data_027e09b8->mAdventureFlags, advFlag);
    }

    data_027e0ce0->mUnk_34->func_ov110_02185d3c(itemId);
    gpTreasureManager->func_ov000_020aa0ac(itemId);
    gpMiscAdvManager->GiveLetterOrPriceCard(itemId);

    if (!GET_FLAG(this->mFlags, ItemFlag_LokomoSword) && itemId == ItemId_TearLight &&
        this->mTearsAmount == MAX_TEARS_OF_LIGHT && (gOverlayManager.mLoadedOverlays[OverlaySlot_8] == OverlayIndex_Tower)) {
        return true;
    }

    return false;
}

// BMG IDs
static const u32 sBMGItemMap[] = {
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemNothing),          // ItemId_Nothing
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemNormalShield),     // ItemId_NormalShield
    BMG_ID(BMGGroup_castle, 0xD6),                               // ItemId_NormalSword
    BMG_ID(BMGGroup_dungeon, 0x7A),                              // ItemId_Whirlwind
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemBombBag),          // ItemId_BombBag
    BMG_ID(BMGGroup_dungeon, 0x7B),                              // ItemId_NormalBow
    BMG_ID(BMGGroup_dungeon, 0x7C),                              // ItemId_Boomerang
    BMG_ID(BMGGroup_dungeon, 0x7D),                              // ItemId_Whip
    BMG_ID(BMGGroup_dungeon, 0x7E),                              // ItemId_SandRod
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_04),                // ItemId_9
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemSmallKey),         // ItemId_NormalKey
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_06),                // ItemId_BossKey
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemGreenRupee),       // ItemId_GreenRupee
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemBlueRupee),        // ItemId_BlueRupee
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemRedRupee),         // ItemId_RedRupee
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemBigGreenRupee),    // ItemId_BigGreenRupee
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemBigRedRupee),      // ItemId_BigRedRupee
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemBigGoldRupee),     // ItemId_BigGoldRupee
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_18),      // ItemId_ForceGem_18
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_19),      // ItemId_ForceGem_19
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_20),      // ItemId_ForceGem_20
    BMG_ID(BMGGroup_tower, 0x00),                                // ItemId_ForestGlyph
    BMG_ID(BMGGroup_tower, 0x01),                                // ItemId_SnowGlyph
    BMG_ID(BMGGroup_tower, 0x02),                                // ItemId_OceanGlyph
    BMG_ID(BMGGroup_tower, 0x03),                                // ItemId_FireGlyph
    BMG_ID(BMGGroup_forest, 0xEB),                               // ItemId_RestoredForestGlyph
    BMG_ID(BMGGroup_snow, 0x00),                                 // ItemId_RestoredSnowGlyph
    BMG_ID(BMGGroup_water, 0x00),                                // ItemId_RestoredOceanGlyph
    BMG_ID(BMGGroup_flame_fld, 0x8E),                            // ItemId_RestoredFireGlyph
    BMG_ID(BMGGroup_desert, 0x48),                               // ItemId_RestoredDesertOceanGlyph
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemFinalTrack),       // ItemId_FinalTrack
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_11),                // ItemId_SpiritTrain
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_12),                // ItemId_TrainCannon
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_13),                // ItemId_SpiritTrainCar
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_14),                // ItemId_TrainWagon
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_35),      // ItemId_ForceGem_35
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_36),      // ItemId_ForceGem_36
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_37),      // ItemId_ForceGem_37
    BMG_ID(BMGGroup_castle, 0xD7),                               // ItemId_RecruitUniform
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemLetter),           // ItemId_PostmasterLetter
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemHeartContainer),   // ItemId_HeartContainer
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemMediumQuiver),     // ItemId_QuiverMedium
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemMediumBombBag),    // ItemId_BombBagMedium
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_43),      // ItemId_ForceGem_43
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_44),      // ItemId_ForceGem_44
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_45),      // ItemId_ForceGem_45
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_46),      // ItemId_ForceGem_46
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_47),      // ItemId_ForceGem_47
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_48),      // ItemId_ForceGem_48
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_49),      // ItemId_ForceGem_49
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_50),      // ItemId_ForceGem_50
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_51),      // ItemId_ForceGem_51
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_52),      // ItemId_ForceGem_52
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_53),      // ItemId_ForceGem_53
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_54),      // ItemId_ForceGem_54
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_55),      // ItemId_ForceGem_55
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_56),      // ItemId_ForceGem_56
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemForceGem_57),      // ItemId_ForceGem_57
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_2B),                // ItemId_ForceGem_58
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_2C),                // ItemId_ForceGem_59
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_2D),                // ItemId_ForceGem_60
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_2E),                // ItemId_ForceGem_61
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_2F),                // ItemId_PanFlute
    BMG_ID(BMGGroup_village, 0xF7),                              // ItemId_StampBook
    BMG_ID(BMGGroup_dungeon, 0x7F),                              // ItemId_LightBow
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_30),                // ItemId_LokomoSword
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemTenPriceCard),     // ItemId_TenPriceCard
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemRedPotion),        // ItemId_RedPotion
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemPurplePotion),     // ItemId_PurplePotion
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemYellowPotion),     // ItemId_YellowPotion
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemDemonFossil),      // ItemId_DemonFossil
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemStalfosSkull),     // ItemId_StalfosSkull
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemStarFragment),     // ItemId_StarFragment
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemBeeLarvae),        // ItemId_BeeLarvae
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemWoodHeart),        // ItemId_WoodHeart
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemDarkPearlLoop),    // ItemId_DarkPearlLoop
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemWhitePearlLoop),   // ItemId_WhitePearlLoop
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemRutoCrown),        // ItemId_RutoCrown
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemDragonScale),      // ItemId_DragonScale
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemPirateNecklace),   // ItemId_PirateNecklace
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemPalaceDish),       // ItemId_PalaceDish
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemGoronAmber),       // ItemId_GoronAmber
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemMysticJade),       // ItemId_MysticJade
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemAncientCoin),      // ItemId_AncientCoin
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemPricelessStone),   // ItemId_PricelessStone
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemRegalRing),        // ItemId_RegalRing
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_45),                // ItemId_ArrowsRefill
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_46),                // ItemId_BombsRefill
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_47),                // ItemId_SoldOutSign
    BMG_ID(BMGGroup_village, 0xF8),                              // ItemId_AncientShield
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemLargeQuiver),      // ItemId_QuiverLarge
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemLargeBombBag),     // ItemId_BombBagLarge
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_4A),                // ItemId_RandCommonTreasure
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_4B),                // ItemId_RandUncommonTreasure
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_4C),                // ItemId_RandRareTreasure
    BMG_ID(BMGGroup_maingame, MsgIndex_Empty_4D),                // ItemId_RandLegendaryTreasure
    BMG_ID(BMGGroup_tower, 0x04),                                // ItemId_TearLight
    BMG_ID(BMGGroup_tower, 0x05),                                // ItemId_LightCompass
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemScrollSpinAttack), // ItemId_ScrollSpinAttack
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemScrollBeam),       // ItemId_ScrollBeam
    BMG_ID(BMGGroup_village, 0xF9),                              // ItemId_LinebeckLetter
    BMG_ID(BMGGroup_forest, 0xEC),                               // ItemId_PanFluteSong_101
    BMG_ID(BMGGroup_dungeon, 0x80),                              // ItemId_PanFluteSong_102
    BMG_ID(BMGGroup_water, 0x01),                                // ItemId_PanFluteSong_103
    BMG_ID(BMGGroup_village, 0xFA),                              // ItemId_PanFluteSong_104
    BMG_ID(BMGGroup_snow, 0x01),                                 // ItemId_PanFluteSong_105
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemRabbitNet),        // ItemId_RabbitNet
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemBeedleCard),       // ItemId_BeedleCard
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemSilverCard),       // ItemId_SilverCard
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemGoldCard),         // ItemId_GoldCard
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemPlatinumCard),     // ItemId_PlatinumCard
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemDiamondCard),      // ItemId_DiamondCard
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemFreebieCard),      // ItemId_FreebieCard
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemQuintupleCard),    // ItemId_QuintupleCard
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemCarbenLetter),     // ItemId_CarbenLetter

#if IS_JP
    BMG_ID(BMGGroup_village, 0xFB), // ItemId_RecruitUniform2
    BMG_ID(BMGGroup_village, 0xFC), // ItemId_EngineerUniform
#else
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemRecruitUniform2), // ItemId_RecruitUniform2
    BMG_ID(BMGGroup_maingame, MsgIndex_GetItemEngineerUniform), // ItemId_EngineerUniform
#endif
};

// Adventure Flags
static const AdventureFlag sAdvFlagItemMap[] = {
    AdventureFlag_Nothing,                           // ItemId_Nothing
    AdventureFlag_Nothing,                           // ItemId_NormalShield
    AdventureFlag_ObtainedRecruitSword,              // ItemId_NormalSword
    AdventureFlag_Nothing,                           // ItemId_Whirlwind
    AdventureFlag_Nothing,                           // ItemId_BombBag
    AdventureFlag_ObtainedBowAndArrows,              // ItemId_NormalBow
    AdventureFlag_Nothing,                           // ItemId_Boomerang
    AdventureFlag_ObtainedWhip,                      // ItemId_Whip
    AdventureFlag_ObtainedSandWand,                  // ItemId_SandRod
    AdventureFlag_Nothing,                           // ItemId_9
    AdventureFlag_Nothing,                           // ItemId_NormalKey
    AdventureFlag_Nothing,                           // ItemId_BossKey
    AdventureFlag_Nothing,                           // ItemId_GreenRupee
    AdventureFlag_Nothing,                           // ItemId_BlueRupee
    AdventureFlag_Nothing,                           // ItemId_RedRupee
    AdventureFlag_Nothing,                           // ItemId_BigGreenRupee
    AdventureFlag_Nothing,                           // ItemId_BigRedRupee
    AdventureFlag_Nothing,                           // ItemId_BigGoldRupee
    AdventureFlag_ObtainedWadatsumiForceGem,         // ItemId_ForceGem_18
    AdventureFlag_ObtainedNiboshiForceGem,           // ItemId_ForceGem_19
    AdventureFlag_ObtainedGoronAdultMegaIceForceGem, // ItemId_ForceGem_20
    AdventureFlag_ObtainedForestGlyph,               // ItemId_ForestGlyph
    AdventureFlag_ObtainedSnowGlyph,                 // ItemId_SnowGlyph
    AdventureFlag_ObtainedOceanGlyph,                // ItemId_OceanGlyph
    AdventureFlag_ObtainedFireGlyph,                 // ItemId_FireGlyph
    AdventureFlag_CompletedForestRestorationSong,    // ItemId_RestoredForestGlyph
    AdventureFlag_CompletedOceanRestorationSong,     // ItemId_RestoredSnowGlyph
    AdventureFlag_CompletedSnowRestorationSong,      // ItemId_RestoredOceanGlyph
    AdventureFlag_CompletedFireRestorationSong,      // ItemId_RestoredFireGlyph
    AdventureFlag_CompletedSandRestorationSong,      // ItemId_RestoredDesertOceanGlyph
    AdventureFlag_OpenedDarkRealmPortal,             // ItemId_FinalTrack
    AdventureFlag_ObtainedSpiritTrain,               // ItemId_SpiritTrain
    AdventureFlag_ObtainedTrainCannon,               // ItemId_TrainCannon
    AdventureFlag_ObtainedSpiritTrainCar,            // ItemId_SpiritTrainCar
    AdventureFlag_ObtainedTrainWagon,                // ItemId_TrainWagon
    AdventureFlag_ObtainedFerrusForceGem2,           // ItemId_ForceGem_35
    AdventureFlag_ObtainedKofuForceGem,              // ItemId_ForceGem_36
    AdventureFlag_ObtainedChildGoronForceGem,        // ItemId_ForceGem_37
    AdventureFlag_Nothing,                           // ItemId_RecruitUniform
    AdventureFlag_Nothing,                           // ItemId_PostmasterLetter
    AdventureFlag_Nothing,                           // ItemId_HeartContainer
    AdventureFlag_Nothing,                           // ItemId_QuiverMedium
    AdventureFlag_Nothing,                           // ItemId_BombBagMedium
    AdventureFlag_ObtainedLuciaForceGem,             // ItemId_ForceGem_43
    AdventureFlag_ObtainedOrcaForceGem,              // ItemId_ForceGem_44
    AdventureFlag_ObtainedCarbenForceGem,            // ItemId_ForceGem_45
    AdventureFlag_ObtainedRaelForceGem,              // ItemId_ForceGem_46
    AdventureFlag_ObtainedJoeForceGem,               // ItemId_ForceGem_47
    AdventureFlag_ObtainedMonaForceGem,              // ItemId_ForceGem_48
    AdventureFlag_ObtainedHarryForceGem,             // ItemId_ForceGem_49
    AdventureFlag_ObtainedMashForceGem,              // ItemId_ForceGem_50
    AdventureFlag_ObtainedFerrusForceGem1,           // ItemId_ForceGem_51
    AdventureFlag_ObtainedYekoForceGem,              // ItemId_ForceGem_52
    AdventureFlag_ObtainedNokoForceGem,              // ItemId_ForceGem_53
    AdventureFlag_ObtainedGoronAdultAnoukiForceGem,  // ItemId_ForceGem_54
    AdventureFlag_ObtainedSteemForceGem,             // ItemId_ForceGem_55
    AdventureFlag_ObtainedLinebeckForceGem,          // ItemId_ForceGem_56
    AdventureFlag_ObtainedAnjeanDesertForceGem,      // ItemId_ForceGem_57
    AdventureFlag_Unk_0A7,                           // ItemId_ForceGem_58
    AdventureFlag_Unk_0A8,                           // ItemId_ForceGem_59
    AdventureFlag_Unk_0A9,                           // ItemId_ForceGem_60
    AdventureFlag_Unk_0AA,                           // ItemId_ForceGem_61
    AdventureFlag_Nothing,                           // ItemId_PanFlute
    AdventureFlag_Nothing,                           // ItemId_StampBook
    AdventureFlag_ObtainedBowOfLight,                // ItemId_LightBow
    AdventureFlag_Unk_0B1,                           // ItemId_LokomoSword
    AdventureFlag_Nothing,                           // ItemId_TenPriceCard
    AdventureFlag_Nothing,                           // ItemId_RedPotion
    AdventureFlag_Nothing,                           // ItemId_PurplePotion
    AdventureFlag_Nothing,                           // ItemId_YellowPotion
    AdventureFlag_Nothing,                           // ItemId_DemonFossil
    AdventureFlag_Nothing,                           // ItemId_StalfosSkull
    AdventureFlag_Nothing,                           // ItemId_StarFragment
    AdventureFlag_Nothing,                           // ItemId_BeeLarvae
    AdventureFlag_Nothing,                           // ItemId_WoodHeart
    AdventureFlag_Nothing,                           // ItemId_DarkPearlLoop
    AdventureFlag_Nothing,                           // ItemId_WhitePearlLoop
    AdventureFlag_Nothing,                           // ItemId_RutoCrown
    AdventureFlag_Nothing,                           // ItemId_DragonScale
    AdventureFlag_Nothing,                           // ItemId_PirateNecklace
    AdventureFlag_Nothing,                           // ItemId_PalaceDish
    AdventureFlag_Nothing,                           // ItemId_GoronAmber
    AdventureFlag_Nothing,                           // ItemId_MysticJade
    AdventureFlag_Nothing,                           // ItemId_AncientCoin
    AdventureFlag_Nothing,                           // ItemId_PricelessStone
    AdventureFlag_Nothing,                           // ItemId_RegalRing
    AdventureFlag_Nothing,                           // ItemId_ArrowsRefill
    AdventureFlag_Nothing,                           // ItemId_BombsRefill
    AdventureFlag_Nothing,                           // ItemId_SoldOutSign
    AdventureFlag_Nothing,                           // ItemId_AncientShield
    AdventureFlag_Nothing,                           // ItemId_QuiverLarge
    AdventureFlag_Nothing,                           // ItemId_BombBagLarge
    AdventureFlag_Nothing,                           // ItemId_RandCommonTreasure
    AdventureFlag_Nothing,                           // ItemId_RandUncommonTreasure
    AdventureFlag_Nothing,                           // ItemId_RandRareTreasure
    AdventureFlag_Nothing,                           // ItemId_RandLegendaryTreasure
    AdventureFlag_Nothing,                           // ItemId_TearLight
    AdventureFlag_ObtainedCompassOfLight,            // ItemId_LightCompass
    AdventureFlag_Nothing,                           // ItemId_ScrollSpinAttack
    AdventureFlag_Nothing,                           // ItemId_ScrollBeam
    AdventureFlag_ObtainedLinebecksLetter,           // ItemId_LinebeckLetter
    AdventureFlag_Nothing,                           // ItemId_PanFluteSong_101
    AdventureFlag_Nothing,                           // ItemId_PanFluteSong_102
    AdventureFlag_Nothing,                           // ItemId_PanFluteSong_103
    AdventureFlag_Nothing,                           // ItemId_PanFluteSong_104
    AdventureFlag_Nothing,                           // ItemId_PanFluteSong_105
    AdventureFlag_ObtainedRabbitNet,                 // ItemId_RabbitNet
    AdventureFlag_ObtainedBeedlePointsCard,          // ItemId_BeedleCard
    AdventureFlag_Unk_18E,                           // ItemId_SilverCard
    AdventureFlag_Unk_18F,                           // ItemId_GoldCard
    AdventureFlag_Unk_190,                           // ItemId_PlatinumCard
    AdventureFlag_Unk_191,                           // ItemId_DiamondCard
    AdventureFlag_ObtainedBeedleFreebieCard,         // ItemId_FreebieCard
    AdventureFlag_ObtainedBeedleQuintuplePointsCard, // ItemId_QuintupleCard
    AdventureFlag_ReceivedCarbensLetter,             // ItemId_CarbenLetter
    AdventureFlag_Nothing,                           // ItemId_RecruitUniform2
    AdventureFlag_Nothing,                           // ItemId_EngineerUniform
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
        pUnk_28_98->mUnk_38.mUnk_08 &= ~0x10;

        if (pUnk_28_98->mUnk_38.mUnk_08 == 0) {
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
    VecFx32 *pUnk_38;
    VecFx32 *pUnk_3c;

    switch (param1->mUnk_04) {
        case 0x39:
            VecFx32 temp;
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
                    if (GET_FLAG(pItemManager->mFlags, ItemFlag_Bombs) == 0) {
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
                    if (GET_FLAG(pItemManager->mFlags, ItemFlag_Bow) == 0) {
                        itemId = ItemId_NormalBow;
                    } else if (pItemManager->mQuiverCapacity == UpgradeCapacity_Tier1) {
                        itemId = ItemId_QuiverMedium;
                    } else if (pItemManager->mQuiverCapacity == UpgradeCapacity_Tier2) {
                        itemId = ItemId_QuiverLarge;
                    }
                    break;
                default:
                    itemId = gpTreasureManager->func_ov000_020aa02c(itemId);
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
                    BMDSectionModel *res = func_ov000_0205abcc((void *) &fs4, (void *) &fs2, 0, 1, this->mUnk_30->mUnk_24);

                    this->mUnk_8C.vfunc_08(G3d_GetModelPtr(res));
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

            UnkStruct_027e09bc_0C *uVar11 = data_027e09bc->mUnk_0C;
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
                    ptr->mUnk_08 |= 0x10;
                    this->mUnk_64.func_ov000_0208a100();
                }
            }

            this->mUnk_73 = 0;

            switch (this->mUnk_54.mItemId) {
                case ItemId_RestoredForestGlyph:
                case ItemId_RestoredSnowGlyph:
                case ItemId_RestoredOceanGlyph:
                case ItemId_RestoredFireGlyph:
                case ItemId_RestoredDesertOceanGlyph:
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
                VecFx32 VStack_fc;

                VecFx32_Add(this->mUnk_34, &data_ov110_021861ec.mUnk_00, &VStack_fc);
                data_027e0cec->func_ov000_0209feac(0x874, &VStack_fc, 1, 0, 0);
                uStack_f0[0] = 0x870;
                uStack_f0[1] = 0x871;
                uStack_f0[2] = 0x872;
                uStack_f0[3] = 0x873;
                data_027e0cec->func_ov000_020a0000(this->mUnk_EC, &this->mUnk_FC, uStack_f0, &VStack_fc, 1);
            }

            data_027e0cf8->func_ov024_020c7828(this->mUnk_54.mItemId);
            UnkStruct_ov000_02067bc4::UnkStruct1 auStack_30;
            data_ov000_020b504c.func_ov000_02067cf8(ItemManager::GetBmgIDFromItem(this->mUnk_54.mItemId), 0, &auStack_30);
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
                case ItemId_RestoredForestGlyph:
                case ItemId_RestoredSnowGlyph:
                case ItemId_RestoredOceanGlyph:
                case ItemId_RestoredFireGlyph:
                case ItemId_RestoredDesertOceanGlyph:
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
                        if (data_027e09a4->mUnk_00.mSceneIndex == SceneIndex_f_first) {
                            this->mUnk_28->func_ov058_02152a24();
                        }
                        break;
                    default:
                        break;
                }

                if (*(u16 *) this->mUnk_54.mUnk_00 == 0x1000) {
                    Vec2b stack;
                    stack.x = this->mUnk_54.mUnk_00[0];
                    stack.y = this->mUnk_54.mUnk_00[1];

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
    VecFx32 auStack_18;

    switch (param2) {
        case 0x39:
        case 0x3A:
            break;
        case 0x3B:
            if (param3 != 0 && this->mUnk_54.mItemId != ItemId_Nothing && this->mUnk_8C.mpModel != NULL) {
                VecFx32_Add(this->mUnk_34, (VecFx32 *) &data_ov110_021861ec.mUnk_00, &auStack_18);
                func_ov000_02058fc4(data_027e0958, &this->mUnk_74, &auStack_18);
            }
            break;
        default:
            break;
    }
}

ARM UnkStruct_PlayerGet_ec::UnkStruct_PlayerGet_ec() :
    UnkSystem7(NULL) {}

THUMB void UnkStruct_027e0ce0_34::func_ov110_02185d3c(ItemId itemId) {
    s32 flagPos;
    s16 flagValue;

    switch (itemId) {
        case ItemId_SpiritTrain:
            this->func_ov024_020d3d98(0, 0);
            this->mUnk_2C    = 1;
            this->mUnk_00[0] = 0;
            this->mUnk_10[0] = 0;
            break;
        case ItemId_SpiritTrainCar:
            this->func_ov024_020d3d98(2, 0);
            this->mUnk_2C    = 2;
            this->mUnk_00[1] = 2;
            this->mUnk_10[1] = 0;
            break;
        default:
            flagPos   = -1;
            flagValue = 0;

            if (func_ov024_020d5354(&flagPos, &flagValue, itemId)) {
                this->SetTrackFlag(flagPos, flagValue, true);
            }
            break;
    }
}

ARM u32 ItemManager::GetBmgIDFromItem(ItemId itemId) {
    return sBMGItemMap[itemId];
}

ARM AdventureFlag ItemManager::GetAdvFlagFromItem(ItemId itemId) {
    return sAdvFlagItemMap[itemId];
}
