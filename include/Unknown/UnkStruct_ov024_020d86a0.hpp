#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_ov024_020d86a0 : public AutoInstance<UnkStruct_ov024_020d86a0> {
public:
    /* 00 */ unk32 mUnk_00;

    UnkStruct_ov024_020d86a0();
    ~UnkStruct_ov024_020d86a0();

    void func_ov001_020bd818();

    void func_ov024_020d167c();

    static void Destroy();
    static void SetInstance(UnkStruct_ov024_020d86a0 *pInstance);
    static bool ClearInstance();
};

extern UnkStruct_ov024_020d86a0 *data_ov024_020d86a0;
