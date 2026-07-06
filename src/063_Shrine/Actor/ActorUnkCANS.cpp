//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCANS.hpp"
#include "Actor/ActorItemBoomerang.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkCASE.hpp"
#include "Physics/Cylinder.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"
#include "types.h"

static PTMF<ActorUnkCANS> data_ov063_02162fb0[0xA] = {
    ActorUnkCANS::func_ov063_02158db0, ActorUnkCANS::func_ov063_02159100, ActorUnkCANS::func_ov063_02159258,
    ActorUnkCANS::func_ov063_02159494, ActorUnkCANS::func_ov063_02159618, ActorUnkCANS::func_ov063_02159784,
    ActorUnkCANS::func_ov063_021599e4, ActorUnkCANS::func_ov063_02159d68, ActorUnkCANS::func_ov063_02159e1c,
    ActorUnkCANS::func_ov063_02159ec0,
};

extern unk16 *data_ov000_020aed00;

extern "C" void func_01ff9638(VecFx32 *param1, fx16 param2);
extern "C" unk32 func_01ffbbe0(unk32 param1, unk32 param2);
extern "C" void func_ov000_0208bd20(UnkStruct_027e0ce0 *param1, unk32 param2, unk32 param3, unk32 param4);
extern "C" void func_ov000_020986b4(s16 *var, ActorUnkCANS *param2, unk32 param3);
extern "C" void func_ov000_02098838(ActorUnkCANS *param1);
extern "C" unk32 func_ov000_020987dc(ActorUnkCANS *param1, unk32 *param2);
extern "C" unk32 func_ov000_02099a0c(unk32 *param1);
extern "C" void func_ov017_020bf178(ActorUnkCANS *param1, unk32 *param2, unk32 param3);
extern "C" void func_ov017_020bf894(ActorUnkCANS *param1, unk32 param2);
extern "C" void func_ov017_020bfb18(ActorUnkCANS *param1, unk32 *param2);
extern "C" unk32 func_ov017_020ebf4c(ActorUnkCANS *param1, unk32 param2);
extern "C" unk32 func_ov031_020d9c04(UnkStruct_027e0d38 *param1, unk32 param2, unk32 param3, unk32 param4);

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

    if (this->mUnk_268 != NULL) {
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
    this->mUnk_268 = (ActorUnkCASE *) actorManager->func_01fff3b4(var);

    return 1; // bool ?
}

