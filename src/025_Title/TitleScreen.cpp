#include "TitleScreen/TitleScreen.hpp"
#include "Game/GameMode.hpp"
#include "Unknown/UnkStruct_02049be0.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "Unknown/UnkStruct_0204aeac.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0954.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "nitro/button.h"
#include "regs.h"
#include "versions.h"

#include <string.h>

extern "C" {
void func_ov000_0205be34(void *param1, unk32 param2);
void func_ov000_0205bedc(void *param1, void *param2, void *param3, void *param4, unk32 param5, int);
}

static TitleScreenPTMF<TitleScreen> data_ov025_020c5aec[TitleScreenState_Max] = {
    TitleScreen::func_ov025_020c5200, // TitleScreenState_None
    TitleScreen::func_ov025_020c5204, // TitleScreenState_IdleBeforeUI
    TitleScreen::func_ov025_020c5240, // TitleScreenState_DrawUIOnInput
    TitleScreen::func_ov025_020c53d0, // TitleScreenState_DrawUIOnCsCmd
    TitleScreen::func_ov025_020c55a4, // TitleScreenState_IdleBeforeFileSelect
    TitleScreen::func_ov025_020c55e4, // TitleScreenState_ToFileSelect
};

#if IS_JP
static const Vec2s data_ov025_020c5ae4(0x0000, 0x0000);
static const Vec2s data_ov025_020c5ae8(0x0000, 0x0000);
static const Vec2us data_ov025_020c5ae0(0x0100, 0x0080);
static const Vec2s data_ov025_020c7398(0x0100, 0x0080);
static const Vec2s data_ov025_020c7394(0x0000, 0x0094);
static const Vec2s data_ov025_020c738e(0x0100, 0x0020);
static const Vec2s data_ov025_020c738c(0x0100, 0x0020);
#else
static const Vec2s data_ov025_020c5ae4(0x0000, 0x0020);
static const Vec2s data_ov025_020c5ae8(0x0100, 0x0080);
static const Vec2us data_ov025_020c5ae0(0x0100, 0x0080);
#endif

TitleScreen::TitleScreen() :
    mState(TitleScreenState_None),
    mShowUI(false),
    mUnk_021(false) {
    this->mUnk_18 = 1;
    this->mUnk_19 = 1;
    this->mUnk_1A = 1;

    wchar_t acStack_54[32];
    char *pcVar1                          = data_02049be0.func_02014ff4();
    acStack_54[ARRAY_LEN(acStack_54) - 1] = '\0';
    strncpy((char *) acStack_54, pcVar1, sizeof(acStack_54) - 1);

    char *path = "/Screen/tex2d.bin";
    size_t len = strlen((char *) acStack_54);
    strncpy((char *) acStack_54 + len, path, sizeof(acStack_54) - len - 1);

    {
        UnkStruct_StackTitleScreen auStack_68((char *) acStack_54, 1);
        auStack_68.func_ov000_02059270(0x3E, "title", 0x32500000);
    }

    data_0204aeac.func_0201c494(3);
    this->mUnk_218.func_0201effc(0x0F, 1, 0x1F);
}

TitleScreen::~TitleScreen() {
    data_ov000_020b5214.func_ov000_0206d83c(0x1E);
    this->func_ov025_020c5964();
}

void TitleScreen::func_ov025_020c4e54() {
    this->mShowUI = true;
    this->func_ov025_020c4ea0(TitleScreenState_DrawUIOnInput);
}

void TitleScreen::func_ov025_020c4e6c() {
    if (!this->mShowUI) {
        this->mShowUI = true;
        this->func_ov025_020c4ea0(TitleScreenState_DrawUIOnCsCmd);
    }
}

void TitleScreen::func_ov025_020c4e90() {
    this->func_ov025_020c4ea0(TitleScreenState_IdleBeforeUI);
}

