//! TODO: This file was generated automatically and might contain errors
#define VECFX32_CTORS //! TODO: remove this hack

#include "Actor/ActorUnkCASE.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorRef.hpp"
#include "Actor/ActorShotArrow.hpp"
#include "Actor/ActorUnkCANS.hpp"
#include "MapObject/MapObjectProfile_Derived2_20.hpp"
#include "Physics/Cylinder.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "flags.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nns/g3d/g3d.h"

extern const void *data_ov063_02162558;
extern const void *data_ov063_02162568;

static PTMF<ActorUnkCASE> data_ov063_021630e0[0x6] = {ActorUnkCASE::func_ov063_0215af58, ActorUnkCASE::func_ov063_0215af60,
                                                      ActorUnkCASE::func_ov063_0215afb8, ActorUnkCASE::func_ov063_0215b090,
                                                      ActorUnkCASE::func_ov063_0215b244, ActorUnkCASE::func_ov063_0215b2c4};

extern "C" void func_01ffa60c(const Mat3p *, Mat3p *, Mat3p *);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" u16 func_01ffbbe0(fx32 x, fx32 z);

// Overlay 0
extern u16 data_ov000_020aed00;
extern "C" void func_ov000_0207b70c(ActorUnkCASE_174 *param1, Actor *param2);
extern "C" void func_ov000_020990c0(ActorUnkCASE *param1, ActorShotArrow_140 *param2, unk32 param3, unk32 param4);

// Overlay 17
extern "C" unk32 func_ov017_020bef4c(ActorUnkCASE *param1, unk32 param2);

DECL_PROFILE(ActorProfileUnkCASE);

Actor *ActorProfileUnkCASE::Create() {
    return new(HeapIndex_2) ActorUnkCASE();
}

ActorProfileUnkCASE::ActorProfileUnkCASE() :
    ActorProfile_Derived1(ActorId_CASE) {
    VecFx32_Init(0, 0x666, 0, &mUnk_04.pos);
    mUnk_04.size = 0x800;
}

UnkStruct_ov000_020b19f0::UnkStruct_ov000_020b19f0(G3d_Model *pModel) :
    ModelRender(pModel) {}

UnkStruct_ov000_020b3268::UnkStruct_ov000_020b3268(G3d_Model *pModel) :
    UnkStruct_ov000_020b19f0(pModel) {}

UnkStruct_ov063_021631a0::UnkStruct_ov063_021631a0(G3d_Model *pModel) :
    UnkStruct_ov000_020b3268(pModel),
    mUnk_6C(ModelRender::func_ov000_02057f18(&data_ov063_02162568)) {}

ActorUnkCASE_150::ActorUnkCASE_150(Actor *param1) :
    Actor_C4(param1, 1) {
    mUnk_20 = param1;
    mUnk_04 = 1;
}

ActorUnkCASE_174::ActorUnkCASE_174(Actor *param1) {
    mUnk_04 = 0;
    mUnk_2C = param1;
}

void ActorUnkCASE_174::vfunc_10(Actor *actor) {
    ((ActorUnkCASE *) mUnk_2C)->func_ov063_0215b724();
    func_ov000_0207b70c(this, actor);
}

ActorUnkCASE::ActorUnkCASE() :
    mUnk_0B0(G3d_GetModelPtr(((MapObjectProfile_Derived2_20 *) GET_PROFILE(ActorProfileUnkCASE)->vfunc_04())->mUnk_50)),
    mUnk_120(0),
    mUnk_124(this),
    mUnk_14C(NULL),
    mUnk_150(this),
    mUnk_174(this),
    mUnk_1C8(0),
    mUnk_1CC(0, 0, 0),
    mUnk_1D8(0),
    mUnk_1DC(0),
    mUnk_1E0(0),
    mUnk_1E4(0),
    mUnk_1F4(0) {
    UNSET_FLAG(mFlags, ActorFlag_6);
    mUnk_40          = &mUnk_150;
    mUnk_124.mUnk_04 = 0;
    SET_FLAG2(mUnk_124.mUnk_04, ActorFlag_13);
    mUnk_124.mUnk_24 = 1;
    mUnk_38          = (Actor_38 *) &mUnk_1E8;
    mUnk_38->mUnk_08 = 4;
    mUnk_A8          = &data_ov063_02162558;
}

void ActorUnkCASE::vfunc_10(Cylinder *param1) {
    if (mUnk_14C != NULL) {
        ((ActorUnkCASE *) mUnk_14C)->vfunc_10(param1);
        return;
    }
    VecFx32_Copy(&mPos, &param1->pos); // doesn't match
    param1->size = 0x800;
}

