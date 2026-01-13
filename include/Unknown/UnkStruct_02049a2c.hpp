#pragma once

#include "Game/GameMode.hpp"
#include "Game/GameModeStartUp.hpp"
#include "global.h"
#include "types.h"

class GameModeFileSelect;

class UnkStruct_02049a2c_1C {
public:
    /* 00 (vtable) */
    /* 04 */

    UnkStruct_02049a2c_1C();

    // data_020437d8 vtable
    /* 00 */ virtual ~UnkStruct_02049a2c_1C();
    /* 08 */ virtual void vfunc_08();
};

class UnkStruct_02049a2c {
public:
    /* 00 */ GameModeBase *mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ UnkStruct_02049a2c_1C mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ STRUCT_PAD(0x24, 0xE8);
    /* E8 */

    UnkStruct_02049a2c();

    void Run(void);
    void func_02013370(unk32 param1);
    void func_02013724(void *param1);

    void func_ov018_020c48a4(unk32 param1);
    void func_ov018_020c48f8(); // loads overlay 0

    GameModeFileSelect *GetUnk00_FileSelect() {
        return (GameModeFileSelect *) this->mUnk_00;
    }

    static GameModeStartUp *func_ov018_020c4ba8();
};

extern UnkStruct_02049a2c data_02049a2c;
