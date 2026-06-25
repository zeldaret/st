//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFRI.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkEFRI);

Actor *ActorProfileUnkEFRI::Create() {
    return new(HeapIndex_2) ActorUnkEFRI();
}

ActorProfileUnkEFRI::ActorProfileUnkEFRI() :
    ActorProfile_Derived1(ActorId_EFRI) {}

ActorUnkEFRI::ActorUnkEFRI() {}

void ActorUnkEFRI::func_ov098_02181e3c(void) {}
void ActorUnkEFRI::func_ov098_02181ed8(void) {}

ActorUnkEFRI::~ActorUnkEFRI() {}
ActorProfileUnkEFRI::~ActorProfileUnkEFRI() {}
