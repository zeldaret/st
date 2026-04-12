//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFRI.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkEFRI);

ARM Actor *ActorProfileUnkEFRI::Create() {
    return new(HeapIndex_2) ActorUnkEFRI();
}

ARM ActorProfileUnkEFRI::ActorProfileUnkEFRI() :
    ActorProfile_Derived1(ActorId_EFRI) {}

ARM ActorUnkEFRI::ActorUnkEFRI() {}

ARM void ActorUnkEFRI::func_ov098_02181e3c(void) {}
ARM void ActorUnkEFRI::func_ov098_02181ed8(void) {}

ARM ActorUnkEFRI::~ActorUnkEFRI() {}
ARM ActorProfileUnkEFRI::~ActorProfileUnkEFRI() {}
