#include "Actor/ActorPot.hpp"

#include "MapObject/MapObjectProfile.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

static PTMF<ActorPot> data_ov031_021140a0[0x8] = {
    ActorPot::func_ov031_020f0df4, // ActorPotState_0
    ActorPot::func_ov031_020f0e0c, // ActorPotState_1
    ActorPot::func_ov031_020f0e24, // ActorPotState_2
    ActorPot::func_ov031_020f0e3c, // ActorPotState_3
    ActorPot::func_ov031_020f0e5c, // ActorPotState_4
    ActorPot::func_ov031_020f0f44, // ActorPotState_5
    ActorPot::func_ov031_020f0244, // ActorPotState_6
    ActorPot::func_ov031_020f0514  // ActorPotState_7
};

static PTMF<ActorPot> data_ov031_02114060[0x8] = {
    ActorPot::func_ov031_020f0de8, // ActorPotState_0
    ActorPot::func_ov031_020f0e00, // ActorPotState_1
    ActorPot::func_ov031_020f0e18, // ActorPotState_2
    ActorPot::func_ov031_020f0e30, // ActorPotState_3
    ActorPot::func_ov031_020f0e48, // ActorPotState_4
    ActorPot::func_ov031_020f0e70, // ActorPotState_5
    ActorPot::func_ov031_020f0220, // ActorPotState_6
    ActorPot::func_ov031_020f04dc  // ActorPotState_7
};

DECL_PROFILE(ActorProfilePot);

Actor *ActorProfilePot::Create() {
    return new(HeapIndex_2) ActorPot();
}

ActorProfilePot::ActorProfilePot() :
    ActorProfile(ActorId_NTUB) {
    this->mUnk_04.size = FLOAT_TO_FX32(0.5f);
}

// non-matching
ActorPot::ActorPot() {
    MapObjectProfile *objectProfile = data_ov000_020b5d34.GetProfileFromId(MapObjectId_TSUB);
    objectProfile->vfunc_04();
}

// non-matching
void ActorPot::func_ov031_020f0cf0() {}

bool ActorPot::vfunc_18(unk32 param1) {
    Actor_ov031_02113fd4::vfunc_18(param1);

    this->vfunc_5C(ActorPotState_0);

    return true;
}

void ActorPot::vfunc_5C(ActorState param1) {
    this->mUnk_EC = 0x0;
    this->mState  = param1;

    this->vfunc_60();

    CALL_PTMF(PTMF<ActorPot>, data_ov031_02114060[this->mState]);
}

void ActorPot::vfunc_20() {
    CALL_PTMF(PTMF<ActorPot>, data_ov031_021140a0[this->mState]);
}

// non-matching
void ActorPot::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    this->vfunc_18((unk32) & this->mPos);
}

void ActorPot::func_ov031_020f0de8() {
    this->func_ov031_020f0094();
}

void ActorPot::func_ov031_020f0df4() {
    this->func_ov031_020f0098();
}

void ActorPot::func_ov031_020f0e00() {
    this->func_ov031_020f009c();
}

void ActorPot::func_ov031_020f0e0c() {
    this->func_ov031_020f00a0();
}

void ActorPot::func_ov031_020f0e18() {
    this->func_ov031_020f009c();
}

void ActorPot::func_ov031_020f0e24() {
    this->func_ov031_020f00c4();
}

void ActorPot::func_ov031_020f0e30() {
    this->func_ov031_020f0198();
}

void ActorPot::func_ov031_020f0e3c() {
    this->func_ov031_020f01ac();
}

void ActorPot::func_ov031_020f0e48() {
    this->vfunc_40();
}

void ActorPot::func_ov031_020f0e5c() {
    this->vfunc_44();
}

void ActorPot::func_ov031_020f0e70() {
    data_027e09a8->func_ov000_02071b30(0x100, &this->mPos, 0x0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);

    VecFx32 sp8;
    VecFx32_Init(this->mPos.x, this->mPos.y + this->mUnk_11C, this->mPos.z, &sp8);
    data_027e0cec->func_ov000_0209feac(0x8FF, &sp8, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x900, &sp8, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x822, &sp8, 0x4, 0x0, 0x0);

    this->func_ov031_020f0450(0x1);
}

void ActorPot::func_ov031_020f0f44() {
    this->func_ov031_020f04a8();
}

ActorPot::~ActorPot() {}
ActorProfilePot::~ActorProfilePot() {}
