//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAWA.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkCAWA);

Actor *ActorProfileUnkCAWA::Create() {
    return new(HeapIndex_2) ActorUnkCAWA();
}

ActorProfileUnkCAWA::ActorProfileUnkCAWA() :
    ActorProfile_Derived1(ActorId_CAWA) {}

ActorUnkCAWA::ActorUnkCAWA() {}

void ActorUnkCAWA::func_ov061_02158b88(void) {
    data_ov000_020b539c_eur.mUnk_30->vfunc_04();
}

void ActorUnkCAWA::func_ov061_02158ba8(void) {
    data_ov000_020b539c_eur.mUnk_30->vfunc_04();
}

void ActorUnkCAWA::func_ov061_02158ccc(void) {}
void ActorUnkCAWA::func_ov061_02158cf8(void) {}
void ActorUnkCAWA::func_ov061_02158d4c(void) {}

ActorUnkCAWA::~ActorUnkCAWA() {}
ActorProfileUnkCAWA::~ActorProfileUnkCAWA() {}
