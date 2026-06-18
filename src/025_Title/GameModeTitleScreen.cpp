#include "Game/GameModeTitleScreen.hpp"
#include "Cutscene/Cutscene.hpp"
#include "Game/Game.hpp"
#include "TitleScreen/TitleScreen.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

extern "C" {
void func_0201659c();
void func_0200e234();
void *func_ov001_020b6520(unk32 param1);
}

GameModeTitleScreen::GameModeTitleScreen() {
    func_0201659c();
    gGame.func_02013370(2);
    data_0204a110.func_ov001_020bd514(0, TitleScreenManager::Create, 0, 1);
    func_ov001_020b6520(2);
}

GameModeTitleScreen::~GameModeTitleScreen() {
    UnkStruct_027e09a4::func_ov025_020c4a60();
    func_0200e234();
}

void GameModeTitleScreen::vfunc_08() {
    this->GameModeBase::vfunc_08();
    UnkStruct_SceneChange1 stack(Cutscene_GetParamEntry(CutsceneIndex_TitleScreen), true);
    data_027e09a4->func_ov000_020707a8(&stack);
}

void GameModeTitleScreen::vfunc_0C() {
    data_027e09a4->func_ov000_0207087c(data_0204a110.mUnk_DF8);
}

void GameModeTitleScreen::vfunc_10() {
    data_027e09a4->func_ov000_020708d8(data_0204a110.mUnk_DF8);
}

void GameModeTitleScreen::vfunc_14() {
    data_027e09a4->func_ov000_02070834(&data_0204a110.mUnk_DF2);
}

void GameModeTitleScreen::vfunc_18() {
    data_027e09a4->func_ov000_02070938(data_0204a110.mUnk_DF8);
}

void GameModeTitleScreen::vfunc_1C() {
    data_027e09a4->func_ov000_02070a4c(data_0204a110.mUnk_DF8);
}

void GameModeTitleScreen::vfunc_20() {
    UnkStruct_027e09a4 *ptr4 = data_027e09a4;
    void *ptr                = &data_0204a110.mUnk_DF2;

    if ((data_0204a088->mUnk_120 & 1) != 0) {
        ptr4->func_ov017_020bb994(ptr);
    }
}

void UnkStruct_027e09a4::func_ov025_020c4a60() {
    delete data_027e09a4;
}
