#pragma once

#include "types.h"

#include <nitro/pad.h>

#define CHECK_BUTTON_COMBO(value, btn) ((value) & (btn))

struct Input {
    /* 00 */ u16 cur;
    /* 02 */ volatile u16 press;
    /* 04 */ u16 release;
    /* 06 */

    Input() {
        this->Init();
    }

    void Init();
    unk32 func_02013c08(u16 param1);
    unk32 func_02013b24(unk32 param1);
    unk32 func_02013bbc();
};
