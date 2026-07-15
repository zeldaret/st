#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_ov001_020c46f4_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    UnkStruct_ov001_020c46f4_Base() {}

    // data_ov023_020f1b5c
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */
};

class UnkStruct_ov001_020c46f4_Derived1 : public UnkStruct_ov001_020c46f4_Base {
public:
    /* 04 */ bool mUnk_04;
    /* 08 */

    UnkStruct_ov001_020c46f4_Derived1() :
        mUnk_04(false) {}

    // data_ov023_020f1b5c
    /* 00 */ virtual void vfunc_00() override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
};

class UnkStruct_ov001_020c46f4_Derived2 : public UnkStruct_ov001_020c46f4_Base {
public:
    /* 00 (base) */
    /* 04 */

    UnkStruct_ov001_020c46f4_Derived2() {}

    // data_ov023_020f1b74
    /* 00 */ virtual void vfunc_00() override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
};

extern UnkStruct_ov001_020c46f4_Base *data_ov001_020c46f4;

class UnkStruct_ov023_020f1d94 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ UnkStruct_ov001_020c46f4_Base *mUnk_04;
    /* 08 */

    UnkStruct_ov023_020f1d94();
    ~UnkStruct_ov023_020f1d94();

    // overlay 1
    void func_ov001_020bfeb0();
};

extern UnkStruct_ov023_020f1d94 data_ov023_020f1d94;
