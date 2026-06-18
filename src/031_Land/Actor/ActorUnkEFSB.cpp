//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFSB.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkEFSB);

Actor *ActorProfileUnkEFSB::Create() {
    return new(HeapIndex_2) ActorUnkEFSB();
}

ActorProfileUnkEFSB::ActorProfileUnkEFSB() :
    ActorProfile_Derived1(ActorId_EFSB) {}

ActorUnkEFSB::ActorUnkEFSB() {}

void ActorUnkEFSB::func_ov031_020fb614(void) {}
void ActorUnkEFSB::func_ov031_020fb6cc(void) {}
void ActorUnkEFSB::func_ov031_020fb704(void) {}
void ActorUnkEFSB::func_ov031_020fb718(void) {}
void ActorUnkEFSB::func_ov031_020fb720(void) {}

ActorUnkEFSB::~ActorUnkEFSB() {}
ActorProfileUnkEFSB::~ActorProfileUnkEFSB() {}
