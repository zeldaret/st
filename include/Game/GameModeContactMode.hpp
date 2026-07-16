#pragma once

#include "Game/GameMode.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

class GameModeContactMode : public GameModeBase {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x20);
    /* 20 */

    GameModeContactMode();

    /* 00 */ virtual ~GameModeContactMode() override;

    // overlay 1
    static GameModeBase *Create();

    // overlay 23
    static GameModeBase *CreateInstance();
};
