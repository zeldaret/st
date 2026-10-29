#include "Actor/ActorRollingStone.hpp"
#include "CommonFuncs.hpp"

#include "Actor/ActorManager.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "Unknown/UnkStruct_027e0d8c.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"

extern MtxFx33 data_027e0130;
extern unk32 data_ov000_020aecf8;

static const VecFx32 data_ov031_02110bbc = {0xB50, 0, 0xB50};
static const VecFx32 data_ov031_02110b98 = {0xB50, 0, -0xB50};
static const VecFx32 data_ov031_02110bb0 = {0xB50, 0, 0xB50};
static const VecFx32 data_ov031_02110ba4 = {0xB50, 0, -0xB50};

static PTMF<ActorRollingStone> data_ov031_02114a94[ActorRollingStoneState_Max] = {
    &ActorRollingStone::func_ov031_020f8a04, // ActorRollingStoneState_0
    &ActorRollingStone::func_ov031_020f8a38, // ActorRollingStoneState_1
    &ActorRollingStone::func_ov031_020f8a58, // ActorRollingStoneState_2
    &ActorRollingStone::func_ov031_020f8bc4, // ActorRollingStoneState_3
    &ActorRollingStone::func_ov031_020f92cc, // ActorRollingStoneState_4
    &ActorRollingStone::func_ov031_020f93bc, // ActorRollingStoneState_5
    &ActorRollingStone::func_ov031_020f8f0c, // ActorRollingStoneState_6
    &ActorRollingStone::func_ov031_020f8f30, // ActorRollingStoneState_7
    &ActorRollingStone::func_ov031_020f9050, // ActorRollingStoneState_8
    &ActorRollingStone::func_ov031_020f91ac, // ActorRollingStoneState_9
    &ActorRollingStone::func_ov031_020f9554, // ActorRollingStoneState_10
};

static PTMF<ActorRollingStone> data_ov031_02114aec[ActorRollingStoneState_Max] = {
    &ActorRollingStone::func_ov031_020f89f4, // ActorRollingStoneState_0
    &ActorRollingStone::func_ov031_020f8a2c, // ActorRollingStoneState_1
    &ActorRollingStone::func_ov031_020f8a3c, // ActorRollingStoneState_2
    &ActorRollingStone::func_ov031_020f8b58, // ActorRollingStoneState_3
    &ActorRollingStone::func_ov031_020f9250, // ActorRollingStoneState_4
    &ActorRollingStone::func_ov031_020f9340, // ActorRollingStoneState_5
    &ActorRollingStone::func_ov031_020f8ed4, // ActorRollingStoneState_6
    &ActorRollingStone::func_ov031_020f8f10, // ActorRollingStoneState_7
    &ActorRollingStone::func_ov031_020f9018, // ActorRollingStoneState_8
    &ActorRollingStone::func_ov031_020f916c, // ActorRollingStoneState_9
    &ActorRollingStone::func_ov031_020f9494, // ActorRollingStoneState_10
};

DECL_PROFILE(ActorProfileRollingStone);

Actor *ActorProfileRollingStone::Create() {
    return new(HeapIndex_2) ActorRollingStone();
}

ActorProfileRollingStone::ActorProfileRollingStone() :
    ActorProfile_Derived1(ActorId_RollingStone) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.8f));
}

bool ActorRollingStone_104::vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                     const VecFx32 *param4) {
#pragma unused(param2, param3, param4)

    bool var_r2 = true;

    if (!ref.acRef.UnkCheck2Alt() && !ref.acRef.UnkCheck3(0x102)) {
        var_r2 = false;
    }

    return !var_r2;
}

bool ActorRollingStone_104::vfunc_10(RefStruct param1, unk32 param2) {
    if (param1.common.type != 0x0) {
        Actor *actor = gpActorManager->func_01fff3b4(param1);
        if (actor != NULL) {
            switch (actor->GetActorId()) {
                case ActorId_CASE:
                case ActorId_FMAS:
                case ActorId_FMLS:
                case ActorId_RCMS:
                    return false;
                default:
                    break;
            }
        }
    }
    return this->UnkStruct_027e0ce0_38_Base::vfunc_10(param1, param2);
}

