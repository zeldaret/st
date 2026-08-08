#include "Actor/ActorUnkCANS.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorItemBoomerang.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorRef.hpp"
#include "Actor/ActorShotArrow.hpp"
#include "Actor/ActorUnkCASE.hpp"
#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "Map/MapObjectId.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "Physics/Cylinder.hpp"
#include "Player/PlayerGet.hpp"
#include "Render/ModelRender.hpp"
#include "Save/AdventureFlags.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "flags.h"
#include "math.hpp"
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

/* Contains a string somewhere with info such as "attack" or "guard" */
extern ActorUnkZLSL_AnimationTag data_ov063_02163068; // = {0, 0x6B6C6177, 0x41, 0, 0, 0};
extern ActorUnkZLSL_AnimationTag data_ov063_02163080;
extern ActorUnkZLSL_AnimationTag data_ov063_02163098;
extern ActorUnkZLSL_AnimationTag data_ov063_021630b0;

extern VecFx32 data_027e07d4;
extern Mat4x3p data_027e0964;
extern UnkStruct_027e09c0 *data_027e09c0;
extern u16 data_ov000_020aed00;
extern u16 data_ov000_020aecf0[0x4];
extern u16 data_ov000_020aecf4[0x4];   //! INFO: Unsure about the size
extern unk32 data_ov000_020aecf8[0x2]; //! INFO: Unsure about the size
extern unk32 data_ov000_020aecfc[0x2]; //! INFO: Unsure about the size
extern Cylinder data_ov063_02162e90;

extern "C" void func_01ff916c(unk32 *param1, unk32 param2, unk32 param3);
extern "C" unk32 func_01ff9258(unk32, unk32);
extern "C" unk32 func_01ff930c(s16 *, unk16, unk32);
extern "C" void func_01ff9638(VecFx32 *param1, fx16 param2);
extern "C" fx32 func_01ff9a5c(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" void func_01ffad5c(Mat4x3p *, Mat4x3p *, Mat4x3p *);
extern "C" fx32 func_01ffb428(unk32, unk32);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" unk32 func_01ffbbe0(unk32 param1, unk32 param2);
extern "C" void func_01ffc6d4(ModelRender *param1, UnkAngleStruct param2, VecFx32 *param3);
extern "C" void func_0200eab0(G3d_Model *, unk32, u8);
extern "C" void func_ov000_020578a4(UnkSystem5 *param1, unk32 param2, unk32 param3);
extern "C" void func_ov000_02057c98(ModelRender *param1, UnkSystem5 *param2);
#if IS_JP
extern "C" unk32 func_ov000_0205c384(VecFx32 *param1, VecFx32 *param2);
#endif
extern "C" void func_ov000_0208bd20(UnkStruct_027e0ce0 *param1, unk32 param2, unk32 param3, unk32 param4);
extern "C" void func_ov000_020986b4(s16 *param1, ActorUnkCANS *param2, unk32 param3);
extern "C" void func_ov000_02098f34(ActorUnkCANS *param1, unk16 *param2);
extern "C" unk32 func_ov000_02098d7c(ActorUnkCANS *param1, UnkStruct_ov063_02162e88 *param2);
extern "C" unk32 func_ov000_02099450(ActorUnkCANS *param1, void *param2, VecFx32 *param3, unk32 param4, u16 param5);
extern "C" void func_ov000_020994a0(ActorUnkCANS *);
extern "C" unk32 func_ov000_02099a0c(void *param1);
extern "C" void func_ov017_020bf050(ActorUnkCANS *param1, UnkStruct_ov063_02162e88 *param2, unk32 param3);
extern "C" void func_ov017_020bf178(ActorUnkCANS *param1, UnkStruct_ov063_02162e88 *param2, unk32 param3);
extern "C" void func_ov017_020bf634(ActorUnkCANS *param1, unk16 *param2, unk32 param3, unk32 param4);
extern "C" void func_ov017_020bf688(ActorUnkCANS *param1);
extern "C" void func_ov017_020bf894(ActorUnkCANS *param1, void *param2);
extern "C" unk32 func_ov017_020bef4c(ActorUnkCANS *param1, unk32 param2);
#if IS_JP
extern "C" void func_ov026_020f46a8(Actor *param1, VecFx32 *param2, bool param3);
#endif

extern "C" void G3d_GetCurrentMtx(Mat4x3p *mtx1, Mat3p *mtx2);

DECL_PROFILE(ActorProfileUnkCANS);

Actor *ActorProfileUnkCANS::Create() {
    return new(HeapIndex_2) ActorUnkCANS();
}

ActorProfileUnkCANS::ActorProfileUnkCANS() :
    ActorProfile_Derived1(ActorId_CANS) {
    mUnk_24 = 0x43415345;
    VecFx32_Init(0, 0xCCD, 0, &mUnk_04.pos);
    mUnk_04.size = 0xCCD;
}

UnkStruct_ov063_02162ea8::UnkStruct_ov063_02162ea8() {
    VecFx32_Init(0, 0, 0, &mUnk_08);
}
UnkStruct_ov063_02162ea8::~UnkStruct_ov063_02162ea8() {}

bool UnkStruct_ov063_02162ea8::vfunc_08(UnkStruct_ov031_020f3310 *param1) {
    bool retVal = UnkStruct_ov031_Items_00::vfunc_08(param1);
    if (retVal && func_01ff9258(param1->mUnk_08.x, param1->mUnk_08.z) > 0) {
        // VecFx16_Copy2VecFx32(&param1->mUnk_08, &mUnk_08);
        // Better match
        unk16 tmp1 = param1->mUnk_08.x;
        unk16 tmp3 = param1->mUnk_08.z;
        unk16 tmp2 = param1->mUnk_08.y;
        mUnk_08.x  = tmp1;
        mUnk_08.y  = tmp2;
        mUnk_08.z  = tmp3;
    }
    return retVal;
}

bool UnkStruct_ov063_02162ea8::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2, unk32 param3) {
    UnkStruct_02162ea8_vfunc_0C *param2Struct = (UnkStruct_02162ea8_vfunc_0C *) &param2;
    if ((*(u16 *) &param2Struct->mUnk_04 & 0x1000) != 0) {
        UnkStruct_02162ea8_vfunc_0C tmp;
        tmp.mUnk_04 = *(volatile unk32 *) &param2Struct->mUnk_04;

        Vec2bCpp vec;
        *(unk32 *) &vec = tmp.mUnk_04;

        MapObject *mapObject = gpMapObjManager->func_01fff498(vec);

        if (mapObject != NULL) {
            MapObjectId id = mapObject->GetMapObjectId();
            if (id == MapObjectId_Grass || id == MapObjectId_LEVS || id == MapObjectId_STSH) {
                return false;
            }
        }
    }
    return UnkStruct_027e0ce0_38_Base::vfunc_0C((const UnkStruct_ov031_020e54d4 *) param2Struct->mUnk_04, param2,
                                                param2Struct->mUnk_04);
}

