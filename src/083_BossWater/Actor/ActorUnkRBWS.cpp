//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBWS.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRBWS);

Actor *ActorProfileUnkRBWS::Create() {
    return new(HeapIndex_2) ActorUnkRBWS();
}

ActorProfileUnkRBWS::ActorProfileUnkRBWS() :
    ActorProfile_Derived1(ActorId_RBWS) {}

ActorUnkRBWS::ActorUnkRBWS() {}

void ActorUnkRBWS::func_ov083_0215c264(void) {}
void ActorUnkRBWS::func_ov083_0215c2a0(void) {}
void ActorUnkRBWS::func_ov083_0215c2a4(void) {}

ActorUnkRBWS::~ActorUnkRBWS() {}
ActorProfileUnkRBWS::~ActorProfileUnkRBWS() {}
