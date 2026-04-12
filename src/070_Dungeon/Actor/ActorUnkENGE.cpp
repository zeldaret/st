//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkENGE.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkENGE);

ARM Actor *ActorProfileUnkENGE::Create() {
    return new(HeapIndex_2) ActorUnkENGE();
}

ARM ActorProfileUnkENGE::ActorProfileUnkENGE() :
    ActorProfile(ActorId_ENGE) {}

ARM ActorUnkENGE::ActorUnkENGE() {}

ARM void ActorUnkENGE::func_ov070_0213f3e4(void) {}
ARM void ActorUnkENGE::func_ov070_0213f430(void) {}
ARM void ActorUnkENGE::func_ov070_0213f508(void) {}
ARM void ActorUnkENGE::func_ov070_0213f548(void) {}
ARM void ActorUnkENGE::func_ov070_0213f65c(void) {}

ARM ActorUnkENGE::~ActorUnkENGE() {}
ARM ActorProfileUnkENGE::~ActorProfileUnkENGE() {}
