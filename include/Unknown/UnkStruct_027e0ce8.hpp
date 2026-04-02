#pragma once

#include "Unknown/UnkStruct_ov000_020b34c4.hpp"
#include "global.h"
#include "types.h"

#include <nitro/math.h>

class UnkStruct_027e0ce8_00_3C {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
};

class UnkStruct_027e0ce8_00 {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ u16 mUnk_1C;
    /* 20 */ STRUCT_PAD(0x20, 0x30);
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ unk32 mUnk_38;
    /* 3C */ UnkStruct_027e0ce8_00_3C *mUnk_3C;
    /* 40 */ STRUCT_PAD(0x40, 0xCC);
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

    unk32 func_01fff584();
    void func_01fff590(unk32 param2);
    void func_ov000_0209d6ac(Vec3p *param1);
    void func_ov031_02103878();
    void func_ov034_02121d84();
};

struct UnkStruct_func_01fff498 {
    u8 ptrIndex;
    u8 valueIndex;
};

typedef void (*UnkCallback_func_01fff4cc)(void *, void *);

class UnkStruct_027e0ce8 {
public:
    /* 00 */ UnkStruct_027e0ce8_00 **mUnk_00; // pointer to polygon list?
    /* 04 */ UnkStruct_027e0ce8_00 **mUnk_04; // pointer to the end of that list
    /* 08 */ UnkStruct_027e0ce8_00 **mUnk_08;
    /* 0C */ s16 **mUnk_0C;
    /* 70 */ STRUCT_PAD(0x10, 0x70);

    UnkStruct_027e0ce8(); // func_ov001_020bac58

    UnkStruct_027e0ce8_00 *func_01fff498(UnkStruct_func_01fff498 param1);
    void func_01fff4cc(UnkCallback_func_01fff4cc param1, void *param2);
    UnkStruct_027e0ce8_00 **func_01fff520(UnkStruct_ov000_020b34c4 *param1, UnkStruct_027e0ce8_00 **param2);

    void SetInstance(); // func_ov001_020baf4c
    void ClearInstance(); // func_ov001_020baf58

    static UnkStruct_027e0ce8 *Create(); // func_ov001_020bac40
};

extern UnkStruct_027e0ce8 *data_027e0ce8;
