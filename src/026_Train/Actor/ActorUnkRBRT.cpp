//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBRT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRBRT sActorProfileUnkRBRT;

ARM ActorProfileUnkRBRT *ActorProfileUnkRBRT::GetProfile() {
    return &sActorProfileUnkRBRT;
}

ARM Actor *ActorProfileUnkRBRT::Create() {
    return new(HeapIndex_2) ActorUnkRBRT();
}

ARM ActorProfileUnkRBRT::ActorProfileUnkRBRT() :
    ActorProfile_Derived1(ActorId_RBRT) {}

ARM ActorUnkRBRT::ActorUnkRBRT() {}

ARM void ActorUnkRBRT::func_ov026_02120c80(void) {}
ARM void ActorUnkRBRT::func_ov026_02120cfc(void) {}
ARM void ActorUnkRBRT::func_ov026_02120d74(void) {}
ARM void ActorUnkRBRT::func_ov026_02120db0(void) {}
ARM void ActorUnkRBRT::func_ov026_02120e30(void) {}
ARM void ActorUnkRBRT::func_ov026_02120e40(void) {}
ARM void ActorUnkRBRT::func_ov026_02120e44(void) {}
ARM void ActorUnkRBRT::func_ov026_02120e90(void) {}
ARM void ActorUnkRBRT::func_ov026_02120f0c(void) {}
ARM void ActorUnkRBRT::func_ov026_02120f98(void) {}
ARM void ActorUnkRBRT::func_ov026_02120fb8(void) {}
ARM void ActorUnkRBRT::func_ov026_02120fc4(void) {}
ARM void ActorUnkRBRT::func_ov026_02121034(void) {}
ARM void ActorUnkRBRT::func_ov026_0212110c(void) {}
ARM void ActorUnkRBRT::func_ov026_0212112c(void) {}
ARM void ActorUnkRBRT::func_ov026_02121138(void) {}
ARM void ActorUnkRBRT::func_ov026_02121150(void) {}
ARM void ActorUnkRBRT::func_ov026_02121180(void) {}
ARM void ActorUnkRBRT::func_ov026_02121198(void) {}
ARM void ActorUnkRBRT::func_ov026_021211c8(void) {}

ARM ActorUnkRBRT::~ActorUnkRBRT() {}
ARM ActorProfileUnkRBRT::~ActorProfileUnkRBRT() {}
