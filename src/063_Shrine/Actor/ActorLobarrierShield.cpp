#include "Actor/ActorLobarrierShield.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorLobarrier.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorShotArrow.hpp"
#include "Actor/ActorUnkITWP.hpp"
#include "CommonFuncs.hpp"
#include "Physics/Cylinder.hpp"
#include "RefStruct.hpp"
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
#include "types.h"

extern const u16 data_ov000_020aed00[];
extern const unk32 data_ov000_020aecf8[];
extern MtxFx43 data_027e0964;

struct UnkStruct_data_ov063_021630c8 {
    /* 00 */ VecFx32 mUnk_00;
    /* 0C */ VecFx32 mUnk_0C;

    UnkStruct_data_ov063_021630c8(unk32 a, unk32 b, unk32 c, unk32 d, unk32 e, unk32 f) {
        mUnk_00.x = a;
        mUnk_00.y = b;
        mUnk_00.z = c;
        mUnk_0C.x = d;
        mUnk_0C.y = e;
        mUnk_0C.z = f;
    }
};
const UnkStruct_data_ov063_021630c8 data_ov063_021630c8(0x5EC, 0x785, 0xFFFFFD48, 0x7AE, 0x112, 0xFFFFECA4);

static const char data_ov063_02162568[16]          = "loc";
static const Actor_Derived2_A8 data_ov063_02162558 = {1, 1, 1, 1};

static PTMF<ActorLobarrierShield> data_ov063_021630e0[ActorLobarrierShieldState_Max] = {
    &ActorLobarrierShield::func_ov063_0215af58, // ActorLobarrierShieldState_Held
    &ActorLobarrierShield::func_ov063_0215af60, // ActorLobarrierShieldState_Grabbing
    &ActorLobarrierShield::func_ov063_0215afb8, // ActorLobarrierShieldState_Grabbed
    &ActorLobarrierShield::func_ov063_0215b090, // ActorLobarrierShieldState_Thrown
    &ActorLobarrierShield::func_ov063_0215b244, // ActorLobarrierShieldState_Releasing
    &ActorLobarrierShield::func_ov063_0215b2c4, // ActorLobarrierShieldState_LyingOnGround
};

static PTMF<ActorLobarrierShield> data_ov063_02163110[ActorLobarrierShieldState_Max] = {
    &ActorLobarrierShield::func_ov063_0215af54, // ActorLobarrierShieldState_Held
    &ActorLobarrierShield::func_ov063_0215af5c, // ActorLobarrierShieldState_Grabbing
    &ActorLobarrierShield::func_ov063_0215afa4, // ActorLobarrierShieldState_Grabbed
    &ActorLobarrierShield::func_ov063_0215b054, // ActorLobarrierShieldState_Thrown
    &ActorLobarrierShield::func_ov063_0215b1bc, // ActorLobarrierShieldState_Releasing
    &ActorLobarrierShield::func_ov063_0215b2b0, // ActorLobarrierShieldState_LyingOnGround
};

DECL_PROFILE(ActorProfileLobarrierShield);

Actor *ActorProfileLobarrierShield::Create() {
    return new(HeapIndex_2) ActorLobarrierShield();
}

ActorProfileLobarrierShield::ActorProfileLobarrierShield() :
    ActorProfile_Derived1(ActorId_CASE) {
    VecFx32_Init(0, 0x666, 0, &mUnk_04.pos);
    mUnk_04.size = FX32_HALF;
}

UnkStruct_ov063_021631a0::UnkStruct_ov063_021631a0(G3d_Model *pModel) :
    UnkStruct_ov000_020b3268(pModel),
    mUnk_6C(this->ModelRender::func_ov000_02057f18(data_ov063_02162568)) {}

ActorLobarrierShield_150::ActorLobarrierShield_150(Actor *param1) :
    Actor_C4(param1, 1) {
    mUnk_20 = param1;
    mUnk_04 = 1;
}

