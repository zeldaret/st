//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSF.hpp"
#include "System/SysNew.hpp"
#include "profile.hpp"
#include "types.h"

extern "C" unk32 *func_0200f05c(unk32, char *);
extern "C" void func_0x02057b8c(unk32 *);

char data_ov063_021625b8[0x10] = "RMSF_wall";
char data_ov063_021625c8[0x10] = "RMSF";

ARM DECL_PROFILE(ActorProfileUnkRMSF);

ARM Actor *ActorProfileUnkRMSF::Create() {
    return new(HeapIndex_2) ActorUnkRMSF();
}

ARM ActorProfileUnkRMSF::ActorProfileUnkRMSF() :
    ActorProfile_Derived1(ActorId_RMSF) {}

ARM ActorUnkRMSF::ActorUnkRMSF() {}

ARM unk32 ActorUnkRMSF::func_ov063_0215c250(void) {
    unk32 var1 = GET_PROFILE(ActorProfileUnkRMSF)->mUnk_8C;
    unk32 *var2;
    if (var1 != 0 && (var2 = func_0200f05c(var1 + 8, data_ov063_021625c8), var2 != 0)) {
        return var1 + *var2;
    }
    return 0;
}

ARM unk32 ActorUnkRMSF::func_ov063_0215c290(void) {
    unk32 var1 = GET_PROFILE(ActorProfileUnkRMSF)->mUnk_8C;
    unk32 *var2;
    if (var1 != 0 && (var2 = func_0200f05c(var1 + 8, data_ov063_021625b8), var2 != 0)) {
        return var1 + *var2;
    }
    return 0;
}

ARM ActorUnkRMSF::~ActorUnkRMSF() {
    func_0x02057b8c(&this->mUnk_F4);
    func_0x02057b8c(&this->mUnk_94);
}

ARM ActorProfileUnkRMSF::~ActorProfileUnkRMSF() {}
