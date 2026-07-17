//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCANS.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorItemBoomerang.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorRef.hpp"
#include "Actor/ActorShotArrow.hpp"
#include "Actor/ActorUnkCASE.hpp"
#include "Physics/Cylinder.hpp"
#include "Player/PlayerGet.hpp"
#include "Render/ModelRender.hpp"
#include "Save/AdventureFlags.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "flags.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"
#include "nns/g3d/g3d.h"
#include "profile.hpp"
#include "types.h"

extern const char data_ov063_02162528[0x10]; // = "mCANS1";
extern const char data_ov063_02162538[0x10]; // = "Rarm1";
extern const char data_ov063_02162548[0x10]; // = "locator1";

static PTMF<ActorUnkCANS> data_ov063_02162fb0[0xA] = {
    ActorUnkCANS::func_ov063_02158db0, ActorUnkCANS::func_ov063_02159100, ActorUnkCANS::func_ov063_02159258,
    ActorUnkCANS::func_ov063_02159494, ActorUnkCANS::func_ov063_02159618, ActorUnkCANS::func_ov063_02159784,
    ActorUnkCANS::func_ov063_021599e4, ActorUnkCANS::func_ov063_02159d68, ActorUnkCANS::func_ov063_02159e1c,
    ActorUnkCANS::func_ov063_02159ec0,
};

static PTMF<ActorUnkCANS> data_ov063_02162f58[0xA] = {
    ActorUnkCANS::func_ov063_02158d40, ActorUnkCANS::func_ov063_021590c8, ActorUnkCANS::func_ov063_021591f4,
    ActorUnkCANS::func_ov063_02159408, ActorUnkCANS::func_ov063_021595a4, ActorUnkCANS::func_ov063_02159714,
    ActorUnkCANS::func_ov063_021598fc, ActorUnkCANS::func_ov063_02159ca8, ActorUnkCANS::func_ov063_02159dfc,
    ActorUnkCANS::func_ov063_02159e20,
};

extern UnkStruct_data_ov063_02163068 data_ov063_02163068; // = {0, 0x6B6C6177, 0x41, 0, 0, 0};