bool ActorLobarrierShield_150::vfunc_00(RefStruct ref, unk32 param2) {
    ActorLobarrierShield *actor = (ActorLobarrierShield *) mUnk_20;
    if (actor->mUnk_1F4 == 0) {
        bool cond = true;
        if ((u32) actor->mState != ActorLobarrierShieldState_LyingOnGround &&
            actor->mState != ActorLobarrierShieldState_Releasing) {
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

bool ActorLobarrierShield_150::vfunc_04() {
    ((ActorLobarrierShield *) mUnk_20)->func_ov063_0215b854();
    return Actor_C4::vfunc_04();
}

void ActorLobarrierShield_150::vfunc_0C(VecFx32 *param1) {
    ((ActorLobarrierShield *) mUnk_20)->func_ov063_0215b8e8(param1);
    Actor_C4::vfunc_0C(param1);
}

ActorLobarrierShield_174::ActorLobarrierShield_174(Actor *param1) {
    mUnk_04 = 0;
    mUnk_2C = param1;
}

void ActorLobarrierShield_174::vfunc_10(const Actor *actor) {
    ((ActorLobarrierShield *) mUnk_2C)->func_ov063_0215b724();
    func_ov000_0207b70c(this, (Actor *) actor);
}

void ActorLobarrierShield::func_ov063_0215acec(RefStruct *ref1, RefStruct ref2) {
    ActorParams params;

    params.mUnk_28 = 0;
    params.func_ov000_020975f8();
    params.mUnk_28 = ref2;
    Actor::func_ov000_020973f4(ref1, &data_ov000_020b539c_eur, ActorId_CASE, &params, 0);
}

ActorLobarrierShield::ActorLobarrierShield() :
    mUnk_0B0(G3d_GetModelPtr(GET_PROFILE(ActorProfileLobarrierShield)->vfunc_04()->mUnk_50)),
    mUnk_120(0),
    mUnk_124(this),
    lobarrier(NULL),
    mUnk_150(this),
    mUnk_174(this),
    mUnk_1C8(0),
    mUnk_1CC(0, 0, 0),
    mUnk_1D8(0, 0, 0),
    mUnk_1E4(0),
    mUnk_1F4(0) {
    UNSET_FLAG(mFlags, ActorFlag_6);
    mUnk_40          = &mUnk_150;
    mUnk_124.mUnk_04 = 0;
    SET_FLAG2(mUnk_124.mUnk_04, ActorFlag_13);
    mUnk_124.mUnk_24 = true;
    mUnk_38          = (Actor_38 *) &mUnk_1E8;
    mUnk_38->mUnk_08 = 4;
    mUnk_A8          = &data_ov063_02162558;
}

bool ActorLobarrierShield::Init(unk32 param1) {
#pragma unused(param1)
    this->lobarrier = (ActorLobarrier *) gpActorManager->func_01fff3b4(mUnk_5C.mUnk_28);

    mUnk_0B0.func_ov000_02057c38(6, 2);
    mUnk_0B0.func_ov000_0209a7b8(this, (UnkSystem4_UnkCallback) ActorLobarrierShield::func_ov063_0215b99c);

    this->SetState(ActorLobarrierShieldState_Held);

    VecFx32_Init(0, 0, 0, &mVel);

    return true;
}

void ActorLobarrierShield::SetState(ActorState state) {
    mState   = state;
    mUnk_2C  = data_ov000_020aecf8[0];
    mUnk_120 = 0;

    CALL_PTMF(data_ov063_02163110[mState]);
}

void ActorLobarrierShield::func_ov063_0215af54() {}

void ActorLobarrierShield::func_ov063_0215af58() {}

void ActorLobarrierShield::func_ov063_0215af5c() {}

void ActorLobarrierShield::func_ov063_0215af60() {
    if (gpActorManager->func_01fff3b4(mUnk_1E4)) {
        return;
    }

    if (this->lobarrier != NULL) {
        this->lobarrier->func_ov063_0215a428();
    }

    this->SetState(ActorLobarrierShieldState_Held);
}

void ActorLobarrierShield::func_ov063_0215afa4() {
    mUnk_2C = 0;
    mVel.x  = 0;
    mVel.z  = 0;
}

void ActorLobarrierShield::func_ov063_0215afb8() {
    ActorUnkITWP *otherActor = (ActorUnkITWP *) gpActorManager->func_01fff3b4(mUnk_1E4);
    if (otherActor == NULL) {
        this->SetState(ActorLobarrierShieldState_Releasing);
        return;
    }

    mUnk_1A4 = otherActor->mUnk_154;

    VecFx32 vec = otherActor->mUnk_0E8;
    mPos.x      = vec.x;
    mPos.y      = vec.y;
    mPos.z      = vec.z;
    mPrevPos.x  = vec.x;
    mPrevPos.y  = vec.y;
    mPrevPos.z  = vec.z;
}

void ActorLobarrierShield::func_ov063_0215b054() {
    mVel.x = mUnk_1D8.vec.x;
    mVel.y = FX_F32_TO_FX32(0.0f);
    mVel.z = mUnk_1D8.vec.z;
    UNSET_FLAG2(*(s16 *) &mUnk_44, ActorFlag_5);
    this->mTimer.Reset();
}

void ActorLobarrierShield::func_ov063_0215b090() {
    if (this->mTimer.value < 4) {
        this->func_ov063_0215afb8();
        this->mTimer.Update();
        this->vfunc_10(&mUnk_174.mUnk_0C);
        data_027e09c0->func_ov000_0207e58c(mRef, 3, 4, &mUnk_174);
        return;
    }

    mUnk_1C8 += DEG_TO_ANG(45);
    VecFx32_Copy(&mPos, &mPrevPos);
    VecFx32_Add(&mPos, &mVel, &mPos);

    if (mVel.x == FX_F32_TO_FX32(0.0f) && mVel.z == FX_F32_TO_FX32(0.0f)) {
        mVel.y -= mUnk_2C;
    }

    this->func_ov000_02098910(NULL, 16);
    this->vfunc_10(&mUnk_174.mUnk_0C);

    data_027e09c0->func_ov000_0207e58c(mRef, 3, 4, &mUnk_174);

    if (mUnk_46) {
        this->func_ov063_0215b724();
    }
}

void ActorLobarrierShield::func_ov063_0215b1bc() {
    mVel.x = FX_F32_TO_FX32(0.0f);
    mVel.z = FX_F32_TO_FX32(0.0f);

    VecFx32 vec;
    VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f), &vec);
    func_01ffa7a0(&vec, &mUnk_1A4, &vec);

    s16 angle = FX_Atan2Idx(vec.x, vec.z);
    MTX_RotY33_(&mUnk_1A4, SIN(angle), COS(angle));
}

void ActorLobarrierShield::func_ov063_0215b244() {
    mVel.y -= mUnk_2C;
    VecFx32_Copy(&mPos, &mPrevPos);
    VecFx32_Add(&mPos, &mVel, &mPos);

    this->func_ov000_02098b8c(1, NULL);

    if ((mUnk_46 & 3) != 0) {
        this->SetState(ActorLobarrierShieldState_LyingOnGround);
    }
}

void ActorLobarrierShield::func_ov063_0215b2b0() {
    mVel.x  = FX_F32_TO_FX32(0.0f);
    mVel.z  = FX_F32_TO_FX32(0.0f);
    mUnk_2C = 0;
}

void ActorLobarrierShield::func_ov063_0215b2c4() {}

void ActorLobarrierShield::vfunc_24() {
    if (mState != ActorLobarrierShieldState_Grabbing && mState != ActorLobarrierShieldState_Grabbed) {
        return;
    }
    this->Update();
}

void ActorLobarrierShield::Update() {
    this->mUnk_150.mUnk_1C = 1;

    if (!this->func_ov017_020bef4c(0x4000) && this->mUnk_48 != 0) {
        if (!this->IsGrabbed()) {
            return;
        }

        if (this->mState == 3) {
            this->func_ov063_0215b724();
            return;
        }
    }

    this->mUnk_3C = &this->mUnk_124;
    CALL_PTMF(data_ov063_021630e0[this->mState]);

    if (this->lobarrier != NULL) {
        VecFx32 sp14 = this->lobarrier->mUnk_25C;
        func_01ffb714(&sp14, &this->mPos, &sp14);

        s16 var_r4_2;
        s16 var_r5 = sp14.z;
        s16 var_r6 = sp14.y;
        var_r4_2   = sp14.x;

        this->mUnk_150.mUnk_0E.x = var_r4_2;
        this->mUnk_150.mUnk_0E.y = var_r6;
        this->mUnk_150.mUnk_0E.z = var_r5;

        VecFx32 *var_r0 = data_027e0ce0->func_01fff148(0);

        // probably a disabled debug print that still ends up messing the codegen
        (void) ((f32) this->lobarrier->mUnk_25C.z);
        (void) ((f32) var_r0->z);

        fx16 angle = FX_Atan2Idx(this->lobarrier->mUnk_25C.x - var_r0->x, this->lobarrier->mUnk_25C.z - var_r0->z);
        this->mUnk_150.mUnk_08.x = var_r4_2 + (s16) ((1 - SIN(angle)) >> 1);
        this->mUnk_150.mUnk_08.y = var_r6;
        this->mUnk_150.mUnk_08.z = var_r5 + (s16) ((1 - COS(angle)) >> 1);
    } else if (this->mState == 5) {
        VecFx32 sp14 = this->mUnk_1CC.vec;
        func_01ffb714(&sp14, &this->mPos, &sp14);

        s16 var_r4_2;
        s16 var_r5 = sp14.z;
        s16 var_r6 = sp14.y;
        var_r4_2   = sp14.x;

        this->mUnk_150.mUnk_0E.x = var_r4_2;
        this->mUnk_150.mUnk_0E.y = var_r6;
        this->mUnk_150.mUnk_0E.z = var_r5;

        VecFx32 *var_r0 = data_027e0ce0->func_01fff148(0);

        // same as above
        (void) ((f32) this->mUnk_1CC.vec.z);
        (void) ((f32) var_r0->z);

        fx16 angle               = FX_Atan2Idx(this->mUnk_1CC.vec.x - var_r0->x, this->mUnk_1CC.vec.z - var_r0->z);
        this->mUnk_150.mUnk_08.x = var_r4_2 + (s16) ((1 - SIN(angle)) >> 1);
        this->mUnk_150.mUnk_08.y = var_r6;
        this->mUnk_150.mUnk_08.z = var_r5 + (s16) ((1 - COS(angle)) >> 1);
    }

    this->func_ov000_020989e0();

    if (!(this->mState != 5 && this->mState != 4) && (this->mUnk_124.mUnk_08 & 0x3FFFF)) {
        switch (this->mUnk_124.mUnk_1C) {
            case 13:
                break;
            case 4:
                data_027e0d38->func_ov031_020d9c44(data_ov000_020aed00[0]);
                break;
            case 11: {
                Actor *pActor = gpActorManager->func_01fff3b4(this->mUnk_124.mUnk_0C);

                if (pActor->GetActorId() == ActorId_RollingStone) {
                    this->func_ov063_0215b724();
                }
                break;
            }
            default:
                this->func_ov000_020990c0(&this->mUnk_124, 1, 0);
                break;
        }
    }

    if (!(this->mFlags[0] & 1)) {
        return;
    }

    if (this->mState != 5) {
        return;
    }

    struct {
        Cylinder unk_00;
        fx32 unk_10;
    } sp0;

    sp0.unk_00.pos.x = this->mPos.x;
    sp0.unk_00.pos.y = this->mPos.y;
    sp0.unk_00.pos.z = this->mPos.z;
    sp0.unk_00.size  = 0x548;
    sp0.unk_10       = 0x1000;
    data_027e09c0->func_ov000_0207de98(this->mRef, &sp0, this->mUnk_38);
}

void ActorLobarrierShield::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0)) {
        return;
    }

    if (this->lobarrier == NULL || this->lobarrier->shield == NULL) {
        fx32 sin_val = SIN(mUnk_1C8);
        fx32 cos_val = COS(mUnk_1C8);

        MtxFx33 mat2;
        MtxFx33 mat1;
        MTX_RotZ33_(&mat1, sin_val, cos_val);

        MTX_Concat33(&mat1, &mUnk_1A4, &mat2);
        mUnk_0B0.vfunc_14(&mat2, &mPos);
    }
}

