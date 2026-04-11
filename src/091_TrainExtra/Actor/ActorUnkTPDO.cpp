//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTPDO.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkTPDO);

ARM Actor *ActorProfileUnkTPDO::Create() {
    return new(HeapIndex_2) ActorUnkTPDO();
}

ARM ActorProfileUnkTPDO::ActorProfileUnkTPDO() :
    ActorProfile_Derived1(ActorId_TPDO) {}

ARM ActorUnkTPDO::ActorUnkTPDO() {}

ARM void ActorUnkTPDO::func_ov091_0216dbdc(void) {}
ARM void ActorUnkTPDO::func_ov091_0216dbf0(void) {}
ARM void ActorUnkTPDO::func_ov091_0216dbf8(void) {}
ARM void ActorUnkTPDO::func_ov091_0216dc90(void) {}
ARM void ActorUnkTPDO::func_ov091_0216dcf8(void) {}
ARM void ActorUnkTPDO::func_ov091_0216ddd4(void) {}
ARM void ActorUnkTPDO::func_ov091_0216deb0(void) {}
ARM void ActorUnkTPDO::func_ov091_0216df7c(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e0c0(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e498(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e4f8(void) {}
ARM void ActorUnkTPDO::func_ov091_0216e5f4(void) {}

ARM ActorUnkTPDO::~ActorUnkTPDO() {}
ARM ActorProfileUnkTPDO::~ActorProfileUnkTPDO() {}