extern void *data_027e09c0;
extern u16 data_ov000_020aed00;
extern u16 data_ov000_020aecf0[];
extern Cylinder data_ov063_02162e90;
extern VecFx32 data_027e07d4;
extern "C" void func_01ff916c(unk32 *param1, unk32 param2, unk32 param3);
extern "C" void func_01ff9638(VecFx32 *param1, fx16 param2);
extern "C" fx32 func_01ff9a5c(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" fx32 func_01ffb428(unk32, unk32);
extern "C" unk32 func_01ffbbe0(unk32 param1, unk32 param2);
extern "C" void func_01ffc6d4(ModelRender *param1, UnkAngleStruct param2, VecFx32 *param3);
extern "C" void func_ov000_020578a4(UnkSystem5 *param1, unk32 param2, unk32 param3);
extern "C" void func_ov000_02057c98(ModelRender *param1, UnkSystem5 *param2);
extern "C" void func_ov000_0207de98(void *param1, ActorRef param2, VecFx32 *param3, Actor_38 *param4);
extern "C" void func_ov000_0208bd20(UnkStruct_027e0ce0 *param1, unk32 param2, unk32 param3, unk32 param4);
extern "C" unk32 func_ov000_02097c20(ActorUnkCANS *param1, ActorRef param2, unk32 param3, unk32 param4, unk32 *param5);
extern "C" void func_ov000_020986b4(s16 *param1, ActorUnkCANS *param2, unk32 param3);
extern "C" void func_ov000_02098838(ActorUnkCANS *param1);
extern "C" unk32 func_ov000_02098d7c(ActorUnkCANS *param1, unk32 *param2);
extern "C" unk32 func_ov000_02099450(ActorUnkCANS *param1, unk32 *param2, VecFx32 *param3, unk32 param4, u16 param5);
extern "C" unk32 func_ov000_02099a0c(unk32 *param1);
extern "C" void func_ov017_020bf050(ActorUnkCANS *param1, unk32 *param2, unk32 param3);
extern "C" void func_ov017_020bf178(ActorUnkCANS *param1, unk32 *param2, unk32 param3);
extern "C" void func_ov017_020bf634(ActorUnkCANS *param1, unk16 *param2, unk32 param3, unk32 param4);
extern "C" void func_ov017_020bf688(ActorUnkCANS *param1);
extern "C" void func_ov017_020bf894(ActorUnkCANS *param1, unk32 *param2);
extern "C" unk32 func_ov017_020bef4c(ActorUnkCANS *param1, unk32 param2);
extern "C" unk32 func_ov031_020d9c04(UnkStruct_027e0d38 *param1, unk32 param2, unk32 param3, unk32 param4);

DECL_PROFILE(ActorProfileUnkCANS);

Actor *ActorProfileUnkCANS::Create() {
    return new(HeapIndex_2) ActorUnkCANS();
}

ActorProfileUnkCANS::ActorProfileUnkCANS() :
    ActorProfile_Derived1(ActorId_CANS) {}

UnkStruct_ov063_02162ea8::UnkStruct_ov063_02162ea8() :
    mUnk_08(0),
    mUnk_0C(0),
    mUnk_10(0) {}
UnkStruct_ov063_02162ea8::~UnkStruct_ov063_02162ea8() {}
void UnkStruct_ov063_02162ea8::vfunc_08() {}
void UnkStruct_ov063_02162ea8::vfunc_0C() {}

UnkStruct_ov063_02162ee8::UnkStruct_ov063_02162ee8(G3d_Model *pModel) :
    ModelRender(pModel),
    mUnk_6C(ModelRenderBase::func_ov000_02057f40(data_ov063_02162528)),
    mUnk_70(ModelRenderBase::func_ov000_02057f18(data_ov063_02162538)),
    mUnk_74(ModelRenderBase::func_ov000_02057f18(data_ov063_02162548)) {}
UnkStruct_ov063_02162ee8::~UnkStruct_ov063_02162ee8() {}

UnkStruct_ov063_02162f14::UnkStruct_ov063_02162f14() {}
UnkStruct_ov063_02162f14::~UnkStruct_ov063_02162f14() {}

void UnkStruct_ov063_02162f14::vfunc_38(unk32 param1, unk32 param2) {
    func_ov000_020578a4(mUnk_04, param1, param2);
    func_ov000_020578a4(mUnk_1C, param1, param2);
}

void UnkStruct_ov063_02162f14::vfunc_3C() {
    func_ov000_02057c98(mUnk_08, mUnk_04);
    func_ov000_02057c98(mUnk_08, mUnk_1C);
}

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
        VecFx32 pos;
        VecFx32_Init(FLOAT_TO_FX32(0.25f), 0, 0, &pos);
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
        (*(volatile u16 *) &mUnk_238)++;
    }

    unk32 res = func_ov017_020bef4c(this, 0x4000);
    if (res == 0 && mUnk_48 != 0 && mState != 4) {
        return;
    }
    mUnk_3C = (Actor_9C *) &mUnk_200;

    CALL_PTMF(PTMF<ActorUnkCANS>, data_ov063_02162fb0[mState]);

    func_ov017_020bf894(this, &mUnk_224);
    this->func_ov000_02098838();

    VecFx32_Copy(&mPos, &mPrevPos);
    VecFx32_Add(&mPos, &mVel, &mPos);

    if (mUnk_268 != NULL) {
        mUnk_268->func_ov063_0215b6c8(&mUnk_250, mAngleStruct);
    }

    this->func_ov000_02098b8c(1, &mUnk_23C);
    unk16 res1 = func_01ffbbe0(*(unk32 *) &mUnk_23C.mUnk_00.mUnk_08, mUnk_24C);
    unk16 res2 = func_01ffbbe0(mVel.x, mVel.z);
    unk32 res3 = (unk16) (res2 - res1 - 0x8000);

    if ((mUnk_46 & 1) != 0) {
        mVel.y = 0;
    }

    if ((mUnk_46 & 0x3c) != 0) {
        res3 = ABS(res3);

        if (res3 < 0x2000) {
            VecFx32_Init(0, 0, 0, &mVel);
            VecFx32_Copy(&mPrevPos, &mPos);
        }
    }
    unk32 iVar5;

    if (mUnk_48 > 0) {
        unk32 var;
        if (((u16) mUnk_234 < (u16) mUnk_236)) {
            (*(volatile u16 *) &mUnk_234)++;
            var = 0;
        } else {
            var = 1;
        }

        if (var == 0) {
            if (mUnk_268 != NULL) {
                //! INFO: mUnk_268 is NOT an ActorUnkCANS*, this is a placeholder as mUnk_1F4 is not yet defined in
                //! ActorUnkCASE (current type of *mUnk_268)
                *(char *) &((ActorUnkCANS *) mUnk_268)->mUnk_1F4 = 0;
            }
        } else {

            this->func_ov000_020989e0();

            if (((*(u32 *) &mUnk_208) & 0x3FFFF) != 0) {

                unk32 res4 = func_ov000_02098d7c(this, &mUnk_200);
                mUnk_236   = res4;
                mUnk_234   = 0;

                unk16 sVar2 = func_01ffbbe0(*(u32 *) &mUnk_210, mUnk_218);
                iVar5       = this->func_ov063_0215a56c(sVar2);

                unk32 uVar9;

                switch (mUnk_21C) {
                    case 12:
                        if (iVar5 != 0) {
                            Actor *iVar6 = gpActorManager->func_01fff3b4(*(unk32 *) &mUnk_20C);
                            if (iVar6 != 0) {
                                ((ActorItemBoomerang *) iVar6)->func_ov031_020e49b0(0x8D70);
                            }
                            if (mState != 4) {
                                this->func_ov063_02158448(5);
                            }
                        } else {
                            func_ov017_020bf178(this, &mUnk_200, 1);
                            func_ov000_02099a0c(&mUnk_224);
                            this->func_ov063_02158448(4);
                        }
                        break;
                    case 4: {
                        if (mUnk_268 == NULL) {
                            unk32 iVar6 = func_ov031_020d9c04(data_027e0d38, 1, 0, 0);
                            if (iVar6 != 0) {
                                this->func_ov063_02158448(10);
                            }
                        } else {
                            data_027e0d38->func_ov031_020d9c44(data_ov000_020aed00);
                            if (mState != 4) {
                                this->func_ov063_02158448(5);
                            }
                        }
                        break;
                    }
                    case 13:
                        if (iVar5 == 0) {
                            this->func_ov063_02158490();
                        }
                        break;
                    case 8:
                        if (iVar5 != 0) {
                            if ((u16) mUnk_20C == 0x102) {
                                unk32 uVar1 = 0;
                                if ((u16) mUnk_20C == 0x102) {
                                    if ((u16) mUnk_20E == 1 || (u16) mUnk_20E == 3) {
                                        uVar1 = 1;
                                    };
                                }
                                func_ov000_0208bd20(data_027e0ce0, uVar1 != 0, 0x8c98, 0);
                            } else {
                                data_027e09a8->func_ov000_02071b30(0x8c98, &mPos, 0);
                            }
                            if (mState != 4) {
                                this->func_ov063_02158448(5);
                            }
                        } else {
                            this->func_ov063_02158490();
                        }
                        break;
                    case 3:
                        if (iVar5 != 0) {
                            if (mState != 4) {
                                this->func_ov063_02158448(5);
                            }
                            break;
                        }
                        this->func_ov063_02158490();
                        break;
                    case 0:
                    case 1:
                    case 2:
                    case 5:
                    case 6:
                    case 7:
                    case 9:
                    case 10:
                    case 11:
                    default:
                        if (iVar5 != 0) {
                            this->func_ov017_020bfb18((Actor_9C *) &mUnk_200);
                            if (mState != 4) {
                                this->func_ov063_02158448(5);
                            }
                        } else {
                            this->func_ov063_02158490();
                        }
                        break;
                }
            }
            if (mUnk_268 != NULL) {
                //! INFO: mUnk_268 is NOT an ActorUnkCANS*, this is a placeholder as mUnk_1F4 is not yet defined in
                //! ActorUnkCASE (current type of *mUnk_268)
                *(char *) &((ActorUnkCANS *) mUnk_268)->mUnk_1F4 = (char) iVar5;
            }
        }
    }

    mUnk_128.vfunc_34();

    if ((mFlags[0] & 1) != 0 && mUnk_48 <= 0) {
        return;
    }

    // unk32 puVar11[0xF];
    struct UnkStruct_b {
        /* 00 */ VecFx32 pos;
        /* 0C */ unk32 mUnk_0C;
        /* 10 */ unk32 mUnk_10;
    };

    if (mUnk_268 != NULL) {
        VecFx32 a;
        UnkStruct_b b;
        VecFx32 *aPtr     = &a;
        UnkStruct_b *bPtr = &b;
        // VecFx32 *aPtr     = (VecFx32 *) &puVar11[0xD];
        // UnkStruct_b *bPtr = (UnkStruct_b *) &puVar11[8];

        VecFx32_Init(0x4CD, 0, 0, aPtr);

        func_01ff9638(aPtr, mAngle);
        VecFx32_Add(aPtr, &mPos, aPtr);

        VecFx32_Copy(aPtr, &bPtr->pos);

        // puVar11[0xB] = 0xF33;
        // puVar11[0xC] = 0x1000;
        bPtr->mUnk_0C = 0xF33;
        bPtr->mUnk_10 = 0x1000;

        func_ov000_0207de98(data_027e09c0, mRef, &bPtr->pos, mUnk_38);
    } else {
        VecFx32 a;
        UnkStruct_b b;
        VecFx32 *aPtr     = &a;
        UnkStruct_b *bPtr = &b;
        // VecFx32 *aPtr     = (VecFx32 *) &puVar11[0x5];
        // UnkStruct_b *bPtr = (UnkStruct_b *) &puVar11[0];

        *aPtr = mPos;
        VecFx32_Copy(aPtr, &bPtr->pos);

        // puVar11[3] = 0xA66;
        // puVar11[4] = 0x1000;
        bPtr->mUnk_0C = 0xA66;
        bPtr->mUnk_10 = 0x1000;

        func_ov000_0207de98(data_027e09c0, mRef, &bPtr->pos, mUnk_38);
    }
}