void ActorUnkCANS::vfunc_1C(void) {
    mUnk_26C = mUnk_5C.mInitialAngle;

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

void ActorUnkCANS::vfunc_20(void) {
    if (mUnk_238 < mUnk_23A) {
        mUnk_238++;
    }

    unk32 res = func_ov017_020ebf4c(this, 0x4000);
    if (res == 0 && mUnk_48 != 0 && mUnk_4A[1] != 4) {
        return;
    }
    mUnk_3C = (Actor_9C *) &mUnk_1F4.mUnk_0C;

    // if (CALL_PTMF(PTMF<ActorUnkCANS>, data_) & 1 == 0) {
    // }
    //
    func_ov017_020bf894(this, mUnk_224);
    this->func_ov000_02098838();

    mPrevPos = mPos;

    VecFx32_Add(&mPos, &mVel, &mPos);

    if (mUnk_268 != NULL) {
        fx16 angle = mAngle;
        mUnk_268->func_ov063_0215b6c8(mUnk_250, angle);
    }

    this->func_ov000_02098b8c(1, &mUnk_23C);
    unk16 res1 = func_01ffbbe0(*(unk32 *) &mUnk_23C.mUnk_08, mUnk_24C);
    unk16 res2 = func_01ffbbe0(mVel.x, mVel.z);
    unk32 res3 = (res2 - res1 - 0x8000) * 0x10000 >> 0x10;

    if ((mUnk_46 & 1) != 0) {
        mVel.y = 0;
    }

    if ((mUnk_46 & 0x3c) != 0) {
        res3 = ABS(res3);

        if (res3 < 0x2000) {
            mVel.x = mVel.y = mVel.z = 0;
            mPos                     = mPrevPos;
        }
    }

    if (mUnk_48 < 1) {
        return; // TODO some goto
    }

    if ((u16) mUnk_234 < (u16) mUnk_236) {
        mUnk_234++;
        if (mUnk_268 != NULL) {
            *(char *) ((*(int **) mUnk_268) + 500) = 0;
        }
        return; // TODO some goto (same as above)
    }

    this->func_ov000_020989e0();

    if ((mUnk_208 & 0x3FFFF) == 0) {
        return; // TODO some goto (not the same)
    }

    unk32 res4 = func_ov000_020987dc(this, &mUnk_1F4.mUnk_0C);
    mUnk_236   = res4;
    mUnk_234   = 0;

    unk32 sVar2 = func_01ffbbe0(mUnk_210, mUnk_218);
    unk32 iVar5 = this->func_ov063_0215a56c(sVar2);

    unk32 uVar9;
    switch (mUnk_21C) {
        case 0:
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            if (iVar5) {
                return; // TODO some goto
            }
            if (mState == 4) {
                return; // TODO some goto
            }
            return; // TODO some goto
        case 4: {
            if (mUnk_268 != NULL) {
                data_027e0d38->func_ov031_020d9c44(*data_ov000_020aed00);
                sVar2 = mState;
                return; // TODO some goto
            }
            unk32 iVar6 = func_ov031_020d9c04(data_027e0d38, 1, 0, 0);
            if (iVar6 != 0) {
                uVar9 = 10;
                return; // TODO some goto
            }
            return; // TODO some goto
        }
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            if (iVar5 == 0) {
                return; // TODO some goto
            }
            if (mUnk_20C != 0x102) {
                data_027e09a8->func_ov000_02071b30(0x8c98, &mPos, 0);
            } else {
                unk32 param2 = 0;
                if (mUnk_20C == 102 && (mUnk_20E == 1 || mUnk_20E == 3)) {
                    unk32 param2 = 1;
                }
                func_ov000_0208bd20(data_027e0ce0, param2, 0x8c98, 0);
            }
            sVar2 = mState;
            return; // TODO some goto
        case 9:
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            if (iVar5 != 0) {
                Actor *iVar6 = gpActorManager->func_01fff3b4(mUnk_20C);
                if (iVar6 != 0) {
                    ((ActorItemBoomerang *) iVar6)->func_ov031_020e49b0(0x8d70);
                }
                sVar2 = mState;
                return; // TODO some goto
            }
            func_ov017_020bf178(this, &mUnk_1F4.mUnk_0C, 1);
            func_ov000_02099a0c(&mUnk_224);
            uVar9 = 4;
            return; // TODO some goto
        case 13:
            if (iVar5 == 0) {
                return; // TODO some goto
            }
            return; // TODO some goto
    }

    if (iVar5 == 0) {
        this->func_ov063_02158490();
    } else {
        func_ov017_020bfb18(this, &mUnk_1F4.mUnk_0C);
        sVar2 = mState;
        if (sVar2 != 4) {
            uVar9 = 5;
            this->func_ov063_02158448(uVar9);
        }
    }
    if (mUnk_268 != 0) {
        *(char *) ((*(int **) mUnk_268) + 500) = (char) iVar5;
    }
    ((Actor *) mUnk_128)->vfunc_34(); //! INFO: NOT an Actor
}

void ActorUnkCANS::vfunc_24(void) {}
void ActorUnkCANS::vfunc_2C(void) {}

void ActorUnkCANS::func_ov063_02157f20(void) {}
void ActorUnkCANS::func_ov063_02157f7c(void) {}
void ActorUnkCANS::func_ov063_02157fa4(void) {}
void ActorUnkCANS::func_ov063_021582f8(void) {}
void ActorUnkCANS::func_ov063_0215830c(void) {}
void ActorUnkCANS::func_ov063_02158424(void) {}
void ActorUnkCANS::func_ov063_02158448(unk32 param1) {}
void ActorUnkCANS::func_ov063_02158490(void) {}
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
unk32 ActorUnkCANS::func_ov063_0215a56c(unk32 param1) {}
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
