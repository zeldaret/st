#define VECFX32_CTORS //! TODO: remove this hack

#include "Actor/ActorUnkCASE.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorRef.hpp"
#include "Actor/ActorShotArrow.hpp"
#include "Actor/ActorUnkCANS.hpp"
#include "Actor/ActorUnkITWP.hpp"
#include "MapObject/MapObjectProfile_Derived2_20.hpp"
#include "Physics/Cylinder.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "flags.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nns/g3d/g3d.h"

extern const Actor_Derived2_A8_PTR data_ov063_02162558;
extern const void *data_ov063_02162568;

extern Mat4x3p data_027e0964;
extern "C" void func_01ffa60c(const Mat3p *, Mat3p *, Mat3p *);
extern "C" void func_01ffa7a0(VecFx32 *, Mat3p *, VecFx32 *);
extern "C" void func_01ffad5c(Mat4x3p *, Mat4x3p *, Mat4x3p *);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" u16 func_01ffbbe0(fx32 x, fx32 z);

// Overlay 0
extern unk32 data_ov000_020aecf8[0x2]; //! INFO: Unsure about the size and type
extern u16 data_ov000_020aed00;
extern "C" void func_ov000_0207b70c(ActorUnkCASE_174 *param1, Actor *param2);

// Other
extern "C" void G3d_GetCurrentMtx(Mat4x3p *mtx1, Mat3p *mtx2);

struct UnkStruct_data_ov063_021630c8 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;

    UnkStruct_data_ov063_021630c8(unk32 a, unk32 b, unk32 c, unk32 d, unk32 e, unk32 f) {
        mUnk_00 = a;
        mUnk_04 = b;
        mUnk_08 = c;
        mUnk_0C = d;
        mUnk_10 = e;
        mUnk_14 = f;
    }
};

const UnkStruct_data_ov063_021630c8 data_ov063_021630c8(0x5EC, 0x785, 0xFFFFFD48, 0x7AE, 0x112, 0xFFFFECA4);

static PTMF<ActorUnkCASE> data_ov063_021630e0[0x6] = {ActorUnkCASE::func_ov063_0215af58, ActorUnkCASE::func_ov063_0215af60,
                                                      ActorUnkCASE::func_ov063_0215afb8, ActorUnkCASE::func_ov063_0215b090,
                                                      ActorUnkCASE::func_ov063_0215b244, ActorUnkCASE::func_ov063_0215b2c4};

static PTMF<ActorUnkCASE> data_ov063_02163110[0x6] = {ActorUnkCASE::func_ov063_0215af54, ActorUnkCASE::func_ov063_0215af5c,
                                                      ActorUnkCASE::func_ov063_0215afa4, ActorUnkCASE::func_ov063_0215b054,
                                                      ActorUnkCASE::func_ov063_0215b1bc, ActorUnkCASE::func_ov063_0215b2b0};

DECL_PROFILE(ActorProfileUnkCASE);

Actor *ActorProfileUnkCASE::Create() {
    return new(HeapIndex_2) ActorUnkCASE();
}

ActorProfileUnkCASE::ActorProfileUnkCASE() :
    ActorProfile_Derived1(ActorId_CASE) {
    VecFx32_Init(0, 0x666, 0, &mUnk_04.pos);
    mUnk_04.size = 0x800;
}

UnkStruct_ov063_021631a0::UnkStruct_ov063_021631a0(G3d_Model *pModel) :
    UnkStruct_ov000_020b3268(pModel),
    mUnk_6C(ModelRender::func_ov000_02057f18(&data_ov063_02162568)) {}

ActorUnkCASE_150::ActorUnkCASE_150(Actor *param1) :
    Actor_C4(param1, 1) {
    mUnk_20 = param1;
    mUnk_04 = 1;
}

bool ActorUnkCASE_150::vfunc_00(ActorRef ref, unk32 param2) {
    ActorUnkCASE *actor = (ActorUnkCASE *) mUnk_20;
    if (actor->mUnk_1F4 == 0) {
        bool cond = true;
        if ((u32) actor->mState != 5 && actor->mState != 4) {
            cond = false;
        }
        if (!cond) {
            return false;
        }
    }

    if (param2 != 0) {
        actor->func_ov063_0215b814(ref);
    }

    return Actor_C4::vfunc_00(ref, param2);
}