void ActorUnkCANS::vfunc_24(void) {
    if (data_027e09b8->HasAdventureFlag(AdventureFlag_VisitedIslandSanctuaryFirstTime)) {
        this->vfunc_20();
    }
}

void ActorUnkCANS::vfunc_2C(unk32 param1) {
    bool cond = this->func_01fff5d0(param1, 0);
    if (!cond) {
        return;
    }

    ((UnkSystem6_Derived2 *) &mUnk_B0)->func_01ffc6d4(mAngleStruct, &mPos);

    if (mUnk_268 != NULL) {
        VecFx32 vec;
        VecFx32_Init(0x4CD, 0, 0, &vec);

        func_01ff9638(&vec, mAngle);
        VecFx32_Add(&vec, &mPos, &vec);

        this->func_ov017_020bf5c4(&vec, 0xD9A, 0x930 - 0x1F, 0x1F, mAngle);
    } else {
        this->func_ov017_020bf5c4(&mPos, 0x800, 0x555, 0x1F, mAngle);
    }
}

void ActorUnkCANS::func_ov063_02157f7c(void) {}

unk32 ActorUnkCANS::func_ov063_02157fa4(ActorRef param1, unk32 param2, unk32 param3, unk32 *param4) {
    //! INFO: not an ActorUnkCANS method (hence `this` is wrong hereafter)

    unk32 ret1 = func_ov000_02097c20(this, param1, param2, param3, param4);

    if (ret1 == 0) {
        return ret1;
    }

    if (param2 != 3) {
        return ret1;
    }

    unk16 ret2 = func_01ffbbe0(param4[0], param4[2]);
    u32 ret3   = (*(ActorUnkCANS **) &this->mVel.y)->func_ov063_0215a56c(ret2);

    if (ret3 != 0 && param1.type != 0) {
        Actor *ret4 = gpActorManager->func_01fff3b4(param1);

        if (ret4 != NULL && ret4->GetActorId() == 0x41524f57) {
            u16 angle    = (*(ActorUnkCANS **) &mVel.y)->mAngle;
            fx32 sin_val = MUL_FX32(SIN(angle), FLOAT_TO_FX32(1.f));
            fx32 cos_val = MUL_FX32(COS(angle), FLOAT_TO_FX32(1.f));
            VecFx32 vec;
            vec.x = sin_val;
            vec.z = cos_val;
            vec.y = 0;
            // VecFx32_Init doesn't match
            ((ActorShotArrow *) ret4)->func_ov031_020f2cac(&vec, true);
            return 0;
        }

        return 1;
    }
    return ret1;
}

