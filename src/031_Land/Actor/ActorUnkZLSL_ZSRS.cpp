#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "System/SysNew.hpp"

ModelRender_ov031_02113670::~ModelRender_ov031_02113670() {}
UnkStruct_ov031_0211369c::~UnkStruct_ov031_0211369c() {}
UnkStruct_ov031_021136e4::~UnkStruct_ov031_021136e4() {}
UnkStruct_ov031_0211372c::~UnkStruct_ov031_0211372c() {}

// --- Actor ZSRS ---

THUMB_BEGIN

DECL_PROFILE(ActorProfileUnkZSRS);

Actor *ActorProfileUnkZSRS::Create() {
    return NULL;
}

ActorProfileUnkZSRS::ActorProfileUnkZSRS() :
    ActorProfile_Derived2(ActorId_ZSRS, ActorId_ZSRS) {}

ActorUnkZSRS::ActorUnkZSRS() {}

// --- Actor ZLSL ---

DECL_PROFILE(ActorProfileUnkZLSL);

Actor *ActorProfileUnkZLSL::Create() {
    return new(HeapIndex_2) ActorUnkZLSL();
}

ActorProfileUnkZLSL::ActorProfileUnkZLSL() :
    ActorProfile(ActorId_ZLSL) {}

ActorUnkZLSL::ActorUnkZLSL() {}

THUMB_END

ActorProfileUnkZLSL::~ActorProfileUnkZLSL() {}
ActorProfileUnkZSRS::~ActorProfileUnkZSRS() {}
