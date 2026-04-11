//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBDS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRBDS sActorProfileUnkRBDS;

ARM ActorProfileUnkRBDS *ActorProfileUnkRBDS::GetProfile() {
    return &sActorProfileUnkRBDS;
}

ARM Actor *ActorProfileUnkRBDS::Create() {
    return new(HeapIndex_2) ActorUnkRBDS();
}

ARM ActorProfileUnkRBDS::ActorProfileUnkRBDS() :
    ActorProfile_Derived1(ActorId_RBDS) {}

ARM ActorUnkRBDS::ActorUnkRBDS() {}

ARM void ActorUnkRBDS::func_ov087_02161244(void) {}
ARM void ActorUnkRBDS::func_ov087_021612b4(void) {}
ARM void ActorUnkRBDS::func_ov087_021612b8(void) {}
ARM void ActorUnkRBDS::func_ov087_021612cc(void) {}
ARM void ActorUnkRBDS::func_ov087_021612e0(void) {}
ARM void ActorUnkRBDS::func_ov087_021612ec(void) {}

ARM ActorUnkRBDS::~ActorUnkRBDS() {}
ARM ActorProfileUnkRBDS::~ActorProfileUnkRBDS() {}
