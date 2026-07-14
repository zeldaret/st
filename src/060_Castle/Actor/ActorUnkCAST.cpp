//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAST.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkCAST);

Actor *ActorProfileUnkCAST::Create() {
    return new(HeapIndex_2) ActorUnkCAST();
}

ActorProfileUnkCAST::ActorProfileUnkCAST() :
    ActorProfile_Derived1(ActorId_CAST) {}

ActorUnkCAST::ActorUnkCAST() {}

void ActorUnkCAST::func_ov060_0215ec7c(void) {}
void ActorUnkCAST::func_ov060_0215eca4(void) {}
void ActorUnkCAST::func_ov060_0215eca8(void) {}
void ActorUnkCAST::func_ov060_0215ecbc(void) {}

ActorUnkCAST::~ActorUnkCAST() {}
ActorProfileUnkCAST::~ActorProfileUnkCAST() {}
