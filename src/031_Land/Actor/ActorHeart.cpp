#include "Actor/ActorHeart.hpp"
#include "CommonFuncs.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

extern unk32 data_ov000_020aecf8;

const Cylinder data_ov031_02113d64(0x800);

static PTMF<ActorHeart> data_ov031_02113da4[ActorHeartState_Max] = {
    &ActorHeart::func_ov031_020ef2ec, // ActorHeartState_InitFallDown
    &ActorHeart::func_ov031_020ef320, // ActorHeartState_FallingDown
    &ActorHeart::func_ov031_020ef35c, // ActorHeartState_LyingOnGround
    &ActorHeart::func_ov031_020ef3b8, // ActorHeartState_GrabbedByBoomerang
    &ActorHeart::func_ov031_020ef430, // ActorHeartState_Sliding
    &ActorHeart::func_ov031_020ef448, // ActorHeartState_GrabbedByWhip
};

static PTMF<ActorHeart> data_ov031_02113d74[ActorHeartState_Max] = {
    &ActorHeart::func_ov031_020ef2f8, // ActorHeartState_InitFallDown
    &ActorHeart::func_ov031_020ef334, // ActorHeartState_FallingDown
    &ActorHeart::func_ov031_020ef3a0, // ActorHeartState_LyingOnGround
    &ActorHeart::func_ov031_020ef3d0, // ActorHeartState_GrabbedByBoomerang
    &ActorHeart::func_ov031_020ef444, // ActorHeartState_Sliding
    &ActorHeart::func_ov031_020ef458, // ActorHeartState_GrabbedByWhip
};

DECL_PROFILE(ActorProfileHeart);

Actor *ActorProfileHeart::Create() {
    return new(HeapIndex_2) ActorHeart();
}

ActorProfileHeart::ActorProfileHeart() :
    ActorProfile(ActorId_Heart) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.25));
}

void ActorHeart::func_ov031_020eed64(RefStruct *pOutRef, const VecFx32 *pPos, u32 params, RefStruct ref) {
    ActorParams actorParams;

    actorParams.mUnk_28.Reset();
    actorParams.func_ov000_020975f8();

    actorParams.mInitialPos.x = pPos->x;
    actorParams.mInitialPos.y = pPos->y;
    actorParams.mInitialPos.z = pPos->z;
    actorParams.mUnk_28       = ref;
    actorParams.mUnk_2C       = params;

    Actor::func_ov000_020973f4(pOutRef, &data_ov000_020b539c_eur, ActorId_Heart, &actorParams, 0);
}

void ActorHeart::func_ov031_020f0750() {}

ActorHeart::ActorHeart() :
    mUnk_94(0, 6),
    mUnk_B8(0),
    mUnk_BA(gRandom.Next32(0) & 0x80000000 ? 0x666 : ~0x665),
    mUnk_BC(0),
    mUnk_BE(false),
    mUnk_C0(0),
    mUnk_C4(0),
    mUnk_C8(this) {

    this->mUnk_EC.x = FX_F32_TO_FX32(0.0);
    this->mUnk_EC.y = FX_F32_TO_FX32(0.0);
    this->mUnk_EC.z = FX_F32_TO_FX32(0.0);

    this->mUnk_98.mUnk_04 = 0x13100;
    this->mUnk_40         = &this->mUnk_C8;
    Vec2bCpp sp0;
    func_01ffedac(&sp0, &this->mPos);

    if (data_027e0cd8->mUnk_0C->func_ov000_02080180(&sp0) == 0x5) {
        this->mUnk_34 = (Cylinder *) &data_ov031_02113d64;
    }
}

bool ActorHeart::Init(unk32 param1) {
#pragma unused(param1)
    this->func_ov031_020ef4a8();
    return true;
}

