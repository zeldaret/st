#include "Actor/ActorUnkRMSV.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

char data_ov063_02162578[0x10]; // = "RMSV";
char data_ov063_02162588[0x10]; // = "RMSV_wall";

ActorUnkZLSL_AnimationTag data_ov063_021632ac = {0, "RMSV"};
ActorUnkZLSL_AnimationTag data_ov063_021632c4 = {1, "RMSV"};

// Overlay 0
extern "C" void func_ov000_02099ff8(unk32 *param1, ActorUnkZLSL_AnimationTag param2, unk32 param8);
extern "C" void func_ov000_02099e58(UnkStruct_ov063_021632e4 *param1, ActorUnkZLSL_AnimationTag param2, unk32 param8);

// Overlay 31
extern "C" void func_ov031_020f7574(Actor *param1, unk32 param2);

DECL_PROFILE(ActorProfileUnkRMSV);

s8 UnkStruct_ov063_021632e4::vfunc_30() {
    return mUnk_18;
}

void UnkStruct_ov063_021632e4::vfunc_38(unk32 param1, unk32 param2) {
    mUnk_04->func_ov000_020578a4(param1, param2);
}

void UnkStruct_ov063_021632e4::vfunc_3C() {
    mUnk_08->func_ov000_02057c98(this->vfunc_10());
}

Actor *ActorProfileUnkRMSV::Create() {
    return new(HeapIndex_2) ActorUnkRMSV();
}

ActorProfileUnkRMSV::ActorProfileUnkRMSV() :
    ActorProfile_Derived1(ActorId_RMSV) {}

ActorUnkRMSBase::ActorUnkRMSBase() :
    mUnk_94(NULL),
    mUnk_F4(NULL),
    mUnk_154(0),
    mUnk_155(0) {}

bool ActorUnkRMSBase::vfunc_18(unk32 param1) {}

// Matched
void ActorUnkRMSBase::vfunc_1C() {}

// Matched
void ActorUnkRMSBase::vfunc_20() {}

void ActorUnkRMSBase::vfunc_24() {
    this->vfunc_20();
}

void ActorUnkRMSBase::vfunc_2C(unk32 param1) {
    func_ov031_020f7574(this, param1); // Probably vfunc_18 of the parent class

    if (mUnk_154) {
        mUnk_F4.vfunc_18(&mPos);
    }
}

ActorUnkRMSV::ActorUnkRMSV() :
    mUnk_158(&mUnk_94, GET_PROFILE(ActorProfileUnkRMSV)->vfunc_04()),
    mUnk_1D4(&mUnk_94, GET_PROFILE(ActorProfileUnkRMSV)->vfunc_04()) {}

bool ActorUnkRMSV::vfunc_18(unk32 param1) {
    bool res = ActorUnkRMSBase::vfunc_18(param1);
    this->mUnk_158.func_ov000_02099ff8(data_ov063_021632ac, 0x1000);
    func_ov000_02099e58(&this->mUnk_1D4, data_ov063_021632c4, 0x1000);
    this->mUnk_1D4.vfunc_3C();
    return res;
}

void ActorUnkRMSV::vfunc_20(void) {
    this->mUnk_158.vfunc_34();
    this->mUnk_1D4.vfunc_34();
}

void ActorUnkRMSV::vfunc_24(void) {
    this->vfunc_20();
}

G3d_Model *ActorUnkRMSV::vfunc_54(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSV)->mUnk_3C, data_ov063_02162578);
}

G3d_Model *ActorUnkRMSV::vfunc_58(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSV)->mUnk_3C, data_ov063_02162588);
}

ActorUnkRMSV::~ActorUnkRMSV() {}
ActorProfileUnkRMSV::~ActorProfileUnkRMSV() {}
