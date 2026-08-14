#include "Actor/ActorUnkCLLT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkCLLT);

Actor *ActorProfileUnkCLLT::Create() {
    return new(HeapIndex_2) ActorUnkCLLT();
}

ActorProfileUnkCLLT::ActorProfileUnkCLLT() :
    ActorProfile(ActorId_CLLT) {}

ActorUnkCLLT::ActorUnkCLLT() :
    mUnk_9C(*(unk32 *) this) {}

void ActorUnkCLLT::vfunc_58() {
    if (!data_ov000_020b504c.func_ov000_0206807c(this->mUnk_5C.mUnk_20, &this->mUnk_9C)) {
        return;
    }
    this->vfunc_60(ActorUnkCLLTState_2);
}

void ActorUnkCLLT::vfunc_5C() {
    if ((u16) this->mUnk_9C.mUnk_08 != 0xFFFF) {
        this->mUnk_9C.vfunc_04();
        return;
    }
    this->vfunc_60(ActorUnkCLLTState_5);
}

// non-matching
void ActorUnkCLLT::vfunc_60(ActorState state) {
    if (state == ActorUnkCLLTState_1) {
        Actor *actor = func_ov031_020e3df8();
        if (actor != NULL) {
            this->mUnk_9C.mUnk_2C = actor->mRef;
            this->mUnk_9C.mUnk_30 = this->mRef;
        } else {
            this->mUnk_9C.mUnk_28 = 0;
            this->mUnk_9C.mUnk_2C = 0;
            this->mUnk_9C.mUnk_30 = 0;
        }
    }
    this->mState = state;
}
