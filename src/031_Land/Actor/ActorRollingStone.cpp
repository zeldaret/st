#include "Actor/ActorRollingStone.hpp"

#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d8c.hpp"
#include "limits.h"

extern "C" unk32 data_ov000_020aecf8;

static PTMF<ActorRollingStone> data_ov031_02114aec[0xB] = {
    ActorRollingStone::func_ov031_020f89f4, // ActorRollingStoneState_0
    ActorRollingStone::func_ov031_020f8a2c, // ActorRollingStoneState_1
    ActorRollingStone::func_ov031_020f8a3c, // ActorRollingStoneState_2
    ActorRollingStone::func_ov031_020f8b58, // ActorRollingStoneState_3
    ActorRollingStone::func_ov031_020f9250, // ActorRollingStoneState_4
    ActorRollingStone::func_ov031_020f9340, // ActorRollingStoneState_5
    ActorRollingStone::func_ov031_020f8ed4, // ActorRollingStoneState_6
    ActorRollingStone::func_ov031_020f8f10, // ActorRollingStoneState_7
    ActorRollingStone::func_ov031_020f9018, // ActorRollingStoneState_8
    ActorRollingStone::func_ov031_020f916c, // ActorRollingStoneState_9
    ActorRollingStone::func_ov031_020f9494, // ActorRollingStoneState_10
};

static PTMF<ActorRollingStone> data_ov031_02114a94[0xB] = {
    ActorRollingStone::func_ov031_020f8a04, // ActorRollingStoneState_0
    ActorRollingStone::func_ov031_020f8a38, // ActorRollingStoneState_1
    ActorRollingStone::func_ov031_020f8a58, // ActorRollingStoneState_2
    ActorRollingStone::func_ov031_020f8bc4, // ActorRollingStoneState_3
    ActorRollingStone::func_ov031_020f92cc, // ActorRollingStoneState_4
    ActorRollingStone::func_ov031_020f93bc, // ActorRollingStoneState_5
    ActorRollingStone::func_ov031_020f8f0c, // ActorRollingStoneState_6
    ActorRollingStone::func_ov031_020f8f30, // ActorRollingStoneState_7
    ActorRollingStone::func_ov031_020f9050, // ActorRollingStoneState_8
    ActorRollingStone::func_ov031_020f91ac, // ActorRollingStoneState_9
    ActorRollingStone::func_ov031_020f9554, // ActorRollingStoneState_10
};

DECL_PROFILE(ActorProfileRollingStone);

Actor *ActorProfileRollingStone::Create() {
    return new(HeapIndex_2) ActorRollingStone();
}

ActorProfileRollingStone::ActorProfileRollingStone() :
    ActorProfile_Derived1(ActorId_RLST) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.8f));
}

// non-matching
bool ActorRollingStone_104::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2) {}

// non-matching
void ActorRollingStone_104::vfunc_10() {}

void ActorRollingStone_D4::vfunc_10(Actor *param1) {
    if (param1->GetActorId() != ActorId_RLST) {
        return;
    }
    this->mUnk_2C->SetState(ActorRollingStoneState_6);
    ((ActorRollingStone *) param1)->SetState(ActorRollingStoneState_6);
}

// non-matching
ActorRollingStone::ActorRollingStone() :
    mUnk_94(G3d_GetModelPtr(GET_PROFILE(ActorProfileRollingStone)->mUnk_3C.mUnk_50)),
    mUnk_9C(0x1),
    mUnk_B0(this),
    mUnk_D4(this),
    mUnk_138(0x0),
    mUnk_14C(0x0),
    mUnk_150(0x0),
    mUnk_152(0x0),
    mUnk_154(0x0),
    mUnk_156(0x0),
    mUnk_158(true),
    mUnk_159(false),
    mUnk_15A(-0x1),
    mUnk_15B(0x0) {
    this->mUnk_4A[1]      = true;
    this->mUnk_B0.mUnk_24 = true;

    this->mUnk_44 = 0x9F;

    this->mUnk_38          = &this->mUnk_A0.mUnk_00;
    this->mUnk_38->mUnk_08 = 0x3;
}

