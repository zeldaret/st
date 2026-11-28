#pragma once

#include "RefStruct.hpp"
#include "global.h"
#include "types.h"

class PlayerActorBase;

class UnkStruct_027e0d8c {
public:
    /* 00 */ PlayerActorBase *mpZelda;
    /* 04 */ void *mUnk_04; // pointer to `PlayerZeldaActor::mUnk_0BC`?
    /* 08 */ void *mUnk_08; // pointer to `PlayerZeldaActor::mUnk_0B8`
    /* 0C */ unk32 mUnk_0C; // pointer?
    /* 10 */

    UnkStruct_027e0d8c();
    ~UnkStruct_027e0d8c();

    // overlay 90
    void func_ov090_021660e8(); // in ActorUnkSZRD too

    // overlay 93
    void func_ov093_02166058();
    void func_ov093_02166068();
    void func_ov093_021660a8(RefStruct param1);
    void func_ov093_021660f8();
    void func_ov093_02166108();
    unk32 func_ov093_02166118();
    void func_ov093_021661c0(RefStruct param1);
    void func_ov093_02166220();
};

extern UnkStruct_027e0d8c *data_027e0d8c;
