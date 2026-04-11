//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFMAS_FMLS.hpp"
#include "System/SysNew.hpp"

// --- Actor FMAS ---

ARM DECL_PROFILE(ActorProfileUnkFMAS);

ARM Actor *ActorProfileUnkFMAS::Create() {
    return new(HeapIndex_2) ActorUnkFMAS();
}

ARM ActorProfileUnkFMAS::ActorProfileUnkFMAS() :
    ActorProfile_Derived1(ActorId_FMAS) {}

ARM ActorUnkFMAS::ActorUnkFMAS() {}

// --- Actor FMLS ---

ARM DECL_PROFILE(ActorProfileUnkFMLS);

ARM Actor *ActorProfileUnkFMLS::Create() {
    return new(HeapIndex_2) ActorUnkFMLS();
}

ARM ActorProfileUnkFMLS::ActorProfileUnkFMLS() :
    ActorProfile_Derived1(ActorId_FMLS) {}

ARM ActorUnkFMLS::ActorUnkFMLS() {}

ARM ActorProfileUnkFMAS::~ActorProfileUnkFMAS() {}
ARM ActorProfileUnkFMLS::~ActorProfileUnkFMLS() {}
