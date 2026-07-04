#include "Actor/ActorRollingStone.hpp"
#include "System/SysNew.hpp"

static PTMF<ActorRollingStone> data_ov031_02114aec[0xB] = {
    ActorRollingStone::func_ov031_020f89f4, // ActorRollingStoneState_0
    ActorRollingStone::func_ov031_020f8a2c, // ActorRollingStoneState_1
    ActorRollingStone::func_ov031_020f8a3c, // ActorRollingStoneState_2
    ActorRollingStone::func_ov031_020f8b58, // ActorRollingStoneState_3
    ActorRollingStone::func_ov031_020f9250, // ActorRollingStoneState_4
    ActorRollingStone::func_ov031_020f9340, // ActorRollingStoneState_5
    ActorRollingStone::func_ov031_020f8ed4, // ActorRollingStoneState_6
    ActorRollingStone::func_ov031_020f8f10, // ActorRollingStoneState_7
    ActorRollingStone::func_ov031_020f9018, // ActorRollingStoneState_8
    ActorRollingStone::func_ov031_020f916c, // ActorRollingStoneState_9
    ActorRollingStone::func_ov031_020f9494, // ActorRollingStoneState_10
};

static PTMF<ActorRollingStone> data_ov031_02114a94[0xB] = {
    ActorRollingStone::func_ov031_020f8a04, // ActorRollingStoneState_0
    ActorRollingStone::func_ov031_020f8a38, // ActorRollingStoneState_1
    ActorRollingStone::func_ov031_020f8a58, // ActorRollingStoneState_2
    ActorRollingStone::func_ov031_020f8bc4, // ActorRollingStoneState_3
    ActorRollingStone::func_ov031_020f92cc, // ActorRollingStoneState_4
    ActorRollingStone::func_ov031_020f93bc, // ActorRollingStoneState_5
    ActorRollingStone::func_ov031_020f8f0c, // ActorRollingStoneState_6
    ActorRollingStone::func_ov031_020f8f30, // ActorRollingStoneState_7
    ActorRollingStone::func_ov031_020f9050, // ActorRollingStoneState_8
    ActorRollingStone::func_ov031_020f91ac, // ActorRollingStoneState_9
    ActorRollingStone::func_ov031_020f9554, // ActorRollingStoneState_10
};

DECL_PROFILE(ActorProfileRollingStone);

Actor *ActorProfileRollingStone::Create() {
    return new(HeapIndex_2) ActorRollingStone();
}

// non-matching
ActorProfileRollingStone::ActorProfileRollingStone() :
    ActorProfile_Derived1(ActorId_RLST) {}

// non-matching
bool ActorRollingStone_104::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2) {}

// non-matching
void ActorRollingStone_104::vfunc_10() {}

// non-matching
void ActorRollingStone_D4::vfunc_10(Actor *param1) {}

ActorRollingStone_104::~ActorRollingStone_104() {}

ActorRollingStone_D4::~ActorRollingStone_D4() {}

// non-matching
ActorRollingStone::ActorRollingStone() {}

// non-matching
bool ActorRollingStone::vfunc_18(unk32 param1) {}

void ActorRollingStone::vfunc_20() {
    this->IsTimerOut();

    CALL_PTMF(PTMF<ActorRollingStone>, data_ov031_02114a94[this->mState]);

    if (this->mState == ActorRollingStoneState_10) {
        return;
    }

    this->func_ov000_02098838();
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020f97cc();
}

void ActorRollingStone::func_ov031_020f8824(ActorState state) {
    this->mState           = state;
    this->mUnk_52          = 0xFFFF;
    this->mUnk_50          = 0x0;
    this->mUnk_38->mUnk_08 = 0x3;
    CALL_PTMF(PTMF<ActorRollingStone>, data_ov031_02114aec[this->mState]);
}

// non-matching
void ActorRollingStone::func_ov031_020f8880() {}
// non-matching
void ActorRollingStone::vfunc_2C(unk32 param1) {}
// non-matching
void ActorRollingStone::func_ov031_020f89f4() {}
// non-matching
void ActorRollingStone::func_ov031_020f8a04() {}
// non-matching
void ActorRollingStone::func_ov031_020f8a2c() {}
// non-matching
void ActorRollingStone::func_ov031_020f8a38() {}
// non-matching
void ActorRollingStone::func_ov031_020f8a3c() {}
// non-matching
void ActorRollingStone::func_ov031_020f8a58() {}
// non-matching
void ActorRollingStone::func_ov031_020f8b58() {}
// non-matching
void ActorRollingStone::func_ov031_020f8bc4() {}
// non-matching
void ActorRollingStone::func_ov031_020f8de8() {}
// non-matching
void ActorRollingStone::func_ov031_020f8ed4() {}
// non-matching
void ActorRollingStone::func_ov031_020f8f0c() {}
// non-matching
void ActorRollingStone::func_ov031_020f8f10() {}
// non-matching
void ActorRollingStone::func_ov031_020f8f30() {}
// non-matching
void ActorRollingStone::func_ov031_020f9018() {}
// non-matching
void ActorRollingStone::func_ov031_020f9050() {}
// non-matching
void ActorRollingStone::func_ov031_020f916c() {}
// non-matching
void ActorRollingStone::func_ov031_020f91ac() {}
// non-matching
void ActorRollingStone::func_ov031_020f9250() {}
// non-matching
void ActorRollingStone::func_ov031_020f92cc() {}
// non-matching
void ActorRollingStone::func_ov031_020f9340() {}
// non-matching
void ActorRollingStone::func_ov031_020f93bc() {}
// non-matching
void ActorRollingStone::func_ov031_020f9494() {}
// non-matching
void ActorRollingStone::func_ov031_020f9554() {}
// non-matching
void ActorRollingStone::func_ov031_020f97cc() {}
// non-matching
void ActorRollingStone::func_ov031_020f98e4() {}
// non-matching
void ActorRollingStone::func_ov031_020f9af4() {}
// non-matching
void ActorRollingStone::func_ov031_020f9af8() {}
// non-matching
void ActorRollingStone::func_ov031_020f9ba4() {}
// non-matching
void ActorRollingStone::func_ov031_020f9cc0() {}

ActorRollingStone::~ActorRollingStone() {}
ActorProfileRollingStone::~ActorProfileRollingStone() {}
