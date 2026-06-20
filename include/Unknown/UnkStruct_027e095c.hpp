#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_027e095c : public AutoInstance<UnkStruct_027e095c> {
public:
    /* 000 */ unk32 mUnk_000;
    /* 944 */

    UnkStruct_027e095c();
    ~UnkStruct_027e095c() {}

    // overlay 0
    void func_ov000_020592ec();
    void func_ov000_020592a0();

    // overlay 1
    static UnkStruct_027e095c *Create();
    static void Destroy();
};

extern UnkStruct_027e095c *data_027e095c;