void ActorHeart::Update() {
    Cylinder sp2C;
    struct {
        Cylinder unk_00;
        fx32 unk_10;
    } sp18;
    Cylinder sp8;
    VecFx16 sp2;
    unk16 sp0;

    sp2.x = 0;
    sp2.y = 0x666;
    sp2.z = -0x4CD;

    unk16 *psp0 = (unk16 *) &sp0;
    func_01fff17c(psp0, data_027e0ce0, 0);
    func_02018114(&sp2.x, *psp0);

    this->mUnk_C8.mUnk_08.x = sp2.x;
    this->mUnk_C8.mUnk_08.y = sp2.y;
    this->mUnk_C8.mUnk_08.z = sp2.z;

    sp2.x = 0;
    sp2.y = 0x666;
    sp2.z = 0;

    this->mUnk_C8.mUnk_0E.x = sp2.x;
    this->mUnk_C8.mUnk_0E.y = sp2.y;
    this->mUnk_C8.mUnk_0E.z = sp2.z;

    this->mUnk_3C = &this->mUnk_98;

    CALL_PTMF(PTMF<ActorHeart>, data_ov031_02113d74[this->mState]);

    if (this->mUnk_94.HasExpired()) {
        this->func_ov000_020989e0();

        if (this->mState == ActorHeartState_FallingDown) {
            func_ov000_0208bc00(data_027e0ce0, 0, &sp8);
            func_01ffce1c(&sp18.unk_00, &sp8);
            sp18.unk_00.pos.y -= sp8.size;
            sp18.unk_10 += sp8.size * 3;
            this->vfunc_10(&sp2C);

            if (func_01ffcea0(&sp18.unk_00, &sp2C) != 0) {
                this->func_ov031_020ef528();
                goto skip;
            } else if (data_027e0ce0->func_01fff1a4() != 0) {
                func_ov000_0208bc00(data_027e0ce0, 1, &sp8);
                func_01ffce1c(&sp18.unk_00, &sp8);
                sp18.unk_00.pos.y -= sp8.size;
                sp18.unk_10 += sp8.size * 3;

                if (func_01ffcea0(&sp18.unk_00, &sp2C) != 0) {
                    this->func_ov031_020ef528();
                    goto skip;
                }
            }
        }

        if (this->mUnk_98.mUnk_08 & 0x3FFFF) {
            switch (this->mUnk_98.mUnk_1C) {
                case 8:
                case 16:
                    if (this->mUnk_98.mUnk_0C.acRef.type_index & 0x100) {
                        this->func_ov031_020ef528();
                    }
                    break;
                case 12:
                    this->mUnk_C0 = this->mUnk_98.mUnk_0C;
                    this->mUnk_98.mUnk_04 &= ~0x1000;
                    this->SetState(ActorHeartState_GrabbedByBoomerang);
                    break;
            }
        }
    }

skip:
    if (this->mUnk_5C.mUnk_24 < 0) {
        this->func_ov031_020ef208();
    }

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (this->mState != ActorHeartState_GrabbedByBoomerang) {
        this->func_ov000_02098910(NULL, 0x10);
    }

    if (this->mUnk_46 & 0x03) {
        this->mVel.y = FX_F32_TO_FX32(0.0);
    }

    VecFx32_Add(&this->mPos, &this->mUnk_EC, &this->mPos);
    VecFx32_Reset(&this->mUnk_EC);
}

void ActorHeart::SetState(ActorState state) {
    this->mState  = state;
    this->mUnk_2C = data_ov000_020aecf8;
    this->mUnk_44 = 0x9C;
    CALL_PTMF(PTMF<ActorHeart>, data_ov031_02113da4[this->mState]);
}

