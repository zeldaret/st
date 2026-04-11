//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMTWP.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkMTWP sActorProfileUnkMTWP;

ARM ActorProfileUnkMTWP *ActorProfileUnkMTWP::GetProfile() {
    return &sActorProfileUnkMTWP;
}

ARM Actor *ActorProfileUnkMTWP::Create() {
    return new(HeapIndex_2) ActorUnkMTWP();
}

ARM ActorProfileUnkMTWP::ActorProfileUnkMTWP() :
    ActorProfile(ActorId_MTWP) {}

ARM ActorUnkMTWP::ActorUnkMTWP() {}

ARM void ActorUnkMTWP::func_ov092_0216f7dc(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f820(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f874(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f8cc(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f8ec(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f90c(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f944(void) {}
ARM void ActorUnkMTWP::func_ov092_0216f984(void) {}
ARM void ActorUnkMTWP::func_ov092_0216fce0(void) {}
ARM void ActorUnkMTWP::func_ov092_0216fd24(void) {}
ARM void ActorUnkMTWP::func_ov092_0217006c(void) {}
ARM void ActorUnkMTWP::func_ov092_021700bc(void) {}
ARM void ActorUnkMTWP::func_ov092_021700e4(void) {}
ARM void ActorUnkMTWP::func_ov092_02170118(void) {}
ARM void ActorUnkMTWP::func_ov092_02170230(void) {}

ARM ActorUnkMTWP::~ActorUnkMTWP() {}
ARM ActorProfileUnkMTWP::~ActorProfileUnkMTWP() {}
