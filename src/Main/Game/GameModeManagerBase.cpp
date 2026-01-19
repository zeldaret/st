#include "Game/GameModeManager.hpp"
#include "Unknown/UnkStruct_02049b18.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"

THUMB GameModeManagerBase *GameModeManagerBase::Create(unk32 param1) {
    return new(HeapIndex_1) GameModeManagerBase(param1);
}

THUMB GameModeManagerBase::GameModeManagerBase(unk32 param1) :
    mUnk_100((void *) param1),
    mUnk_148(-1),
    mUnk_14C(-1),
    mUnk_150(false) {
    data_ov000_020b504c.mUnk_004 = &this->mUnk_004;
}

THUMB void GameModeManagerBase::func_02018550(void) {}

THUMB void GameModeManagerBase::func_02018554(void) {}

THUMB GameModeManagerBase::~GameModeManagerBase() {
    this->func_02018a8c();
}

THUMB void GameModeManagerBase::vfunc_10(unk32 param1, unk32 param2, unk32 param3) {}

THUMB void GameModeManagerBase::vfunc_14() {}

THUMB void GameModeManagerBase::vfunc_18() {}

THUMB void GameModeManagerBase::vfunc_1C() {}

THUMB void GameModeManagerBase::vfunc_20() {}

ARM void GameModeManagerBase::vfunc_00() {
    data_ov000_020b50c0.func_ov000_02069d3c(1);

    if (!this->mUnk_150) {
        this->mUnk_150 = true;
    }
}

ARM void GameModeManagerBase::vfunc_04() {
    data_ov000_020b50c0.func_ov000_02069d7c();

    if (this->mUnk_150) {
        this->mUnk_150 = false;
    }
}

ARM void GameModeManagerBase::func_02018634(u16 speed) {
    this->mButtons.func_02013b24(this->mButtons.func_02013c08(data_02049b18.mUnk_28));
    this->mTouchControl.func_02014478(&data_02049b4c, speed);
}

ARM void GameModeManagerBase::vfunc_24() {
    this->mUnk_14C = -1;
    this->mUnk_004.func_0201bf24();
}

ARM void GameModeManagerBase::vfunc_28(unk8 *param1) {
    this->mUnk_004.func_0201bf54();
}

ARM void GameModeManagerBase::vfunc_2C(unk8 *param1) {}

ARM void GameModeManagerBase::vfunc_30(unk32 param1) {
    GameModeLinkList<GameModeManagerBase_104> *pNode;

    for (pNode = this->mUnk_104.mList.GetNext(); pNode != this->mUnk_104.GetOrigin(); pNode = pNode->GetPrev()) {
        pNode->GetTarget()->vfunc_0C(param1);
    }
}

ARM void GameModeManagerBase::vfunc_34() {}

struct UnkStruct3 {
    unk32 mUnk_00;
    unk32 *mUnk_04;
};

//! TODO: fake match
ARM void *GameModeManagerBase::func_020186f8(unk32 param1) {
    return ((UnkStruct3 *) (((u32 *) this) + param1))->mUnk_04;
}

ARM void GameModeManagerBase::func_02018704(void) {
    this->mUnk_004.func_0201c22c();
}

ARM void GameModeManagerBase::func_02018714(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5) {
    this->mUnk_004.func_0201c124(param1, param2, param3, param4, param5);
}

ARM void GameModeManagerBase::func_0201873c(void) {
    this->mUnk_004.func_0201c19c();
}

ARM void GameModeManagerBase::func_0201874c(void) {
    this->mUnk_004.func_0201c1e4();
}

struct UnkStruct4 {
    void *a;
    void *b;
    void *c;
    void *d;
};

// non-matching
ARM void GameModeManagerBase::func_0201875c(void) {
    GameModeLinkList<GameModeManagerBase_104_0C> *pNode2;
    GameModeLinkList<GameModeManagerBase_104> *pNode;

    UnkStruct4 local_30;
    local_30.a = &this->mUnk_148;
    local_30.b = &this->mUnk_14C;
    local_30.c = &this->mButtons;
    local_30.d = &this->mTouchControl;

    for (pNode = this->mUnk_104.mList.GetNext(); pNode != this->mUnk_104.GetOrigin(); pNode = pNode->GetPrev()) {
        if (this->func_02018af0(pNode) && this->func_02018b54(pNode)) {
            for (pNode2 = pNode->GetTarget()->mUnk_0C.mList.GetNext(); pNode2 != pNode->GetTarget()->mUnk_0C.GetOrigin();
                 pNode2 = pNode2->GetPrev()) {
                pNode2->GetTarget()->vfunc_08(&local_30);
            }
        }
    }
}

