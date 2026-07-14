#pragma once

#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_027e09bc_0C {
public:
    /* 000 (vtable) */
    /* 004 */ STRUCT_PAD(0x04, 0x34);
    /* 034 */ VecFx32 mUnk_034;
    /* 040 */ STRUCT_PAD(0x40, 0x264);
    /* 264 */ unk32 mUnk_264;
    /* 268 */ STRUCT_PAD(0x268, 0x280);
    /* 280 */ unk32 mUnk_280;
    /* 284 */

    UnkStruct_027e09bc_0C(unk32 param1);

    // data_ov000_020b24b4
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual ~UnkStruct_027e09bc_0C();
    /* 10 */

    // itcm
    bool func_01ffd640(VecFx32 *param1);

    // overlay 0
    void func_ov000_02078230(unk32 param1);
    bool func_ov000_0207834c(VecFx32 *param1, unk32 param2, unk32 param3);
    bool func_ov000_02078764(VecFx32 *param1, void *param2, unk32 param3);
    void func_ov000_02078ba4();
    void func_ov000_02078cec();
};

class UnkStruct_027e09bc_24 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */

    UnkStruct_027e09bc_24();

    // data_ov000_020b2488
    /* 0C */ virtual bool vfunc_0C(void) override;
};

class UnkStruct_027e09bc : public AutoInstance<UnkStruct_027e09bc> {
public:
    /* 00 (vtable) */
    /* 04 */ UnkStruct_027e09bc_0C *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ UnkStruct_027e09bc_0C *mUnk_0C;
    /* 10 */ UnkStruct_027e09bc_0C *mUnk_10;
    /* 14 */ UnkStruct_027e09bc_0C *mUnk_14[4];
    /* 24 */ UnkStruct_027e09bc_24 mUnk_24;
    /* 48 */ UnkSystem9 mUnk_48;

    UnkStruct_027e09bc();
    ~UnkStruct_027e09bc();

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();

    // overlay 0
    void func_ov000_020771b8(unk32 param1);
    void func_ov000_020771c8();

    // overlay 1
    void func_ov001_020bab5c();
    void func_ov001_020babc8();
    void func_ov001_020babe8();
    void func_ov001_020bac08();

    static UnkStruct_027e09bc *Create();
    static void Destroy();
};

extern UnkStruct_027e09bc *data_027e09bc;