UnkStruct_ov063_02162ee8::UnkStruct_ov063_02162ee8(G3d_Model *pModel) :
    UnkStruct_ov000_020b3268(pModel),
    mUnk_6C(ModelRenderBase::func_ov000_02057f40(data_ov063_02162528)),
    mUnk_70(ModelRenderBase::func_ov000_02057f18(data_ov063_02162538)),
    mUnk_74(ModelRenderBase::func_ov000_02057f18(data_ov063_02162548)) {}

void UnkStruct_ov063_02162f14::vfunc_38(unk32 param1, unk32 param2) {
    func_ov000_020578a4(mUnk_04, param1, param2);
    func_ov000_020578a4(mUnk_1C, param1, param2);
}

void UnkStruct_ov063_02162f14::vfunc_3C() {
    mUnk_08->func_ov000_02057c98(mUnk_04);
    mUnk_08->func_ov000_02057c98(mUnk_1C);
}

UnkStruct_ov063_02162e88::UnkStruct_ov063_02162e88(void *param1) :
    mUnk_20(param1) {}

unk32 UnkStruct_ov063_02162e88::vfunc_04(ActorRef param1, unk32 param2, unk32 param3, unk32 *param4) {

    unk32 ret1 = Actor_9C::vfunc_04(param1, param2, param3, param4);

    if (ret1 == 0) {
        return ret1;
    }

    if (param2 != 3) {
        return ret1;
    }

    if (((ActorUnkCANS *) mUnk_20)->func_ov063_0215a56c((unk16) func_01ffbbe0(param4[0], param4[2])) != 0 &&
        param1.type != 0) {
        ActorShotArrow *ret4 = (ActorShotArrow *) gpActorManager->func_01fff3b4(param1);

        if (ret4 != NULL && ret4->GetActorId() == ActorId_ShotArrow) {
            u16 angle    = ((ActorUnkCANS *) mUnk_20)->mAngle;
            fx32 sin_val = MUL_FX32(SIN(angle), FLOAT_TO_FX32(1.f));
            fx32 cos_val = MUL_FX32(COS(angle), FLOAT_TO_FX32(1.f));
            VecFx32 vec;
            // VecFx32_Init doesn't match
            vec.x = sin_val;
            vec.z = cos_val;
            vec.y = 0;
#if !IS_JP
            ret4->func_ov031_020f2cac(&vec, true);
#else
            func_ov026_020f46a8(ret4, &vec, true);
#endif
            return 0;
        }

        return 1;
    }
    return ret1;
}

ActorUnkCANS::ActorUnkCANS() :
    mUnk_0B0(G3d_GetModelPtr(((MapObjectProfile_Derived2_20 *) GET_PROFILE(ActorProfileUnkCANS)->vfunc_04())->mUnk_50)),
    mUnk_128(&mUnk_0B0, GET_PROFILE(ActorProfileUnkCANS)->vfunc_04()),
    mUnk_1F4(),
    mUnk_200(this),
    mUnk_224(),
    mUnk_234(0),
    mUnk_236(0),
    mUnk_238(0),
    mUnk_23A(0),
    mUnk_250(mUnk_5C.mInitialPos),
    mUnk_274(0),
    mUnk_270(0xCD) {
    SET_FLAG(mFlags, ActorFlag_6);
    Actor_38 *actor_38 = (Actor_38 *) &mUnk_1F4;
    mUnk_38            = actor_38;
    actor_38->mUnk_08  = 4;
    this->func_ov000_0209862c(4);
    UNSET_FLAG(&mUnk_200.mUnk_04, ActorFlag_14);
    mUnk_276 = gRandom.Next32(0) & 0x80000000 ? 1 : -1;
    mUnk_48  = 4;
    mUnk_270 *= mUnk_276;
}

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

