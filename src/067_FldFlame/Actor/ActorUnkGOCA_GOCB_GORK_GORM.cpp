//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGOCA_GOCB_GORK_GORM.hpp"
#include "System/SysNew.hpp"

// --- Actor GOCA ---

static ActorProfileUnkGOCA sActorProfileUnkGOCA;

ARM ActorProfileUnkGOCA *ActorProfileUnkGOCA::GetProfile() {
    return &sActorProfileUnkGOCA;
}

ARM Actor *ActorProfileUnkGOCA::Create() {
    return new(HeapIndex_2) ActorUnkGOCA();
}

ARM ActorProfileUnkGOCA::ActorProfileUnkGOCA() :
    ActorProfile_Derived1(ActorId_GOCA) {}

ARM ActorUnkGOCA::ActorUnkGOCA() {}

// --- Actor GOCB ---

static ActorProfileUnkGOCB sActorProfileUnkGOCB;

ARM ActorProfileUnkGOCB *ActorProfileUnkGOCB::GetProfile() {
    return &sActorProfileUnkGOCB;
}

ARM Actor *ActorProfileUnkGOCB::Create() {
    return new(HeapIndex_2) ActorUnkGOCB();
}

ARM ActorProfileUnkGOCB::ActorProfileUnkGOCB() :
    ActorProfile_Derived1(ActorId_GOCB) {}

ARM ActorUnkGOCB::ActorUnkGOCB() {}

// --- Actor GORK ---

static ActorProfileUnkGORK sActorProfileUnkGORK;

ARM ActorProfileUnkGORK *ActorProfileUnkGORK::GetProfile() {
    return &sActorProfileUnkGORK;
}

ARM Actor *ActorProfileUnkGORK::Create() {
    return new(HeapIndex_2) ActorUnkGORK();
}

ARM ActorProfileUnkGORK::ActorProfileUnkGORK() :
    ActorProfile_Derived1(ActorId_GORK) {}

ARM ActorUnkGORK::ActorUnkGORK() {}

// --- Actor GORM ---

static ActorProfileUnkGORM sActorProfileUnkGORM;

ARM ActorProfileUnkGORM *ActorProfileUnkGORM::GetProfile() {
    return &sActorProfileUnkGORM;
}

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
