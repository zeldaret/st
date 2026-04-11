//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGORY.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkGORY sActorProfileUnkGORY;

ARM ActorProfileUnkGORY *ActorProfileUnkGORY::GetProfile() {
    return &sActorProfileUnkGORY;
}

ARM Actor *ActorProfileUnkGORY::Create() {
    return new(HeapIndex_2) ActorUnkGORY();
}

ARM ActorProfileUnkGORY::ActorProfileUnkGORY() :
    ActorProfile_Derived1(ActorId_GORY) {}

ARM ActorUnkGORY::ActorUnkGORY() {}

ARM void ActorUnkGORY::func_ov036_0211bc20(void) {}
ARM void ActorUnkGORY::func_ov036_0211bc84(void) {}
ARM void ActorUnkGORY::func_ov036_0211bcb0(void) {}

ARM ActorUnkGORY::~ActorUnkGORY() {}
ARM ActorProfileUnkGORY::~ActorProfileUnkGORY() {}