void ActorHeart::func_ov031_020ef208() {
    bool var2 = true;
    bool var1 = true;
    if (this->mState != ActorHeartState_GrabbedByBoomerang && this->mState != ActorHeartState_Sliding) {
        var1 = false;
    }
    if (!var1) {
        if (this->mState != ActorHeartState_GrabbedByWhip) {
            var2 = false;
        }
    }

    if (var2) {
        SET_FLAG(this->mFlags, ActorFlag_Visible);
        return;
    }
    if (!this->mUnk_BE) {
        if (!this->mTimer.HasExpired()) {
            return;
        }
        this->mUnk_BE = true;
        this->mTimer.Set(0, 60);
        return;
    }

    if ((this->mTimer.value % 8) < 4) {
        UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    } else {
        SET_FLAG(this->mFlags, ActorFlag_Visible);
    }

    if (!this->mTimer.HasExpired()) {
        return;
    }
    this->func_ov000_020984d0();
}

void ActorHeart::func_ov031_020ef2ec() {
    this->mVel.y = FX_F32_TO_FX32(0.25);
}

void ActorHeart::func_ov031_020ef2f8() {
    this->func_ov000_02098838();
    if (this->mVel.y > 0) {
        return;
    }
    this->SetState(ActorHeartState_FallingDown);
}

void ActorHeart::func_ov031_020ef320() {
    this->mUnk_2C = 0x06;
    this->mUnk_44 = 0x9F;
}

void ActorHeart::func_ov031_020ef334() {
    this->func_ov031_020ef570();
    if ((this->mUnk_46 & 0x3) == 0) {
        return;
    }
    this->SetState(ActorHeartState_LyingOnGround);
}

void ActorHeart::func_ov031_020ef35c() {
    this->mVel.x = FX_F32_TO_FX32(0.0);
    this->mVel.y = FX_F32_TO_FX32(0.0);
    this->mVel.z = FX_F32_TO_FX32(0.0);
    if (!this->mUnk_BE && this->mTimer.GetRemainingTime() > 180) {
        this->mTimer.Set(0, 180);
    }
    this->mUnk_44 = 0x9F;
}

void ActorHeart::func_ov031_020ef3a0() {
    if (this->mUnk_5C.mUnk_24 >= 0) {
        return;
    }
    this->func_ov031_020ef698();
}

void ActorHeart::func_ov031_020ef3b8() {
    Actor::func_ov017_020bf99c();
    this->mUnk_98.func_ov000_02097bec();
}

void ActorHeart::func_ov031_020ef3d0() {
    this->func_ov017_020bf9c8(gpActorManager->func_01fff3b4(this->mUnk_C0));
    if (!GET_FLAG(this->mFlags, ActorFlag_5)) {
        return;
    }
    this->mVel.x = FX_F32_TO_FX32(0.0);
    this->mVel.y = FX_F32_TO_FX32(0.0);
    this->mVel.z = FX_F32_TO_FX32(0.0);

    this->mUnk_98.mUnk_04 |= 0x1000;
    this->SetState(ActorHeartState_FallingDown);
}

void ActorHeart::func_ov031_020ef430() {
    this->mVel.x = FX_F32_TO_FX32(0.0);
    this->mVel.y = FX_F32_TO_FX32(0.0);
    this->mVel.z = FX_F32_TO_FX32(0.0);
}

void ActorHeart::func_ov031_020ef444() {}

void ActorHeart::func_ov031_020ef448() {
    this->mVel.x = FX_F32_TO_FX32(0.0);
    this->mVel.z = FX_F32_TO_FX32(0.0);
}

typedef struct {
    PAD(0x00, 0xE8);
    VecFx32 mUnk_E8;
} UnkActor_02ef458;

void ActorHeart::func_ov031_020ef458() {
    // which actor is this ?
    UnkActor_02ef458 *actor = (UnkActor_02ef458 *) gpActorManager->func_01fff3b4(this->mUnk_C4);
    if (actor == nullptr) {
        this->SetState(ActorHeartState_FallingDown);
        return;
    }
    VecFx32_Copy(&actor->mUnk_E8, &this->mPos);
}

