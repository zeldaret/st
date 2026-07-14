#pragma once

#include "Game/GameMode.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

class GameModeDownloadPlay : public GameModeBase {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x6C);
    /* 6C */

    GameModeDownloadPlay();

    /* 00 */ virtual ~GameModeDownloadPlay() override;

    // overlay 1
    static GameModeBase *Create();

    // overlay 22
    static GameModeBase *CreateInstance();
};