void ActorRollingStone_D4::vfunc_10(const Actor *actor) {
    if (((Actor *) actor)->GetActorId() == ActorId_RollingStone) {
        this->mUnk_2C->SetState(ActorRollingStoneState_6);
        ((ActorRollingStone *) actor)->SetState(ActorRollingStoneState_6);
    }
}

// non-matching
ActorRollingStone::ActorRollingStone() :
    mUnk_94(G3d_GetModelPtr(GET_PROFILE(ActorProfileRollingStone)->mUnk_3C.mUnk_50), true),
    mUnk_AC(this),
    mUnk_D4(this),
    mUnk_10C(data_027e0130),
    mUnk_138(0x0),
    mUnk_14C(0x0),
    mUnk_150(0, 0),
    mUnk_154(0, 0),
    mUnk_158(true),
    mUnk_159(false),
    mUnk_15A(-0x1),
    mUnk_15B(0x0) {
    this->mUnk_4A[1]      = true;
    this->mUnk_AC.mUnk_24 = true;

    this->mUnk_44 = 0x9F;

    this->mUnk_38          = (Actor_38 *) &this->mUnk_A0;
    this->mUnk_38->mUnk_08 = 0x3;
}

bool ActorRollingStone::Init(unk32 param1) {
#pragma unused(param1)

    this->mUnk_13C.Init(FX_F32_TO_FX32(0.8f));

    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_f_flame) {
        this->mUnk_13C.Init(FX_F32_TO_FX32(0.75f));
    }

    this->mUnk_34  = &this->mUnk_13C;
    this->mUnk_30  = &this->mUnk_13C;
    this->mUnk_15A = this->mUnk_5C.mUnk_0E;

    this->mUnk_14C = this->mUnk_5C.mParams[0];

    switch (this->mUnk_5C.mParams[0]) {
        case 0x1:
            this->mPos.y += FX_F32_TO_FX32(3.6f);
            if (this->mUnk_5C.mUnk_1A[0] == 0) {
                this->SetState(ActorRollingStoneState_2);
                break;
            }
            if (!this->func_ov000_02098a60(0x0)) {
                this->SetState(ActorRollingStoneState_0);
                break;
            }
            return false;
        case 0x2:
            this->SetState(ActorRollingStoneState_7);
            break;
        case 0x0:
        default:
            this->SetState(ActorRollingStoneState_2);
            break;
    }
    return true;
}

void ActorRollingStone::Update() {
    this->mTimer.Update();

    CALL_PTMF(data_ov031_02114a94[this->mState]);

    if (this->mState == ActorRollingStoneState_10) {
        return;
    }

    this->func_ov000_02098838();
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020f97cc();
}

void ActorRollingStone::SetState(ActorState state) {
    this->mState = state;
    this->mTimer.Reset();
    this->mUnk_38->mUnk_08 = 0x3;
    CALL_PTMF(data_ov031_02114aec[this->mState]);
}

void ActorRollingStone::func_ov031_020f8880() {
    VecFx32 vec = this->mPos;
    vec.y += FX_F32_TO_FX32(0.8f);

    data_027e0cec->func_ov000_0209feac(0x8AF, &vec, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x8B0, &vec, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x8B1, &vec, 0x4, 0x0, 0x0);

    data_027e09a8->func_ov000_02071b30(0x98A0, &this->mPos, 0x0);

    this->func_ov000_020984d0();
}

