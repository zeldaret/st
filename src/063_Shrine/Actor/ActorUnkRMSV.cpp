#include "Actor/ActorUnkRMSV.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorUnkRMSBase.hpp"
#include "CommonFuncs.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

extern char data_ov063_02162578[0x10]; // = "RMSV";
extern char data_ov063_02162588[0x10]; // = "RMSV_wall";

// Overlay 0

// Overlay 31

ActorUnkZLSL_AnimationTag data_ov063_021632ac = {0, "RMSV"};
ActorUnkZLSL_AnimationTag data_ov063_021632c4 = {1, "RMSV"};

DECL_PROFILE(ActorProfileUnkRMSV);

Actor *ActorProfileUnkRMSV::Create() {
    return new(HeapIndex_2) ActorUnkRMSV();
}

ActorProfileUnkRMSV::ActorProfileUnkRMSV() :
    ActorProfile_Derived1(ActorId_RMSV) {}

ActorUnkRMSV::ActorUnkRMSV() :
    mUnk_158(&mUnk_94, GET_PROFILE(ActorProfileUnkRMSV)->vfunc_04()),
    mUnk_1D4(&mUnk_94, GET_PROFILE(ActorProfileUnkRMSV)->vfunc_04()) {}

bool ActorUnkRMSV::Init(unk32 param1) {
    bool res = ActorUnkRMSBase::Init(param1);
    this->mUnk_158.func_ov000_02099ff8(data_ov063_021632ac, 0x1000);
    func_ov000_02099e58(&this->mUnk_1D4, data_ov063_021632c4, 0x1000);
    this->mUnk_1D4.vfunc_3C();
    return res;
}

void UnkStruct_ov063_021632e4::vfunc_3C() {
    mUnk_08->func_ov000_02057c98(this->vfunc_10());
}

void ActorUnkRMSV::Update(void) {
    this->mUnk_158.vfunc_34();
    this->mUnk_1D4.vfunc_34();
}

void ActorUnkRMSV::vfunc_24(void) {
    this->Update();
}

G3d_Model *ActorUnkRMSV::vfunc_54(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSV)->mUnk_3C, data_ov063_02162578);
}

G3d_Model *ActorUnkRMSV::vfunc_58(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSV)->mUnk_3C, data_ov063_02162588);
}

void UnkStruct_ov063_021632e4::vfunc_38(unk32 param1, unk32 param2) {
    mUnk_04->func_ov000_020578a4(param1, param2);
}

s8 UnkStruct_ov063_021632e4::vfunc_30() {
    return mUnk_18;
}
