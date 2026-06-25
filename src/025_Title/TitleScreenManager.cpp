#include "TitleScreen/TitleScreen.hpp"
#include <nitro/reg.h>

const unk16 data_ov025_020c5a0c[] = {0x0016, 0x003C};

TitleScreenManager *TitleScreenManager::Create(unk32 param1) {
    return new(HeapIndex_1) TitleScreenManager(param1);
}

void TitleScreenManager::vfunc_14() {
    this->mUnk_004.func_ov001_020bd734((unk32 *) data_ov025_020c5a0c);
    this->mUnk_004.func_0201c00c(0x24, 1);

    TitleScreen *pTitleScreen = new(HeapIndex_1) TitleScreen();
    this->mpGameMode          = (GameModeBase *) pTitleScreen;
    this->mUnk_104.Append(pTitleScreen);
    pTitleScreen->vfunc_18();
}

void TitleScreenManager::vfunc_18() {
    this->mUnk_004.func_ov001_020bd784();
    DELETE(this->mpGameMode);
}

void TitleScreenManager::vfunc_24() {
    this->GameModeManagerBase::vfunc_24();
    this->func_0201875c();
    this->func_02018908();
}

void TitleScreenManager::vfunc_28(unk8 *param1) {
    this->GameModeManagerBase::vfunc_28(param1);
    this->func_02018a14(param1);
}

void TitleScreenManager::DrawUI(unk8 *param1) {
    this->func_02018984(param1);
    this->func_02018830(param1);
}

void TitleScreenManager::vfunc_38(u32 param1, u8 param2, unk16 param3, unk16 param4) {}

void TitleScreenManager::func_ov025_020c4c20() {
    ((TitleScreen *) this->mpGameMode)->func_ov025_020c4e6c();
}

void TitleScreenManager::func_ov025_020c4c30() {
    ((TitleScreen *) this->mpGameMode)->func_ov025_020c4e90();
}

TitleScreenManager::~TitleScreenManager() {}
