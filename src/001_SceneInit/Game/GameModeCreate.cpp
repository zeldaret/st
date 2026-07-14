#include "Game/Game.hpp"
#include "Game/GameModeAdventure.hpp"
#include "Game/GameModeBattle.hpp"
#include "Game/GameModeContactMode.hpp"
#include "Game/GameModeDownloadPlay.hpp"
#include "Game/GameModeTitleScreen.hpp"
#include "Save/SaveFile.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_ov000_020b4eec.hpp"
#include "versions.h"

#include <nitro/mi.h>

// different function order
#if IS_JP
GameModeBase *GameModeTitleScreen::Create() {
    data_02049ba0.func_020148d0(OverlayIndex_Title);

    SaveSlot::func_ov000_020a1028(&gGame.mpSaveSlot->mInfoData);

    SaveTreasureData *pTreasureData = &gGame.mpSaveSlot->mTreasureData;
    MI_CpuClearFast(pTreasureData, sizeof(SaveTreasureData));

    for (int i = 0; i < ARRAY_LEN(pTreasureData->unk_3C); i++) {
        pTreasureData->unk_3C[i] = TreasureType_None;
    }

    SaveSlot::func_ov000_020a10f4(&gGame.mpSaveSlot->mUnk_2600);

    return new(HeapIndex_1) GameModeTitleScreen();
}

GameModeBase *GameModeAdventure::Create() {
    data_02049ba0.func_020148d0(OverlayIndex_MainGame);
    return new(HeapIndex_1) GameModeAdventure();
}
#else
GameModeBase *GameModeAdventure::Create() {
    data_02049ba0.func_020148d0(OverlayIndex_MainGame);
    return new(HeapIndex_1) GameModeAdventure();
}

GameModeBase *GameModeTitleScreen::Create() {
    data_02049ba0.func_020148d0(OverlayIndex_Title);

    SaveSlot::func_ov000_020a1028(&gGame.mpSaveSlot->mInfoData);

    SaveTreasureData *pTreasureData = &gGame.mpSaveSlot->mTreasureData;
    MI_CpuClearFast(pTreasureData, sizeof(SaveTreasureData));

    for (int i = 0; i < ARRAY_LEN(pTreasureData->unk_3C); i++) {
        pTreasureData->unk_3C[i] = TreasureType_None;
    }

    SaveSlot::func_ov000_020a10f4(&gGame.mpSaveSlot->mUnk_2600);

    return new(HeapIndex_1) GameModeTitleScreen();
}
#endif

GameModeBase *GameModeContactMode::Create() {
    data_02049ba0.func_020148d0(OverlayIndex_Wxc);
    return GameModeContactMode::CreateInstance();
}

GameModeBase *GameModeDownloadPlay::Create() {
    data_02049ba0.func_020148d0(OverlayIndex_Download);
    return GameModeDownloadPlay::CreateInstance();
}

GameModeBase *GameModeBattle::Create() {
    data_02049ba0.func_020148d0(OverlayIndex_BattleGame);
    return new(HeapIndex_1) GameModeBattle(data_ov000_020b4eec.mUnk_00);
}

GameSaveSlot *UnkStruct_ov000_020b4eec::func_ov001_020be12c() {
    return gGame.mpSaveSlot;
}