void ActorRollingStone::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0x0) || !this->mUnk_158) {
        return;
    }
    VecFx32 sp18;
    VecFx32_Init(this->mPos.x, this->mPos.y + FX_F32_TO_FX32(0.8f), this->mPos.z, &sp18);

    VecFx32 spC;
    VecFx32_Init(FX_F32_TO_FX32(1.0f), FX_F32_TO_FX32(1.0f), FX_F32_TO_FX32(1.0f), &spC);

    this->mUnk_94.vfunc_10(&spC, &this->mUnk_10C, &sp18);

    data_027e09b4->func_01fff60c(&this->mPos, 0x99A, 0x99A, 0x1F, 0x0, 0x0);
}

void ActorRollingStone::func_ov031_020f89f4() {
    this->mUnk_2C  = 0x0;
    this->mUnk_158 = false;
}

void ActorRollingStone::func_ov031_020f8a04() {
    if (!this->func_ov000_02098a60(0x0)) {
        return;
    }
    this->SetState(ActorRollingStoneState_2);
}

void ActorRollingStone::func_ov031_020f8a2c() {
    this->mUnk_158 = true;
}

void ActorRollingStone::func_ov031_020f8a38() {}

void ActorRollingStone::func_ov031_020f8a3c() {
    unk32 data     = data_ov000_020aecf8;
    this->mUnk_158 = true;
    this->mUnk_2C  = data;
}

void ActorRollingStone::func_ov031_020f8a58() {
    this->func_ov000_02098910(NULL, 0x10);
    if ((this->mUnk_46 & 0x1) != 0) {
        if (this->mUnk_15A > 0x0) {
            this->SetState(ActorRollingStoneState_10);
        } else {
            this->SetState(ActorRollingStoneState_3);
        }
        data_027e09a8->func_ov000_02071b30(0x989E, &this->mPos, 0x0);
        return;
    }

    if (this->mPos.y <= FX_F32_TO_FX32(-5.0002)) {
        this->func_ov000_020984d0();
        return;
    }

    this->func_ov000_02098ab4(0x2, 0x5, 0x1, &this->mVel);

    UnkStruct_ov000_0207de98 param;
    VecFx32_Copy(&this->mPos, &param.vec);
    param.param1 = 0xB33;
    param.param2 = 0x1000;
    data_027e09c0->func_ov000_0207de98(this->mRef, &param, this->mUnk_38);
}

void ActorRollingStone::func_ov031_020f8b58() {
    this->mUnk_2C = 0x0;

    switch (this->GetInitialDirection()) {
        case 0x1:
            this->mVel.y = FX_F32_TO_FX32(0.0f);
            this->mVel.x = FX_F32_TO_FX32(0.105f);
            this->mVel.z = FX_F32_TO_FX32(0.0f);
            break;
        case 0x3:
            this->mVel.y = FX_F32_TO_FX32(0.0f);
            this->mVel.x = FX_F32_TO_FX32(-0.1052f);
            this->mVel.z = FX_F32_TO_FX32(0.0f);
            break;
        default:
            this->mVel.x = FX_F32_TO_FX32(0.0f);
            this->mVel.y = FX_F32_TO_FX32(0.0f);
            this->mVel.z = FX_F32_TO_FX32(0.105f);
            break;
    }
    this->func_ov031_020f9af4();
}

