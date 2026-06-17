//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAWA.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkCAWA);

ARM Actor *ActorProfileUnkCAWA::Create() {
    return new(HeapIndex_2) ActorUnkCAWA();
}

ARM ActorProfileUnkCAWA::ActorProfileUnkCAWA() :
    ActorProfile_Derived1(ActorId_CAWA) {}

ARM ActorUnkCAWA::ActorUnkCAWA() {}

ARM void ActorUnkCAWA::func_ov061_02158b88(void) {
    data_ov000_020b539c_eur.mUnk_30->vfunc_04();
}

ARM void ActorUnkCAWA::func_ov061_02158ba8(void) {
    data_ov000_020b539c_eur.mUnk_30->vfunc_04();
}

ARM void ActorUnkCAWA::func_ov061_02158ccc(void) {}
ARM void ActorUnkCAWA::func_ov061_02158cf8(void) {}
ARM void ActorUnkCAWA::func_ov061_02158d4c(void) {}

ARM ActorUnkCAWA::~ActorUnkCAWA() {}
ARM ActorProfileUnkCAWA::~ActorProfileUnkCAWA() {}
