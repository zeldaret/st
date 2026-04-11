//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRML1.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRML1 sActorProfileUnkRML1;

ARM ActorProfileUnkRML1 *ActorProfileUnkRML1::GetProfile() {
    return &sActorProfileUnkRML1;
}

ARM Actor *ActorProfileUnkRML1::Create() {
    return new(HeapIndex_2) ActorUnkRML1();
}

ARM ActorProfileUnkRML1::ActorProfileUnkRML1() :
    ActorProfile_Derived1(ActorId_RML1) {}

ARM ActorUnkRML1::ActorUnkRML1() {}

ARM void ActorUnkRML1::func_ov062_0215806c(void) {}

ARM ActorUnkRML1::~ActorUnkRML1() {}
ARM ActorProfileUnkRML1::~ActorProfileUnkRML1() {}