void ActorUnkCANS::func_ov063_02158424(void) {
    mUnk_274 = 0;
    if (mState == 6) {
        mUnk_23A = 0x14;
        mUnk_238 = 0;
    }
}

void ActorUnkCANS::func_ov063_02158448(unk32 param1) {
    this->func_ov063_02158424();
    mState = param1;
    CALL_PTMF(PTMF<ActorUnkCANS>, data_ov063_02162f58[mState]);
}

void ActorUnkCANS::func_ov063_02158490(void) {
    mUnk_48 -= mUnk_21E;
    func_ov017_020bf050(this, &mUnk_200, 1);
    this->func_ov063_02158448(2);
}

void ActorUnkCANS::func_ov063_02158b0c(void) {
    mUnk_268             = NULL;
    ((u16 *) mUnk_38)[4] = 1;
    mUnk_34              = &data_ov063_02162e90;
    mUnk_30              = &data_ov063_02162e90;
}

void ActorUnkCANS::func_ov063_02158b34(void) {
    mUnk_128.vfunc_1C(data_ov063_02163068, 0x1000, 0x19A, 0);
}

void ActorUnkCANS::func_ov063_02158b98(void) {
    if (mUnk_128.vfunc_28()->func_02015080(0x1000) || mUnk_128.vfunc_28()->func_02015080(0x11000) ||
        mUnk_128.vfunc_28()->func_02015080(0x21000)) {
        data_027e09a8->func_ov000_02071b30(0x985F, &mPos, 0);
    }

    if ((mUnk_46 & 0x3C) != 0) {
        unk16 ret2  = func_01ffbbe0(*(unk32 *) &mUnk_23C.mUnk_00.mUnk_08, mUnk_24C);
        unk32 iVar5 = (unk16) ((mUnk_26C * 0x4000 + mUnk_276) - ret2);
        iVar5       = ABS(iVar5);

        if (0x4000 < iVar5) {
            mUnk_276 *= -1;
        }
    }

    func_01ff916c(&mUnk_270, mUnk_276 * 0xCD, 0xCD);
    u16 angle = (fx16) (fx32) (mUnk_26C + 0x4000);
    mVel.x    = MUL_FX32(SIN(angle), mUnk_270);
    mVel.z    = MUL_FX32(COS(angle), mUnk_270);

    if (this->func_ov063_0215a514() != 0) {
        this->func_ov063_02158448(8);
        return;
    }

    if (this->func_ov063_02159f3c(0x3000) != 0) {
        this->func_ov063_02158448(1);
    }
}

