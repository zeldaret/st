//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTKYT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkTKYT sActorProfileUnkTKYT;

ARM ActorProfileUnkTKYT *ActorProfileUnkTKYT::GetProfile() {
    return &sActorProfileUnkTKYT;
}

ARM Actor *ActorProfileUnkTKYT::Create() {
    return new(HeapIndex_2) ActorUnkTKYT();
}

ARM ActorProfileUnkTKYT::ActorProfileUnkTKYT() :
    ActorProfile(ActorId_TKYT) {}

ARM ActorUnkTKYT::ActorUnkTKYT() {}

ARM void ActorUnkTKYT::func_ov096_0217ac3c(void) {}
ARM void ActorUnkTKYT::func_ov096_0217acdc(void) {}
ARM void ActorUnkTKYT::func_ov096_0217acf8(void) {}
ARM void ActorUnkTKYT::func_ov096_0217acfc(void) {}
ARM void ActorUnkTKYT::func_ov096_0217ad00(void) {}
ARM void ActorUnkTKYT::func_ov096_0217ad04(void) {}
ARM void ActorUnkTKYT::func_ov096_0217ad08(void) {}

ARM ActorUnkTKYT::~ActorUnkTKYT() {}
ARM ActorProfileUnkTKYT::~ActorProfileUnkTKYT() {}
