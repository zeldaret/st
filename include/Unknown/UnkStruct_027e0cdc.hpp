#pragma once

#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_027e0cdc : public AutoInstance<UnkStruct_027e0cdc> {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_027e0cdc();

    // overlay 0
    unk32 func_ov000_02082a28(unk32 param1);
    unk32 func_ov000_02082a48(unk32 param1);

    static UnkStruct_027e0cdc *Create(UnkStruct_027e0ce0_30 *param1);

    // overlay 1
    static void Destroy();
};

extern UnkStruct_027e0cdc *data_027e0cdc;
