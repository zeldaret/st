#include "Actor/ActorUnkTLKT.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"

DECL_PROFILE(ActorProfileUnkTLKT);

Actor *ActorProfileUnkTLKT::Create() {
    return new(HeapIndex_2) ActorUnkTLKT();
}

ActorProfileUnkTLKT::ActorProfileUnkTLKT() :
    ActorProfile(ActorId_TLKT) {}

ActorUnkTLKT::ActorUnkTLKT() {}

// non-matching
ActorUnkTLKT::~ActorUnkTLKT() {
    if (this->mState == ActorUnkTLKTState_2) {
        this->func_ov031_020e4514();
    }
}

void ActorUnkTLKT::vfunc_24() {
    switch (this->mState) {
        case ActorUnkTLKTState_0:
            this->vfunc_54();
            break;
        case ActorUnkTLKTState_1:
            this->vfunc_58();
            break;
        case ActorUnkTLKTState_4:
            this->func_ov031_020e4274();
            break;
        default:
            break;
    }
}

void ActorUnkTLKT::vfunc_58() {
    if (!data_027e09b8->func_ov000_020732ec(this->mUnk_9C.mUnk_04)) {
        return;
    }
    this->vfunc_60(ActorUnkTLKTState_2);
}

void ActorUnkTLKT::func_ov031_020e4274() {
    if (data_027e0d34->func_ov031_020d9758()) {
        return;
    }
    data_027e09b8->func_ov000_020732fc(this->mUnk_9C.mUnk_04);
}

void ActorUnkTLKT::vfunc_64() {
    switch (this->mState) {
        case ActorUnkTLKTState_1:
            this->vfunc_60(ActorUnkTLKTState_2);
            break;
        case ActorUnkTLKTState_3:
            this->vfunc_60(ActorUnkTLKTState_4);
            break;
        default:
            break;
    }
}

// non-matching
void ActorUnkTLKT::vfunc_68() {
    if (this->mState == ActorUnkTLKTState_2) {
        this->func_ov031_020e4514();
        if (this->mState == ActorUnkTLKTState_3) {
            return;
        }
    }
    this->func_ov031_020e3e6c();
}

// non-matching
void ActorUnkTLKT::vfunc_60(ActorState state) {}

// non-matching
void ActorUnkTLKT::func_ov031_020e4514() {
    u16 param = this->mUnk_5C.mParams[2];
    switch (param - (0xA * ((param >> 0x1F) + (param / 10)))) {
        case 0:
            this->func_ov000_02098a88(0x1, 0x1);
            return;
        case 1:
            this->vfunc_60(ActorUnkTLKTState_3);
            break;
        default:
            break;
    }
}
