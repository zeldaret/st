//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOMY.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkFOMY);

Actor *ActorProfileUnkFOMY::Create() {
    return new(HeapIndex_2) ActorUnkFOMY();
}

ActorProfileUnkFOMY::ActorProfileUnkFOMY() :
    ActorProfile_Derived1(ActorId_FOMY) {}

ActorUnkFOMY::ActorUnkFOMY() {}

void ActorUnkFOMY::func_ov036_0211b38c(void) {}
void ActorUnkFOMY::func_ov036_0211b3f4(void) {}
void ActorUnkFOMY::func_ov036_0211b420(void) {}

ActorUnkFOMY::~ActorUnkFOMY() {}
ActorProfileUnkFOMY::~ActorProfileUnkFOMY() {}
