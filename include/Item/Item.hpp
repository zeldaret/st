#pragma once

#include "flags.h"
#include "types.h"

#define MAX_KEYS 8
#define MAX_TEARS_OF_LIGHT 3

#define CAPACITY_QUIVER_TIER_1 20
#define CAPACITY_QUIVER_TIER_2 30
#define CAPACITY_QUIVER_TIER_3 50

#define CAPACITY_BOMB_BAG_TIER_1 10
#define CAPACITY_BOMB_BAG_TIER_2 20
#define CAPACITY_BOMB_BAG_TIER_3 30

typedef u8 UpgradeCapacity;
enum UpgradeCapacity_ {
    UpgradeCapacity_Tier1,
    UpgradeCapacity_Tier2,
    UpgradeCapacity_Tier3,
    UpgradeCapacity_Max
};

typedef u32 ItemFlag;
typedef u16 ItemFlag_u16;
enum ItemFlag_ {
    ItemFlag_None        = -1,
    ItemFlag_Whirlwind   = FLAG(0, 0),
    ItemFlag_Boomerang   = FLAG(0, 1),
    ItemFlag_Whip        = FLAG(0, 2),
    ItemFlag_Bow         = FLAG(0, 3),
    ItemFlag_Bombs       = FLAG(0, 4),
    ItemFlag_SandRod     = FLAG(0, 5),
    ItemFlag_EQUIP_START = ItemFlag_Whirlwind,
    ItemFlag_EQUIP_END   = ItemFlag_SandRod + 1,
    ItemFlag_EQUIP_COUNT = ItemFlag_EQUIP_END - ItemFlag_EQUIP_START,

    ItemFlag_6                = FLAG(0, 6),
    ItemFlag_7                = FLAG(0, 7),
    ItemFlag_8                = FLAG(0, 8),
    ItemFlag_9                = FLAG(0, 9),
    ItemFlag_10               = FLAG(0, 10),
    ItemFlag_11               = FLAG(0, 11),
    ItemFlag_12               = FLAG(0, 12),
    ItemFlag_13               = FLAG(0, 13),
    ItemFlag_14               = FLAG(0, 14),
    ItemFlag_15               = FLAG(0, 15),
    ItemFlag_Shield           = FLAG(0, 16),
    ItemFlag_Sword            = FLAG(0, 17),
    ItemFlag_LokomoSword      = FLAG(0, 18),
    ItemFlag_RecruitUniform   = FLAG(0, 19),
    ItemFlag_ScrollBeam       = FLAG(0, 20),
    ItemFlag_ScrollSpinAttack = FLAG(0, 21),
    ItemFlag_AncientShield    = FLAG(0, 22),
    ItemFlag_PanFlute         = FLAG(0, 23),
    ItemFlag_24               = FLAG(0, 24),
    ItemFlag_25               = FLAG(0, 25),
    ItemFlag_26               = FLAG(0, 26),
    ItemFlag_27               = FLAG(0, 27),
    ItemFlag_28               = FLAG(0, 28),
    ItemFlag_29               = FLAG(0, 29),
    ItemFlag_30               = FLAG(0, 30),
    ItemFlag_31               = FLAG(0, 31),
    ItemFlag_32               = FLAG(1, 0),
    ItemFlag_33               = FLAG(1, 1),
    ItemFlag_34               = FLAG(1, 2),
    ItemFlag_35               = FLAG(1, 3),
    ItemFlag_36               = FLAG(1, 4),
    ItemFlag_37               = FLAG(1, 5),
    ItemFlag_38               = FLAG(1, 6),
    ItemFlag_39               = FLAG(1, 7),
    ItemFlag_40               = FLAG(1, 8),
    ItemFlag_41               = FLAG(1, 9),
    ItemFlag_42               = FLAG(1, 10),
    ItemFlag_43               = FLAG(1, 11),
    ItemFlag_44               = FLAG(1, 12),
    ItemFlag_45               = FLAG(1, 13),
    ItemFlag_46               = FLAG(1, 14),
    ItemFlag_47               = FLAG(1, 15),
    ItemFlag_48               = FLAG(1, 16),
    ItemFlag_49               = FLAG(1, 17),
    ItemFlag_50               = FLAG(1, 18),
    ItemFlag_51               = FLAG(1, 19),
    ItemFlag_52               = FLAG(1, 20),
    ItemFlag_53               = FLAG(1, 21),
    ItemFlag_54               = FLAG(1, 22),
    ItemFlag_55               = FLAG(1, 23),
    ItemFlag_56               = FLAG(1, 24),
    ItemFlag_57               = FLAG(1, 25),
    ItemFlag_58               = FLAG(1, 26),
    ItemFlag_59               = FLAG(1, 27),
    ItemFlag_60               = FLAG(1, 28),
    ItemFlag_61               = FLAG(1, 29),
    ItemFlag_62               = FLAG(1, 30),
    ItemFlag_63               = FLAG(1, 31),
    ItemFlag_Max
};

