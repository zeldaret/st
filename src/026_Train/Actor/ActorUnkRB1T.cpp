//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRB1T.hpp"
#include "Save/SaveManager.hpp"
#include "System/SysNew.hpp"

extern UnkActorDataStruct1 data_ov026_02137edc;

DECL_PROFILE(ActorProfileUnkRB1T);

Actor *ActorProfileUnkRB1T::Create() {
    return new(HeapIndex_2) ActorUnkRB1T();
}

ActorProfileUnkRB1T::ActorProfileUnkRB1T() :
    ActorProfile_Derived1(ActorId_RB1T) {}

ActorUnkRB1T::ActorUnkRB1T() :
    Actor_Derived1(&this->mUnk_20C, this->mUnk_120),
    mUnk_20C(0) {}

void ActorUnkRB1T::func_ov026_0211e3cc(void) {}

bool ActorUnkRB1T::func_ov026_0211e3e0(int param1) {
    if (GET_FLAG(gSaveManager.GetUnk000()->unk_B78.rabbitFlags, this->mUnk_5C.mParams[1])) {
        this->Kill();
        return true;
    }

    this->Actor_Derived1::vfunc_18(param1);
    this->mUnk_0E4 = ActorUnkRB1T::func_ov026_021208a0;

    int result = this->func_ov026_0211e6cc();
    func_ov000_02099ddc(&this->mUnk_300, data_ov026_02137edc, 0x1000, result << 12);

    this->func_ov026_0211e554();

    this->mUnk_36C = 0;
    this->mUnk_36D = 0;
    this->mUnk_36E = 0;
    this->mUnk_36F = 0;
    this->mUnk_370 = 0;
    this->mUnk_371 = 0;
    this->mUnk_372 = 0;
    this->mUnk_373 = 0;
    this->mUnk_374 = 0;
    this->mUnk_375 = 0;
    this->mUnk_376 = 0;
    this->mUnk_377 = 0;

    return true;
}

void ActorUnkRB1T::func_ov026_0211e4c8(void) {}
void ActorUnkRB1T::func_ov026_0211e554(void) {}
unk32 ActorUnkRB1T::func_ov026_0211e6cc(void) {}
void ActorUnkRB1T::func_ov026_0211e6e4(void) {}
void ActorUnkRB1T::func_ov026_0211e6f0(void) {}
void ActorUnkRB1T::func_ov026_0211e748(void) {}
void ActorUnkRB1T::func_ov026_0211e840(void) {}
void ActorUnkRB1T::func_ov026_0211e8a8(void) {}
void ActorUnkRB1T::func_ov026_0211e8ec(void) {}
void ActorUnkRB1T::func_ov026_0211ec2c(void) {}
void ActorUnkRB1T::func_ov026_0211ee58(void) {}
void ActorUnkRB1T::func_ov026_0211eeb0(void) {}
void ActorUnkRB1T::func_ov026_0211eeb8(void) {}
void ActorUnkRB1T::func_ov026_0211efe0(void) {}
void ActorUnkRB1T::func_ov026_0211f040(void) {}
void ActorUnkRB1T::func_ov026_0211f060(void) {}
void ActorUnkRB1T::func_ov026_0211f0ac(void) {}
void ActorUnkRB1T::func_ov026_0211f0d0(void) {}
void ActorUnkRB1T::func_ov026_0211f140(void) {}
void ActorUnkRB1T::func_ov026_0211f1a0(void) {}
void ActorUnkRB1T::func_ov026_0211f20c(void) {}
void ActorUnkRB1T::func_ov026_0211f28c(void) {}
void ActorUnkRB1T::func_ov026_0211f2f0(void) {}

void ActorUnkRB1T::func_ov026_0211f394(void) {
    SET_FLAG(gSaveManager.GetUnk000()->unk_B78.rabbitFlags, this->mUnk_5C.mParams[1]);
    this->vfunc_98(4);
    this->mUnk_280 = 0;
}

void ActorUnkRB1T::func_ov026_0211f3e8(void) {}
void ActorUnkRB1T::func_ov026_0211f430(void) {}
void ActorUnkRB1T::func_ov026_0211f470(void) {}
void ActorUnkRB1T::func_ov026_0211f538(void) {}
void ActorUnkRB1T::func_ov026_0211f658(void) {}
void ActorUnkRB1T::func_ov026_0211f8e4(void) {}
void ActorUnkRB1T::func_ov026_0211f910(void) {}
void ActorUnkRB1T::func_ov026_0211f91c(void) {}
void ActorUnkRB1T::func_ov026_0211fbcc(void) {}
void ActorUnkRB1T::func_ov026_0211fbf8(void) {}
void ActorUnkRB1T::func_ov026_0211ff28(void) {}
void ActorUnkRB1T::func_ov026_021202d4(void) {}
void ActorUnkRB1T::func_ov026_02120340(void) {}
void ActorUnkRB1T::func_ov026_0212037c(void) {}
void ActorUnkRB1T::func_ov026_021203a8(void) {}
void ActorUnkRB1T::func_ov026_021203c0(void) {}
void ActorUnkRB1T::func_ov026_021203d8(void) {}
void ActorUnkRB1T::func_ov026_02120414(void) {}
void ActorUnkRB1T::func_ov026_0212043c(void) {}
void ActorUnkRB1T::func_ov026_02120470(void) {}
void ActorUnkRB1T::func_ov026_0212049c(void) {}
void ActorUnkRB1T::func_ov026_0212052c(void) {}
void ActorUnkRB1T::func_ov026_02120744(void) {}
void ActorUnkRB1T::func_ov026_021207e0(void) {}
void ActorUnkRB1T::func_ov026_02120874(void) {}
void ActorUnkRB1T::func_ov026_021208a0(void) {}
void ActorUnkRB1T::func_ov026_02120954(void) {}
void ActorUnkRB1T::func_ov026_02120974(void) {}
void ActorUnkRB1T::func_ov026_021209d8(void) {}
void ActorUnkRB1T::func_ov026_02120a10(void) {}

ActorUnkRB1T::~ActorUnkRB1T() {}
ActorProfileUnkRB1T::~ActorProfileUnkRB1T() {}
