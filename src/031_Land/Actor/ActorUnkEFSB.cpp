//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFSB.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkEFSB);

ARM Actor *ActorProfileUnkEFSB::Create() {
    return new(HeapIndex_2) ActorUnkEFSB();
}

ARM ActorProfileUnkEFSB::ActorProfileUnkEFSB() :
    ActorProfile_Derived1(ActorId_EFSB) {}

ARM ActorUnkEFSB::ActorUnkEFSB() {}

ARM void ActorUnkEFSB::func_ov031_020fb614(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb6cc(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb704(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb718(void) {}
ARM void ActorUnkEFSB::func_ov031_020fb720(void) {}

ARM ActorUnkEFSB::~ActorUnkEFSB() {}
ARM ActorProfileUnkEFSB::~ActorProfileUnkEFSB() {}
