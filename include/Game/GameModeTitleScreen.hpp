#pragma once

#include "Game/GameMode.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

class GameModeTitleScreen : public GameModeBase {
public:
    /* 00 (base) */
    /* 04 */

    GameModeTitleScreen();

    // data_ov025_020c5a68 vtable
    /* 00 */ virtual ~GameModeTitleScreen() override;
    /* 08 */ virtual void vfunc_08(unk32 param1, unk32 param2, unk32 param3) override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
};

extern void func_ov018_020c4b08(unk16 *param1);
extern void func_ov018_020c4e8c(void);
