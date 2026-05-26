#include "Game/GameModeManager.hpp"

ARM GameModeManagerBase_104::GameModeManagerBase_104() :
    mUnk_18(false),
    mUnk_19(false),
    mUnk_1A(false) {}

ARM GameModeManagerBase_104::~GameModeManagerBase_104() {
    GameModeManagerBase_104_0C *pTarget = this->mUnk_0C.GetPrevTarget();
    GameModeManagerBase_104_0C *pOrigin = &this->mUnk_0C;

    while (pTarget != pOrigin) {
        GameModeManagerBase_104_0C *pNext = pTarget->GetPrevTarget();
        delete pTarget;
        pTarget = pNext;
    }
}

ARM void GameModeManagerBase_104::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {}

ARM void GameModeManagerBase_104::vfunc_0C(unk32 param1) {}

ARM void GameModeManagerBase_104::vfunc_10(unk8 *param1) {}

ARM void GameModeManagerBase_104::vfunc_14(unk8 *param1) {}

ARM void GameModeManagerBase_104::vfunc_18(void) {}