void ActorRollingStone::func_ov031_020f8bc4() {
    VecFx32 sp38;
    Cylinder sp28;
    UnkStruct_ov000_0207de98 sp14;

    STACK_PAD(4);

    this->mUnk_3C = &this->mUnk_AC;
    this->func_ov031_020f9af8();

    ActorRollingStone_104 spC;
    this->func_ov000_02098910(&spC, 0x10);

    if ((this->mUnk_46 & 0x1C) != 0x0 || (this->mUnk_46 & 0x80) != 0x0) {
        if ((this->mUnk_46 & 0x10) == 0x0) {
            this->SetState(ActorRollingStoneState_6);
            return;
        }
    } else if ((this->mUnk_46 & 0x1) == 0x0) {
        this->SetState(ActorRollingStoneState_5);
        return;
    }

    this->func_ov031_020f8de8();

    sp38.x = FX_Mul(SIN(this->mAngle.angle_s), FX_F32_TO_FX32(1.0f));
    sp38.z = FX_Mul(COS(this->mAngle.angle_s), FX_F32_TO_FX32(1.0f));
    sp38.y = FX_F32_TO_FX32(0.0f);

    this->vfunc_10(&sp28);
    sp28.size += FX_F32_TO_FX32(0.05f);

    if (data_027e09c0->func_ov000_0207e458(0x2, 0x1B, &sp28.pos, 0x2, &sp38, this->mRef)) {
        return;
    }

    this->func_ov000_02098ab4(0x2, 0x5, 0x1, &this->mVel);
    this->vfunc_10(&this->mUnk_D4.mUnk_0C);

    data_027e09c0->func_ov000_0207e58c(this->mRef, 0xB, 0x4, &this->mUnk_D4);

    VecFx32_Copy(&this->mPos, &sp14.vec);
    sp14.param1 = 0xB33;
    sp14.param2 = 0x1000;
    data_027e09c0->func_ov000_0207de98(this->mRef, &sp14, this->mUnk_38);
}

void ActorRollingStone::func_ov031_020f8de8() {
    this->mUnk_154.Update();
    this->func_ov000_020989e0();

    if ((this->mUnk_AC.mUnk_08 & 0x3FFFF) == 0) {
        return;
    }

    switch (this->mUnk_AC.mUnk_1C) {
        case 0x4:
            data_027e0d38->func_ov031_020d9c44(0x4);
            break;
        case 0xC:
            if (!this->mUnk_154.HasReachedMaxU()) {
                return;
            }

            this->mUnk_154.Set(0, 20);
        case 0x8:
        case 0xD:
            this->func_ov017_020bfb18(&this->mUnk_AC);
            break;
        case 0x1:
            this->SetState(ActorRollingStoneState_6);
            break;
        case 0x0:
        case 0x2:
        case 0x3:
        case 0x5:
        case 0x6:
        case 0x7:
        case 0x9:
        case 0xA:
        case 0xB:
        case 0xE:
        case 0xF:
            break;
    }
}

void ActorRollingStone::func_ov031_020f8ed4() {
    for (UnkSystem7 *ptr = this->mUnk_130; ptr != &this->mUnk_130[ARRAY_LEN(this->mUnk_130)]; ++ptr) {
        ptr->func_ov000_020a0334();
    }
    this->func_ov031_020f8880();
}

void ActorRollingStone::func_ov031_020f8f0c() {}

void ActorRollingStone::func_ov031_020f8f10() {
    this->mUnk_158 = false;
    this->mUnk_2C  = 0x0;
    this->mUnk_150.Set(0, this->mUnk_5C.mParams[1]);
}

void ActorRollingStone::func_ov031_020f8f30() {
    if (this->mUnk_5C.mUnk_1A[0] != 0x0 && !this->func_ov000_02098a60(0x0)) {
        return;
    }

    if (!this->mUnk_150.HasExpired()) {
        return;
    }
    ActorParams sp14;
    sp14.mUnk_28 = 0x0;
    sp14.func_ov000_020975f8();

    sp14.mUnk_28 = this->mRef;
    VecFx32 vec  = this->mPos;
    VecFx32_Copy(&vec, &sp14.mInitialPos);

    sp14.mInitialAngle = this->mAngle.angle_s;
    sp14.mParams[0]    = 0x1;

    RefStruct ref;
    this->func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_RollingStone, &sp14, 0x0);
    this->mUnk_150.Set(0, this->mUnk_5C.mParams[1]);
}

void ActorRollingStone::func_ov031_020f9018() {
    this->mUnk_2C = 0x0;

    int direction = this->GetDirection();
    if (direction == 0x1 || direction == 0x3) {
        this->mVel.y = FX_F32_TO_FX32(0.0f);
        this->mVel.z = FX_F32_TO_FX32(0.0f);
    } else {
        this->mVel.x = FX_F32_TO_FX32(0.0f);
        this->mVel.y = FX_F32_TO_FX32(0.0f);
    }
}

