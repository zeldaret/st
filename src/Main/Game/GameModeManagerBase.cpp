#include "Game/GameModeManager.hpp"
#include "Unknown/UnkStruct_02049b18.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"

THUMB_BEGIN

GameModeManagerBase *GameModeManagerBase::Create(unk32 param1) {
    return new(HeapIndex_1) GameModeManagerBase(param1);
}

GameModeManagerBase::GameModeManagerBase(unk32 param1) :
    mUnk_100((void *) param1),
    mNextButtonID(BTN_ID_NONE),
    mButtonID(BTN_ID_NONE),
    mUnk_150(false) {
    data_ov000_020b504c.mUnk_004 = &this->mUnk_004;
}

void GameModeManagerBase::func_02018550(void) {}

void GameModeManagerBase::func_02018554(void) {}

GameModeManagerBase::~GameModeManagerBase() {
    this->func_02018a8c();
}

void GameModeManagerBase::vfunc_10(unk32 param1, unk32 param2, unk32 param3) {}

void GameModeManagerBase::vfunc_14() {}

void GameModeManagerBase::vfunc_18() {}

void GameModeManagerBase::vfunc_1C() {}

void GameModeManagerBase::vfunc_20() {}

THUMB_END

void GameModeManagerBase::vfunc_00() {
    data_ov000_020b50c0.func_ov000_02069d3c(1);

    if (!this->mUnk_150) {
        this->mUnk_150 = true;
    }
}

void GameModeManagerBase::vfunc_04(unk32 param1) {
    data_ov000_020b50c0.func_ov000_02069d7c(param1);

    if (this->mUnk_150) {
        this->mUnk_150 = false;
    }
}

void GameModeManagerBase::func_02018634(u16 speed) {
    this->mButtons.func_02013b24(this->mButtons.func_02013c08(data_02049b18.mUnk_28));
    this->mTouchControl.func_02014478(&data_02049b4c, speed);
}

void GameModeManagerBase::vfunc_24() {
    this->mButtonID = BTN_ID_NONE;
    this->mUnk_004.func_0201bf24();
}

void GameModeManagerBase::vfunc_28(unk8 *param1) {
    this->mUnk_004.func_0201bf54();
}

void GameModeManagerBase::DrawUI(unk8 *param1) {}

void GameModeManagerBase::vfunc_30(unk32 param1) {
    for (GameModeManagerBase_104::Iterator it = GetBeginIter(this->mUnk_104); it != GetEndIter(this->mUnk_104); it++) {
        it->vfunc_0C(param1);
    }
}

void GameModeManagerBase::vfunc_34(unk32 param1, unk32 param2) {}

struct UnkStruct3 {
    unk32 mUnk_00;
    unk32 *mUnk_04;
};

//! TODO: fake match
void *GameModeManagerBase::func_020186f8(unk32 param1) {
    return ((UnkStruct3 *) (((u32 *) this) + param1))->mUnk_04;
}

void GameModeManagerBase::func_02018704(void) {
    this->mUnk_004.func_0201c22c();
}

void GameModeManagerBase::func_02018714(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5) {
    this->mUnk_004.func_0201c124(param1, param2, param3, param4, param5);
}

void GameModeManagerBase::func_0201873c(void) {
    this->mUnk_004.func_0201c19c();
}

void GameModeManagerBase::func_0201874c(void) {
    this->mUnk_004.func_0201c1e4();
}

// non-matching
void GameModeManagerBase::func_0201875c(void) {
    InputInformations local_30;
    local_30.unk_00 = &this->mNextButtonID;
    local_30.unk_04 = &this->mButtonID;
    local_30.unk_08 = &this->mButtons;
    local_30.unk_0C = &this->mTouchControl;

    for (GameModeManagerBase_104::Iterator it1 = GetBeginIter(this->mUnk_104); it1 != GetEndIter(this->mUnk_104); it1++) {
        if (this->func_02018af0(it1.operator->()) && this->func_02018b54(it1.operator->())) {
            //! TODO: regalloc issues when using the iterator
            for (GameModeManagerBase_104_0C *it2 = GetBeginIter(it1->mUnk_0C); it2 != GetEndIter(it1->mUnk_0C);
                 GetNextIter(it2)) {
                it2->vfunc_08(&local_30);
            }
        }
    }
}

