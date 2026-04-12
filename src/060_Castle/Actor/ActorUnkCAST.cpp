//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAST.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkCAST);

ARM Actor *ActorProfileUnkCAST::Create() {
    return new(HeapIndex_2) ActorUnkCAST();
}

ARM ActorProfileUnkCAST::ActorProfileUnkCAST() :
    ActorProfile_Derived1(ActorId_CAST) {}

ARM ActorUnkCAST::ActorUnkCAST() {}

ARM void ActorUnkCAST::func_ov060_0215ec7c(void) {}
ARM void ActorUnkCAST::func_ov060_0215eca4(void) {}
ARM void ActorUnkCAST::func_ov060_0215eca8(void) {}
ARM void ActorUnkCAST::func_ov060_0215ecbc(void) {}

ARM ActorUnkCAST::~ActorUnkCAST() {}
ARM ActorProfileUnkCAST::~ActorProfileUnkCAST() {}
