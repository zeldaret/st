#pragma once

#include "global.h"
#include "types.h"

class UnkStruct_ov020_020e8544_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual unk32 vfunc_20();
};

class UnkStruct_ov020_020e8544_Derived1 : public UnkStruct_ov020_020e8544_Base {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x30);
    /* 30 */

    UnkStruct_ov020_020e8544_Derived1();
};

class UnkStruct_ov020_020e8544_Derived2 : public UnkStruct_ov020_020e8544_Base {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x2E4);
    /* 2E4 */

    UnkStruct_ov020_020e8544_Derived2();
};

extern UnkStruct_ov020_020e8544_Base *data_ov020_020e8544;
