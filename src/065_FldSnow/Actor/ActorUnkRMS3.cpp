//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS3.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMS3);

ARM Actor *ActorProfileUnkRMS3::Create() {
    return new(HeapIndex_2) ActorUnkRMS3();
}

ARM ActorProfileUnkRMS3::ActorProfileUnkRMS3() :
    ActorProfile_Derived1(ActorId_RMS3) {}

ARM ActorUnkRMS3::ActorUnkRMS3() {}

ARM void ActorUnkRMS3::func_ov065_02159174(void) {}

ARM ActorUnkRMS3::~ActorUnkRMS3() {}
ARM ActorProfileUnkRMS3::~ActorProfileUnkRMS3() {}
