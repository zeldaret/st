//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkENGE.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkENGE);

Actor *ActorProfileUnkENGE::Create() {
    return new(HeapIndex_2) ActorUnkENGE();
}

ActorProfileUnkENGE::ActorProfileUnkENGE() :
    ActorProfile(ActorId_ENGE) {}

ActorUnkENGE::ActorUnkENGE() {}

void ActorUnkENGE::func_ov070_0213f3e4(void) {}
void ActorUnkENGE::func_ov070_0213f430(void) {}
void ActorUnkENGE::func_ov070_0213f508(void) {}
void ActorUnkENGE::func_ov070_0213f548(void) {}
void ActorUnkENGE::func_ov070_0213f65c(void) {}

ActorUnkENGE::~ActorUnkENGE() {}
ActorProfileUnkENGE::~ActorProfileUnkENGE() {}
