#pragma once

#include "types.h"

class UnkStruct_027e09b8 {
public:
    /* 00 */ unk8 mUnk_00[0x14];
    /* 14 */ u32 mAdventureFlags[32]; //! TODO

    unk32 func_01ffd420();

    unk32 func_ov000_020732ec(unk32 param1);
    unk32 func_ov000_020732fc(unk32 param1);
    unk32 func_ov000_020732dc(unk32 param1);
    unk32 func_ov000_02073470(void *param1, unk32 param2);
    unk32 func_ov000_02073388(void *param1);
};

extern UnkStruct_027e09b8 *data_027e09b8;