bool ActorRollingStone::vfunc_18(unk32 param1) {
    this->mUnk_13C.Init(FLOAT_TO_FX32(0.8f));

    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_f_flame) {
        this->mUnk_13C.Init(FLOAT_TO_FX32(0.75f));
    }

    this->mUnk_34  = &this->mUnk_13C;
    this->mUnk_30  = &this->mUnk_13C;
    this->mUnk_15A = this->mUnk_5C.mUnk_0E;

    this->mUnk_14C = this->mUnk_5C.mParams[0];

    switch (this->mUnk_5C.mParams[0]) {
        case 0x1:
            this->mPos.y += FLOAT_TO_FX32(3.6f);
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

void ActorRollingStone::vfunc_20() {
    this->IsTimerOut();

    CALL_PTMF(PTMF<ActorRollingStone>, data_ov031_02114a94[this->mState]);

    if (this->mState == ActorRollingStoneState_10) {
        return;
    }

    this->func_ov000_02098838();
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020f97cc();
}

void ActorRollingStone::SetState(ActorState state) {
    this->mState           = state;
    this->mUnk_52          = 0xFFFF;
    this->mUnk_50          = 0x0;
    this->mUnk_38->mUnk_08 = 0x3;
    CALL_PTMF(PTMF<ActorRollingStone>, data_ov031_02114aec[this->mState]);
}

void ActorRollingStone::func_ov031_020f8880() {
    VecFx32 vec = this->mPos;
    vec.y += FLOAT_TO_FX32(0.8f);

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
    VecFx32_Init(this->mPos.x, this->mPos.y + FLOAT_TO_FX32(0.8f), this->mPos.z, &sp18);

    VecFx32 spC;
    VecFx32_Init(FLOAT_TO_FX32(1.0f), FLOAT_TO_FX32(1.0f), FLOAT_TO_FX32(1.0f), &spC);

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

// non-matching
void ActorRollingStone::func_ov031_020f8a58() {
    this->func_ov000_02098910(0x0, 0x10);
    if ((this->mUnk_46 & 0x1) != 0) {
        if (this->mUnk_15A > 0x0) {
            this->SetState(ActorRollingStoneState_10);
        } else {
            this->SetState(ActorRollingStoneState_3);
        }
        data_027e09a8->func_ov000_02071b30(0x989E, &this->mPos, 0x0);
        return;
    }

    if (this->mPos.y <= -0x5000) {
        this->func_ov000_020984d0();
        return;
    }

    this->func_ov000_02098ab4(0x2, 0x5, 0x1, &this->mVel);

    data_027e09c0->func_ov000_0207de98(this->mRef, &this->mPos, this->mUnk_38, &this->mVel, this->mPos.x, this->mPos.y,
                                       this->mPos.z, 0xB33, 0x1000);
}

void ActorRollingStone::func_ov031_020f8b58() {
    this->mUnk_2C = 0x0;

    switch (((u32) (this->mUnk_5C.mInitialAngle + 0x2000) << 0x10) >> 0x1E) {
        case 0x1:
            this->mVel.y = FLOAT_TO_FX32(0.0f);
            this->mVel.x = FLOAT_TO_FX32(0.105f);
            this->mVel.z = FLOAT_TO_FX32(0.0f);
            break;
        case 0x3:
            this->mVel.y = FLOAT_TO_FX32(0.0f);
            this->mVel.x = -FLOAT_TO_FX32(0.105f);
            this->mVel.z = FLOAT_TO_FX32(0.0f);
            break;
        default:
            this->mVel.x = FLOAT_TO_FX32(0.0f);
            this->mVel.y = FLOAT_TO_FX32(0.0f);
            this->mVel.z = FLOAT_TO_FX32(0.105f);
            break;
    }
    this->func_ov031_020f9af4();
}

// non-matching
void ActorRollingStone::func_ov031_020f8bc4() {}

// non-matching
void ActorRollingStone::func_ov031_020f8de8() {}

void ActorRollingStone::func_ov031_020f8ed4() {
    for (UnkStruct_PlayerGet_ec *ptr = this->mUnk_130; ptr != (void *) &this->mUnk_138; ++ptr) {
        ptr->func_ov000_020a0334();
    }
    this->func_ov031_020f8880();
}

void ActorRollingStone::func_ov031_020f8f0c() {}

void ActorRollingStone::func_ov031_020f8f10() {
    this->mUnk_158 = false;
    this->mUnk_2C  = 0x0;
    this->mUnk_152 = this->mUnk_5C.mParams[1];
    this->mUnk_150 = 0x0;
}

// non-matching
void ActorRollingStone::func_ov031_020f8f30() {
    if (this->mUnk_5C.mUnk_1A[0] != 0x0 && !this->func_ov000_02098a60(0x0)) {
        return;
    }

    if (!this->IsInternalTimerOut()) {
        return;
    }
    ActorParams sp14;
    sp14.mUnk_28 = 0x0;
    sp14.func_ov000_020975f8();

    sp14.mUnk_28 = this->mRef;
    VecFx32 vec  = this->mPos;
    VecFx32_Copy(&vec, &sp14.mInitialPos);

    sp14.mInitialAngle = this->mAngle;
    sp14.mParams[0]    = 0x1;

    ActorRef ref;
    this->func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_RLST, &sp14, 0x0);
    this->mUnk_150 = 0;
    this->mUnk_152 = this->mUnk_5C.mParams[1];
}

void ActorRollingStone::func_ov031_020f9018() {
    this->mUnk_2C = 0x0;

    fx32 angle = ((u32) (this->mAngle + DEG_TO_ANG(45)) << 0x10) >> 0x1E;
    if (angle == 0x1 || angle == 0x3) {
        this->mVel.y = FLOAT_TO_FX32(0.0f);
        this->mVel.z = FLOAT_TO_FX32(0.0f);
    } else {
        this->mVel.x = FLOAT_TO_FX32(0.0f);
        this->mVel.y = FLOAT_TO_FX32(0.0f);
    }
}

// non-matching
void ActorRollingStone::func_ov031_020f9050() {}

void ActorRollingStone::func_ov031_020f916c() {
    this->mUnk_2C = 0x0;
    this->mVel.x  = FLOAT_TO_FX32(0.0f);
    this->mVel.y  = FLOAT_TO_FX32(0.0f);
    this->mVel.z  = FLOAT_TO_FX32(0.0f);
    this->mUnk_44 = 0xBF;

    if (!this->mUnk_159) {
        return;
    }

    data_027e0d8c->func_ov093_02166220();
}

// non-matching
void ActorRollingStone::func_ov031_020f91ac() {}
// non-matching
void ActorRollingStone::func_ov031_020f9250() {}
// non-matching
void ActorRollingStone::func_ov031_020f92cc() {}
// non-matching
void ActorRollingStone::func_ov031_020f9340() {}
// non-matching
void ActorRollingStone::func_ov031_020f93bc() {}
// non-matching
void ActorRollingStone::func_ov031_020f9494() {}
// non-matching
void ActorRollingStone::func_ov031_020f9554() {}
// non-matching
void ActorRollingStone::func_ov031_020f97cc() {}
// non-matching
void ActorRollingStone::func_ov031_020f98e4() {}
// non-matching
void ActorRollingStone::func_ov031_020f9af4() {}

// non-matching
void ActorRollingStone::func_ov031_020f9af8() {
    const fx32 y = this->mPos.y + 0x666;
    const fx32 x = this->mPos.x;
    const fx32 z = this->mVel.z;
    for (UnkStruct_PlayerGet_ec *ptr = this->mUnk_130; ptr != (void *) &this->mUnk_138; ++ptr) {
        UnkSystem7_UnkStruct_00 *temp = ptr->mUnk_00;
        if (temp != NULL) {
            temp->mUnk_28 = x + ptr->mUnk_00->mUnk_20->mUnk_04.x;
            temp->mUnk_2C = y + ptr->mUnk_00->mUnk_20->mUnk_04.y;
            temp->mUnk_30 = z + ptr->mUnk_00->mUnk_20->mUnk_04.z;
        }
    }
    data_027e09a8->func_ov000_02071d34(&this->mRef, 0x989F, &this->mPos, 0x0);
}

// non-matching
bool ActorRollingStone::func_ov031_020f9ba4() {
    if (!data_027e0ce0->func_01fff1a4()) {
        VecFx32 *pVec = data_027e0ce0->func_01fff148(0x0);
        VecFx32 sp18;
        sp18.x = this->mPos.x - pVec->x;
        sp18.y = this->mPos.y - pVec->y;
        sp18.z = this->mPos.z - pVec->z;
        return VecFx32_Length(&sp18) > 0x8000;
    }
    VecFx32 *pVec1 = data_027e0ce0->func_01fff148(0x0);
    VecFx32 *pVec2 = data_027e0ce0->func_01fff148(0x1);
    VecFx32 sp18;
    sp18.z  = this->mPos.z - pVec1->z;
    float z = this->mPos.z - pVec2->z;
    sp18.y  = this->mPos.y - pVec1->y;
    float y = this->mPos.y - pVec2->y;
    sp18.x  = this->mPos.x - pVec1->x;
    float x = this->mPos.x - pVec2->x;

    if (data_027e0ce0->func_ov000_0208be70(0x0, 0x0, sp18)) {
        sp18.x = x;
        sp18.y = y;
        sp18.z = z;
    }

    bool var2;
    if (VecFx32_Length(&sp18) > 0x8000) {
        var2 = true;
    } else {
        var2 = false;
    }
    return var2;
}

void ActorRollingStone::func_ov031_020f9cc0() {
    this->mUnk_159 = true;
    this->SetState(ActorRollingStoneState_8);
}