void ActorLobarrierShield::func_ov063_0215b6c8(VecFx32 *param1, UnkAngleStruct angle) {
    VecFx32 vec = *param1;

    this->mPos.x = vec.x;
    this->mPos.y = vec.y;
    this->mPos.z = vec.z;

    this->mPrevPos.x = vec.x;
    this->mPrevPos.y = vec.y;
    this->mPrevPos.z = vec.z;

    this->mAngle.angle_s = angle.angle_s;
}

void ActorLobarrierShield::func_ov063_0215b724() {
    this->func_ov000_020984d0();
    data_027e0cec->func_ov000_0209feac(0xCC06, &mPos, 2, 0, 0);
    data_027e0cec->func_ov000_0209feac(0xCC07, &mPos, 2, 0, 0);
    data_027e0cec->func_ov000_0209feac(0x823, &mPos, 2, 0, 0);
    data_027e09a8->func_ov000_02071b30(0x9865, &mPos, 0);
}

void ActorLobarrierShield::vfunc_10(Cylinder *param1) const {
    if (this->lobarrier != NULL) {
        this->lobarrier->vfunc_10(param1);
        return;
    }
    VecFx32_Copy(&mPos, &param1->pos);
    param1->size = FX32_HALF;
}

void ActorLobarrierShield::func_ov063_0215b814(RefStruct ref) {
    mUnk_1E4 = ref;

    if (this->lobarrier != NULL) {
        this->lobarrier->SetState(ActorLobarrierState_LosingShield);
    }

    this->SetState(ActorLobarrierShieldState_Grabbing);
}

