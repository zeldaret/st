#pragma once

#include "Game/GameMode.hpp"
// #include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

class GameModeAdventure : public GameModeBase {
public:
    GameModeAdventure();

    // data_ov024_020d7b68 vtable
    /* 00 */ virtual ~GameModeAdventure() override;
    /* 08 */ virtual void vfunc_08() override; // Init
    /* 0C */ virtual void vfunc_0C() override; // Update
    /* 10 */ virtual void vfunc_10() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
};
