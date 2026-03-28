#include "Game/GameModeTitleScreen.hpp"
#include "Game/Game.hpp"
#include "TitleScreen/TitleScreen.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

struct UnkStruct_ov000_020a782c {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ u8 mUnk_04;
    /* 05 */ u8 mUnk_05;
    /* 06 */ u8 mUnk_06;
    /* 07 */ u8 mUnk_07;
};

extern "C" {
void func_0201659c();
void func_0200e234();
void func_ov001_020b6520(unk32 param1);
UnkStruct_ov000_020a782c *func_ov000_020a782c(unk32 param1);
}

ARM GameModeTitleScreen::GameModeTitleScreen() {
    func_0201659c();
    gGame.func_02013370(2);
    data_0204a110.func_ov001_020bd514(0, TitleScreenManager::Create, 0, 1);
    func_ov001_020b6520(2);
}

ARM GameModeTitleScreen::~GameModeTitleScreen() {
    UnkStruct_027e09a4::func_ov025_020c4a60();
    func_0200e234();
}

struct stack_struct {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk8 mUnk_0A;
    /* 0B */ unk8 mUnk_0B;
    /* 0C */ unk8 mUnk_0C;
    /* 0D */ unk8 mUnk_0D;
    /* 0E */ unk8 mUnk_0E;
    /* 0F */ unk8 mmUnk_0F;
    /* 10 */ unk8 mUnk_10;
    /* 11 */ unk8 mUnk_11;
    /* 12 */ unk8 mUnk_12;
    /* 13 */ unk8 mUnk_13;
    /* 14 */
};

ARM void GameModeTitleScreen::vfunc_08() {
    this->GameModeBase::vfunc_08();

    UnkStruct_ov000_020a782c *iVar1 = func_ov000_020a782c(0);
    u8 mUnk_04                      = iVar1->mUnk_04;
    u8 mUnk_07                      = iVar1->mUnk_07;
    u8 mUnk_06                      = iVar1->mUnk_06;
    u8 mUnk_05                      = iVar1->mUnk_05;

    stack_struct stack;
    stack.mUnk_00  = mUnk_04;
    stack.mUnk_04  = 0;
    stack.mUnk_08  = 0;
    stack.mUnk_0A  = mUnk_05;
    stack.mUnk_0B  = mUnk_06;
    stack.mUnk_0C  = 1;
    stack.mUnk_0D  = 0;
    stack.mUnk_0E  = mUnk_07;
    stack.mmUnk_0F = 0;
    stack.mUnk_10  = 0;

    data_027e09a4->func_ov000_020707a8(&stack);
}

ARM void GameModeTitleScreen::vfunc_0C() {
    data_027e09a4->func_ov000_0207087c(data_0204a110.mUnk_DF8);
}

ARM void GameModeTitleScreen::vfunc_10() {
    data_027e09a4->func_ov000_020708d8(data_0204a110.mUnk_DF8);
}

ARM void GameModeTitleScreen::vfunc_14() {
    data_027e09a4->func_ov000_02070834(&data_0204a110.mUnk_DF2);
}

ARM void GameModeTitleScreen::vfunc_18() {
    data_027e09a4->func_ov000_02070938(data_0204a110.mUnk_DF8);
}

ARM void GameModeTitleScreen::vfunc_1C() {
    data_027e09a4->func_ov000_02070a4c(data_0204a110.mUnk_DF8);
}

ARM void GameModeTitleScreen::vfunc_20() {
    UnkStruct_027e09a4 *ptr4 = data_027e09a4;
    void *ptr                = &data_0204a110.mUnk_DF2;

    if ((data_0204a088->mUnk_120 & 1) != 0) {
        ptr4->func_ov017_020bb994(ptr);
    }
}

ARM void UnkStruct_027e09a4::func_ov025_020c4a60() {
    delete data_027e09a4;
}