void ActorUnkCANS::func_ov063_02158d40(void) {
    mUnk_128.vfunc_1C(data_ov063_02163068, 0x1800, 0x19A, 0);
    mUnk_23A = 0;
    mUnk_238 = 0;
}

void ActorUnkCANS::func_ov063_02158db0(void) {}

void ActorUnkCANS::func_ov063_021590c8(void) {
    unk32 ret1 = this->func_ov063_0215a5bc();
    unk32 ret2 = this->func_ov063_0215a5d8();
    func_ov017_020bf634(this, &mUnk_210, ret1, ret2);
    ((Actor_9C *) &mUnk_200)->func_ov000_02097bec();
}

void ActorUnkCANS::func_ov063_02159100(void) {
    func_ov017_020bf688(this);

    if (!GET_FLAG(this->mFlags, 5)) {
        return;
    }

    if (mUnk_48 <= 0) {
        if (mUnk_268 != NULL) {
            mUnk_268->func_ov000_020984d0();
        }
        this->vfunc_54(0);
        return;
    }

    if ((u16) mUnk_22C < (u16) mUnk_22E) {
        this->func_ov063_02158448(4);
        return;
    }

    if (this->func_ov063_0215a514() != 0) {
        this->func_ov063_02158448(8);
        return;
    }

    if (mAngle != mUnk_26C) {
        mState = 8;
        return;
    }

    if (mUnk_268 == NULL) {
        this->func_ov063_02158448(7);
        return;
    }

    if (this->func_ov063_02159f3c(0x3000)) {
        this->func_ov063_02158448(1);
        return;
    }

    this->func_ov063_02158448(0);
}

