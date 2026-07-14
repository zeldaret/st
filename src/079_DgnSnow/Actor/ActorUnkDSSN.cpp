//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSSN.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkDSSN);

Actor *ActorProfileUnkDSSN::Create() {
    return new(HeapIndex_2) ActorUnkDSSN();
}

ActorProfileUnkDSSN::ActorProfileUnkDSSN() :
    ActorProfile_Derived1(ActorId_DSSN) {}

ActorUnkDSSN::ActorUnkDSSN() {}

void ActorUnkDSSN::func_ov079_021559e4(void) {}

ActorUnkDSSN::~ActorUnkDSSN() {}
ActorProfileUnkDSSN::~ActorProfileUnkDSSN() {}
