//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDKCL.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDKCL);

ARM Actor *ActorProfileUnkDKCL::Create() {
    return new(HeapIndex_2) ActorUnkDKCL();
}

ARM ActorProfileUnkDKCL::ActorProfileUnkDKCL() :
    ActorProfile_Derived1(ActorId_DKCL) {}

ARM ActorUnkDKCL::ActorUnkDKCL() {}

ARM void ActorUnkDKCL::func_ov026_02104fcc(void) {}
ARM void ActorUnkDKCL::func_ov026_02104fd4(void) {}
ARM void ActorUnkDKCL::func_ov026_02105000(void) {}
ARM void ActorUnkDKCL::func_ov026_02105014(void) {}
ARM void ActorUnkDKCL::func_ov026_0210501c(void) {}

ARM ActorUnkDKCL::~ActorUnkDKCL() {}
ARM ActorProfileUnkDKCL::~ActorProfileUnkDKCL() {}