void ActorRollingStone::func_ov031_020f9050() {
    this->mUnk_3C = &this->mUnk_AC;
    this->func_ov031_020f8de8();

    int direction = this->GetDirection();
    if (direction == 0x1 || direction == 0x3) {
        this->mVel.y = FX_F32_TO_FX32(0.0f);
        this->mVel.z = FX_F32_TO_FX32(0.0f);
        func_01ff916c(&this->mVel.x, 0x0, 0x10);
    } else {
        this->mVel.x = FX_F32_TO_FX32(0.0f);
        this->mVel.y = FX_F32_TO_FX32(0.0f);
        func_01ff916c(&this->mVel.z, 0x0, 0x10);
    }

    this->func_ov000_02098910(NULL, 0x10);

    UnkStruct_ov000_0207de98 unk;
    VecFx32_Copy(&this->mPos, &unk.vec);
    unk.param1 = 0xB33;
    unk.param2 = 0x1000;

    data_027e09c0->func_ov000_0207de98(this->mRef, &unk, this->mUnk_38);

    direction = this->GetDirection();
    if (direction == 0x1 || direction == 0x3) {
        if (this->mVel.x != FX_F32_TO_FX32(0.0f)) {
            return;
        }
        this->SetState(ActorRollingStoneState_9);
        return;
    }
    if (this->mVel.z != FX_F32_TO_FX32(0.0f)) {
        return;
    }
    this->SetState(ActorRollingStoneState_9);
}

void ActorRollingStone::func_ov031_020f916c() {
    this->mUnk_2C = 0x0;
    this->mVel.x  = FX_F32_TO_FX32(0.0f);
    this->mVel.y  = FX_F32_TO_FX32(0.0f);
    this->mVel.z  = FX_F32_TO_FX32(0.0f);
    this->mUnk_44 = 0xBF;

    if (!this->mUnk_159) {
        return;
    }

    data_027e0d8c->func_ov093_02166220();
}

void ActorRollingStone::func_ov031_020f91ac() {
    this->mUnk_3C = &this->mUnk_AC;
    this->func_ov031_020f8de8();

    this->func_ov000_02098910(NULL, 0x10);
    UnkStruct_ov000_0207de98 unk;
    VecFx32_Copy(&this->mPos, &unk.vec);
    unk.param1 = 0xB33;
    unk.param2 = 0x1000;

    data_027e09c0->func_ov000_0207de98(this->mRef, &unk, this->mUnk_38);

    if (!this->mUnk_159) {
        return;
    }
    if (!this->func_ov031_020f9ba4()) {
        return;
    }
    this->func_ov000_020984d0();
}

void ActorRollingStone::func_ov031_020f9250() {
    this->vfunc_40();

    this->mUnk_2C = 0x0;
    for (UnkSystem7 *ptr = this->mUnk_130; ptr != &this->mUnk_130[ARRAY_LEN(this->mUnk_130)]; ++ptr) {
        ptr->func_ov000_020a0334();
    }

    this->mUnk_AC.func_ov000_02097bec();
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.y = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    this->mUnk_13C.pos.x = FX_F32_TO_FX32(0.0f);
    this->mUnk_13C.pos.y = FX_F32_TO_FX32(0.5f);
    this->mUnk_13C.pos.z = FX_F32_TO_FX32(0.0f);
    this->mUnk_13C.size  = FX_F32_TO_FX32(0.5f);

    this->mUnk_44 = (s16) this->mUnk_44 & ~0x20;
}

void ActorRollingStone::func_ov031_020f92cc() {
    this->vfunc_44();

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        this->SetState(ActorRollingStoneState_6);
        return;
    }

    this->func_ov000_02098910(NULL, 0x10);

    if ((this->mUnk_46 & 0x1C) == 0x0 && (this->mUnk_46 & 0x80) == 0x0) {
        return;
    }

    data_027e0d38->func_ov031_020d9c44(0x8);
    this->SetState(ActorRollingStoneState_6);
}

