#pragma once

#include "Game/GameMode.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

class GameModeStartUp : public GameModeBase {
public:
    /* 00 (base) */
    /* 04 */ UnkStruct_0204a060_Base mUnk_04;
    /* 28 */ u16 mUnk_28;
    /* 2A */ bool mUnk_2A;
    /* 2B */ unk8 mUnk_2B;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */

    GameModeStartUp();

    // data_ov018_020c5b28 vtable
    /* 00 */ virtual ~GameModeStartUp() override {}
    /* 0C */ virtual void vfunc_0C() override;
    /* 20 */ virtual void vfunc_20() override;

    // gets rid of the operator delete call in D0
    void operator delete(void *ptr) {}
};

extern void func_ov018_020c4b08(unk16 *param1);
extern void func_ov018_020c4e8c(void);
