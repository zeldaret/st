//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOMY.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkFOMY);

ARM Actor *ActorProfileUnkFOMY::Create() {
    return new(HeapIndex_2) ActorUnkFOMY();
}

ARM ActorProfileUnkFOMY::ActorProfileUnkFOMY() :
    ActorProfile_Derived1(ActorId_FOMY) {}

ARM ActorUnkFOMY::ActorUnkFOMY() {}

ARM void ActorUnkFOMY::func_ov036_0211b38c(void) {}
ARM void ActorUnkFOMY::func_ov036_0211b3f4(void) {}
ARM void ActorUnkFOMY::func_ov036_0211b420(void) {}

ARM ActorUnkFOMY::~ActorUnkFOMY() {}
ARM ActorProfileUnkFOMY::~ActorProfileUnkFOMY() {}