// non-matching
void ActorRollingStone::func_ov031_020f9340() {
    this->mUnk_2C = data_ov000_020aecf8;

    switch (this->GetInitialDirection()) {
        case 0x1:
            this->mVel.x = FX_F32_TO_FX32(0.105f);
            this->mVel.y = FX_F32_TO_FX32(0.0f);
            this->mVel.z = FX_F32_TO_FX32(0.0f);
            break;
        case 0x3:
            this->mVel.x = FX_F32_TO_FX32(-0.1052f);
            this->mVel.y = FX_F32_TO_FX32(0.0f);
            this->mVel.z = FX_F32_TO_FX32(0.0f);
            break;
        default:
            this->mVel.x = FX_F32_TO_FX32(0.0f);
            this->mVel.y = FX_F32_TO_FX32(0.0f);
            this->mVel.z = FX_F32_TO_FX32(0.105f);
            break;
    }

    this->mUnk_38->mUnk_08 = 0x4;
}

void ActorRollingStone::func_ov031_020f93bc() {
    this->mUnk_3C = &this->mUnk_AC;
    this->func_ov000_02098910(&this->mUnk_104, 0x10);

    if ((this->mUnk_46 & 0x1C) == 0x0 && (this->mUnk_46 & 0x80) == 0x0) {
        if ((this->mUnk_46 & 0x1) != 0x0) {
            if ((this->mUnk_108 & 0x1) != 0x0) {
                this->func_ov000_020984d0();
                return;
            }
            this->SetState(ActorRollingStoneState_3);
            data_027e09a8->func_ov000_02071b30(0x989E, &this->mPos, 0x0);
            return;
        }
    }
    if (this->mPos.y <= FX_F32_TO_FX32(-5.0002f)) {
        this->func_ov000_020984d0();
        return;
    }
    this->func_ov000_020989e0();

    this->func_ov000_02098ab4(0x2, 0x5, 0x1, &this->mVel);
}

void ActorRollingStone::func_ov031_020f9494() {
    this->mUnk_2C = 0x0;

    switch ((u32) (this->mUnk_5C.mInitialAngle + DEG_TO_ANG(45)) << 0x10 >> 0x1E) {
        case 0x1:
            this->mVel.x = FX_F32_TO_FX32(0.105f);
            this->mVel.y = FX_F32_TO_FX32(0.0f);
            this->mVel.z = FX_F32_TO_FX32(0.0f);
            break;
        case 0x3:
            this->mVel.x = FX_F32_TO_FX32(-0.1052f);
            this->mVel.y = FX_F32_TO_FX32(0.0f);
            this->mVel.z = FX_F32_TO_FX32(0.0f);
            break;
        default:
            this->mVel.x = FX_F32_TO_FX32(0.0f);
            this->mVel.y = FX_F32_TO_FX32(0.0f);
            this->mVel.z = FX_F32_TO_FX32(0.105f);
            break;
    }
    this->func_ov031_020f9af4();

    u8 sp00 = this->mUnk_15A;
    this->mUnk_15C.func_ov024_020d6680(&this->mPos, &sp00);

    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
}

