//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGOCA_GOCB_GORK_GORM.hpp"
#include "System/SysNew.hpp"

// --- Actor GOCA ---

ARM DECL_PROFILE(ActorProfileUnkGOCA);

ARM Actor *ActorProfileUnkGOCA::Create() {
    return new(HeapIndex_2) ActorUnkGOCA();
}

ARM ActorProfileUnkGOCA::ActorProfileUnkGOCA() :
    ActorProfile_Derived1(ActorId_GOCA) {}

ARM ActorUnkGOCA::ActorUnkGOCA() {}

// --- Actor GOCB ---

ARM DECL_PROFILE(ActorProfileUnkGOCB);

ARM Actor *ActorProfileUnkGOCB::Create() {
    return new(HeapIndex_2) ActorUnkGOCB();
}

ARM ActorProfileUnkGOCB::ActorProfileUnkGOCB() :
    ActorProfile_Derived1(ActorId_GOCB) {}

ARM ActorUnkGOCB::ActorUnkGOCB() {}

// --- Actor GORK ---

ARM DECL_PROFILE(ActorProfileUnkGORK);

ARM Actor *ActorProfileUnkGORK::Create() {
    return new(HeapIndex_2) ActorUnkGORK();
}

ARM ActorProfileUnkGORK::ActorProfileUnkGORK() :
    ActorProfile_Derived1(ActorId_GORK) {}

ARM ActorUnkGORK::ActorUnkGORK() {}

// --- Actor GORM ---

ARM DECL_PROFILE(ActorProfileUnkGORM);

ARM Actor *ActorProfileUnkGORM::Create() {
    return new(HeapIndex_2) ActorUnkGORM();
}

ARM ActorProfileUnkGORM::ActorProfileUnkGORM() :
    ActorProfile_Derived1(ActorId_GORM) {}

ARM ActorUnkGORM::ActorUnkGORM() {}

ARM ActorProfileUnkGOCA::~ActorProfileUnkGOCA() {}
ARM ActorProfileUnkGOCB::~ActorProfileUnkGOCB() {}
ARM ActorProfileUnkGORK::~ActorProfileUnkGORK() {}
ARM ActorProfileUnkGORM::~ActorProfileUnkGORM() {}
