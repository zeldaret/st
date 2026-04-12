//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSSN.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDSSN);

ARM Actor *ActorProfileUnkDSSN::Create() {
    return new(HeapIndex_2) ActorUnkDSSN();
}

ARM ActorProfileUnkDSSN::ActorProfileUnkDSSN() :
    ActorProfile_Derived1(ActorId_DSSN) {}

ARM ActorUnkDSSN::ActorUnkDSSN() {}

ARM void ActorUnkDSSN::func_ov079_021559e4(void) {}

ARM ActorUnkDSSN::~ActorUnkDSSN() {}
ARM ActorProfileUnkDSSN::~ActorProfileUnkDSSN() {}
