//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkAJSP.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkAJSP);

Actor *ActorProfileUnkAJSP::Create() {
    return new(HeapIndex_2) ActorUnkAJSP();
}

ActorProfileUnkAJSP::ActorProfileUnkAJSP() :
    ActorProfile_Derived1(ActorId_AJSP) {}

ActorUnkAJSP::ActorUnkAJSP() {}

void ActorUnkAJSP::func_ov068_02160a08(void) {}
void ActorUnkAJSP::func_ov068_02160ad0(void) {}

ActorUnkAJSP::~ActorUnkAJSP() {}
ActorProfileUnkAJSP::~ActorProfileUnkAJSP() {}
