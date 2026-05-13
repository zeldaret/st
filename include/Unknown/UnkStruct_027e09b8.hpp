#pragma once

#include "types.h"
#include "versions.h"

struct stack_ov000_02073578 {
    unk8 unk_00;
    unk32 unk_04;
    unk32 unk_08;

    stack_ov000_02073578();
};

class UnkStruct_027e09b8 {
public:
    /* 00 */ unk8 mUnk_00[0x14];
    /* 14 */ u32 mAdventureFlags[32]; //! TODO
#if IS_JP
    //! TODO: figure out if the other versions got these too
    /* 94 */ u16 mUnk_94;
#endif

    unk32 func_01ffd420();

    unk32 func_ov000_020732ec(unk32 param1);
    unk32 func_ov000_020732fc(unk32 param1);
    unk32 func_ov000_020732dc(unk32 param1);
    unk32 func_ov000_0207330c();
    unk32 func_ov000_02073470(void *param1, unk32 param2);
    unk32 func_ov000_02073388(void *param1, unk32 param2);
    void func_ov000_02073578(void *param1, unk32 param2);

#if IS_JP
    void func_ov000_02074d78(unk32 param1);
#endif
};

extern UnkStruct_027e09b8 *data_027e09b8;
