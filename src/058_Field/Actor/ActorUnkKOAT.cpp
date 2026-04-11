//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKOAT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkKOAT);

ARM Actor *ActorProfileUnkKOAT::Create() {
    return new(HeapIndex_2) ActorUnkKOAT();
}

ARM ActorProfileUnkKOAT::ActorProfileUnkKOAT() :
    ActorProfile(ActorId_KOAT) {}

ARM ActorUnkKOAT::ActorUnkKOAT() {}

ARM void ActorUnkKOAT::func_ov058_02141e54(void) {}
ARM void ActorUnkKOAT::func_ov058_0214210c(void) {}
ARM void ActorUnkKOAT::func_ov058_02142228(void) {}
ARM void ActorUnkKOAT::func_ov058_021422f0(void) {}

ARM ActorUnkKOAT::~ActorUnkKOAT() {}
ARM ActorProfileUnkKOAT::~ActorProfileUnkKOAT() {}
