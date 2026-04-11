//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMRDA_MRDO.hpp"
#include "System/SysNew.hpp"

// --- Actor MRDA ---

ARM DECL_PROFILE(ActorProfileUnkMRDA);

ARM Actor *ActorProfileUnkMRDA::Create() {
    return new(HeapIndex_2) ActorUnkMRDA();
}

ARM ActorProfileUnkMRDA::ActorProfileUnkMRDA() :
    ActorProfile_Derived1(ActorId_MRDA) {}

ARM ActorUnkMRDA::ActorUnkMRDA() {}

// --- Actor MRDO ---

ARM DECL_PROFILE(ActorProfileUnkMRDO);

ARM Actor *ActorProfileUnkMRDO::Create() {
    return new(HeapIndex_2) ActorUnkMRDO();
}

ARM ActorProfileUnkMRDO::ActorProfileUnkMRDO() :
    ActorProfile_Derived1(ActorId_MRDO) {}

ARM ActorUnkMRDO::ActorUnkMRDO() {}

ARM ActorProfileUnkMRDA::~ActorProfileUnkMRDA() {}
ARM ActorProfileUnkMRDO::~ActorProfileUnkMRDO() {}
