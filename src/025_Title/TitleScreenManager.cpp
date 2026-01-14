#include "TitleScreen/TitleScreen.hpp"
#include "regs.h"

extern "C" {
void GX_SetGraphicsMode(unk32 param1, unk32 param2, unk32 param3);
void GXS_SetGraphicsMode(unk32 param1);
}

ARM TitleScreenManager *TitleScreenManager::Create(unk32 param1) {
    return new(HeapIndex_1) TitleScreenManager(param1);
}

ARM void TitleScreenManager::vfunc_14() {
    this->mUnk_004.func_ov001_020bd734((unk32 *) data_ov025_020c5a0c);
    this->mUnk_004.func_0201c00c(0x24, 1);

    TitleScreen *pTitleScreen = new(HeapIndex_1) TitleScreen();
    void *pUVar2              = pTitleScreen;
    if (pTitleScreen != NULL) {
        pUVar2 = &pTitleScreen->mUnk_04;
    }
    this->mpTitleScreen = pTitleScreen;

    this->mUnk_104.mUnk_04.func_020166cc(pUVar2);
    pTitleScreen->vfunc_18();
}

ARM void TitleScreenManager::vfunc_18() {
    this->mUnk_004.func_ov001_020bd784();

    delete this->mpTitleScreen;
    this->mpTitleScreen = NULL;
}

ARM void TitleScreenManager::vfunc_24() {
    this->GameModeManagerBase::vfunc_24();
    this->func_0201875c();
    this->func_02018908();
}

ARM void TitleScreenManager::vfunc_28(unk32 param1) {
    this->GameModeManagerBase::vfunc_28(param1);
    this->func_02018a14(param1);
}

ARM void TitleScreenManager::vfunc_2C(unk32 param1) {
    this->func_02018984(param1);
    this->func_02018830(param1);
}

ARM void TitleScreenManager::vfunc_38() {}

ARM void TitleScreenManager::func_ov025_020c4c20() {
    this->mpTitleScreen->func_ov025_020c4e6c();
}

ARM void TitleScreenManager::func_ov025_020c4c30() {
    this->mpTitleScreen->func_ov025_020c4e90();
}

TitleScreenManager::~TitleScreenManager() {}
