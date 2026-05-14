#pragma once

#include "Item/Item.hpp"
#include "Save/AdventureFlags.hpp"
#include "global.h"
#include "types.h"

#include <nitro/math.h>

#define MAX_PRICECARDS 99

enum LetterType_ {
    /* -1 */ LetterType_None                 = -1,
    /*  0 */ LetterType_MetPostmanFirst      = 0,  // AdventureFlag_MetPostmanFirstLetter
    /*  1 */ LetterType_ReceivedZeldas       = 1,  // AdventureFlag_ReceivedZeldasLetter
    /*  2 */ LetterType_ReceivedAlfonzos     = 2,  // AdventureFlag_ReceivedAlfonzosLetter
    /*  3 */ LetterType_ReceivedRussells     = 3,  // AdventureFlag_ReceivedRussellsLetter
    /*  4 */ LetterType_ObtainedLinebecks    = 4,  // AdventureFlag_ObtainedLinebecksLetter
    /*  5 */ LetterType_ReceivedBeedlesFirst = 5,  // AdventureFlag_ReceivedBeedlesFirstLetter
    /*  6 */ LetterType_Unk_03E              = 6,  // AdventureFlag_Unk_03E
    /*  7 */ LetterType_Unk_03F              = 7,  // AdventureFlag_Unk_03F
    /*  8 */ LetterType_Unk_040              = 8,  // AdventureFlag_Unk_040
    /*  9 */ LetterType_Unk_041              = 9,  // AdventureFlag_Unk_041
    /*  10 */ LetterType_Unk_042             = 10, // AdventureFlag_Unk_042
    /*  11 */ LetterType_Unk_043             = 11, // AdventureFlag_Unk_043
    /*  12 */ LetterType_Unk_044             = 12, // AdventureFlag_Unk_044
    /*  13 */ LetterType_Unk_045             = 13, // AdventureFlag_Unk_045
    /*  14 */ LetterType_ReceivedCarbens     = 14, // AdventureFlag_ReceivedCarbensLetter
    /*  15 */ LetterType_ReceivedNikos       = 15, // AdventureFlag_ReceivedNikosLetter
    /*  16 */ LetterType_ReceivedFerrus1     = 16, // AdventureFlag_ReceivedFerrusLetter1
    /*  17 */ LetterType_ReceivedFerrus2     = 17, // AdventureFlag_ReceivedFerrusLetter2
    /*  18 */ LetterType_ReceivedFerrus3     = 18, // AdventureFlag_ReceivedFerrusLetter3
    /*  19 */ LetterType_ReceivedKagorons    = 19, // AdventureFlag_ReceivedKagoronsLetter
    /*  20 */ LetterType_Max                 = 20,
};

enum StampType_ {
    /* -1 */ StampType_None              = -1,
    /*  0 */ StampType_TowerOfSpirits    = 0,
    /*  1 */ StampType_CastleTown        = 1,
    /*  2 */ StampType_OutsetVillage     = 2,
    /*  3 */ StampType_Mayscore          = 3,
    /*  4 */ StampType_WoodlandSanctuary = 4,
    /*  5 */ StampType_AnoukiVillage     = 5,
    /*  6 */ StampType_SnowfallSanctuary = 6,
    /*  7 */ StampType_PapuziaVillage    = 7,
    /*  8 */ StampType_IslandSanctuary   = 8,
    /*  9 */ StampType_GoronVillage      = 9,
    /*  10 */ StampType_ValleySanctuary  = 10,
    /*  11 */ StampType_DuneSanctuary    = 11,
    /*  12 */ StampType_WoodedTemple     = 12,
    /*  13 */ StampType_BlizzardTemple   = 13,
    /*  14 */ StampType_MarineTemple     = 14,
    /*  15 */ StampType_MountainTemple   = 15,
    /*  16 */ StampType_DesertTemple     = 16,
    /*  17 */ StampType_PirateHideout    = 17,
    /*  18 */ StampType_TradingPost      = 18,
    /*  19 */ StampType_IcySpring        = 19,
    /*  20 */ StampType_Max              = 20,
};

class MiscAdvManager : public AutoInstance<MiscAdvManager> {
public:
    /* 00 */ u16 mStampDates[StampType_Max];
    /* 28 */ u16 mUnk_28;
    /* 2A */ u16 mPostDate;
    /* 2C */ Vec2b mStampPositions[StampType_Max];
    /* 54 */ s8 mObtainedLetters[LetterType_Max];
    /* 68 */ s8 mObtainedStamps[StampType_Max];
    /* 7C */ u8 mLastRandomNum;
    /* 7D */ u8 mRandomNum;
    /* 7E */ s8 mNumPriceCards;       // current amount of price cards
    /* 7F */ s8 mNumPostedPriceCards; // current amount of posted price cards
    /* 80 */ unk8 mUnk_80;
    /* 81 */ unk8 mUnk_81;       // pad?
    /* 82 */ unk8 mUnk_82;       // pad?
    /* 83 */ unk8 mUnk_83;       // pad?
    /* 84 */ unk32 mLettersRead; // bitfield
    /* 88 */ unk32 mStampsFlag;  // bitfield, related to the checkmarks from the stampbook
    /* 8C */ unk16 mSongs;       // bitfield
    /* 8E */ unk16 mUnk_8E;      // pad?
    /* 90 */

    MiscAdvManager();
    ~MiscAdvManager();

    bool GotMaxPriceCards() {
        return this->GetNumPostcards() >= MAX_PRICECARDS ? true : false;
    }

    void func_ov024_020d6310(MiscAdvManager *pSrc);
    void GiveLetterOrPriceCard(ItemId itemId);
    void GiveLetter(AdventureFlag_Half flag);
    unk32 GetObtainedLetterCount();
    bool GotUnreadLetters();
    unk32 func_ov024_020d6468();
    unk32 GetStamp(unk32 index);
    u16 *GetStampDate(unk32 index);
    Vec2b *GetStampPos(unk32 index);
    void func_ov024_020d64b4(unk32 param1, unk32 param2, u16 *param3);
    void func_ov024_020d6530();
    unk32 GetNumPostcards();
    void GivePriceCard(unk32 amount);
    void PostPriceCard(unk32 amount, unk32 param2);
    void func_ov024_020d6610();

    static MiscAdvManager *Create();
};

extern MiscAdvManager *gpMiscAdvManager;
