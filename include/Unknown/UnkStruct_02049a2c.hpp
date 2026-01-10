#pragma once

#include "Game/GameMode.hpp"
#include "types.h"

class GameModeFileSelect;

class UnkStruct_02049a2c {
public:
    /* 00 */ GameModeBase *mUnk_00;
    /* 04 */ unk8 mUnk_04[0xE8 - 0x04];
    /* E8 */

    void Run(void);
    void func_02013370(unk32 param1);

    GameModeFileSelect *GetUnk00_FileSelect() {
        return (GameModeFileSelect *) this->mUnk_00;
    }
};

extern UnkStruct_02049a2c data_02049a2c;
