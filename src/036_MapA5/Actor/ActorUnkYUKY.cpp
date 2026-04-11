//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkYUKY.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkYUKY sActorProfileUnkYUKY;

ARM ActorProfileUnkYUKY *ActorProfileUnkYUKY::GetProfile() {
    return &sActorProfileUnkYUKY;
}

ARM Actor *ActorProfileUnkYUKY::Create() {
    return new(HeapIndex_2) ActorUnkYUKY();
}

ARM ActorProfileUnkYUKY::ActorProfileUnkYUKY() :
    ActorProfile_Derived1(ActorId_YUKY) {}

ARM ActorUnkYUKY::ActorUnkYUKY() {}

ARM void ActorUnkYUKY::func_ov036_0211b668(void) {}
ARM void ActorUnkYUKY::func_ov036_0211b6cc(void) {}
ARM void ActorUnkYUKY::func_ov036_0211b6f8(void) {}

ARM ActorUnkYUKY::~ActorUnkYUKY() {}
ARM ActorProfileUnkYUKY::~ActorProfileUnkYUKY() {}
