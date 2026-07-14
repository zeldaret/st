//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMRDA_MRDO.hpp"
#include "System/SysNew.hpp"

// --- Actor MRDA ---

DECL_PROFILE(ActorProfileUnkMRDA);

Actor *ActorProfileUnkMRDA::Create() {
    return new(HeapIndex_2) ActorUnkMRDA();
}

ActorProfileUnkMRDA::ActorProfileUnkMRDA() :
    ActorProfile_Derived1(ActorId_MRDA) {}

ActorUnkMRDA::ActorUnkMRDA() {}

// --- Actor MRDO ---

DECL_PROFILE(ActorProfileUnkMRDO);

Actor *ActorProfileUnkMRDO::Create() {
    return new(HeapIndex_2) ActorUnkMRDO();
}

ActorProfileUnkMRDO::ActorProfileUnkMRDO() :
    ActorProfile_Derived1(ActorId_MRDO) {}

ActorUnkMRDO::ActorUnkMRDO() {}

ActorProfileUnkMRDA::~ActorProfileUnkMRDA() {}
ActorProfileUnkMRDO::~ActorProfileUnkMRDO() {}
