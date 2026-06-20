//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFMAS_FMLS.hpp"
#include "System/SysNew.hpp"

// --- Actor FMAS ---

DECL_PROFILE(ActorProfileUnkFMAS);

Actor *ActorProfileUnkFMAS::Create() {
    return new(HeapIndex_2) ActorUnkFMAS();
}

ActorProfileUnkFMAS::ActorProfileUnkFMAS() :
    ActorProfile_Derived1(ActorId_FMAS) {}

ActorUnkFMAS::ActorUnkFMAS() {}

// --- Actor FMLS ---

DECL_PROFILE(ActorProfileUnkFMLS);

Actor *ActorProfileUnkFMLS::Create() {
    return new(HeapIndex_2) ActorUnkFMLS();
}

ActorProfileUnkFMLS::ActorProfileUnkFMLS() :
    ActorProfile_Derived1(ActorId_FMLS) {}

ActorUnkFMLS::ActorUnkFMLS() {}

ActorProfileUnkFMAS::~ActorProfileUnkFMAS() {}
ActorProfileUnkFMLS::~ActorProfileUnkFMLS() {}
