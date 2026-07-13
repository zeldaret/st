#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_027e0d8c {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_027e0d8c();
    ~UnkStruct_027e0d8c();

    // overlay 90
    void func_ov090_021660e8(); // in ActorUnkSZRD too

    // overlay 93
    void func_ov093_02166058();
    void func_ov093_02166068();
    void func_ov093_021660a8(ActorRef param1);
    void func_ov093_021660f8();
    void func_ov093_02166108();
    void func_ov093_02166220();
};

extern UnkStruct_027e0d8c *data_027e0d8c;
