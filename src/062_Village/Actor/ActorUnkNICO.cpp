//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNICO.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkNICO sActorProfileUnkNICO;

ARM ActorProfileUnkNICO *ActorProfileUnkNICO::GetProfile() {
    return &sActorProfileUnkNICO;
}

ARM Actor *ActorProfileUnkNICO::Create() {
    return new(HeapIndex_2) ActorUnkNICO();
}

ARM ActorProfileUnkNICO::ActorProfileUnkNICO() :
    ActorProfile_Derived1(ActorId_NICO) {}

ARM ActorUnkNICO::ActorUnkNICO() {}

ARM void ActorUnkNICO::func_ov062_0215851c(void) {}
ARM void ActorUnkNICO::func_ov062_02158530(void) {}
ARM void ActorUnkNICO::func_ov062_0215866c(void) {}
ARM void ActorUnkNICO::func_ov062_02158690(void) {}
ARM void ActorUnkNICO::func_ov062_021586bc(void) {}
ARM void ActorUnkNICO::func_ov062_021586d8(void) {}

ARM ActorUnkNICO::~ActorUnkNICO() {}
ARM ActorProfileUnkNICO::~ActorProfileUnkNICO() {}
