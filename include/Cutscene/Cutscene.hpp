#pragma once

#include "global.h"
#include "types.h"

#include "Save/AdventureFlags.hpp"

enum CutsceneIndex_ {
    /*  0 */ CutsceneIndex_TitleScreen,
    /*  1 */ CutsceneIndex_Intro,
    /*  2 */ CutsceneIndex_EngineerCertificate,
    /*  3 */ CutsceneIndex_SpiritTowerSplit_01, // Rails disappearing
    /*  4 */ CutsceneIndex_SpiritTowerSplit_02, // Spirit Tower split
    /*  5 */ CutsceneIndex_SpiritTowerSplit_03, // Tower parts aligning
    /*  6 */ CutsceneIndex_SpiritTowerSplit_04, // Demon Train appearing
    /*  7 */ CutsceneIndex_SpiritTowerSplit_05, // Zelda becoming a ghost
    /*  8 */ CutsceneIndex_WalkingToSpiritTower,
    /*  9 */ CutsceneIndex_FirstAnjeanMeeting,
    /* 10 */ CutsceneIndex_FirstPhantomPossession,
    /* 11 */ CutsceneIndex_ForestTempleCompleted_01, // Altar appearing in boss room
    /* 12 */ CutsceneIndex_ForestTempleCompleted_02, // Forest Realm Spirit Tracks restoring
    /* 13 */ CutsceneIndex_ForestTempleCompleted_03, // First part of Spirit Tower split re-attatching
    /* 14 */ CutsceneIndex_BlizzardTempleCompleted_01, // Altar appearing in boss room
    /* 15 */ CutsceneIndex_BlizzardTempleCompleted_02, // Snow Realm Spirit Tracks restoring
    /* 16 */ CutsceneIndex_BlizzardTempleCompleted_03, // Second part of Spirit Tower split re-attatching
    /* 17 */ CutsceneIndex_MarineTempleCompleted_01, // Altar appearing in boss room
    /* 18 */ CutsceneIndex_MarineTempleCompleted_02, // Ocean Realm Spirit Tracks restoring
    /* 19 */ CutsceneIndex_MarineTempleCompleted_03, // Third part of Spirit Tower split re-attatching
    /* 20 */ CutsceneIndex_StavenInTOSAfterFireGlyph_01, // Staven appearing in ToS
    /* 21 */ CutsceneIndex_StavenInTOSAfterFireGlyph_02, // Zelda and Link falling inside tower's lobby
    /* 22 */ CutsceneIndex_MountainTempleCompleted_01, // Altar appearing in boss room
    /* 23 */ CutsceneIndex_MountainTempleCompleted_02, // Fire Realm Spirit Tracks restoring
    /* 24 */ CutsceneIndex_MountainTempleCompleted_03, // Fourth part of Spirit Tower split re-attatching
    /* 25 */ CutsceneIndex_StavenPreBattle,
    /* 26 */ CutsceneIndex_StavenPostBattle,
    /* 27 */ CutsceneIndex_MalladusOnTOSSummit_01, // Malladus appearing
    /* 28 */ CutsceneIndex_MalladusOnTOSSummit_02, // Malladus and Cole leaving with the Demon Train
    /* 29 */ CutsceneIndex_PassengerCarAnjeanBowOfLight,
    /* 30 */ CutsceneIndex_LokomoSword,
    /* 31 */ CutsceneIndex_PassengerCarBeforeMalladusFight,
    /* 32 */ CutsceneIndex_BoardingDemonTrain,
    /* 33 */ CutsceneIndex_BeforeMalladusBeast_01, // Demon Train getting destroyed
    /* 34 */ CutsceneIndex_BeforeMalladusBeast_02, // Zelda getting her body back
    /* 35 */ CutsceneIndex_BeforeMalladusBeast_03, // Beast Malladus appearing
    /* 36 */ CutsceneIndex_PreCredits,
    /* 37 */ CutsceneIndex_Credits_01, // Credits followed by first ending
    /* 38 */ CutsceneIndex_Credits_02, // Credits followed by second ending
    /* 39 */ CutsceneIndex_Credits_03, // Credits followed by third ending
    /* 40 */ CutsceneIndex_SpiritPipes,
    /* 41 */ CutsceneIndex_ForestTracksRestoredFromGlyph,
    /* 42 */ CutsceneIndex_MalladusBeastDestroyed,
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
    /* 0C */ bool mUnk_0D;
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
