//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMABC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkMABC sActorProfileUnkMABC;

ARM ActorProfileUnkMABC *ActorProfileUnkMABC::GetProfile() {
    return &sActorProfileUnkMABC;
}

ARM Actor *ActorProfileUnkMABC::Create() {
    return new(HeapIndex_2) ActorUnkMABC();
}

ARM ActorProfileUnkMABC::ActorProfileUnkMABC() :
    ActorProfile_Derived1(ActorId_MABC) {}

ARM ActorUnkMABC::ActorUnkMABC() {}

ARM void ActorUnkMABC::func_ov092_02174670(void) {}
ARM void ActorUnkMABC::func_ov092_02174730(void) {}
ARM void ActorUnkMABC::func_ov092_02174798(void) {}
ARM void ActorUnkMABC::func_ov092_021748b8(void) {}
ARM void ActorUnkMABC::func_ov092_021748e4(void) {}
ARM void ActorUnkMABC::func_ov092_02174ab4(void) {}
ARM void ActorUnkMABC::func_ov092_02174be8(void) {}
ARM void ActorUnkMABC::func_ov092_02174d9c(void) {}
ARM void ActorUnkMABC::func_ov092_02174f18(void) {}
ARM void ActorUnkMABC::func_ov092_02175134(void) {}

ARM ActorUnkMABC::~ActorUnkMABC() {}
ARM ActorProfileUnkMABC::~ActorProfileUnkMABC() {}
