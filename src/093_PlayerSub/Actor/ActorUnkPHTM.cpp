//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPHTM.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkPHTM);

Actor *ActorProfileUnkPHTM::Create() {
    return new(HeapIndex_2) ActorUnkPHTM();
}

ActorProfileUnkPHTM::ActorProfileUnkPHTM() :
    ActorProfile_Derived1(ActorId_PHTM) {}

ActorUnkPHTM::ActorUnkPHTM() {}

ActorUnkPHTM::~ActorUnkPHTM() {}
ActorProfileUnkPHTM::~ActorProfileUnkPHTM() {}
