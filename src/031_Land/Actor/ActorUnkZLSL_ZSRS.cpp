//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "System/SysNew.hpp"

// --- Actor ZSRS ---

static ActorProfileUnkZSRS sActorProfileUnkZSRS;

THUMB ActorProfileUnkZSRS *ActorProfileUnkZSRS::GetProfile() {
    return &sActorProfileUnkZSRS;
}

THUMB Actor *ActorProfileUnkZSRS::Create() {
    return NULL;
}

THUMB ActorProfileUnkZSRS::ActorProfileUnkZSRS() :
    ActorProfile_Derived1(ActorId_ZSRS, ActorId_ZSRS) {}

THUMB ActorUnkZSRS::ActorUnkZSRS() {}

// --- Actor ZLSL ---

static ActorProfileUnkZLSL sActorProfileUnkZLSL;

THUMB ActorProfileUnkZLSL *ActorProfileUnkZLSL::GetProfile() {
    return &sActorProfileUnkZLSL;
}

THUMB Actor *ActorProfileUnkZLSL::Create() {
    return new(HeapIndex_2) ActorUnkZLSL();
}

THUMB ActorProfileUnkZLSL::ActorProfileUnkZLSL() :
    ActorProfile_Derived1(ActorId_ZLSL) {}

THUMB ActorUnkZLSL::ActorUnkZLSL() {}

ARM ActorProfileUnkZLSL::~ActorProfileUnkZLSL() {}
ARM ActorProfileUnkZSRS::~ActorProfileUnkZSRS() {}