typedef s32 ItemId;
typedef s16 ItemId_s16;
enum ItemId_ {
    /* 0xFF */ ItemId_None                  = -1,
    /* 0x00 */ ItemId_Nothing               = 0,
    /* 0x01 */ ItemId_NormalShield          = 1,
    /* 0x02 */ ItemId_NormalSword           = 2,
    /* 0x03 */ ItemId_Whirlwind             = 3,
    /* 0x04 */ ItemId_BombBag               = 4,
    /* 0x05 */ ItemId_NormalBow             = 5,
    /* 0x06 */ ItemId_Boomerang             = 6,
    /* 0x07 */ ItemId_Whip                  = 7,
    /* 0x08 */ ItemId_SandRod               = 8,
    /* 0x09 */ ItemId_9                     = 9,
    /* 0x0A */ ItemId_NormalKey             = 10,
    /* 0x0B */ ItemId_BossKey               = 11,
    /* 0x0C */ ItemId_GreenRupee            = 12,
    /* 0x0D */ ItemId_BlueRupee             = 13,
    /* 0x0E */ ItemId_RedRupee              = 14,
    /* 0x0F */ ItemId_BigGreenRupee         = 15,
    /* 0x10 */ ItemId_BigRedRupee           = 16,
    /* 0x11 */ ItemId_BigGoldRupee          = 17,
    /* 0x12 */ ItemId_ForceGem_18           = 18, // kidnapped papuchia man
    /* 0x13 */ ItemId_ForceGem_19           = 19, // ice for fish seller
    /* 0x14 */ ItemId_ForceGem_20           = 20, // goron lava house ice
    /* 0x15 */ ItemId_ForestGlyph           = 21,
    /* 0x16 */ ItemId_SnowGlyph             = 22,
    /* 0x17 */ ItemId_OceanGlyph            = 23,
    /* 0x18 */ ItemId_FireGlyph             = 24,
    /* 0x19 */ ItemId_25                    = 25, // glyph after forest restoration song
    /* 0x1A */ ItemId_26                    = 26, // glyph after restoration song
    /* 0x1B */ ItemId_27                    = 27, // glyph after restoration song
    /* 0x1C */ ItemId_28                    = 28, // glyph after restoration song
    /* 0x1D */ ItemId_29                    = 29, // glyph after restoration song
    /* 0x1E */ ItemId_FinalTrack            = 30, // unlocks the endgame portal
    /* 0x1F */ ItemId_31                    = 31,
    /* 0x20 */ ItemId_32                    = 32,
    /* 0x21 */ ItemId_33                    = 33,
    /* 0x22 */ ItemId_34                    = 34,
    /* 0x23 */ ItemId_ForceGem_35           = 35, // rightmost fire gem
    /* 0x24 */ ItemId_ForceGem_36           = 36, // right snow gem
    /* 0x25 */ ItemId_ForceGem_37           = 37, // top fire gem
    /* 0x26 */ ItemId_RecruitUniform        = 38,
    /* 0x27 */ ItemId_PostmasterLetter      = 39,
    /* 0x28 */ ItemId_HeartContainer        = 40,
    /* 0x29 */ ItemId_QuiverMedium          = 41,
    /* 0x2A */ ItemId_BombBagMedium         = 42,
    /* 0x2B */ ItemId_ForceGem_43           = 43, // one of rightmost forest
    /* 0x2C */ ItemId_ForceGem_44           = 44, // the other rightmost forest, but more middle than top
    /* 0x2D */ ItemId_ForceGem_45           = 45, // the bottom-rightmost forest
    /* 0x2E */ ItemId_ForceGem_46           = 46, // the top-rightmost fire
    /* 0x2F */ ItemId_ForceGem_47           = 47, // the center forest
    /* 0x30 */ ItemId_ForceGem_48           = 48, // the middle-left forest
    /* 0x31 */ ItemId_ForceGem_49           = 49, // the below middle-left forest
    /* 0x32 */ ItemId_ForceGem_50           = 50,
    /* 0x33 */ ItemId_ForceGem_51           = 51,
    /* 0x34 */ ItemId_ForceGem_52           = 52,
    /* 0x35 */ ItemId_ForceGem_53           = 53,
    /* 0x36 */ ItemId_ForceGem_54           = 54,
    /* 0x37 */ ItemId_ForceGem_55           = 55,
    /* 0x38 */ ItemId_ForceGem_56           = 56,
    /* 0x39 */ ItemId_ForceGem_57           = 57,
    /* 0x3A */ ItemId_ForceGem_58           = 58,
    /* 0x3B */ ItemId_ForceGem_59           = 59,
    /* 0x3C */ ItemId_ForceGem_60           = 60,
    /* 0x3D */ ItemId_ForceGem_61           = 61,
    /* 0x3E */ ItemId_PanFlute              = 62,
    /* 0x3F */ ItemId_StampBook             = 63,
    /* 0x40 */ ItemId_LightBow              = 64,
    /* 0x41 */ ItemId_LokomoSword           = 65,
    /* 0x42 */ ItemId_TenPriceCard          = 66,
    /* 0x43 */ ItemId_RedPotion             = 67,
    /* 0x44 */ ItemId_PurplePotion          = 68,
    /* 0x45 */ ItemId_YellowPotion          = 69,
    /* 0x46 */ ItemId_DemonFossil           = 70,
    /* 0x47 */ ItemId_StalfosSkull          = 71,
    /* 0x48 */ ItemId_StarFragment          = 72,
    /* 0x49 */ ItemId_BeeLarvae             = 73,
    /* 0x4A */ ItemId_WoodHeart             = 74,
    /* 0x4B */ ItemId_DarkPearlLoop         = 75,
    /* 0x4C */ ItemId_WhitePearlLoop        = 76,
    /* 0x4D */ ItemId_RutoCrown             = 77,
    /* 0x4E */ ItemId_DragonScale           = 78,
    /* 0x4F */ ItemId_PirateNecklace        = 79,
    /* 0x50 */ ItemId_PalaceDish            = 80,
    /* 0x51 */ ItemId_GoronAmber            = 81,
    /* 0x52 */ ItemId_MysticJade            = 82,
    /* 0x53 */ ItemId_AncientCoin           = 83,
    /* 0x54 */ ItemId_PricelessStone        = 84,
    /* 0x55 */ ItemId_RegalRing             = 85,
    /* 0x56 */ ItemId_ArrowsRefill          = 86,
    /* 0x57 */ ItemId_BombsRefill           = 87,
    /* 0x58 */ ItemId_SoldOutSign           = 88,
    /* 0x59 */ ItemId_AncientShield         = 89,
    /* 0x5A */ ItemId_QuiverLarge           = 90,
    /* 0x5B */ ItemId_BombBagLarge          = 91,
    /* 0x5C */ ItemId_RandCommonTreasure    = 92,
    /* 0x5D */ ItemId_RandUncommonTreasure  = 93,
    /* 0x5E */ ItemId_RandRareTreasure      = 94,
    /* 0x5F */ ItemId_RandLegendaryTreasure = 95,
    /* 0x60 */ ItemId_TearLight             = 96,
    /* 0x61 */ ItemId_LightCompass          = 97,
    /* 0x62 */ ItemId_ScrollSpinAttack      = 98,
    /* 0x63 */ ItemId_ScrollBeam            = 99,
    /* 0x64 */ ItemId_LinebeckLetter        = 100,
    /* 0x65 */ ItemId_PanFluteSong_101      = 101,
    /* 0x66 */ ItemId_PanFluteSong_102      = 102,
    /* 0x67 */ ItemId_PanFluteSong_103      = 103,
    /* 0x68 */ ItemId_PanFluteSong_104      = 104,
    /* 0x69 */ ItemId_PanFluteSong_105      = 105,
    /* 0x6A */ ItemId_RabbitNet             = 106,
    /* 0x6B */ ItemId_BeedleCard            = 107,
    /* 0x6C */ ItemId_SilverCard            = 108,
    /* 0x6D */ ItemId_GoldCard              = 109,
    /* 0x6E */ ItemId_PlatinumCard          = 110,
    /* 0x6F */ ItemId_DiamondCard           = 111,
    /* 0x70 */ ItemId_FreebieCard           = 112,
    /* 0x71 */ ItemId_QuintupleCard         = 113,
    /* 0x72 */ ItemId_CarbenLetter          = 114,
    /* 0x73 */ ItemId_RecruitUniform2       = 115,
    /* 0x74 */ ItemId_EngineerUniform       = 116,
};

#define MAX_TREASURE 99
typedef s16 TreasureType;
enum TreasureType_ {
    TreasureType_None           = -1,
    TreasureType_DemonFossil    = 0,
    TreasureType_StalfosSkull   = 1,
    TreasureType_StarFragment   = 2,
    TreasureType_BeeLarvae      = 3,
    TreasureType_WoodHeart      = 4,
    TreasureType_DarkPearlLoop  = 5,
    TreasureType_WhitePearlLoop = 6,
    TreasureType_RutoCrown      = 7,
    TreasureType_DragonScale    = 8,
    TreasureType_PirateNecklace = 9,
    TreasureType_PalaceDish     = 10,
    TreasureType_GoronAmber     = 11,
    TreasureType_MysticJade     = 12,
    TreasureType_AncientCoin    = 13,
    TreasureType_PricelessStone = 14,
    TreasureType_RegalRing      = 15,
    TreasureType_Max            = 16
};

#define MAX_POTIONS 2
typedef u32 PotionType;
enum PotionType_ {
    PotionType_None   = 0,
    PotionType_Red    = 1,
    PotionType_Purple = 2, // auto revives when you die
    PotionType_Yellow = 3,
};
