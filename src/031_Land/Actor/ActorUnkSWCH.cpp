#include "Actor/ActorUnkSWCH.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkSWCH);

#if IS_JP
unk8 data_ov031_02118a1c[0x24];
#endif

Actor *ActorProfileUnkSWCH::Create() {
    return new(HeapIndex_2) ActorUnkSWCH();
}

ActorProfileUnkSWCH::ActorProfileUnkSWCH() :
    ActorProfile(ActorId_SWCH) {}

ActorUnkSWCH::ActorUnkSWCH() :
    mUnk_94(0x1) {}

bool ActorUnkSWCH::vfunc_18(unk32 param1) {
    this->mUnk_98.mUnk_04 = 0x0;
    this->mUnk_98.mUnk_04 |= 0x10000;
    return true;
}

void ActorUnkSWCH::vfunc_20() {
    if (!this->func_ov000_02098a60(0x0) && this->mUnk_5C.mUnk_1A[0] != 0x0) {
        return;
    }
    this->mUnk_3C = &this->mUnk_98;
    this->func_ov000_020989e0();
    if (!(this->mUnk_98.mUnk_08 & 0x3FFFF)) {
        return;
    }
    if (this->mUnk_98.mUnk_1C != 0x10) {
        return;
    }
    this->func_ov000_02098a88(0x1, 0x1);
}

void ActorUnkSWCH::vfunc_2C(unk32 param1) {
    if (this->func_01fff5d0(param1, 0x0)) {
        return;
    }
}