void TitleScreen::func_ov025_020c4ea0(TitleScreenState state) {
    this->mState = state;

    switch (this->mState) {
        case TitleScreenState_None:
            break;
        case TitleScreenState_IdleBeforeUI:
            break;
        case TitleScreenState_DrawUIOnCsCmd:
            this->mUnk_344 = 0;
            this->mUnk_218.func_0201effc(0x1E, 1, 0x1F);

            this->mUnk_218.mUnk_0A = true;
            this->mUnk_218.mUnk_0B = false;
            this->mUnk_218.mUnk_0C = false;
            if (this->mUnk_218.mUnk_04 == this->mUnk_218.mUnk_06) {
                this->mUnk_218.mUnk_0A = false;
                this->mUnk_218.mUnk_0C = true;
            }

            this->mUnk_204.mUnk_10 = true;
            this->mUnk_23C.UnknownAction(0x59, 2);

            this->mUnk_254.func_ov000_0206082c(0x59, 2);
            this->mUnk_2CC.func_ov000_0206082c(0x59, 0);
            this->mUnk_024.func_ov000_0206082c(0x58, 1);
            this->mUnk_09C.func_ov000_0206082c(0x58, 3);
            this->mUnk_114.func_ov000_0206082c(0x58, 5);
            this->mUnk_18C.func_ov000_0206082c(0x58, 7);

            this->mUnk_254.mUnk_6E = false;
            this->mUnk_2CC.mUnk_6E = false;
            this->mUnk_024.mUnk_6E = false;
            this->mUnk_09C.mUnk_6E = false;
            this->mUnk_114.mUnk_6E = false;
            this->mUnk_18C.mUnk_6E = false;
            break;
        case TitleScreenState_DrawUIOnInput:
            this->mUnk_218.func_0201effc(0x0F, 1, 0x1F);

            this->mUnk_218.mUnk_0A = true;
            this->mUnk_218.mUnk_0B = false;
            this->mUnk_218.mUnk_0C = false;
            if (this->mUnk_218.mUnk_04 == this->mUnk_218.mUnk_06) {
                this->mUnk_218.mUnk_0A = false;
                this->mUnk_218.mUnk_0C = true;
            }

            this->mUnk_204.mUnk_10 = true;
            this->mUnk_23C.UnknownAction(0x59, 2);

            this->mUnk_254.func_ov000_0206082c(0x59, 2);
            this->mUnk_2CC.func_ov000_0206082c(0x59, 0);
            this->mUnk_024.func_ov000_0206082c(0x58, 1);
            this->mUnk_09C.func_ov000_0206082c(0x58, 3);
            this->mUnk_114.func_ov000_0206082c(0x58, 5);
            this->mUnk_18C.func_ov000_0206082c(0x58, 7);
            break;
        case TitleScreenState_IdleBeforeFileSelect:
            this->mUnk_024.func_ov000_0206082c(0x58, 0);
            break;
        case TitleScreenState_ToFileSelect:
            this->mUnk_024.func_ov000_0206082c(0x58, 2);
            this->mUnk_09C.func_ov000_0206082c(0x58, 4);
            this->mUnk_114.func_ov000_0206082c(0x58, 6);
            this->mUnk_18C.func_ov000_0206082c(0x58, 8);
            data_ov000_020b5214.func_ov000_0206d83c(0x1E);
            break;
        default:
            break;
    }
}

void TitleScreen::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    if (this->mShowUI) {
        this->mUnk_024.func_ov000_020609c4();
        this->mUnk_09C.func_ov000_020609c4();
        this->mUnk_114.func_ov000_020609c4();
        this->mUnk_18C.func_ov000_020609c4();
        this->mUnk_254.func_ov000_020609c4();
        this->mUnk_2CC.func_ov000_020609c4();
    }

    CALL_PTMF(TitleScreenPTMF<TitleScreen>, data_ov025_020c5aec[this->mState], pButtons, pTouchControl);
    data_0204aeac.func_0201c4d8(0, 0x0B, 8);
    data_0204aeac.func_0201c504(1, 10, 0x10, 8);
}

void TitleScreen::func_ov025_020c5200(Input *pButtons, TouchControl *pTouchControl) {}

