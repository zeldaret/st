//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSD.hpp"

#include "Render/ModelRender.hpp"
#include "System/SysNew.hpp"

extern "C" unk32 *func_0200f05c(unk32, char *);
extern "C" void func_ov073_0215bb34(ActorUnkRMSD *);

ARM DECL_PROFILE(ActorProfileUnkRMSD);

char data_ov063_021625d8[0x10] = "RMSD_wall";
char data_ov063_021625e8[0x10] = "RMSD";

ARM Actor *ActorProfileUnkRMSD::Create() {
    return new(HeapIndex_2) ActorUnkRMSD();
}

ARM ActorProfileUnkRMSD::ActorProfileUnkRMSD() :
    ActorProfile_Derived1(ActorId_RMSD) {}

ARM ActorUnkRMSD::ActorUnkRMSD() {
    ActorProfileUnkRMSD *r0 = GET_PROFILE(ActorProfileUnkRMSD);
    r0->vfunc_04();
}

ARM void ActorUnkRMSD::func_ov063_0215c408(void) {}

ARM void ActorUnkRMSD::func_ov063_0215c45c(void) {
    this->mUnk_158.vfunc_34();
}
ARM void ActorUnkRMSD::func_ov063_0215c474(void) {
    this->vfunc_20();
}

#define ReturnLogic(data)                                       \
    {                                                           \
        unk32 var1 = GET_PROFILE(ActorProfileUnkRMSD)->mUnk_8C; \
        if (var1 != 0) {                                        \
            unk32 *var2 = func_0200f05c(var1 + 8, data);        \
            if (var2 != nullptr) {                              \
                return var1 + *var2;                            \
            }                                                   \
        }                                                       \
        return 0;                                               \
    }

ARM unk32 ActorUnkRMSD::func_ov063_0215c488(void){ReturnLogic(data_ov063_021625e8)}

ARM unk32 ActorUnkRMSD::func_ov063_0215c4c8(void){ReturnLogic(data_ov063_021625d8)}

ARM ActorUnkRMSD::~ActorUnkRMSD() {}
ARM ActorProfileUnkRMSD::~ActorProfileUnkRMSD() {}