void ActorRollingStone::func_ov031_020f9554() {
    VecFx32 sp38;
    Cylinder sp28;
    UnkStruct_ov000_0207de98 unk;

    STACK_PAD(4);

    this->mUnk_3C = &this->mUnk_AC;
    this->func_ov031_020f9af8();

    ActorRollingStone_104 spC;
    this->func_ov000_02098910(&spC, 0x10);

    if ((this->mUnk_46 & 0x1C) != 0x0 || (this->mUnk_46 & 0x80) != 0x0) {
        if ((this->mUnk_46 & 0x10) == 0x0) {
            this->SetState(ActorRollingStoneState_6);
            return;
        }
    } else if ((this->mUnk_46 & 0x01) == 0x0) {
        this->SetState(ActorRollingStoneState_5);
        return;
    }

    this->func_ov031_020f8de8();

    sp38.x = FX_Mul(SIN(this->mAngle.angle_s), FX_F32_TO_FX32(1.0f));
    sp38.z = FX_Mul(COS(this->mAngle.angle_s), FX_F32_TO_FX32(1.0f));
    sp38.y = FX_F32_TO_FX32(0.0f);

    this->vfunc_10(&sp28);
    sp28.size += FX_F32_TO_FX32(0.05f);

    if (data_027e09c0->func_ov000_0207e458(0x2, 0x1B, &sp28.pos, 0x2, &sp38, this->mRef)) {
        return;
    }

    this->func_ov000_02098ab4(0x2, 0x5, 0x1, 0x0);
    this->vfunc_10(&this->mUnk_D4.mUnk_0C);

    data_027e09c0->func_ov000_0207e58c(this->mRef, 0xB, 0x4, &this->mUnk_D4);

    VecFx32_Copy(&this->mPos, &unk.vec);
    unk.param1 = 0xB33;
    unk.param2 = 0x1000;
    data_027e09c0->func_ov000_0207de98(this->mRef, &unk, this->mUnk_38);

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    this->mUnk_15C.func_ov024_020d69d8(&this->mPos, &this->mAngle.angle_s, &this->mVel, 0x1AE, 0xE39, 0x1AE);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
    this->func_ov031_020f98e4();
}

void ActorRollingStone::func_ov031_020f97cc() {
    MtxFx33 sp00;

    switch ((u32) (this->mUnk_5C.mInitialAngle + DEG_TO_ANG(45)) << 0x10 >> 0x1E) {
        case 0x1:
        case 0x3: {
            fx32 diffX  = this->mPos.x - this->mPrevPos.x;
            fx32 angleX = -FX_Mul(diffX, FX_F32_TO_FX32(2.6668f));
            MtxFx33_InitZRotation(&sp00, SIN(angleX), COS(angleX));
            break;
        }
        case 0x0:
        case 0x2: {
            fx32 diffZ  = this->mPos.z - this->mPrevPos.z;
            fx32 angleZ = FX_Mul(diffZ, FX_F32_TO_FX32(2.6668f));
            MtxFx33_InitXRotation(&sp00, SIN(angleZ), COS(angleZ));
            break;
        }
        default:
            break;
    }
    func_01ffa60c(&this->mUnk_10C, &sp00, &this->mUnk_10C);
}

void ActorRollingStone::func_ov031_020f98e4() {
    unk16 sp00 = this->mAngle.angle_s;

    MtxFx33 sp34;
    switch (func_02017e8c(&sp00)) {
        case 0x2:
        case 0x6: {
            fx32 diffX  = this->mPos.x - this->mPrevPos.x;
            fx32 angleX = -FX_Mul(diffX, FX_F32_TO_FX32(2.6668f));
            MtxFx33_InitZRotation(&sp34, SIN(angleX), COS(angleX));
            break;
        }
        case 0x0:
        case 0x4: {
            fx32 diffZ  = this->mPos.z - this->mPrevPos.z;
            fx32 angleZ = FX_Mul(diffZ, FX_F32_TO_FX32(2.6668f));
            MtxFx33_InitXRotation(&sp34, SIN(angleZ), COS(angleZ));
            break;
        }
        case 0x5: {
            VecFx32 sp28 = data_ov031_02110b98;

            unk32 ret      = func_01ffb9cc(&this->mPrevPos, &this->mPos);
            fx32 angleRet1 = -FX_Mul(ret, FX_F32_TO_FX32(2.6668f));

            MtxFx33_func_01ff8248(&sp34, &sp28, SIN(angleRet1), COS(angleRet1));
            break;
        }
        case 0x1: {
            VecFx32 sp1C = data_ov031_02110ba4;

            unk32 ret2     = func_01ffb9cc(&this->mPrevPos, &this->mPos);
            fx32 angleRet2 = FX_Mul(ret2, FX_F32_TO_FX32(2.6668f));

            MtxFx33_func_01ff8248(&sp34, &sp1C, SIN(angleRet2), COS(angleRet2));
            break;
        }
        case 0x7: {
            VecFx32 sp10 = data_ov031_02110bb0;

            unk32 ret3     = func_01ffb9cc(&this->mPrevPos, &this->mPos);
            fx32 angleRet3 = FX_Mul(ret3, FX_F32_TO_FX32(2.6668f));

            MtxFx33_func_01ff8248(&sp34, &sp10, SIN(angleRet3), COS(angleRet3));
            break;
        }
        case 0x3: {
            VecFx32 sp04 = data_ov031_02110bbc;

            unk32 ret4     = func_01ffb9cc(&this->mPrevPos, &this->mPos);
            fx32 angleRet4 = -FX_Mul(ret4, FX_F32_TO_FX32(2.6668f));

            MtxFx33_func_01ff8248(&sp34, &sp04, SIN(angleRet4), COS(angleRet4));
            break;
        }
        default:
            break;
    }

    func_01ffa60c(&this->mUnk_10C, &sp34, &this->mUnk_10C);
}

