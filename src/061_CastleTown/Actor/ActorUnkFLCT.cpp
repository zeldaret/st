//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFLCT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkFLCT sActorProfileUnkFLCT;

ARM ActorProfileUnkFLCT *ActorProfileUnkFLCT::GetProfile() {
    return &sActorProfileUnkFLCT;
}

ARM Actor *ActorProfileUnkFLCT::Create() {
    return new(HeapIndex_2) ActorUnkFLCT();
}

ARM ActorProfileUnkFLCT::ActorProfileUnkFLCT() :
    ActorProfile_Derived1(ActorId_FieldCastleTown) {}

ARM ActorUnkFLCT::ActorUnkFLCT() {}

ARM void ActorUnkFLCT::func_ov061_0215926c(void) {}
ARM void ActorUnkFLCT::func_ov061_02159280(void) {}
ARM void ActorUnkFLCT::func_ov061_021592e8(void) {}
ARM void ActorUnkFLCT::func_ov061_021592ec(void) {}
ARM void ActorUnkFLCT::func_ov061_02159360(void) {}
ARM void ActorUnkFLCT::func_ov061_02159374(void) {}
ARM void ActorUnkFLCT::func_ov061_02159408(void) {}

ARM ActorUnkFLCT::~ActorUnkFLCT() {}
ARM ActorProfileUnkFLCT::~ActorProfileUnkFLCT() {}
