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

void ActorUnkCLLT::vfunc_60(ActorState state) {
    if (state == ActorUnkCLLTState_1) {
        Actor *actor = this->func_ov031_020e3df8();

        if (actor != NULL) {
            u32 actorRef = actor->mRef.Get32();
            u32 thisRef  = *(vu32 *) &this->mRef;

            this->mUnk_9C.mUnk_2C.data = actorRef;
            this->mUnk_9C.mUnk_30.data = thisRef;
        } else {
            this->mUnk_9C.mUnk_28 = 0;
            this->mUnk_9C.mUnk_2C = 0;
            this->mUnk_9C.mUnk_30 = 0;
        }
    }

    this->mState = state;
}
