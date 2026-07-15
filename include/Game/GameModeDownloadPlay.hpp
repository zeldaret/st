#pragma once

#include "Game/GameMode.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_ov001_020c46fc {
public:
    /* 00000 (vtable) */
    /* 00004 */ STRUCT_PAD(0x04, 0xAF054);
    /* AF054 */

    UnkStruct_ov001_020c46fc();

    /* 00 */ virtual ~UnkStruct_ov001_020c46fc();
};

extern UnkStruct_ov001_020c46fc *data_ov001_020c46fc;

class GameModeDownloadPlay : public GameModeBase {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x48);
    /* 48 */ UnkStruct_ov001_020c46fc *mUnk_48;
    /* 4C */ STRUCT_PAD(0x4C, 0x6C);
    /* 6C */

    GameModeDownloadPlay();

    /* 00 */ virtual ~GameModeDownloadPlay() override;

    // overlay 1
    void func_ov001_020c09dc();

    static GameModeBase *Create();

    // overlay 22
    static GameModeBase *CreateInstance();
};
