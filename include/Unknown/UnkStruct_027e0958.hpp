#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_027e0958 : public AutoInstance<UnkStruct_027e0958> {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_027e0958();
    ~UnkStruct_027e0958() {}

    // overlay 0
    static UnkStruct_027e0958 *Create();
    static void Destroy();
};

extern UnkStruct_027e0958 *data_027e0958;
