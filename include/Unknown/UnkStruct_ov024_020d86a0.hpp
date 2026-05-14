#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_ov024_020d86a0 : public AutoInstance<UnkStruct_ov024_020d86a0> {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk8 mUnk_0C;
    /* 0D */ unk8 mUnk_0D;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ bool mUnk_0F;

    UnkStruct_ov024_020d86a0();
    ~UnkStruct_ov024_020d86a0();

    void func_ov001_020bd818();

    void func_ov024_020d167c();

    static void Destroy();
    static void SetInstance(UnkStruct_ov024_020d86a0 *pInstance);
    static bool ClearInstance();
};

extern UnkStruct_ov024_020d86a0 *data_ov024_020d86a0;