// https://decomp.me/scratch/6nDGM
void TitleScreen::func_ov025_020c5204(Input *pButtons, TouchControl *pTouchControl) {
    if (pTouchControl->mFlags & 1) {
        this->mUnk_021 = 1U;
    }
    if ((pTouchControl->mFlags & 2) && (this->mUnk_021 != 0)) {
        goto test;
    }
    if (!(pButtons->press & 8)) {
        return;
    }
test:
    func_ov025_020c4e54();
}

void TitleScreen::func_ov025_020c5240(Input *pButtons, TouchControl *pTouchControl) {
    this->mUnk_218.UnkOperations();
    this->mUnk_204.mUnk_10 = this->mUnk_218.func_0201f04c();

    if (this->mUnk_024.func_ov000_02060af8() == 0) {
        return;
    }

    if (this->mUnk_09C.func_ov000_02060af8() == 0) {
        return;
    }

    if (this->mUnk_114.func_ov000_02060af8() == 0) {
        return;
    }

    if (this->mUnk_18C.func_ov000_02060af8() == 0) {
        return;
    }

    this->func_ov025_020c4ea0(TitleScreenState_IdleBeforeFileSelect);
}

void TitleScreen::func_ov025_020c53d0(Input *pButtons, TouchControl *pTouchControl) {
    this->mUnk_344++;

    if (this->mUnk_344 == 15) {
        // do subscreen animations (logo)
        this->mUnk_254.mUnk_6E = true;
        this->mUnk_2CC.mUnk_6E = true;
    } else if (this->mUnk_344 == 60) {
        // do main screen animations (feather, strings and bg)
        this->mUnk_024.mUnk_6E = true;
        this->mUnk_09C.mUnk_6E = true;
        this->mUnk_114.mUnk_6E = true;
        this->mUnk_18C.mUnk_6E = true;
    }

    this->mUnk_218.UnkOperations();
    this->mUnk_204.mUnk_10 = this->mUnk_218.func_0201f04c();

    if (this->mUnk_218.mUnk_0C) {
        if (this->mUnk_024.func_ov000_02060af8() == 0) {
            return;
        }

        if (this->mUnk_09C.func_ov000_02060af8() == 0) {
            return;
        }

        if (this->mUnk_114.func_ov000_02060af8() == 0) {
            return;
        }

        if (this->mUnk_18C.func_ov000_02060af8() == 0) {
            return;
        }

        this->func_ov025_020c4ea0(TitleScreenState_IdleBeforeFileSelect);
    }
}

void TitleScreen::func_ov025_020c55a4(Input *pButtons, TouchControl *pTouchControl) {
    if (CHECK_TOUCH_FLAGS(pTouchControl, TouchFlag_UntouchedNow) || CHECK_BUTTON_COMBO(pButtons->press, BTN_START)) {
        data_ov000_020b5214.func_ov000_0206db44(0x0B);
        this->func_ov025_020c4ea0(TitleScreenState_ToFileSelect);
    }
}

void TitleScreen::func_ov025_020c55e4(Input *pButtons, TouchControl *pTouchControl) {
    if (this->mUnk_024.func_ov000_02060af8() == 0) {
        return;
    }

    if (this->mUnk_09C.func_ov000_02060af8() == 0) {
        return;
    }

    if (this->mUnk_114.func_ov000_02060af8() == 0) {
        return;
    }

    if (this->mUnk_18C.func_ov000_02060af8() == 0) {
        return;
    }

    data_0204a060.func_020183d4(true, (GameModeCreateCallback) UnkStruct_0204a060::func_02018424, 1);
}

void TitleScreen::vfunc_14(unk8 *param1) {
    if (param1[1] == 0) {
        this->func_ov025_020c592c();
        data_0204aeac.func_0201c494(3);
    }

    if (param1[0] == 0) {
        this->func_ov025_020c5964();
        data_0204aeac.func_0201c494(0);
    }
}