void ActorRollingStone::func_ov031_020f9af4() {}

void ActorRollingStone::func_ov031_020f9af8() {
    UnkSystem7 *ptr;
    fx32 x = this->mPos.x;
    fx32 y = this->mPos.y + FX_F32_TO_FX32(0.4f);
    fx32 z = this->mPos.z;

    for (ptr = this->mUnk_130; ptr != &this->mUnk_130[ARRAY_LEN(this->mUnk_130)]; ptr++) {
        UnkSystem7_UnkStruct_00 *data = ptr->mUnk_00;

        if (data != NULL) {
            data->mUnk_28.x = x + data->mUnk_20->mUnk_00->mUnk_04.x;
            data->mUnk_28.y = y + data->mUnk_20->mUnk_00->mUnk_04.y;
            data->mUnk_28.z = z + data->mUnk_20->mUnk_00->mUnk_04.z;
        }
    }

    data_027e09a8->func_ov000_02071d34(&this->mRef, 0x989F, &this->mPos, 0x0);
}

bool ActorRollingStone::func_ov031_020f9ba4() {
    VecFx32 sp18;
    VecFx32 spC;
    VecFx32 sp0;

    if (!data_027e0ce0->func_01fff1a4()) {
        VecFx32 *pVec = data_027e0ce0->func_01fff148(0x0);

        VecFx32 temp;
        temp.x = this->mPos.x - pVec->x;
        temp.z = this->mPos.z - pVec->z;
        temp.y = this->mPos.y - pVec->y;

        sp18.x = temp.x;
        sp18.y = temp.y;
        sp18.z = temp.z;

        return VecFx32_Length(&sp18) > FX_F32_TO_FX32(8.0f);
    }

    VecFx32 *pVec1 = data_027e0ce0->func_01fff148(0x0);
    VecFx32 *pVec2 = data_027e0ce0->func_01fff148(0x1);

    fx32 new_var;

    VecFx32 temp2;
    VecFx32 temp3;

    temp2.x = this->mPos.x - pVec1->x;
    new_var = this->mPos.z;
    temp2.z = pVec1->z;
    spC.y   = this->mPos.y - pVec1->y;
    temp2.z = new_var - temp2.z;
    temp3.z = new_var - pVec2->z;
    spC.x   = temp2.x;
    temp3.y = this->mPos.y - pVec2->y;
    temp3.x = this->mPos.x - pVec2->x;
    spC.z   = temp2.z;

    sp0 = spC;

    if (data_027e0ce0->func_ov000_0208be70()) {
        VecFx32_Copy(&temp3, &sp0);
    }

    return VecFx32_Length(&sp0) > FX_F32_TO_FX32(8.0f);
}

void ActorRollingStone::func_ov031_020f9cc0() {
    this->mUnk_159 = true;
    this->SetState(ActorRollingStoneState_8);
}