bool ActorUnkCASE_150::vfunc_04() {
    ((ActorUnkCASE *) mUnk_20)->func_ov063_0215b854();
    return Actor_C4::vfunc_04();
}

void ActorUnkCASE_150::vfunc_0C(VecFx32 *param1) {
    ((ActorUnkCASE *) mUnk_20)->func_ov063_0215b8e8(param1);
    Actor_C4::vfunc_0C(param1);
}

ActorUnkCASE_174::ActorUnkCASE_174(Actor *param1) {
    mUnk_04 = 0;
    mUnk_2C = param1;
}

void ActorUnkCASE_174::vfunc_10(Actor *actor) {
    ((ActorUnkCASE *) mUnk_2C)->func_ov063_0215b724();
    func_ov000_0207b70c(this, actor);
}

// Static
void ActorUnkCASE::func_ov063_0215acec(ActorRef *ref1, ActorRef ref2) {
    ActorParams params;

    params.mUnk_28 = 0;
    params.func_ov000_020975f8();
    params.mUnk_28 = ref2;
    Actor::func_ov000_020973f4(ref1, &data_ov000_020b539c_eur, ActorId_CASE, &params, 0);
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
    mUnk_A8          = (Actor_Derived2_A8_PTR *) &data_ov063_02162558;
}

bool ActorUnkCASE::vfunc_18(unk32 param1) {
    mUnk_14C = gpActorManager->func_01fff3b4(mUnk_5C.mUnk_28);

    mUnk_0B0.func_ov000_02057c38(6, 2);
    mUnk_0B0.func_ov000_0209a7b8(this, (UnkSystem4_UnkCallback) ActorUnkCASE::func_ov063_0215b99c);

    this->func_ov063_0215aefc(0);

    VecFx32_Init(0, 0, 0, &mVel);

    return true;
}

void ActorUnkCASE::func_ov063_0215aefc(ActorState param1) {
    mState   = param1;
    mUnk_2C  = data_ov000_020aecf8[0];
    mUnk_120 = 0;

    CALL_PTMF(PTMF<ActorUnkCASE>, data_ov063_02163110[mState]);
}

// Matched
void ActorUnkCASE::func_ov063_0215af54(void) {}

// Matched
void ActorUnkCASE::func_ov063_0215af58(void) {}

// Matched
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
    ActorUnkITWP *otherActor = (ActorUnkITWP *) gpActorManager->func_01fff3b4(mUnk_1E4);
    if (otherActor == NULL) {
        this->func_ov063_0215aefc(4);
        return;
    }

    //! INFO: Actually a Mat3p, this is only used to allow a "batched" copy (all 9 elements at a time, not 3 by 3)
    struct Fx32Array9 {
        fx32 array[9];
    };
    *(Fx32Array9 *) &mUnk_1A4 = *(Fx32Array9 *) &otherActor->mUnk_154;

    VecFx32 vec = otherActor->mUnk_0E8;
    mPos.x      = vec.x;
    mPos.y      = vec.y;
    mPos.z      = vec.z;
    mPrevPos.x  = vec.x;
    mPrevPos.y  = vec.y;
    mPrevPos.z  = vec.z;
}

