//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAMY.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkCAMY sActorProfileUnkCAMY;

ARM ActorProfileUnkCAMY *ActorProfileUnkCAMY::GetProfile() {
    return &sActorProfileUnkCAMY;
}

ARM Actor *ActorProfileUnkCAMY::Create() {
    return new(HeapIndex_2) ActorUnkCAMY();
}

ARM ActorProfileUnkCAMY::ActorProfileUnkCAMY() :
    ActorProfile_Derived1(ActorId_CAMY) {}

ARM ActorUnkCAMY::ActorUnkCAMY() {}

ARM void ActorUnkCAMY::func_ov036_0211b0c4(void) {}
ARM void ActorUnkCAMY::func_ov036_0211b11c(void) {}
ARM void ActorUnkCAMY::func_ov036_0211b148(void) {}

ARM ActorUnkCAMY::~ActorUnkCAMY() {}
ARM ActorProfileUnkCAMY::~ActorProfileUnkCAMY() {}
