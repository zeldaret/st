//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkAJSP.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkAJSP sActorProfileUnkAJSP;

ARM ActorProfileUnkAJSP *ActorProfileUnkAJSP::GetProfile() {
    return &sActorProfileUnkAJSP;
}

ARM Actor *ActorProfileUnkAJSP::Create() {
    return new(HeapIndex_2) ActorUnkAJSP();
}

ARM ActorProfileUnkAJSP::ActorProfileUnkAJSP() :
    ActorProfile_Derived1(ActorId_AJSP) {}

ARM ActorUnkAJSP::ActorUnkAJSP() {}

ARM void ActorUnkAJSP::func_ov068_02160a08(void) {}
ARM void ActorUnkAJSP::func_ov068_02160ad0(void) {}

ARM ActorUnkAJSP::~ActorUnkAJSP() {}
ARM ActorProfileUnkAJSP::~ActorProfileUnkAJSP() {}
