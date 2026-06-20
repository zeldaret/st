//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAMY.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkCAMY);

Actor *ActorProfileUnkCAMY::Create() {
    return new(HeapIndex_2) ActorUnkCAMY();
}

ActorProfileUnkCAMY::ActorProfileUnkCAMY() :
    ActorProfile_Derived1(ActorId_CAMY) {}

ActorUnkCAMY::ActorUnkCAMY() {}

void ActorUnkCAMY::func_ov036_0211b0c4(void) {}
void ActorUnkCAMY::func_ov036_0211b11c(void) {}
void ActorUnkCAMY::func_ov036_0211b148(void) {}

ActorUnkCAMY::~ActorUnkCAMY() {}
ActorProfileUnkCAMY::~ActorProfileUnkCAMY() {}
