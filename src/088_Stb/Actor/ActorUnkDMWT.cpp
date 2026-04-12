//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMWT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDMWT);

ARM Actor *ActorProfileUnkDMWT::Create() {
    return new(HeapIndex_2) ActorUnkDMWT();
}

ARM ActorProfileUnkDMWT::ActorProfileUnkDMWT() :
    ActorProfile_Derived1(ActorId_DMWT) {}

ARM ActorUnkDMWT::ActorUnkDMWT() {}

ARM void ActorUnkDMWT::func_ov088_021718ec(void) {}
ARM void ActorUnkDMWT::func_ov088_02171940(void) {}
ARM void ActorUnkDMWT::func_ov088_02171950(void) {}
ARM void ActorUnkDMWT::func_ov088_02171964(void) {}
ARM void ActorUnkDMWT::func_ov088_02171978(void) {}
ARM void ActorUnkDMWT::func_ov088_021719c8(void) {}

ARM ActorUnkDMWT::~ActorUnkDMWT() {}
ARM ActorProfileUnkDMWT::~ActorProfileUnkDMWT() {}
