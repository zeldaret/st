//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOCWS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkOCWS sActorProfileUnkOCWS;

ARM ActorProfileUnkOCWS *ActorProfileUnkOCWS::GetProfile() {
    return &sActorProfileUnkOCWS;
}

ARM Actor *ActorProfileUnkOCWS::Create() {
    return new(HeapIndex_2) ActorUnkOCWS();
}

ARM ActorProfileUnkOCWS::ActorProfileUnkOCWS() :
    ActorProfile_Derived1(ActorId_OCWS) {}

ARM ActorUnkOCWS::ActorUnkOCWS() {}

ARM void ActorUnkOCWS::func_ov079_02155228(void) {}
ARM void ActorUnkOCWS::func_ov079_0215523c(void) {}
ARM void ActorUnkOCWS::func_ov079_021552e8(void) {}
ARM void ActorUnkOCWS::func_ov079_02155530(void) {}
ARM void ActorUnkOCWS::func_ov079_0215564c(void) {}
ARM void ActorUnkOCWS::func_ov079_0215566c(void) {}
ARM void ActorUnkOCWS::func_ov079_02155710(void) {}
ARM void ActorUnkOCWS::func_ov079_02155758(void) {}
ARM void ActorUnkOCWS::func_ov079_02155790(void) {}
ARM void ActorUnkOCWS::func_ov079_0215585c(void) {}
ARM void ActorUnkOCWS::func_ov079_02155898(void) {}
ARM void ActorUnkOCWS::func_ov079_02155928(void) {}

ARM ActorUnkOCWS::~ActorUnkOCWS() {}
ARM ActorProfileUnkOCWS::~ActorProfileUnkOCWS() {}