void ActorUnkCANS::func_ov063_021591f4(void) {
    mUnk_128.vfunc_1C(data_ov063_02163068, 0x1000, 0x19A, 0);
}

void ActorUnkCANS::func_ov063_02159258(void) {}

void ActorUnkCANS::func_ov063_02159408(void) {
    func_ov000_02099450(this, &mUnk_224, &data_027e07d4, 0, data_ov000_020aecf0[0]);
    mUnk_128.vfunc_1C(data_ov063_02163068, 0, 0x19A, 0);
    ((Actor_9C *) &mUnk_200)->func_ov000_02097bec();
}

void ActorUnkCANS::func_ov063_02159494(void) {}
void ActorUnkCANS::func_ov063_021595a4(void) {}
void ActorUnkCANS::func_ov063_02159618(void) {}
void ActorUnkCANS::func_ov063_02159714(void) {}
void ActorUnkCANS::func_ov063_02159784(void) {}
void ActorUnkCANS::func_ov063_021598fc(void) {}
void ActorUnkCANS::func_ov063_021599e4(void) {}
void ActorUnkCANS::func_ov063_02159ca8(void) {}
void ActorUnkCANS::func_ov063_02159d68(void) {}

void ActorUnkCANS::func_ov063_02159dfc(void) {
    mVel.x   = 0;
    mVel.z   = 0;
    mUnk_270 = 0;
    ((Actor_9C *) &mUnk_200)->func_ov000_02097bec();
}

void ActorUnkCANS::func_ov063_02159e1c(void) {}
void ActorUnkCANS::func_ov063_02159e20(void) {}
void ActorUnkCANS::func_ov063_02159ec0(void) {}
unk32 ActorUnkCANS::func_ov063_02159f3c(unk32 param1) {}
unk32 ActorUnkCANS::func_ov063_0215a0f0(void) {}
void ActorUnkCANS::func_ov063_0215a2c0(void) {}
void ActorUnkCANS::func_ov063_0215a428(void) {}
unk32 ActorUnkCANS::func_ov063_0215a474(void) {}
unk32 ActorUnkCANS::func_ov063_0215a514(void) {}
unk32 ActorUnkCANS::func_ov063_0215a56c(unk32 param1) {}
void ActorUnkCANS::func_ov063_0215a5a0(void) {}
unk32 ActorUnkCANS::func_ov063_0215a5bc(void) {}
unk32 ActorUnkCANS::func_ov063_0215a5d8(void) {}
void ActorUnkCANS::func_ov063_0215a678(void) {}
void ActorUnkCANS::vfunc_4C(void) {}
void ActorUnkCANS::vfunc_50(void) {}

ActorUnkCANS::~ActorUnkCANS() {}
ActorProfileUnkCANS::~ActorProfileUnkCANS() {}
