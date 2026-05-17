#pragma once

#include "Unknown/Common.hpp"
#include "types.h"

class UnkAdventureModeSystem1 {
public:
    /* 00 (vtable) */
    /* 04 */ UnkSystem2_UnkSubSystem9 mUnk_04;
    /* 48 */

    UnkAdventureModeSystem1(unk16 *param1, unk16 *param2, unk32 param3);
    UnkAdventureModeSystem1(unk32 param3);

    // data_ov024_020d7f7c
    /* 00 */ virtual void vfunc_00() = 0;

    void func_ov024_020cab58();
    void func_ov024_020caba4();
    void func_ov024_020cad7c();
};
