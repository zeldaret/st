//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKGDB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkKGDB sActorProfileUnkKGDB;

ARM ActorProfileUnkKGDB *ActorProfileUnkKGDB::GetProfile() {
    return &sActorProfileUnkKGDB;
}

ARM Actor *ActorProfileUnkKGDB::Create() {
    return new(HeapIndex_2) ActorUnkKGDB();
}

ARM ActorProfileUnkKGDB::ActorProfileUnkKGDB() :
    ActorProfile_Derived1(ActorId_KGDB) {}

ARM ActorUnkKGDB::ActorUnkKGDB() {}

ARM void ActorUnkKGDB::func_ov041_0212375c(void) {}
ARM void ActorUnkKGDB::func_ov041_02123770(void) {}
ARM void ActorUnkKGDB::func_ov041_021237e4(void) {}
ARM void ActorUnkKGDB::func_ov041_0212382c(void) {}
ARM void ActorUnkKGDB::func_ov041_02123a2c(void) {}

ARM ActorUnkKGDB::~ActorUnkKGDB() {}
ARM ActorProfileUnkKGDB::~ActorProfileUnkKGDB() {}
