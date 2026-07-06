//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCANS.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkCASE.hpp"
#include "Physics/Cylinder.hpp"
#include "Render/ModelRender.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "types.h"

struct UnkStruct_vfunc_1C_var {
    s16 val;
};

extern "C" void func_01ff9638(VecFx32 *param1, fx16 param2);
extern "C" void func_ov000_020986b4(s16 *var, ActorUnkCANS *param2, unk32 param3);

DECL_PROFILE(ActorProfileUnkCANS);

Actor *ActorProfileUnkCANS::Create() {
    return new(HeapIndex_2) ActorUnkCANS();
}

ActorProfileUnkCANS::ActorProfileUnkCANS() :
    ActorProfile_Derived1(ActorId_CANS) {}

ActorUnkCANS::ActorUnkCANS() :
    mUnk_B0(NULL), //! INFO: Not the actual ctor
    mUnk_154(&mUnk_174, NULL),
    mUnk_1A4(&mUnk_1C4, NULL) {}

void ActorUnkCANS::vfunc_10(Cylinder *param1) {
    Cylinder *cylinder = this->mUnk_34;
    *param1            = *cylinder;
    VecFx32_Add(&param1->pos, &this->mPos, &param1->pos);

    if (this->mUnk_268 != 0) {
        fx16 angle = this->mAngle;
        VecFx32 pos; // = {FLOAT_TO_FX32(0.25f), 0, 0};
        pos.x = FLOAT_TO_FX32(0.25f);
        pos.y = 0;
        pos.z = 0;
        func_01ff9638(&pos, angle);
        VecFx32_Add(&param1->pos, &pos, &param1->pos);
    }
}

unk32 ActorUnkCANS::vfunc_18(void) {
    this->mUnk_B0.func_ov000_02057c38(6, 2);
    this->mUnk_B0.func_ov000_0209a7b8(this, func_ov063_0215a678);

    ActorRef var;
    ActorManager *actorManager = gpActorManager;

    ActorUnkCASE::func_ov063_0215acec(&var, this->mRef);
    this->mUnk_268 = actorManager->func_01fff3b4(var);

    return 1; // bool ?
}

void ActorUnkCANS::vfunc_1C(void) {
    this->mUnk_26C = this->mUnk_5C.mInitialAngle;

    s16 var;
    func_ov000_020986b4((s16 *) &var, this, 0);

    s16 r2_val = var;
    s16 r3_val = *((volatile s16 *) &var);

    var       = r2_val - mUnk_26C;
    s16 iVar2 = r3_val - (s16) (mUnk_26C - DEG_TO_ANG(180));

    int iVar2_2 = iVar2;
    int iVar1_2 = var;

    iVar2_2 = ABS(iVar2_2);

    iVar1_2 = ABS(iVar1_2);

    if (iVar1_2 > iVar2_2) {
        mUnk_26C += DEG_TO_ANG(180);
        mAngle += DEG_TO_ANG(180);
    }

    this->func_ov063_02158448(0);
}

void ActorUnkCANS::func_ov063_02157f20(void) {}
void ActorUnkCANS::func_ov063_02157f7c(void) {}
void ActorUnkCANS::func_ov063_02157fa4(void) {}
void ActorUnkCANS::func_ov063_021582f8(void) {}
void ActorUnkCANS::func_ov063_0215830c(void) {}
void ActorUnkCANS::func_ov063_02158424(void) {}
void ActorUnkCANS::func_ov063_02158448(unk32 param1) {}
void ActorUnkCANS::func_ov063_02158490(void) {}
void ActorUnkCANS::vfunc_24(void) {}
void ActorUnkCANS::vfunc_20(void) {}
void ActorUnkCANS::vfunc_2C(void) {}
void ActorUnkCANS::func_ov063_02158b0c(void) {}
void ActorUnkCANS::func_ov063_02158b34(void) {}
void ActorUnkCANS::func_ov063_02158b98(void) {}
void ActorUnkCANS::func_ov063_02158d40(void) {}
void ActorUnkCANS::func_ov063_02158db0(void) {}
void ActorUnkCANS::func_ov063_021590c8(void) {}
void ActorUnkCANS::func_ov063_02159100(void) {}
void ActorUnkCANS::func_ov063_021591f4(void) {}
void ActorUnkCANS::func_ov063_02159258(void) {}
void ActorUnkCANS::func_ov063_02159408(void) {}
void ActorUnkCANS::func_ov063_02159494(void) {}
void ActorUnkCANS::func_ov063_021595a4(void) {}
void ActorUnkCANS::func_ov063_02159618(void) {}
void ActorUnkCANS::func_ov063_02159714(void) {}
void ActorUnkCANS::func_ov063_02159784(void) {}
void ActorUnkCANS::func_ov063_021598fc(void) {}
void ActorUnkCANS::func_ov063_021599e4(void) {}
void ActorUnkCANS::func_ov063_02159ca8(void) {}
void ActorUnkCANS::func_ov063_02159d68(void) {}
void ActorUnkCANS::func_ov063_02159dfc(void) {}
void ActorUnkCANS::func_ov063_02159e1c(void) {}
void ActorUnkCANS::func_ov063_02159e20(void) {}
void ActorUnkCANS::func_ov063_02159ec0(void) {}
void ActorUnkCANS::func_ov063_02159f3c(void) {}
void ActorUnkCANS::func_ov063_0215a0f0(void) {}
void ActorUnkCANS::func_ov063_0215a2c0(void) {}
void ActorUnkCANS::func_ov063_0215a428(void) {}
void ActorUnkCANS::func_ov063_0215a474(void) {}
void ActorUnkCANS::func_ov063_0215a514(void) {}
void ActorUnkCANS::func_ov063_0215a56c(void) {}
void ActorUnkCANS::func_ov063_0215a5a0(void) {}
void ActorUnkCANS::func_ov063_0215a5bc(void) {}
void ActorUnkCANS::func_ov063_0215a5d8(void) {}
void ActorUnkCANS::func_ov063_0215a678(void) {}
void ActorUnkCANS::func_ov063_0215a7d4(void) {}
void ActorUnkCANS::func_ov063_0215a834(void) {}
void ActorUnkCANS::func_ov063_0215a880(void) {}
void ActorUnkCANS::func_ov063_0215a94c(void) {}
void ActorUnkCANS::func_ov063_0215a970(void) {}
void ActorUnkCANS::func_ov063_0215a99c(void) {}
void ActorUnkCANS::func_ov063_0215a9b8(void) {}
void ActorUnkCANS::func_ov063_0215a9d4(void) {}
void ActorUnkCANS::func_ov063_0215aa58(void) {}

ActorUnkCANS::~ActorUnkCANS() {}
ActorProfileUnkCANS::~ActorProfileUnkCANS() {}
