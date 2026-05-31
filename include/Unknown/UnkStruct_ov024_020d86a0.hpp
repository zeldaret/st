#pragma once

#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_ov024_020d86a0;

class UnkStruct_ov024_020d86a0_00 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */ UnkStruct_ov024_020d86a0 *mpInstance;
    /* 28 */

    UnkStruct_ov024_020d86a0_00(UnkStruct_ov024_020d86a0 *pInstance);

    // data_ov024_020d8210
    /* 00 */ virtual ~UnkStruct_ov024_020d86a0_00() override;
    /* 0C */ virtual bool vfunc_0C(void) override;
};

class UnkStruct_ov024_020d86a0 : public AutoInstance<UnkStruct_ov024_020d86a0> {
public:
    /* 00 */ UnkStruct_ov024_020d86a0_00 *mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk8 mUnk_0C;
    /* 0D */ unk8 mUnk_0D;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ bool mUnk_0F;
    /* 10 */ unk8 mUnk_10;
    /* 11 */ bool mUnk_11;
    /* 14 */

    UnkStruct_ov024_020d86a0();
    ~UnkStruct_ov024_020d86a0();

    // overlay 1
    void func_ov001_020bd818();

    // overlay 17
    bool func_ov017_020c3180();
    void func_ov017_020c31cc();

    // overlay 24
    void func_ov024_020d167c();

    static UnkStruct_ov024_020d86a0 *Create();
    static void Destroy();
};

extern UnkStruct_ov024_020d86a0 *data_ov024_020d86a0;
