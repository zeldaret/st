#pragma once

#include "System/SysNew.hpp"
#include "types.h"

class UnkStruct_ov000_020b4f84_00_Base : public SysObject {
public:
    /* 00 (vtable) */

    // data_02043f08 vtable
    /* 00 */ virtual ~UnkStruct_ov000_020b4f84_00_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
};

class UnkStruct_ov000_020b4f84_00 : public UnkStruct_ov000_020b4f84_00_Base {
public:
    /* 00 (base) */
    /* 04 */ unk8 mUnk_04[0x1C];
    /* 20 */

    UnkStruct_ov000_020b4f84_00();
    ~UnkStruct_ov000_020b4f84_00();
};

class UnkStruct_ov000_020b4f84 {
public:
    /* 00 */ UnkStruct_ov000_020b4f84_00 mUnk_00[6];
    /* C0 */ unk16 mUnk_C0;
    /* C2 */ unk16 mUnk_C2;

    UnkStruct_ov000_020b4f84();
    void func_ov000_0206667c(unk32 param1, unk32 param2);
};

extern UnkStruct_ov000_020b4f84 data_ov000_020b4f84;
