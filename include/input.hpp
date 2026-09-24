#pragma once

#include "types.h"

#include <nitro/pad.h>

#define CHECK_BUTTON_COMBO(value, btn) (((value) & (btn)) != 0)

struct Input {
    /* 00 */ u16 cur;
    /* 02 */ volatile u16 press;
    /* 04 */ u16 release;
    /* 06 */

    Input() {
        this->Init();
    }

    BOOL CheckCurButtonCombo(u16 combo) {
        return CHECK_BUTTON_COMBO(this->cur, combo);
    }

    void Init();
    unk32 func_02013c08(u32 param1);
    unk32 func_02013b24(unk32 param1);
    unk32 func_02013bbc();
};
