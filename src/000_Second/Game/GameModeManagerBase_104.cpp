#include "Game/GameModeManager.hpp"

ARM GameModeManagerBase_104::GameModeManagerBase_104() :
    mUnk_18(false),
    mUnk_19(false),
    mUnk_1A(false) {}

ARM GameModeManagerBase_104::~GameModeManagerBase_104() {
    GameModeLinkList<GameModeManagerBase_104_0C> *pNode = this->mUnk_0C.mList.GetPrev();
    GameModeLinkList<GameModeManagerBase_104_0C> *pOrigin =
        (GameModeLinkList<GameModeManagerBase_104_0C> *) ((u8 *) this + offsetof(GameModeManagerBase_104, mUnk_0C));

    while (pNode != pOrigin) {
        GameModeLinkList<GameModeManagerBase_104_0C> *pNextNode = pNode->GetNext2();
        delete pNode->GetTarget();
        pNode = pNextNode;
    }
}

ARM void GameModeManagerBase_104::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {}

ARM void GameModeManagerBase_104::vfunc_0C(unk32 param1) {}

ARM void GameModeManagerBase_104::vfunc_10(unk8 *param1) {}

ARM void GameModeManagerBase_104::vfunc_14(unk8 *param1) {}

ARM void GameModeManagerBase_104::vfunc_18(void) {}
