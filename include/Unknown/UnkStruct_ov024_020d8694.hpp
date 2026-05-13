#pragma once

#include "Player/TouchControl.hpp"
#include "global.h"
#include "types.h"

#include <nitro/button.h>

class UnkStruct_ov024_020d8694 {
public:
    /* 00 (vtable) */

    UnkStruct_ov024_020d8694();

    /* 00 */ virtual ~UnkStruct_ov024_020d8694();
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl);
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10(unk8 *param1);

    void func_ov024_020cb0c4();
};

extern UnkStruct_ov024_020d8694 *data_ov024_020d8694;
