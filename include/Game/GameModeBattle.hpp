#pragma once

#include "Game/GameMode.hpp"
#include "global.h"
#include "types.h"

class GameModeBattle : public GameModeBase {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x4C);
    /* 4C */

    GameModeBattle(unk32 param1);

    /* 00 */ virtual ~GameModeBattle() override;
    /* 08 */ virtual void vfunc_08() override; // Init
    /* 0C */ virtual void vfunc_0C() override; // Update
    /* 10 */ virtual void vfunc_10() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual unk32 vfunc_24() override;

    // overlay 1
    static GameModeBase *Create();
};