bool ActorUnkCASE::vfunc_18(unk32 param1) {
    mUnk_14C = gpActorManager->func_01fff3b4(mUnk_5C.mUnk_28);

    mUnk_0B0.func_ov000_02057c38(6, 2);
    mUnk_0B0.func_ov000_0209a7b8(this, (UnkSystem4_UnkCallback) ActorUnkCASE::func_ov063_0215b99c);

    this->func_ov063_0215aefc(0);

    VecFx32_Init(0, 0, 0, &mVel);

    return true;
}

void ActorUnkCASE::vfunc_20() {
    mUnk_150.mUnk_1C = 1;

    if (!func_ov017_020bef4c(this, 0x4000) && mUnk_48 != 0) {
        unk32 val1 = 1;
        if (mState != 1 && mState != 2) {
            val1 = 0;
        }

        if (val1 == 0) {
            return;
        }

        if (mState == 3) {
            this->func_ov063_0215b724();
            return;
        }
    }

    mUnk_3C = &mUnk_124;

    CALL_PTMF(PTMF<ActorUnkCASE>, data_ov063_021630e0[mState]);

    VecFx32 *vec_base, *vec2;
    u16 ret1;
    fx16 x, y, z;
    fx32 x_pos, x_neg, z_pos, z_neg;

    if (mUnk_14C != 0) {
        VecFx32 vec1;
        VecFx32 *mUnk_14C_vec = (VecFx32 *) (((u8 *) mUnk_14C) + 0x25C);
        vec1                  = *mUnk_14C_vec;
        func_01ffb714(&vec1, &mPos, &vec1);

        x = vec1.x;
        y = vec1.y;
        z = vec1.z;

        ((VecFx16 *) &mUnk_150.mUnk_0E)->x = x;
        ((VecFx16 *) &mUnk_150.mUnk_0E)->y = y;
        ((VecFx16 *) &mUnk_150.mUnk_0E)->z = z;

        vec2     = data_027e0ce0->func_01fff148(0);
        vec_base = mUnk_14C_vec;
        z_neg    = vec2->z;
        z_pos    = vec_base->z;
        x_pos    = vec_base->x;
        x_neg    = vec2->x;
    } else if (mState == 5) {
        VecFx32 vec1;
        vec1 = mUnk_1CC;
        func_01ffb714(&vec1, &mPos, &vec1);

        x = vec1.x;
        y = vec1.y;
        z = vec1.z;

        ((VecFx16 *) &mUnk_150.mUnk_0E)->x = x;
        ((VecFx16 *) &mUnk_150.mUnk_0E)->y = y;
        ((VecFx16 *) &mUnk_150.mUnk_0E)->z = z;

        vec2     = data_027e0ce0->func_01fff148(0);
        vec_base = &mUnk_1CC;
        z_pos    = vec_base->z;
        z_neg    = vec2->z;
        x_pos    = vec_base->x;
        x_neg    = vec2->x;
    } else {
        goto post;
    }

    ret1         = func_01ffbbe0(x_pos - x_neg, z_pos - z_neg);
    fx16 sin_val = SIN((u16) (s16) ret1);
    fx16 cos_val = COS((u16) (s16) ret1);

    VecFx16 *out_vec = (VecFx16 *) &mUnk_150.mUnk_08;
    out_vec->x       = x + (((1 - sin_val) * 0x8000) >> 0x10);
    out_vec->y       = y;
    out_vec->z       = z + (((1 - cos_val) * 0x8000) >> 0x10);
post:

    this->func_ov000_020989e0();

    if (((u32) mState == 5 || mState == 4) && (mUnk_124.mUnk_08 & 0x3FFFF) != 0) {
        switch (mUnk_124.mUnk_1C) {
            case 4:
                data_027e0d38->func_ov031_020d9c44(data_ov000_020aed00);
                break;
            case 11:
                if (gpActorManager->func_01fff3b4(mUnk_124.mUnk_0C)->GetActorId() == ActorId_RollingStone) {
                    this->func_ov063_0215b724();
                }
                break;
            case 13:
                break;
            default:
                func_ov000_020990c0(this, &mUnk_124, 1, 0);
                break;
        }
    }

    if (GET_FLAG(mFlags, ActorFlag_Alive)) {
        if (mState == 5) {
            UnkStruct_ov000_0207de98 param2;
            VecFx32_Copy(&mPos, &param2.vec);
            param2.param1 = 0x548;
            param2.param2 = 0x1000;
            data_027e09c0->func_ov000_0207de98(mRef, &param2, mUnk_38);
        }
    }
}

void ActorUnkCASE::vfunc_24() {
    u32 state = mState;
    if (state != 1 && state != 2) {
        return;
    }
    this->vfunc_20();
}