void ActorLobarrierShield::func_ov063_0215b854(void) {
    if (this->lobarrier != NULL) {
        ActorLobarrier *actorCans = this->lobarrier;

        VecFx32 vec = actorCans->mPos;

        this->mPos.x = vec.x;
        this->mPos.y = vec.y;
        this->mPos.z = vec.z;

        this->mPrevPos.x = vec.x;
        this->mPrevPos.y = vec.y;
        this->mPrevPos.z = vec.z;

        actorCans->mUnk_234.Set(0, 20);

        actorCans = this->lobarrier;
        actorCans->func_ov063_02158b0c();

        actorCans = this->lobarrier;
        actorCans->func_ov063_0215a428();
        mUnk_124.mUnk_04 = ~0x38000;
        this->lobarrier  = NULL;
    }

    this->SetState(ActorLobarrierShieldState_Grabbed);
}

void ActorLobarrierShield::func_ov063_0215b8e8(const VecFx32 *param1) {
    if (this->lobarrier != NULL) {
        this->lobarrier->func_ov063_0215a428();

        if (param1->x == 0 && param1->y == 0 && param1->z == 0) {
            this->SetState(ActorLobarrierShieldState_Held);
            return;
        }

        this->lobarrier->func_ov063_02158b0c();
        this->lobarrier = NULL;
    }

    if (param1->x == 0 && param1->y == 0 && param1->z == 0) {
        this->SetState(ActorLobarrierShieldState_Releasing);
    } else {
#if !IS_JP
        mUnk_150.mUnk_04 = 0;
#endif

        mUnk_1D8.vec.x = *(vs32 *) &param1->x;
        mUnk_1D8.vec.y = param1->y;
        mUnk_1D8.vec.z = param1->z;

        this->SetState(ActorLobarrierShieldState_Thrown);
    }
}

void ActorLobarrierShield::func_ov063_0215b99c(ActorLobarrierShield *param1, UnkStruct_func_ov063_0215a678 *param2) {
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

    MtxFx43 matx1, matx2;
    G3d_GetCurrentMtx(&matx1, NULL);
    func_01ffad5c(&matx1, &data_027e0964, &matx2);

    fx32 x                 = matx2._30;
    fx32 z                 = matx2._32;
    fx32 y                 = matx2._31;
    param1->mUnk_1CC.vec.x = x;
    param1->mUnk_1CC.vec.y = y;
    param1->mUnk_1CC.vec.z = z;

    param2->mUnk_92 = 2;
    var2[0x25]      = 2;
}
