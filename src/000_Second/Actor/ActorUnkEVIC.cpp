#include "Actor/ActorUnkEVIC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkEVIC);

ARM Actor *ActorProfileUnkEVIC::Create() {
    return new(HeapIndex_2) ActorUnkEVIC();
}

ARM ActorProfileUnkEVIC::ActorProfileUnkEVIC() :
    ActorProfile(ActorId_EVIC) {}

ARM ActorUnkEVIC::ActorUnkEVIC() {
    this->mUnk_10C = 0;
}

ARM bool ActorUnkEVIC::vfunc_18(unk32 param1) {
    this->mUnk_094.func_ov000_0206082c(0x5D, this->mUnk_6c);
    return true;
}

ARM ActorUnkEVIC::~ActorUnkEVIC() {}

ARM ActorProfileUnkEVIC::~ActorProfileUnkEVIC() {}
