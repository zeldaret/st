#pragma once

#include "global.h"
#include "types.h"

#include "Save/AdventureFlags.hpp"

enum CutsceneIndex_ {
    /*  0 */ CutsceneIndex_TitleScreen,
    /*  1 */ CutsceneIndex_Intro,
    /*  2 */ CutsceneIndex_d03_01,
    /*  3 */ CutsceneIndex_SpiritTowerSplit,
    /*  4 */ CutsceneIndex_d04_02,
    /*  5 */ CutsceneIndex_d04_03,
    /*  6 */ CutsceneIndex_d04_04,
    /*  7 */ CutsceneIndex_d04_05,
    /*  8 */ CutsceneIndex_d05_01,
    /*  9 */ CutsceneIndex_FirstAnjeanMeeting,
    /* 10 */ CutsceneIndex_FirstPhantomPossession,
    /* 11 */ CutsceneIndex_ForestTempleCompleted,
    /* 12 */ CutsceneIndex_d08_02,
    /* 13 */ CutsceneIndex_d08_03,
    /* 14 */ CutsceneIndex_BlizzardTempleCompleted,
    /* 15 */ CutsceneIndex_d09_02,
    /* 16 */ CutsceneIndex_d09_03,
    /* 17 */ CutsceneIndex_MarineTempleCompleted,
    /* 18 */ CutsceneIndex_d10_02,
    /* 19 */ CutsceneIndex_d10_03,
    /* 20 */ CutsceneIndex_StavenInTOSAfterFireGlyph,
    /* 21 */ CutsceneIndex_d11_02,
    /* 22 */ CutsceneIndex_MountainTempleCompleted,
    /* 23 */ CutsceneIndex_d12_02,
    /* 24 */ CutsceneIndex_d12_03,
    /* 25 */ CutsceneIndex_d13_01,
    /* 26 */ CutsceneIndex_StavenPostBattle,
    /* 27 */ CutsceneIndex_MalladusOnTOSSummit,
    /* 28 */ CutsceneIndex_d15_02,
    /* 29 */ CutsceneIndex_d16_01,
    /* 30 */ CutsceneIndex_LokomoSword,
    /* 31 */ CutsceneIndex_d18_01,
    /* 32 */ CutsceneIndex_d19_01,
    /* 33 */ CutsceneIndex_d20_01,
    /* 34 */ CutsceneIndex_d20_02,
    /* 35 */ CutsceneIndex_d20_03,
    /* 36 */ CutsceneIndex_d21_01,
    /* 37 */ CutsceneIndex_d23_01,
    /* 38 */ CutsceneIndex_d23_02,
    /* 39 */ CutsceneIndex_d23_03,
    /* 40 */ CutsceneIndex_SpiritPipes,
    /* 41 */ CutsceneIndex_ForestTracksRestoredFromGlyph,
    /* 42 */ CutsceneIndex_d26_01,
    /* 43 */ CutsceneIndex_Max,

    CutsceneIndex_None = CutsceneIndex_Max,
};

struct CutsceneParamsEntry {
    /* 00 */ const char *mUnk_00;
    /* 04 */ u8 mSceneIndex;
    /* 05 */ u8 mRoomIndex;
    /* 06 */ u8 mSpawnIndex;
    /* 07 */ u8 mCutsceneIndex; // note: this seems to be the index of the current entry?
    /* 08 */ u8 mNextSceneIndex;
    /* 09 */ u8 mNextRoomIndex;
    /* 0A */ u8 mNextSpawnIndex;
    /* 0B */ u8 mNextCutsceneIndex;
    /* 0C */ bool mNextIsCS; // doesn't makes sense with the array's data
    /* 0C */ u8 mUnk_0D;
    /* 0E */ unk16 mUnk_0E;
    /* 10 */ AdventureFlag_Half mFlag;
    /* 12 */ unk16 mUnk_12; // pad?
    /* 14 */ u32 mUnk_14;
    /* 18 */ u32 mUnk_18;
    /* 1C */
};

CutsceneParamsEntry *Cutscene_GetParamEntry(s32 csIndex);
s32 func_ov000_020a7840(unk32 param1);
bool Cutscene_IsAdventureFlagSet(s32 csIndex);

extern const CutsceneParamsEntry gCSParamsEntries[CutsceneIndex_Max];
