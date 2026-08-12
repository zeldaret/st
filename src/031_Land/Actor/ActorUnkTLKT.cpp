#include "Actor/ActorUnkTLKT.hpp"

#include "Actor/Actor_Derived1.hpp"
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
    this->mUnk_9C = ActorUnkTLKT_9C();
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

extern "C" void func_ov000_02072fd0(UnkStackStruct1 *param0);

// non-matching
void ActorUnkTLKT::vfunc_60(ActorState state) {
    switch (state) {
        case ActorUnkTLKTState_1:
            Actor *actor = this->func_ov031_020e3df8();
            if (this->mUnk_5C.mParams[0] != 0x0 || actor != NULL) {
                this->vfunc_60(ActorUnkTLKTState_5);
                return;
            }
            ActorUnk_vfunc_B0 actorUnkSp40 = ActorUnk_vfunc_B0();

            void *wtf = this;
            if (wtf != NULL) {
                wtf = &this->mUnk_9C;
            }
            actorUnkSp40.mUnk_04 = (unk32) wtf;

            break;
        case ActorUnkTLKTState_3:
            UnkStackStruct1 unkSp00;
            func_ov000_02072fd0(&unkSp00);

            break;
        case ActorUnkTLKTState_4:
            data_027e0d34->func_ov031_020d9854(&this->mPos, FLOAT_TO_FX32(0.5f));
            break;
        default:
            break;
    }
    this->mState = state;
}

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