struct UnkStruct6 {
    void *a;
    unk32 b;
};

void GameModeManagerBase::func_02018830(unk8 *param1) {
    unk32 id = this->mNextButtonID;
    UnkStruct6 local_28;
    local_28.a = param1;
    local_28.b = id;

    for (GameModeManagerBase_104::Iterator it1 = GetBeginIterReverse(this->mUnk_104); it1 != GetEndIter(this->mUnk_104);
         it1--) {
        if (this->func_02018af0(it1.operator->()) && this->func_02018b54(it1.operator->()) &&
            this->func_02018b90(it1.operator->(), (unk8 *) param1)) {
            //! TODO: regalloc issues when using the iterator
            for (GameModeManagerBase_104_0C *it2 = GetBeginIterReverse(it1->mUnk_0C); it2 != GetEndIter(it1->mUnk_0C);
                 GetPrevIter(it2)) {
                it2->vfunc_0C(&local_28);
            }
        }
    }
}

void GameModeManagerBase::func_02018908() {
    for (GameModeManagerBase_104::Iterator it = GetBeginIter(this->mUnk_104); it != GetEndIter(this->mUnk_104); it++) {
        if (this->func_02018af0(it.operator->()) && this->func_02018b54(it.operator->())) {
            it->vfunc_08(&this->mButtons, &this->mTouchControl);
        }
    }
}

void GameModeManagerBase::func_02018984(unk8 *param1) {
    for (GameModeManagerBase_104::Iterator it = GetBeginIterReverse(this->mUnk_104); it != GetEndIter(this->mUnk_104); it--) {
        if (this->func_02018af0(it.operator->()) && this->func_02018b54(it.operator->()) &&
            this->func_02018b90(it.operator->(), param1)) {
            it->vfunc_10(param1);
        }
    }
}

void GameModeManagerBase::func_02018a14(unk8 *param1) {
    for (GameModeManagerBase_104::Iterator it = GetBeginIter(this->mUnk_104); it != GetEndIter(this->mUnk_104); it++) {
        if (this->func_02018af0(it.operator->()) && this->func_02018b54(it.operator->())) {
            it->vfunc_14(param1);
        }
    }
}

void GameModeManagerBase::func_02018a8c() {
    this->mUnk_004.func_0201bf90();
}

void GameModeManagerBase::func_02018a9c(unk32 param1, unk32 param2) {
    this->mUnk_004.func_0201c00c(param1, param2);
}

void GameModeManagerBase::func_02018aac(unk32 param1, bool param2) {
    this->mUnk_004.func_0201c068(param1, param2);
}

void GameModeManagerBase::func_02018ac4(unk16 param1) {
    this->mUnk_004.func_0201bfec(param1);
}

bool GameModeManagerBase::func_02018ad4(void) {
    return !this->mUnk_0F4 && !this->mUnk_0F5;
}

bool GameModeManagerBase::func_02018af0(GameModeManagerBase_104 *param1) {
    if (param1->mUnk_18) {
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

bool GameModeManagerBase::func_02018b54(GameModeManagerBase_104 *param1) {
    if (param1->mUnk_19) {
        return true;
    }

    if (data_0204e5f8.mUnk_18 || data_0204e5f8.mUnk_3A != 0 || data_0204e5f8.mUnk_3E != 0) {
        return false;
    }

    return true;
}

bool GameModeManagerBase::func_02018b90(GameModeManagerBase_104 *param1, unk8 *param2) {
    if (param1->mUnk_1A) {
        return true;
    }

    if (data_0204a110.mUnk_008 == 1 && param2[1] == 0) {
        return false;
    }

    return true;
}