void ActorHeart::func_ov031_020ef4a8() {
    if (this->mUnk_5C.mUnk_24 >= 0) {
        this->SetState(ActorHeartState_LyingOnGround);
        return;
    }

    switch (this->mUnk_5C.mUnk_2C) {
        case 0:
            this->mTimer.Set(0, 180);
            this->SetState(ActorHeartState_LyingOnGround);
            break;

        case 1:
            this->mTimer.Set(0, 480);
            this->SetState(ActorHeartState_InitFallDown);
            return;

        default:
            this->mTimer.Set(0, 480);
            this->SetState(ActorHeartState_InitFallDown);
            break;
    }
}

void ActorHeart::func_ov031_020ef528() {
#if IS_JP || IS_EUR1
    if (data_027e0ce0->func_ov000_0208bee8()) {
        return;
    }
#endif

    data_027e0ce0->func_ov000_0208bc9c(4, 1);
    data_027e09a8->func_ov000_02071b30(0x76, &this->mPos, 0);
    this->func_ov000_020984d0();
}

void ActorHeart::func_ov031_020ef570() {
    this->func_ov000_02098838();

    this->mUnk_B8 += 0x666;

    this->mVel.x = FX_MUL(SIN((u16) this->mUnk_B8), 0x40);
    this->mVel.z = FX_F32_TO_FX32(0.0);

    if (this->mVel.y <= FX_F32_TO_FX32(-0.005) - 1) {
        this->mVel.y = FX_F32_TO_FX32(-0.005) - 1;
    }
}

void ActorHeart::vfunc_2C(unk32 param1) {
    VecFx32 iStack_20;
    VecFx32 iStack_2c;
    unk32 auStack_30;

    if (this->func_01fff5d0(param1, 0) == 0) {
        return;
    }

    iStack_20 = this->mPos;
    iStack_20.y += FX_F32_TO_FX32(0.03113);
    this->func_ov017_020bf5c4(&iStack_20, 0x400, 0x400, 0x1F, 0);

    func_ov000_0205c1f0(&auStack_30, 0x10);

    iStack_2c = this->mPos;
    iStack_2c.y += FX_F32_TO_FX32(0.33);
    func_ov000_0205c204(&auStack_30, &iStack_2c, 0xCCD, 0xCCD, 0x1F);
}

void ActorHeart::func_ov031_020ef698() {
    switch (this->mUnk_BC) {
        case 0x00:
            if ((this->mUnk_46 & 3) == 0) {
                this->mUnk_BC += 0x01;
                this->mUnk_2C = 0x06;
            }
            break;
        case 0x01:
            this->func_ov031_020ef570();
            if ((this->mUnk_46 & 3) != 0) {
                this->mVel.x  = 0;
                this->mVel.y  = 0;
                this->mVel.z  = 0;
                this->mUnk_BC = 0;
            }
            break;
    }
}

ActorHeart_C4::ActorHeart_C4(Actor *param1) :
    Actor_C4(param1) {
    this->mUnk_20 = param1;
    this->mUnk_04 = 1;
}

bool ActorHeart_C4::vfunc_00(RefStruct ref, unk32 param3) {
    if (param3 != 0) {
        ActorHeart *pHeart = this->GetActorPtr<ActorHeart>();
        pHeart->mUnk_C4    = ref;
        pHeart->SetState(ActorHeartState_Sliding);
    }

    return this->Actor_C4::vfunc_00(ref, param3);
}

bool ActorHeart_C4::vfunc_04() {
    this->GetActorPtr<ActorHeart>()->SetState(ActorHeartState_GrabbedByWhip);
    return this->Actor_C4::vfunc_04();
}

void ActorHeart_C4::vfunc_0C(VecFx32 *param1) {
    this->GetActorPtr<ActorHeart>()->SetState(ActorHeartState_FallingDown);
    this->Actor_C4::vfunc_0C(param1);
}

void ActorHeart_C4::vfunc_08() {
    this->GetActorPtr<ActorHeart>()->func_ov031_020ef528();
    this->Actor_C4::vfunc_08();
}
