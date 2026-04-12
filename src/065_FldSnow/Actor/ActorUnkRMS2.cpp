//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS2.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMS2);

ARM Actor *ActorProfileUnkRMS2::Create() {
    return new(HeapIndex_2) ActorUnkRMS2();
}

ARM ActorProfileUnkRMS2::ActorProfileUnkRMS2() :
    ActorProfile_Derived1(ActorId_RMS2) {}

ARM ActorUnkRMS2::ActorUnkRMS2() {}

ARM void ActorUnkRMS2::func_ov065_02159050(void) {}

ARM ActorUnkRMS2::~ActorUnkRMS2() {}
ARM ActorProfileUnkRMS2::~ActorProfileUnkRMS2() {}
