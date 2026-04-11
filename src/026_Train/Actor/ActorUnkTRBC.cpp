//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRBC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkTRBC sActorProfileUnkTRBC;

ARM ActorProfileUnkTRBC *ActorProfileUnkTRBC::GetProfile() {
    return &sActorProfileUnkTRBC;
}

ARM Actor *ActorProfileUnkTRBC::Create() {
    return new(HeapIndex_2) ActorUnkTRBC();
}

ARM ActorProfileUnkTRBC::ActorProfileUnkTRBC() :
    ActorProfile_Derived1(ActorId_TRBC) {}

ARM ActorUnkTRBC::ActorUnkTRBC() {}

ARM void ActorUnkTRBC::func_ov026_0210fec0(void) {}
ARM void ActorUnkTRBC::func_ov026_0210fed8(void) {}
ARM void ActorUnkTRBC::func_ov026_0210ff24(void) {}
ARM void ActorUnkTRBC::func_ov026_02110024(void) {}
ARM void ActorUnkTRBC::func_ov026_0211006c(void) {}
ARM void ActorUnkTRBC::func_ov026_021100ac(void) {}
ARM void ActorUnkTRBC::func_ov026_02110140(void) {}
ARM void ActorUnkTRBC::func_ov026_02110150(void) {}
ARM void ActorUnkTRBC::func_ov026_021101c8(void) {}
ARM void ActorUnkTRBC::func_ov026_021101cc(void) {}

ARM ActorUnkTRBC::~ActorUnkTRBC() {}
ARM ActorProfileUnkTRBC::~ActorProfileUnkTRBC() {}