void ActorUnkCASE::func_ov063_0215b054(void) {
    mVel.x = mUnk_1D8;
    mVel.y = 0;
    mVel.z = mUnk_1E0;
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

void ActorUnkCASE::func_ov063_0215b1bc(void) {
    mVel.x = 0;
    mVel.z = 0;

    VecFx32 vec;
    VecFx32_Init(0, 0, FLOAT_TO_FX32(1.0f), &vec);
    func_01ffa7a0(&vec, &mUnk_1A4, &vec);

    s16 angle = func_01ffbbe0(vec.x, vec.z);
    Mat3p_InitYRotation(&mUnk_1A4, SIN((u16) angle), COS((u16) angle));
}

void ActorUnkCASE::func_ov063_0215b244(void) {
    mVel.y -= mUnk_2C;
    VecFx32_Copy(&mPos, &mPrevPos);
    VecFx32_Add(&mPos, &mVel, &mPos);

    this->func_ov000_02098b8c(1, NULL);

    if ((mUnk_46 & 3) != 0) {
        this->func_ov063_0215aefc(5);
    }
}

void ActorUnkCASE::func_ov063_0215b2b0(void) {
    mVel.x  = 0;
    mVel.z  = 0;
    mUnk_2C = 0;
}

// Matched
void ActorUnkCASE::func_ov063_0215b2c4(void) {}

void ActorUnkCASE::vfunc_24() {
    if (mState != 1 && mState != 2) {
        return;
    }
    this->vfunc_20();
}

void ActorUnkCASE::vfunc_20() {
    mUnk_150.mUnk_1C = 1;

    if (!this->func_ov017_020bef4c(0x4000) && mUnk_48 != 0) {
        bool cond = true;
        if (mState != 1 && mState != 2) {
            cond = false;
        }

        if (!cond) {
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

    if (mUnk_14C != NULL) {
        VecFx32 vec1;
        VecFx32 *mUnk_14C_vec = (VecFx32 *) (((u8 *) mUnk_14C) + 0x25C);
        vec1                  = *mUnk_14C_vec;
        func_01ffb714(&vec1, &mPos, &vec1);

        z = vec1.z;
        y = vec1.y;
        x = vec1.x;

        ((VecFx16 *) &mUnk_150.mUnk_0E)->x = x;
        ((VecFx16 *) &mUnk_150.mUnk_0E)->y = y;
        ((VecFx16 *) &mUnk_150.mUnk_0E)->z = z;

        vec2     = data_027e0ce0->func_01fff148(0);
        vec_base = (VecFx32 *) (((u8 *) mUnk_14C) + 0x25C);
        z_neg    = vec2->z;
        z_pos    = vec_base->z;
        x_pos    = vec_base->x;
        x_neg    = vec2->x;
    } else if (mState == 5) {
        VecFx32 vec1;
        vec1 = mUnk_1CC;
        func_01ffb714(&vec1, &mPos, &vec1);

        z = vec1.z;
        y = vec1.y;
        x = vec1.x;

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

    // Unsuccessful tries to remove the goto: duplicating raw code, duplicating an inline of the code, wrapping the code in an
    // "if (cond1 || cond2) { code }"
    ret1        = func_01ffbbe0(x_pos - x_neg, z_pos - z_neg);
    s16 sin_val = SIN((u16) (s16) ret1);
    s16 cos_val = COS((u16) (s16) ret1);

    ((VecFx16 *) &mUnk_150.mUnk_08)->y = y;
    // ((VecFx16 *) &mUnk_150.mUnk_08)->x = x + (((1 - sin_val) * 0x8000) >> 0x10);
    // ((VecFx16 *) &mUnk_150.mUnk_08)->z = z + (((1 - cos_val) * 0x8000) >> 0x10);
    ((VecFx16 *) &mUnk_150.mUnk_08)->x = x + (s16) ((1 - sin_val) >> 1);
    ((VecFx16 *) &mUnk_150.mUnk_08)->z = z + (s16) ((1 - cos_val) >> 1);

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
                this->Actor_Derived2::func_ov000_020990c0(&mUnk_124, 1, 0);
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

void ActorUnkCASE::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0)) {
        return;
    }

    if (mUnk_14C == NULL || ((u32 *) mUnk_14C)[0x268 >> 2] == NULL) {
        fx32 sin_val = SIN((u16) mUnk_1C8);
        fx32 cos_val = COS((u16) mUnk_1C8);

        Mat3p mat2;
        Mat3p mat1;
        Mat3p_InitZRotation(&mat1, sin_val, cos_val);

        func_01ffa60c(&mat1, &mUnk_1A4, &mat2);
        mUnk_0B0.vfunc_14(&mat2, &mPos);
    }
}

void ActorUnkCASE::func_ov063_0215b6c8(VecFx32 *param1, UnkAngleStruct angle) {
    VecFx32 vec = *param1;
    VecFx32_Copy(&vec, &mPos);
    VecFx32_Copy(&vec, &mPrevPos);
    mAngle = *(s16 *) &angle.angle;
}

void ActorUnkCASE::func_ov063_0215b724(void) {
    this->func_ov000_020984d0();
    data_027e0cec->func_ov000_0209feac(0xCC06, &mPos, 2, 0, 0);
    data_027e0cec->func_ov000_0209feac(0xCC07, &mPos, 2, 0, 0);
    data_027e0cec->func_ov000_0209feac(0x823, &mPos, 2, 0, 0);
    data_027e09a8->func_ov000_02071b30(0x9865, &mPos, 0);
}

void ActorUnkCASE::vfunc_10(Cylinder *param1) {
    if (mUnk_14C != NULL) {
        ((ActorUnkCASE *) mUnk_14C)->vfunc_10(param1);
        return;
    }
    VecFx32_Copy(&mPos, &param1->pos); // doesn't match
    param1->size = 0x800;
}

void ActorUnkCASE::func_ov063_0215b814(ActorRef ref) {
    mUnk_1E4 = ref;

    if (mUnk_14C != NULL) {
        ((ActorUnkCANS *) mUnk_14C)->func_ov063_02158448(9);
    }

    this->func_ov063_0215aefc(1);
}

void ActorUnkCASE::func_ov063_0215b854(void) {
    if (mUnk_14C != NULL) {
        ActorUnkCANS *actorCans = (ActorUnkCANS *) mUnk_14C;

        VecFx32 vec = actorCans->mPos;
        VecFx32_Copy(&vec, &mPos);
        VecFx32_Copy(&vec, &mPrevPos);

        actorCans->mUnk_236 = 20;
        actorCans->mUnk_234 = 0;

        actorCans = (ActorUnkCANS *) mUnk_14C;
        actorCans->func_ov063_02158b0c();

        actorCans = (ActorUnkCANS *) mUnk_14C;
        actorCans->func_ov063_0215a428();
        mUnk_124.mUnk_04 = ~0x38000;
        mUnk_14C         = NULL;
    }

    this->func_ov063_0215aefc(2);
}

static inline bool VecFx32_IsZero(VecFx32 *vec) {
    return vec->x == 0 && vec->y == 0 && vec->z == 0;
}

void ActorUnkCASE::func_ov063_0215b8e8(VecFx32 *param1) {

    if (mUnk_14C != NULL) {
        ((ActorUnkCANS *) mUnk_14C)->func_ov063_0215a428();

        if (param1->x == 0 && param1->y == 0 && param1->z == 0) {
            this->func_ov063_0215aefc(0);
            return;
        }

        ((ActorUnkCANS *) mUnk_14C)->func_ov063_02158b0c();
        mUnk_14C = NULL;
    }

    if (VecFx32_IsZero((VecFx32 *) param1)) {
        this->func_ov063_0215aefc(4);
    } else {
        unk32 x = param1->x;
        unk32 y = param1->y;
        unk32 z = param1->z;
#if !IS_JP
        mUnk_150.mUnk_04 = 0;
#endif
        VecFx32_Init(x, y, z, (VecFx32 *) &mUnk_1D8);
        this->func_ov063_0215aefc(3);
    }
}

void ActorUnkCASE::func_ov063_0215b99c(ActorUnkCASE *param1, UnkStruct_func_ov063_0215a678 *param2) {
    unk32 var1;
    if ((param2->mUnk_08 & 0x10) != 0) {
        var1 = param2->mUnk_AE;
    } else {
        var1 = -1;
    }

    u8 *var2 = ((u8 *) param2->mUnk_04);

    // Can probably use a ternary instead of var1
    if (var1 != param1->mUnk_0B0.mUnk_6C) {
        return;
    }

    if (var2[0x25] == 2) {
        param2->mUnk_92 = 3;
        var2[0x25]      = 3;
        return;
    }

    if (var2[0x25] != 3) {
        return;
    }

    Mat4x3p matx1, matx2;
    G3d_GetCurrentMtx(&matx1, NULL);
    func_01ffad5c(&matx1, &data_027e0964, &matx2);
    // VecFx32_Copy(&matx2.wColumn, &param1->mUnk_1CC);
    fx32 x             = matx2.wColumn.x;
    fx32 z             = matx2.wColumn.z;
    fx32 y             = matx2.wColumn.y;
    param1->mUnk_1CC.x = x;
    param1->mUnk_1CC.y = y;
    param1->mUnk_1CC.z = z;

    param2->mUnk_92 = 2;
    var2[0x25]      = 2;
}
