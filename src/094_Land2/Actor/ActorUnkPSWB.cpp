#include "Actor/ActorUnkPSWB.hpp"
#include "CommonFuncs.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

DECL_PROFILE(ActorProfileUnkPSWB);

void *data_ov094_021785a4 = NULL;

Actor *ActorProfileUnkPSWB::Create() {
    return new(HeapIndex_2) ActorUnkPSWB();
}

ActorProfileUnkPSWB::ActorProfileUnkPSWB() :
    ActorProfileUnkPSWB_Base(ActorId_PSWB) {
    mUnk_04.pos.x     = 0;
    mUnk_04.pos.z     = 0;
    mUnk_D8.mUnk_0C.y = 0;
    mUnk_D8.mUnk_08   = 0x7006;
    mUnk_04.pos.y     = FX_F32_TO_FX32(0.49f);
    mUnk_D8.mUnk_04 |= 1;
    mUnk_04.size      = FX_F32_TO_FX32(0.49f);
    mUnk_D8.mUnk_18.x = FX_F32_TO_FX32(0.49f);
    mUnk_D8.mUnk_18.z = FX_F32_TO_FX32(0.49f);
    mUnk_D8.mUnk_0C.x = -FX_F32_TO_FX32(0.49f);
    mUnk_D8.mUnk_0C.z = -FX_F32_TO_FX32(0.49f);
    mUnk_D8.mUnk_18.y = FX_F32_TO_FX32(0.90f);

    VecFx32 vec1, vec2, vec3;
    VecFx32_Init(-FX_F32_TO_FX32(0.49f), FX_F32_TO_FX32(0.90f), -FX_F32_TO_FX32(0.49f), &vec2);
    VecFx32_Init(FX_F32_TO_FX32(0.49f), FX_F32_TO_FX32(1.90f), FX_F32_TO_FX32(0.49f), &vec3);
    func_01ffcfcc(&vec1, &vec2, &vec3);

    func_ov000_0207f4fc(&mUnk_FC, &vec1, 0x3000, 1);

    data_ov094_021785a4 = &mUnk_FC;
    mUnk_18             = 2;
    mUnk_1A             = 0x1333;
}

ActorUnkPSWB::ActorUnkPSWB() {}

void ActorUnkPSWB::func_ov094_02166424(void) {}
void ActorUnkPSWB::func_ov094_02166438(void) {}
void ActorUnkPSWB::func_ov094_02166454(void) {}
void ActorUnkPSWB::func_ov094_02166680(void) {}
bool ActorUnkPSWB::Init(unk32 param1) {}
void ActorUnkPSWB::func_ov094_02166890(void) {}
void ActorUnkPSWB::func_ov094_021668cc(void) {}
void ActorUnkPSWB::func_ov094_021668e0(void) {}
void ActorUnkPSWB::Update(void) {}
void ActorUnkPSWB::vfunc_24(void) {}
void ActorUnkPSWB::func_ov094_02166bcc(void) {}
void ActorUnkPSWB::func_ov094_02166c10(void) {}
void ActorUnkPSWB::func_ov094_02166c2c(void) {}
void ActorUnkPSWB::func_ov094_02166c88(void) {}
void ActorUnkPSWB::func_ov094_02166e10(void) {}
void ActorUnkPSWB::func_ov094_02166e60(void) {}
void ActorUnkPSWB::func_ov094_02166f94(void) {}
void ActorUnkPSWB::func_ov094_02167024(void) {}
void ActorUnkPSWB::func_ov094_02167224(void) {}
void ActorUnkPSWB::func_ov094_0216723c(void) {}
void ActorUnkPSWB::func_ov094_02167518(void) {}
void ActorUnkPSWB::func_ov094_021675ac(void) {}
void ActorUnkPSWB::func_ov094_02167614(void) {}
void ActorUnkPSWB::func_ov094_02167688(void) {}
void ActorUnkPSWB::func_ov094_021676f0(void) {}
void ActorUnkPSWB::func_ov094_021676f4(void) {}
void ActorUnkPSWB::func_ov094_02167794(void) {}
void ActorUnkPSWB::func_ov094_0216781c(void) {}
void ActorUnkPSWB::func_ov094_0216783c(void) {}
void ActorUnkPSWB::func_ov094_02167844(void) {}
void ActorUnkPSWB::vfunc_2C(unk32 param1) {}
void ActorUnkPSWB::func_ov094_02167aac(void) {}
void ActorUnkPSWB::func_ov094_02167ab8(void) {}
void ActorUnkPSWB::func_ov094_02167b24(void) {}
void ActorUnkPSWB::func_ov094_02167b64(void) {}
void ActorUnkPSWB::func_ov094_02167bf0(void) {}
void ActorUnkPSWB::func_ov094_02167c54(void) {}
void ActorUnkPSWB::func_ov094_02167d20(void) {}
void ActorUnkPSWB::func_ov094_02167dbc(void) {}
void ActorUnkPSWB::func_ov094_02167e58(void) {}
void ActorUnkPSWB::vfunc_58(void) {}
void ActorUnkPSWB::func_ov094_0216825c(void) {}
void ActorUnkPSWB::func_ov094_02168310(void) {}
void ActorUnkPSWB::func_ov094_02168348(void) {}
void ActorUnkPSWB::func_ov094_02168364(void) {}
void ActorUnkPSWB::func_ov094_02168388(void) {}