void TitleScreen::vfunc_10(unk8 *param1) {
    if (this->mShowUI) {
        if (param1[0] == 0 && this->mUnk_09C.mUnk_6E) {
            UnkStruct_ov019_020d24c8_28_258 uStack_3c(0x58, 0x00);
            data_0204af1c.func_0201aad0(&this->mUnk_09C, &uStack_3c.mPos, 0, 0);

            UnkStruct_ov019_020d24c8_28_258 uStack_54(0x58, 0x01);
            data_0204af1c.func_0201aad0(&this->mUnk_024, &uStack_54.mPos, 0, 0);

            UnkStruct_ov019_020d24c8_28_258 uStack_6c(0x58, 0x02);
            data_0204af1c.func_0201aad0(&this->mUnk_18C, &uStack_6c.mPos, 0, 0);

            UnkStruct_ov019_020d24c8_28_258 uStack_84(0x58, 0x03);
            data_0204af1c.func_0201aad0(&this->mUnk_114, &uStack_84.mPos, 0, 0);
        }

        if (param1[1] == 0 && this->mUnk_254.mUnk_6E) {
#if IS_JP
            Vec2us pos1;
            pos1.x = this->mUnk_23C.mPos.x + data_ov025_020c5ae4.x;
            pos1.y = this->mUnk_23C.mPos.y + data_ov025_020c5ae4.y;
            data_0204af1c.func_0201aa44(&this->mUnk_23C, &pos1, 0, 0);

            UnkStruct_ov019_020d24c8_28_258 uStack_9c(0x59, 0x01);
            Vec2us pos2;
            pos2.x = uStack_9c.mPos.x + data_ov025_020c5ae4.x;
            pos2.y = uStack_9c.mPos.y + data_ov025_020c5ae4.y;
            data_0204af1c.func_0201aad0(&this->mUnk_254, &pos2, 0, 0);

            UnkStruct_ov019_020d24c8_28_258 uStack_b4(0x59, 0x00);
            Vec2us pos3;
            pos3.x = uStack_b4.mPos.x + data_ov025_020c5ae4.x;
            pos3.y = uStack_b4.mPos.y + data_ov025_020c5ae4.y;
            data_0204af1c.func_0201aad0(&this->mUnk_2CC, &pos3, 0, 0);
#else
            data_0204af1c.func_0201aa44(&this->mUnk_23C, &this->mUnk_23C.mPos, 0, 0);

            UnkStruct_ov019_020d24c8_28_258 uStack_9c(0x59, 0x01);
            data_0204af1c.func_0201aad0(&this->mUnk_254, &uStack_9c.mPos, 0, 0);

            UnkStruct_ov019_020d24c8_28_258 uStack_b4(0x59, 0x00);
            data_0204af1c.func_0201aad0(&this->mUnk_2CC, &uStack_b4.mPos, 0, 0);
#endif
        }
    }
}

void TitleScreen::vfunc_0C(unk32 param1) {
    if (param1 == 1 && this->mShowUI) {
        UnkStruct_027e0954 *ptr = data_027e0954;
        ptr->mUnk_14.func_020166f4(this->mUnk_204.GetNode());
    }
}

void TitleScreen::func_ov025_020c592c() {
    REG_DISPCNT &= ~0xE000;
    REG_DISPCNT |= 0x8000;

    REG_WINOUT = (REG_WINOUT & ~0x3F00) | 0x1900;
    REG_WINOUT = (REG_WINOUT & ~0x3F) | 0x09;
}

void TitleScreen::func_ov025_020c5964() {
    REG_DISPCNT &= ~0xE000;
    REG_WINOUT = (REG_WINOUT & ~0x3F) | 0x30;
}

struct stack_struct {
    unk16 a;
    bool mUnk_02;
};

void TitleScreen_Sub2::vfunc_00() {
    stack_struct sp14;
    Vec2s sp10;
    Vec2s spC;
    Vec2us sp8;

    func_ov000_0205be34(&sp14, 0x3E);
    sp14.mUnk_02 = this->mUnk_10;
    sp8          = data_ov025_020c5ae0;
    spC          = data_ov025_020c5ae8;
    sp10         = data_ov025_020c5ae4;
    func_ov000_0205bedc(&sp14, &sp10, &spC, &sp8, 0, 0);
}
