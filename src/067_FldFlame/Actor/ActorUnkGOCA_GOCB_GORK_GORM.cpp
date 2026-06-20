//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGOCA_GOCB_GORK_GORM.hpp"
#include "System/SysNew.hpp"

// --- Actor GOCA ---

DECL_PROFILE(ActorProfileUnkGOCA);

Actor *ActorProfileUnkGOCA::Create() {
    return new(HeapIndex_2) ActorUnkGOCA();
}

ActorProfileUnkGOCA::ActorProfileUnkGOCA() :
    ActorProfile_Derived1(ActorId_GOCA) {}

ActorUnkGOCA::ActorUnkGOCA() {}

// --- Actor GOCB ---

DECL_PROFILE(ActorProfileUnkGOCB);

Actor *ActorProfileUnkGOCB::Create() {
    return new(HeapIndex_2) ActorUnkGOCB();
}

ActorProfileUnkGOCB::ActorProfileUnkGOCB() :
    ActorProfile_Derived1(ActorId_GOCB) {}

ActorUnkGOCB::ActorUnkGOCB() {}

// --- Actor GORK ---

DECL_PROFILE(ActorProfileUnkGORK);

Actor *ActorProfileUnkGORK::Create() {
    return new(HeapIndex_2) ActorUnkGORK();
}

ActorProfileUnkGORK::ActorProfileUnkGORK() :
    ActorProfile_Derived1(ActorId_GORK) {}

ActorUnkGORK::ActorUnkGORK() {}

// --- Actor GORM ---

DECL_PROFILE(ActorProfileUnkGORM);

Actor *ActorProfileUnkGORM::Create() {
    return new(HeapIndex_2) ActorUnkGORM();
}

ActorProfileUnkGORM::ActorProfileUnkGORM() :
    ActorProfile_Derived1(ActorId_GORM) {}

ActorUnkGORM::ActorUnkGORM() {}

ActorProfileUnkGOCA::~ActorProfileUnkGOCA() {}
ActorProfileUnkGOCB::~ActorProfileUnkGOCB() {}
ActorProfileUnkGORK::~ActorProfileUnkGORK() {}
ActorProfileUnkGORM::~ActorProfileUnkGORM() {}