void ActorUnkCASE::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0)) {
        return;
    }

    if (mUnk_14C == NULL || ((u32 *) mUnk_14C)[0x268 >> 2] == NULL // .mUnk_268
    ) {
        fx32 sin_val = SIN((u16) mUnk_1C8);
        fx32 cos_val = COS((u16) mUnk_1C8);

        Mat3p mat2;
        Mat3p mat1;
        Mat3p_InitZRotation(&mat1, sin_val, cos_val);

        func_01ffa60c(&mat1, &mUnk_1A4, &mat2);
        mUnk_0B0.vfunc_14(&mat2, &mPos);
    }
}

void ActorUnkCASE::func_ov063_0215ab70(void) {}
void ActorUnkCASE::func_ov063_0215aba4(void) {}
void ActorUnkCASE::func_ov063_0215abd8(void) {}
void ActorUnkCASE::func_ov063_0215ac4c(void) {}
void ActorUnkCASE::func_ov063_0215ac68(void) {}
void ActorUnkCASE::func_ov063_0215ac8c(void) {}
void ActorUnkCASE::func_ov063_0215acc8(void) {}
void ActorUnkCASE::func_ov063_0215acec(ActorRef *ref1, ActorRef ref2) {};
void ActorUnkCASE::func_ov063_0215ae6c(void) {}
void ActorUnkCASE::func_ov063_0215ae80(void) {}
void ActorUnkCASE::func_ov063_0215aefc(unk32 param1) {}
void ActorUnkCASE::func_ov063_0215af54(void) {}
void ActorUnkCASE::func_ov063_0215af58(void) {}
void ActorUnkCASE::func_ov063_0215af5c(void) {}

void ActorUnkCASE::func_ov063_0215af60(void) {
    if (gpActorManager->func_01fff3b4(mUnk_1E4)) {
        return;
    }

    if (mUnk_14C != NULL) {
        ((ActorUnkCANS *) mUnk_14C)->func_ov063_0215a428();
    }

    this->func_ov063_0215aefc(0);
}

void ActorUnkCASE::func_ov063_0215afa4(void) {
    mUnk_2C = 0;
    mVel.x  = 0;
    mVel.z  = 0;
}

void ActorUnkCASE::func_ov063_0215afb8(void) {
    Actor *otherActor = gpActorManager->func_01fff3b4(mUnk_1E4);
    if (otherActor == NULL) {
        this->func_ov063_0215aefc(4);
        return;
    }

    Mat3p *matSrc = (Mat3p *) ((u8 *) otherActor + 0x154);
    mUnk_1A4      = *matSrc;

    VecFx32 vec = *(VecFx32 *) ((u8 *) otherActor + 0xE8);
    VecFx32_Copy(&vec, &mPos);
    VecFx32_Copy(&vec, &mPrevPos);
}

void ActorUnkCASE::func_ov063_0215b054(void) {
    VecFx32_Init(mUnk_1D8, 0, mUnk_1E0, &mVel);
    UNSET_FLAG2(*(s16 *) &mUnk_44, ActorFlag_5);
    mUnk_52 = -1;
    mUnk_50 = 0;
}

void ActorUnkCASE::func_ov063_0215b090(void) {
    if (mUnk_50 < 4) {
        this->func_ov063_0215afb8();

        if (mUnk_50 < mUnk_52) {
            mUnk_50++;
        }

        this->vfunc_10(&mUnk_174.mUnk_0C);
        data_027e09c0->func_ov000_0207e58c(mRef, 3, 4, &mUnk_174);
        return;
    }

    mUnk_1C8 += DEG_TO_ANG(45);
    VecFx32_Copy(&mPos, &mPrevPos);
    VecFx32_Add(&mPos, &mVel, &mPos);

    if (mVel.x == 0 && mVel.z == 0) {
        mVel.y -= mUnk_2C;
    }

    this->func_ov000_02098910(NULL, 16);
    this->vfunc_10(&mUnk_174.mUnk_0C);

    data_027e09c0->func_ov000_0207e58c(mRef, 3, 4, &mUnk_174);

    if (mUnk_46) {
        this->func_ov063_0215b724();
    }
}

void ActorUnkCASE::func_ov063_0215b1bc(void) {}
void ActorUnkCASE::func_ov063_0215b244(void) {}
void ActorUnkCASE::func_ov063_0215b2b0(void) {}
void ActorUnkCASE::func_ov063_0215b2c4(void) {}
void ActorUnkCASE::func_ov063_0215b6c8(VecFx32 *param1, UnkAngleStruct angle) {}
void ActorUnkCASE::func_ov063_0215b724(void) {}
void ActorUnkCASE::func_ov063_0215b814(void) {}
void ActorUnkCASE::func_ov063_0215b854(void) {}
void ActorUnkCASE::func_ov063_0215b8e8(void) {}
void ActorUnkCASE::func_ov063_0215b99c(void) {}
void ActorUnkCASE::func_ov063_0215ba64(void) {}

ActorUnkCASE::~ActorUnkCASE() {}
ActorProfileUnkCASE::~ActorProfileUnkCASE() {}
