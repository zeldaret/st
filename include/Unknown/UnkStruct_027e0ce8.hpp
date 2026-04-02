#pragma once

#include "Unknown/UnkStruct_ov000_020b34c4.hpp"
#include "types.h"

class UnkStruct_func_01fff520_ret {
public:
    void func_ov031_02103878();
};

class UnkStruct_027e0ce8_00 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x38);
    /* 38 */ unk32 mUnk_38;
    /* 3C */ STRUCT_PAD(0x3C, 0xCC);
    /* CC */ unk32 mUnk_CC;

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2C */ virtual void vfunc_2C();
    /* 30 */ virtual ~UnkStruct_027e0ce8_00();
    /* 38 */ virtual void vfunc_38() = 0;
    /* 3C */ virtual void vfunc_3C() = 0;

    void func_ov000_0209d6ac(Vec3p *param1);
    void func_ov034_02121d84();
};

struct UnkStruct_func_01fff498 {
    u8 ptrIndex;
    u8 valueIndex;
};

class UnkStruct_027e0ce8 {
public:
    /* 00 */ UnkStruct_027e0ce8_00 **mUnk_00; // pointer to polygon list?
    /* 04 */ UnkStruct_027e0ce8_00 **mUnk_04; // pointer to the end of that list
    /* 08 */ UnkStruct_func_01fff520_ret **mUnk_08;
    /* 0C */ STRUCT_PAD(0x0C, 0x70);
    /* 70 */

    UnkStruct_027e0ce8(); // func_ov001_020bac58

    UnkStruct_func_01fff520_ret **func_01fff520(UnkStruct_ov000_020b34c4 *param1, void *);
    UnkStruct_027e0ce8_00 *func_01fff498(UnkStruct_func_01fff498 param1);

    void SetInstance(); // func_ov001_020baf4c
    void ClearInstance(); // func_ov001_020baf58

    static UnkStruct_027e0ce8 *Create(); // func_ov001_020bac40
};

extern UnkStruct_027e0ce8 *data_027e0ce8;
