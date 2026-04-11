//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT4.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMT4 sActorProfileUnkRMT4;

ARM ActorProfileUnkRMT4 *ActorProfileUnkRMT4::GetProfile() {
    return &sActorProfileUnkRMT4;
}

ARM Actor *ActorProfileUnkRMT4::Create() {
    return new(HeapIndex_2) ActorUnkRMT4();
}

ARM ActorProfileUnkRMT4::ActorProfileUnkRMT4() :
    ActorProfile_Derived1(ActorId_RMT4) {}

ARM ActorUnkRMT4::ActorUnkRMT4() {}

ARM void ActorUnkRMT4::func_ov061_021584f4(void) {}

ARM ActorUnkRMT4::~ActorUnkRMT4() {}
ARM ActorProfileUnkRMT4::~ActorProfileUnkRMT4() {}