// return bool ?
unk32 ActorUnkCANS::vfunc_18(void) {
    this->mUnk_0B0.func_ov000_02057c38(6, 2);
    this->mUnk_0B0.func_ov000_0209a7b8(this, (UnkSystem4_UnkCallback) ActorUnkCANS::func_ov063_0215a678);

    ActorRef var;
    ActorManager *actorManager = gpActorManager;

    ActorUnkCASE::func_ov063_0215acec(&var, this->mRef);
    this->mUnk_268 = (ActorUnkCASE *) actorManager->func_01fff3b4(var);

    return 1;
}

void ActorUnkCANS::vfunc_1C(void) {
    mUnk_26C = mUnk_5C.mInitialAngle;

    s16 var;
    func_ov000_020986b4((s16 *) &var, this, 0);

    s16 r2_val = var;
    s16 r3_val = *((volatile s16 *) &var);

    var       = r2_val - mUnk_26C;
    int iVar2 = (s16) (r3_val - (s16) (mUnk_26C - DEG_TO_ANG(180)));

    int iVar1 = var;

    iVar2 = ABS(iVar2);
    iVar1 = ABS(iVar1);

    if (iVar1 > iVar2) {
        mUnk_26C += DEG_TO_ANG(180);
        mAngle += DEG_TO_ANG(180);
    }

    this->func_ov063_02158448(0);
}

