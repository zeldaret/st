#pragma once

#include "Unknown/Common.hpp"
#include "types.h"

#include <nitro/math.h>

struct UnkAdventureModeSystem1_48 {
    /* 00 */ STRUCT_PAD(0x00, 0x2A);
    /* 2A */ bool mUnk_2A;
};

class UnkAdventureModeSystem1 {
public:
    /* 00 (vtable) */
    /* 04 */ UnkSystem2_UnkSubSystem9 mUnk_04;
    /* 48 */ UnkAdventureModeSystem1_48 *mUnk_48;
    /* 4A */

    UnkAdventureModeSystem1(Vec2s *param1, Vec2s *param2, bool param3);
    UnkAdventureModeSystem1(bool param3);

    // data_ov024_020d7f7c
    /* 00 */ virtual unk32 vfunc_00(unk32 param1) = 0;

    void func_ov024_020cab58(Vec2s *param1, Vec2s *param2);
    bool func_ov024_020caba4(unk32 param1);
    bool func_ov024_020cad7c(unk32 param1);
};
