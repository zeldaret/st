//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPHTM.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkPHTM sActorProfileUnkPHTM;

ARM ActorProfileUnkPHTM *ActorProfileUnkPHTM::GetProfile() {
    return &sActorProfileUnkPHTM;
}

ARM Actor *ActorProfileUnkPHTM::Create() {
    return new(HeapIndex_2) ActorUnkPHTM();
}

ARM ActorProfileUnkPHTM::ActorProfileUnkPHTM() :
    ActorProfile_Derived1(ActorId_PHTM) {}

ARM ActorUnkPHTM::ActorUnkPHTM() {}

ARM ActorUnkPHTM::~ActorUnkPHTM() {}
ARM ActorProfileUnkPHTM::~ActorProfileUnkPHTM() {}