struct UnkStruct5 {
    unk32 a;
    void *b;
};

// non-matching
ARM void GameModeManagerBase::func_02018830(unk8 *param1) {
    GameModeLinkList<GameModeManagerBase_104_0C> *pNode2;
    GameModeLinkList<GameModeManagerBase_104> *pNode;

    UnkStruct5 local_28;
    local_28.a = this->mUnk_148;
    local_28.b = param1;

    for (pNode = this->mUnk_104.mList.GetPrev(); pNode != this->mUnk_104.GetOrigin(); pNode = pNode->GetNext2()) {
        if (this->func_02018af0(pNode) && this->func_02018b54(pNode) && this->func_02018b90(pNode, (unk8 *) param1)) {
            for (pNode2 = pNode->GetTarget()->mUnk_0C.mList.GetPrev(); pNode2 != pNode->GetTarget()->mUnk_0C.GetOrigin();
                 pNode2 = pNode2->GetNext2()) {
                pNode2->GetTarget()->vfunc_0C(&local_28);
            }
        }
    }
}

ARM void GameModeManagerBase::func_02018908() {
    GameModeLinkList<GameModeManagerBase_104> *pNode;

    for (pNode = this->mUnk_104.mList.GetNext(); pNode != this->mUnk_104.GetOrigin(); pNode = pNode->GetPrev()) {
        if (this->func_02018af0(pNode) && this->func_02018b54(pNode)) {
            pNode->GetTarget()->vfunc_08(&this->mButtons, &this->mTouchControl);
        }
    }
}

ARM void GameModeManagerBase::func_02018984(unk8 *param1) {
    GameModeLinkList<GameModeManagerBase_104> *pNode;

    for (pNode = this->mUnk_104.mList.GetPrev(); pNode != this->mUnk_104.GetOrigin(); pNode = pNode->GetNext2()) {
        if (this->func_02018af0(pNode) && this->func_02018b54(pNode) && this->func_02018b90(pNode, param1)) {
            pNode->GetTarget()->vfunc_10(param1);
        }
    }
}

ARM void GameModeManagerBase::func_02018a14(unk8 *param1) {
    GameModeLinkList<GameModeManagerBase_104> *pNode;

    for (pNode = this->mUnk_104.mList.GetNext(); pNode != this->mUnk_104.GetOrigin(); pNode = pNode->GetPrev()) {
        if (this->func_02018af0(pNode) && this->func_02018b54(pNode)) {
            pNode->GetTarget()->vfunc_14(param1);
        }
    }
}

ARM void GameModeManagerBase::func_02018a8c() {
    this->mUnk_004.func_0201bf90();
}

void GameModeManagerBase::func_02018a9c(unk32 param1, unk32 param2) {
    this->mUnk_004.func_0201c00c(param1, param2);
}

void GameModeManagerBase::func_02018aac(unk32 param1) {
    this->mUnk_004.func_0201c068(param1);
}

void GameModeManagerBase::func_02018ac4(void) {
    this->mUnk_004.func_0201bfec();
}

bool GameModeManagerBase::func_02018ad4(void) {
    return !this->mUnk_0F4 && !this->mUnk_0F5;
}

bool GameModeManagerBase::func_02018af0(GameModeLinkList<GameModeManagerBase_104> *param1) {
    if (param1->GetTarget()->mUnk_18) {
        return true;
    }

    if (data_027e09b8 != NULL) {
        if (data_027e09b8->func_ov000_020732dc(0) != 0 || data_027e09b8->func_ov000_020732dc(4) != 0) {
            return false;
        }

        return true;
    }

    return true;
}

bool GameModeManagerBase::func_02018b54(GameModeLinkList<GameModeManagerBase_104> *param1) {
    if (param1->GetTarget()->mUnk_19) {
        return true;
    }

    if (data_0204e5f8.mUnk_18 || data_0204e5f8.mUnk_3A != 0 || data_0204e5f8.mUnk_3E != 0) {
        return false;
    }

    return true;
}

bool GameModeManagerBase::func_02018b90(GameModeLinkList<GameModeManagerBase_104> *param1, unk8 *param2) {
    if (param1->GetTarget()->mUnk_1A) {
        return true;
    }

    if (data_0204a110.mUnk_008 == 1 && param2[1] == 0) {
        return false;
    }

    return true;
}
