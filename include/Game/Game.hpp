#pragma once

#include "Game/GameMode.hpp"
#include "Game/GameModeStartUp.hpp"
#include "Save/SaveManager.hpp"
#include "global.h"
#include "types.h"

typedef void (*GameUnkCallback1)(void);
typedef void (*GameUnkCallback2)(void);
typedef unk32 (*GameUnkCallback3)(void);

class GameModeFileSelect;

class UnkStruct_02049a2c_1C {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ STRUCT_PAD(0x08, 0xCC);
    /* CC */

    UnkStruct_02049a2c_1C();
    unk32 func_02013e18(void *param1, unk32 param2);

    // data_020437d8 vtable
    /* 00 */ virtual ~UnkStruct_02049a2c_1C();
    /* 08 */ virtual void vfunc_08();
};

class Game {
public:
    /* 00 */ GameModeBase *mpCurrentGameMode;
    /* 04 */ GameModeCreateCallback createCallback;
    /* 08 */ GameUnkCallback1 mUnk_08; // seems related to entering and leaving houses/grottos??
    /* 0C */ unk32 mFrameCounter;
    /* 10 */ SaveFile *mpSaveFile;
    /* 14 */ GameUnkCallback2 mUnk_14; // only set for wireless stuff?
    /* 18 */ GameUnkCallback3 mUnk_18; // same as above
    /* 1C */ UnkStruct_02049a2c_1C mUnk_1C;
    /* E8 */

    Game();

    void Run();
    void func_02013370(unk32 param1);
    bool TrySetCreateCallback(GameModeCreateCallback createCallback);

    void func_ov000_020576d0();
    void func_ov000_0205770c();

    void func_ov018_020c48a4();
    void func_ov018_020c48f8(); // loads overlay 0

    GameModeFileSelect *GetGameModeFileSelect() {
        return (GameModeFileSelect *) this->mpCurrentGameMode;
    }

    static GameModeStartUp *func_ov018_020c4ba8();
};

extern Game gGame;
