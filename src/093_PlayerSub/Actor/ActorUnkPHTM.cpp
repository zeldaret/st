//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPHTM.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkPHTM);

ARM Actor *ActorProfileUnkPHTM::Create() {
    return new(HeapIndex_2) ActorUnkPHTM();
}

ARM ActorProfileUnkPHTM::ActorProfileUnkPHTM() :
    ActorProfile_Derived1(ActorId_PHTM) {}

ARM ActorUnkPHTM::ActorUnkPHTM() {}

ARM ActorUnkPHTM::~ActorUnkPHTM() {}
ARM ActorProfileUnkPHTM::~ActorProfileUnkPHTM() {}