void ActorUnkCANS::vfunc_20(void) {
    if (mUnk_238 < mUnk_23A) {
        mUnk_238++;
    }

    if (!func_ov017_020bef4c(this, 0x4000) && mUnk_48 != 0 && mState != 4) {
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
    unk16 ret1 = func_01ffbbe0(mUnk_23C.mUnk_08.x, mUnk_23C.mUnk_08.z);
    unk32 res3 = (unk16) ((unk16) func_01ffbbe0(mVel.x, mVel.z) - ret1 - 0x8000);

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
        if ((mUnk_234 < mUnk_236)) {
            mUnk_234++;
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

            if (((*(u32 *) &mUnk_200.mUnk_08) & 0x3FFFF) != 0) {

                mUnk_236 = func_ov000_02098d7c(this, &mUnk_200);
                mUnk_234 = 0;

                iVar5 = this->func_ov063_0215a56c((unk16) func_01ffbbe0(*(u32 *) &mUnk_200.mUnk_10, mUnk_200.mUnk_18));

                switch (mUnk_200.mUnk_1C) {
                    case 12:
                        if (iVar5 != 0) {
                            Actor *iVar6 = gpActorManager->func_01fff3b4(mUnk_200.mUnk_0C.data);
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
                            if (data_027e0d38->func_ov031_020d9c04(1, 0, 0) != 0) {
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
                            if (mUnk_200.mUnk_0C.type_index == 0x102) {
                                unk32 uVar1 = 0;
                                if (mUnk_200.mUnk_0C.type_index == 0x102) {
                                    if (mUnk_200.mUnk_0C.unk_id == 1 || mUnk_200.mUnk_0C.unk_id == 3) {
                                        uVar1 = 1;
                                    };
                                }
                                func_ov000_0208bd20(data_027e0ce0, uVar1 != 0, 0x8c98, 0);
                            } else {
                                data_027e09a8->func_ov000_02071b30(0x8C98, &mPos, 0);
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

    if (GET_FLAG(mFlags, ActorFlag_Alive) && mUnk_48 <= 0) {
        return;
    }

    // unk32 puVar11[0xF];

    if (mUnk_268 != NULL) {
        VecFx32 a;
        UnkStruct_ov000_0207de98 b;
        VecFx32 *aPtr = &a;
        // VecFx32 *aPtr     = (VecFx32 *) &puVar11[0xD];

        VecFx32_Init(0x4CD, 0, 0, aPtr);

        func_01ff9638(aPtr, mAngle);
        VecFx32_Add(aPtr, &mPos, aPtr);

        VecFx32_Copy(aPtr, &b.vec);

        // puVar11[0xB] = 0xF33;
        // puVar11[0xC] = 0x1000;
        b.param1 = 0xF33;
        b.param2 = 0x1000;

        data_027e09c0->func_ov000_0207de98(mRef, &b, mUnk_38);
    } else {
        VecFx32 a;
        UnkStruct_ov000_0207de98 b;
        VecFx32 *aPtr = &a;
        // VecFx32 *aPtr     = (VecFx32 *) &puVar11[0x5];

        *aPtr = mPos;
        VecFx32_Copy(aPtr, &b.vec);

        // puVar11[3] = 0xA66;
        // puVar11[4] = 0x1000;
        b.param1 = 0xA66;
        b.param2 = 0x1000;

        data_027e09c0->func_ov000_0207de98(mRef, &b, mUnk_38);
    }
}

void ActorUnkCANS::vfunc_24(void) {
    if (data_027e09b8->HasAdventureFlag(AdventureFlag_VisitedIslandSanctuaryFirstTime)) {
        this->vfunc_20();
    }
}

void ActorUnkCANS::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0)) {
        return;
    }

    ((UnkSystem6_Derived2 *) &mUnk_0B0)->func_01ffc6d4(mAngleStruct, &mPos);

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
    mUnk_48 -= mUnk_200.mUnk_1E;
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
        unk32 iVar5 = (unk16) ((mUnk_26C * 0x4000 + mUnk_276) - (unk16) func_01ffbbe0(mUnk_23C.mUnk_08.x, mUnk_23C.mUnk_08.z));
        iVar5       = ABS(iVar5);

        if (DEG_TO_ANG(90) < iVar5) {
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

void ActorUnkCANS::func_ov063_02158db0(void) {
    if (mUnk_128.vfunc_28()->func_02015080(0x1000) || mUnk_128.vfunc_28()->func_02015080(0xD000) ||
        mUnk_128.vfunc_28()->func_02015080(0x19000) || mUnk_128.vfunc_28()->func_02015080(0x25000)) {
        data_027e09a8->func_ov000_02071b30(0x985F, &mPos, 0);
    }

    s16 var;
    s16 *varPtr = &var;
    func_ov000_020986b4(varPtr, this, 0);

    unk32 val = (unk16) ((mUnk_26C * 0x4000 + mUnk_276) - *varPtr);
    val       = ABS(val);
    if (DEG_TO_ANG(90) < val) {
        mUnk_276 *= -1;
    }

    fx32 ret1     = func_01ffb428(mUnk_270 + 0x66, 0xCD);
    u32 threshold = (u16) (mUnk_270 / 2) * ((u32) ret1 << 0x4 >> 0x10) + 0x4CD;

    VecFx32 vec = {mPos.x, mPos.y, mPos.z};

    vec.x = MUL_FX32(SIN((u16) mUnk_26C), ret1);
    vec.z = MUL_FX32(COS((u16) mUnk_26C), mPos.z);

    unk32 param2 = func_01ff9a5c(data_027e0ce0->func_01fff148(0), &mPos, &vec) < threshold ? 0 : mUnk_276 * 0x3AE;

    func_01ff916c(&mUnk_270, param2, 0xCD);

    s16 iVar5b   = mUnk_26C + 0x4000;
    fx32 sin_val = SIN((u16) iVar5b);
    fx32 cos_val = COS((u16) iVar5b);
    mVel.x       = MUL_FX32(sin_val, mUnk_270);
    mVel.z       = MUL_FX32(cos_val, mUnk_270);

    if (this->func_ov063_0215a514()) {
        this->func_ov063_02158448(8);
        return;
    }

    if (!this->func_ov063_02159f3c(0x4000)) {
        this->func_ov063_02158448(0);
        return;
    }

    if (!this->func_ov063_0215a0f0()) {
        return;
    }

    if (this->func_ov063_0215a474()) {
        this->func_ov063_02158448(6);
        return;
    }

    this->func_ov063_02158448(3);
}

void ActorUnkCANS::func_ov063_021590c8(void) {
    func_ov017_020bf634(this, (unk16 *) &mUnk_200.mUnk_10, this->func_ov063_0215a5bc(), this->func_ov063_0215a5d8());
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

    u16 *tmpArr = (u16 *) &mUnk_22C;
    if (tmpArr[0] < tmpArr[1]) {
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

void ActorUnkCANS::func_ov063_02159258(void) {
    if (mUnk_128.vfunc_28()->func_02015080(0x6000) || mUnk_128.vfunc_28()->func_02015080(0xF000)) {
        data_027e09a8->func_ov000_02071b30(0x9860, &mPos, 0);
    }

    if (mUnk_128.vfunc_28()->func_02015080(0x25000)) {
        data_027e09a8->func_ov000_02071b30(0x9861, &mPos, 0);
    }

    func_01ff916c(&mUnk_270, 0, 0xCD);

    unk32 val    = mUnk_270;
    fx16 angle   = mUnk_26C + DEG_TO_ANG(90);
    fx32 sin_val = SIN((u16) angle);
    fx32 cos_val = COS((u16) angle);
    mVel.x       = MUL_FX32(sin_val, val);
    mVel.z       = MUL_FX32(cos_val, val);

    if (!mUnk_270 && this->func_ov063_0215a514()) {
        this->func_ov063_02158448(8);
    } else if (!mUnk_270 && mUnk_238 >= mUnk_23A && this->func_ov063_0215a474()) {
        this->func_ov063_02158448(6);
    } else if (!this->func_ov063_0215a2c0()) {
        this->func_ov063_02158448(1);
    }
}

void ActorUnkCANS::func_ov063_02159408(void) {
    func_ov000_02099450(this, &mUnk_224, &data_027e07d4, 0, data_ov000_020aecf0[0]);
    mUnk_128.vfunc_1C(data_ov063_02163068, 0, 0x19A, 0);
    ((Actor_9C *) &mUnk_200)->func_ov000_02097bec();
}

void ActorUnkCANS::func_ov063_02159494(void) {
    func_ov000_020994a0(this);

    if (GET_FLAG(mFlags, ActorFlag_5) == 0) {
        return;
    }

    if (this->func_ov063_0215a514()) {
        this->func_ov063_02158448(8);
        return;
    }

    if (mAngle != mUnk_26C) {
        mUnk_128.vfunc_1C(data_ov063_02163068, 0x1333, 0x19A, 0);
        mState = 8;
        return;
    }

    if (mUnk_268 == NULL) {
        this->func_ov063_02158448(7);
    } else {
        if (this->func_ov063_02159f3c(0x3000)) {
            this->func_ov063_02158448(1);
        } else {

            this->func_ov063_02158448(0);
        }
    }
}

void ActorUnkCANS::func_ov063_021595a4(void) {
    mVel.x   = 0;
    mVel.z   = 0;
    mUnk_270 = 0;
    mUnk_128.vfunc_1C(data_ov063_021630b0, 0x1000, 0x400, 0);
    ((Actor_9C *) &mUnk_200)->func_ov000_02097bec();
}

void ActorUnkCANS::func_ov063_02159618(void) {
    if (!mUnk_128.vfunc_28()->func_01ff8fa8()) {
        return;
    }

    if (mAngle != mUnk_26C) {
        mUnk_128.vfunc_1C(data_ov063_02163068, 0x1333, 0x19A, 0);
        mState = 8;
        return;
    }

    if (this->func_ov063_0215a474()) {
        this->func_ov063_02158448(6);
    } else if (this->func_ov063_02159f3c(0x3000)) {
        this->func_ov063_02158448(1);
    } else {
        this->func_ov063_02158448(0);
    }
}

void ActorUnkCANS::func_ov063_02159714(void) {
    mVel.x   = 0;
    mVel.z   = 0;
    mUnk_270 = 0;
    mUnk_128.vfunc_1C(data_ov063_02163098, 0x1000, 0x19A, 0);
}

void ActorUnkCANS::func_ov063_02159784(void) {
    if (mUnk_128.vfunc_28()->func_02015080(0x7000)) {
        data_027e09a8->func_ov000_02071b30(0x9862, &mPos, 0);
    }

    if (0x7000 <= *(int *) (mUnk_128.vfunc_28() + 8) && *(int *) (mUnk_128.vfunc_28() + 8) <= 0xF000) {
#if IS_JP
        fx32 yDiff    = data_027e0ce0->func_01fff148(0)->y - mPos.y;
        fx32 yDiffAbs = ABS(yDiff);

        if (yDiffAbs < FLOAT_TO_FX32(.5f))
#endif
        {

            Cylinder vec1;
            vec1.Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(1.2f));

            this->func_ov063_0215a5a0(&vec1.pos);

            VecFx32 vec2 = *data_027e0ce0->func_01fff148(0);
            func_01ffb714(&vec2, &mPos, &vec2);

            data_027e09c0->func_ov000_0207e458(2, 0, &vec1.pos, 3, &vec2, 0);
        }
    }

    if (!mUnk_128.vfunc_28()->func_01ff8fa8()) {
        return;
    }

    if (this->func_ov063_0215a514()) {
        this->func_ov063_02158448(8);
    } else if (this->func_ov063_0215a2c0()) {
        this->func_ov063_02158448(3);
    } else {
        this->func_ov063_02158448(1);
    }
}

void ActorUnkCANS::func_ov063_021598fc(void) {
    mUnk_128.vfunc_1C(data_ov063_02163080, 0x1333, 0x19A, 0);
    mUnk_52  = gRandom.Next32(0x15) + 10;
    mUnk_50  = 0;
    mUnk_276 = gRandom.Next32(0) & 0x80000000 ? 1 : -1;
}

void ActorUnkCANS::func_ov063_021599e4(void) {
    if (mUnk_128.vfunc_28()->func_02015080(0x1000) || mUnk_128.vfunc_28()->func_02015080(0xA000) ||
        mUnk_128.vfunc_28()->func_02015080(0x13000) || mUnk_128.vfunc_28()->func_02015080(0x1C000)) {
        data_027e09a8->func_ov000_02071b30(0x9864, &mPos, 0);
    }

    if (mUnk_46 & 0x3C) {
        unk16 ret1  = func_01ffbbe0(mUnk_23C.mUnk_08.x, mUnk_23C.mUnk_08.z);
        unk32 iVar9 = ABS((unk16) ((mUnk_26C * 0x4000 + mUnk_276) - ret1));

        if (DEG_TO_ANG(90) < iVar9) {
            mUnk_50 = 0;
            mUnk_276 *= -1;
            mUnk_52 = 0x1E;
        }
    }

    unk32 flag;
    if (mUnk_50 < mUnk_52) {
        mUnk_50++;
        flag = 0;
    } else {
        flag = 1;
    }

    if (flag) {
        mUnk_276 *= -1;
        mUnk_52 = gRandom.Next32(0x15) + 10;
        mUnk_50 = 0;
    }

    func_01ff916c(&mUnk_270, mUnk_276 * 0x19A, 0xCD);
    fx16 angle1  = mUnk_26C - FLOAT_TO_FX32(8.f);
    fx16 angle2  = mUnk_26C + FLOAT_TO_FX32(4.f);
    u64 sin_val1 = SIN((u16) angle1);
    s64 cos_val1 = COS((u16) angle1);
    s64 sin_val2 = SIN((u16) angle2);
    s64 cos_val2 = COS((u16) angle2);
    mVel.x       = MUL_FX32(sin_val1, FLOAT_TO_FX32(0.02f)) + MUL_FX32(sin_val2, mUnk_270); // *0.02f <=> / 50
    mVel.z       = MUL_FX32(cos_val1, FLOAT_TO_FX32(0.02f)) + MUL_FX32(cos_val2, mUnk_270);

    if (this->func_ov063_0215a514()) {
        this->func_ov063_02158448(8);
    }
}

void ActorUnkCANS::func_ov063_02159ca8(void) {
    mUnk_128.vfunc_1C(data_ov063_02163068, 0x1333, 0x19A, 0);
    mVel.x   = 0;
    mVel.z   = 0;
    mUnk_270 = 0;
    volatile u16 var;
    func_ov000_020986b4((s16 *) &var, this, 0);

    var = (s16) var - mUnk_26C;
    if ((s16) var > 0) {
        mAngle++;
    } else {
        mAngle--;
    }

    mUnk_26C += -FLOAT_TO_FX32(8.f);
}

void ActorUnkCANS::func_ov063_02159d68(void) {
    if (this->func_ov063_0215a514()) {
        mUnk_26C += -FLOAT_TO_FX32(8.f);
    }

    if (!func_01ff930c(&mAngle, mUnk_26C, 0x71C)) {
        return;
    }

    VecFx32_Init(0, 0, 0, &mUnk_23C.mUnk_08);

    if (mUnk_268 != NULL) {
        if (this->func_ov063_0215a474()) {
            this->func_ov063_02158448(3);
            return;
        }
        this->func_ov063_02158448(1);
    } else {
        this->func_ov063_02158448(7);
    }
}

void ActorUnkCANS::func_ov063_02159dfc(void) {
    mVel.x   = 0;
    mVel.z   = 0;
    mUnk_270 = 0;
    mUnk_200.func_ov000_02097bec();
}

// Empty (matched)
void ActorUnkCANS::func_ov063_02159e1c(void) {}

void ActorUnkCANS::func_ov063_02159e20(void) {
    func_ov000_02098f34(this, (unk16 *) &mUnk_200.mUnk_10);

    vfunc_40();

    mUnk_2C = 0;
    *(s16 *) &mUnk_44 &= 0xFFDF;

    mUnk_128.vfunc_1C(data_ov063_02163068, 0x1000, 0x19A, 0);

    mUnk_200.func_ov000_02097bec();

    mUnk_38->mUnk_08 = 3;
}

void ActorUnkCANS::func_ov063_02159ec0(void) {
    this->vfunc_44();

    if (!GET_FLAG(mFlags, ActorFlag_5)) {
        return;
    }

    mUnk_38->mUnk_08 = 1;
    mUnk_2C          = data_ov000_020aecf8[0];
    mAngle           = mUnk_26C;

    func_ov000_02099a0c(&mUnk_224);

    mUnk_200.mUnk_10 = 0;
    mUnk_200.mUnk_14 = 0;
    mUnk_200.mUnk_18 = 0;

    this->func_ov063_02158448(4);

    *(s16 *) &mUnk_44 |= 0x20;
}

// return bool ?
unk32 ActorUnkCANS::func_ov063_02159f3c(unk32 param1) {
    s16 var;
    func_ov000_020986b4((s16 *) &var, this, 0);

    s32 val = ABS((s16) (var - mUnk_26C));
    if (val >= DEG_TO_ANG(90)) {
        return false;
    }

    fx32 factor = FLOAT_TO_FX32(10.f);

    fx16 angle1  = mUnk_26C - FLOAT_TO_FX32(4.f);
    s32 sin_val1 = MUL_FX32(SIN((u16) angle1), factor);
    s32 cos_val1 = MUL_FX32(COS((u16) angle1), factor);
    fx16 angle2  = mUnk_26C + FLOAT_TO_FX32(4.f);
    s32 sin_val2 = MUL_FX32(SIN((u16) angle2), factor);
    s32 cos_val2 = MUL_FX32(COS((u16) angle2), factor);

    VecFx32 vec1; // = {mPos.x, mPos.y, mPos.z};
    // VecFx32_Copy(&mPos, &vec1);
    // VecFx32_Init(mPos.x + MUL_FX32(sin_val1, factor), mPos.y, mPos.z +
    // MUL_FX32(cos_val1, factor), &vec1); vec1.y = mPos.y;
    vec1.y = mPos.y;
    vec1.x = mPos.x;
    vec1.z = mPos.z;
    vec1.x += (sin_val1);
    vec1.z += (cos_val1);

    VecFx32 vec2; // = {*(volatile fx32 *) &mPos.x, *(volatile fx32 *) &mPos.y, *(volatile fx32 *) &mPos.z};
    // VecFx32_Copy(&mPos, &vec2);
    // VecFx32_Init(mPos.x + MUL_FX32(sin_val2, factor), mPos.y, mPos.z + MUL_FX32(cos_val2, factor), &vec2);
    // vec2.y = mPos.y;
    vec2.x = mPos.x;
    vec2.y = mPos.y;
    vec2.z = mPos.z;
    vec2.x += (sin_val2);
    vec2.z += (cos_val2);

    return func_01ff9a5c(data_027e0ce0->func_01fff148(0), &vec1, &vec2) < param1;
}

// return bool ?
unk32 ActorUnkCANS::func_ov063_0215a0f0(void) {
    s16 var1;
    func_ov000_020986b4((s16 *) &var1, this, 0);

    s32 val1 = ABS((s16) (var1 - mUnk_26C));
    if (DEG_TO_ANG(90) <= val1) {
        return false;
    }

    s16 ret1 = func_01ffbbe0(mUnk_23C.mUnk_08.x, mUnk_23C.mUnk_08.z);
    s16 var2;
    func_ov000_020986b4((s16 *) &var2, this, 0);
    s32 val2 = (s16) (var2 - ret1);

    if (mUnk_46 & 0x3C) {
        val2 = ABS(val2);
        if (DEG_TO_ANG(90) < val2) {
            return true;
        }
    }

    unk32 val3;
    if (mVel.x != 0 || mVel.y != 0 || mVel.z != 0) {
        s16 var4;
        func_ov000_020986b4((s16 *) &var4, this, 0);
        s16 val4_0 = var4;
        unk32 ret2 = func_01ffbbe0(mVel.x, mVel.z);
        s32 val4   = ABS((s16) ((s16) ret2 - val4_0));
        if (val4 < DEG_TO_ANG(90)) {
            return false;
        }
    }

    fx16 angle  = mUnk_26C;
    s32 sin_val = SIN((u16) angle);
    s32 cos_val = COS((u16) angle);
    s16 sin_mul = MUL_FX32(sin_val, 0x4000);
    s16 cos_mul = MUL_FX32(cos_val, 0x4000);
    VecFx32 vec; //= {mPos.x, mPos.y, mPos.z};
    vec.y = mPos.y;
    vec.x = mPos.x + sin_mul + sin_val;
    vec.z = mPos.z + cos_mul + cos_val;

    return func_01ff9a5c(data_027e0ce0->func_01fff148(0), &mPos, &vec) < 0x4CD;
}

unk32 ActorUnkCANS::func_ov063_0215a2c0(void) {
    s16 var1;
    func_ov000_020986b4((s16 *) &var1, this, 0);
    unk32 val1 = ABS((s16) (var1 - mUnk_26C));

    if (DEG_TO_ANG(90) <= val1) {
        return 0;
    }

    s16 ret1 = func_01ffbbe0(mUnk_23C.mUnk_08.x, mUnk_23C.mUnk_08.z);
    s16 var2;
    func_ov000_020986b4((s16 *) &var2, this, 0);
    s16 val2 = (var2 - ret1);

    if (mUnk_46 & 0x3C) {
        unk32 val3 = ABS(val2);
        if (DEG_TO_ANG(90) < val3) {
            return 1;
        }
    }

    VecFx32 stackVec;

    stackVec.y = mPos.y;

    s16 angleVal = mUnk_26C;
    u32 sin_val  = (fx16) SIN(angleVal);
    u32 cos_val  = (fx16) COS(angleVal);

    stackVec.x = mPos.x + (((sin_val * 0x4000 + 0x800) >> 0xC) |
                           (((((u32) (s32) (s16) SIN(angleVal)) >> 0x12) + (0xFFFFF7FF < sin_val)) * 0x100000));
    stackVec.z = mPos.z + (((cos_val * 0x4000 + 0x800) >> 0xC) |
                           (((((u32) (s32) (s16) COS(angleVal)) >> 0x12) + (0xFFFFF7FF < cos_val)) * 0x100000));

    VecFx32 *otherVec = data_027e0ce0->func_01fff148(0);

    // Copy otherVec on the stack (JP only)
    VecFx32 otherVecStack;
    otherVecStack   = *otherVec;
    otherVecStack.y = mPos.y;

    VecFx32 *otherVecPtr = IS_JP ? &otherVecStack : otherVec;

    return func_01ff9a5c(otherVecPtr, &mPos, &stackVec) < 0xB33;
}

void ActorUnkCANS::func_ov063_0215a428(void) {
    // A not very clean code to access 22C and 22E matching the asm
    u16 *values = (u16 *) &mUnk_22C;
    if (values[0] < values[1]) {
        this->func_ov063_02158448(4);
    } else if (mUnk_268 == NULL) {
        this->func_ov063_02158448(7);
    } else {
        this->func_ov063_02158448(0);
    }
}

// return bool ?
unk32 ActorUnkCANS::func_ov063_0215a474(void) {
    s16 var;
    VecFx32 stackVec;

    func_ov000_020986b4((s16 *) &var, this, 0);

    s32 val = ABS((s16) (var - mAngle));
    if (val >= DEG_TO_ANG(90)) {
        return false;
    }

    this->func_ov063_0215a5a0(&stackVec);

    VecFx32 *otherVec = data_027e0ce0->func_01fff148(0);

#if IS_JP
    unk32 ret;
    if (func_ov000_0205c384(otherVec, &mPos)) {
        otherVec = data_027e0ce0->func_01fff148(0);
        ret      = func_01ff9258(otherVec->x - stackVec.x, otherVec->z - stackVec.z) < 0x1266;
    } else {
        ret = 0;
    }
    return ret;
#else
    return func_01ff9258(otherVec->x - stackVec.x, otherVec->z - stackVec.z) < 0x1266;
#endif
}

unk32 ActorUnkCANS::func_ov063_0215a514(void) {
    s16 var;

    func_ov000_020986b4((s16 *) &var, this, 0);

    var = (volatile s16) var - mUnk_26C;
    return 0x4AAB < ABS(var);
}

// return bool ?
unk32 ActorUnkCANS::func_ov063_0215a56c(unk32 param1) {
    if (mUnk_268 == NULL) {
        return false;
    }

    return DEG_TO_ANG(90) <= ABS((s16) (param1 - mAngle));
}

void ActorUnkCANS::func_ov063_0215a5a0(VecFx32 *param1) {
    // Does not match instruction order
    VecFx32 vec;
    vec.x     = ((VecFx32 *) &mUnk_250)->x;
    vec.y     = ((VecFx32 *) &mUnk_250)->y;
    vec.z     = ((VecFx32 *) &mUnk_250)->z;
    param1->z = vec.z;
    param1->x = vec.x;
    param1->y = vec.y;
}

unk32 ActorUnkCANS::func_ov063_0215a5bc(void) {
    if (mUnk_268 != NULL) {
        return 10;
    }
    return data_ov000_020aecf4[0];
}

unk32 ActorUnkCANS::func_ov063_0215a5d8(void) {
    if (mUnk_268 != NULL) {
        return 0x385;
    }
    return data_ov000_020aecfc[0];
}

void ActorUnkCANS::func_ov063_0215a678(ActorUnkCANS *actor, UnkStruct_func_ov063_0215a678 *param2) {
    ModelRender *modelRender = param2->mUnk_04;
    u8 var1;
    if (actor->mUnk_268 == NULL) {
        var1 = 0;
    } else {
        var1 = 0x1F;
    }
    func_0200eab0(modelRender->mpModel, actor->mUnk_0B0.mUnk_6C, var1);

    unk32 var2 = param2->mUnk_08 & 0x10 ? param2->mUnk_AE : -1;
    if (var2 == actor->mUnk_0B0.mUnk_70) {
        if (((u8 *) &modelRender->mRenderObj.mUnk_1C)[1] == 2) {
            param2->mUnk_92                              = 3;
            ((u8 *) &modelRender->mRenderObj.mUnk_1C)[1] = 3;
            return;
        }

        if (((u8 *) &modelRender->mRenderObj.mUnk_1C)[1] != 3) {
            return;
        }

        Mat4x3p matx1;
        Mat4x3p matx2;
        G3d_GetCurrentMtx(&matx1, NULL);
        func_01ffad5c(&matx1, &data_027e0964, &matx2);

        VecFx32 vec;
        // VecFx32_Copy(&matx2.wColumn, &actor->mUnk_250);
        vec.x             = matx2.wColumn.x;
        vec.z             = matx2.wColumn.z;
        vec.y             = matx2.wColumn.y;
        actor->mUnk_250.x = vec.x;
        actor->mUnk_250.y = vec.y;
        actor->mUnk_250.z = vec.z;

        param2->mUnk_92                              = 2;
        ((u8 *) &modelRender->mRenderObj.mUnk_1C)[1] = 2;
        return;
    }

    unk32 var3 = param2->mUnk_08 & 0x10 ? param2->mUnk_AE : -1;
    if (var3 == actor->mUnk_0B0.mUnk_74) {
        if (((u8 *) &modelRender->mRenderObj.mUnk_1C)[1] == 2) {
            param2->mUnk_92                              = 3;
            ((u8 *) &modelRender->mRenderObj.mUnk_1C)[1] = 3;
            return;
        }

        if (((u8 *) &modelRender->mRenderObj.mUnk_1C)[1] != 3) {
            return;
        }

        Mat4x3p matx3;
        Mat4x3p matx4;
        G3d_GetCurrentMtx(&matx3, NULL);
        func_01ffad5c(&matx3, &data_027e0964, &matx4);

        VecFx32 vec;
        vec.x           = matx4.wColumn.x;
        vec.z           = matx4.wColumn.z;
        vec.y           = matx4.wColumn.y;
        actor->mUnk_25C = vec.x;
        actor->mUnk_260 = vec.y;
        actor->mUnk_264 = vec.z;

        param2->mUnk_92                              = 2;
        ((u8 *) &modelRender->mRenderObj.mUnk_1C)[1] = 2;
    }
}

ActorUnkCANS::~ActorUnkCANS() {}
ActorProfileUnkCANS::~ActorProfileUnkCANS() {}
