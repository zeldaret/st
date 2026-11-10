#include "Actor/ActorUnkPSWB.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorBomb.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkSCCN.hpp"
#include "CommonFuncs.hpp"
#include "MapObject/MapObject.hpp"
#include "RefStruct.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "flags.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"
#include "types.h"

struct UnkStruct_data_ov094_021785a4 {
    /* 00 */ PAD(0x00, 0x1C);
    /* 1C */ unk32 *mUnk_1C;
};

extern UnkStruct_data_ov094_021785a4 data_ov094_021785a4;
extern MapObject_10 data_ov094_021786b0;

// Not extern (in sinit)
extern UnkStruct_027e09c0_04 data_ov094_021785c0; // INFO: not sure about the type

PTMF<ActorUnkPSWB> data_ov094_0217703c[0x5] = {
    &ActorUnkPSWB::func_ov094_02166bcc, // ActorUnkPSWBState_0
    &ActorUnkPSWB::func_ov094_02166c2c, // ActorUnkPSWBState_1
    &ActorUnkPSWB::func_ov094_02166e10, // ActorUnkPSWBState_2
    &ActorUnkPSWB::func_ov094_02166f94, // ActorUnkPSWBState_3
    &ActorUnkPSWB::func_ov094_02167224, // ActorUnkPSWBState_4
};

PTMF<ActorUnkPSWB> data_ov094_02177064[0x5] = {
    &ActorUnkPSWB::func_ov094_02166c10, // ActorUnkPSWBState_0
    &ActorUnkPSWB::func_ov094_02166c88, // ActorUnkPSWBState_1
    &ActorUnkPSWB::func_ov094_02166e60, // ActorUnkPSWBState_2
    &ActorUnkPSWB::func_ov094_02167024, // ActorUnkPSWBState_3
    &ActorUnkPSWB::func_ov094_0216723c, // ActorUnkPSWBState_4
};

DECL_PROFILE(ActorProfileUnkPSWB);

Actor *ActorProfileUnkPSWB::Create() {
    return new(HeapIndex_2) ActorUnkPSWB();
}

// non-matching (weird bic/orr operations)
ActorProfileUnkPSWB::ActorProfileUnkPSWB() :
    ActorProfileUnkPSWB_Base(ActorId_PSWB) {

    VecFx32 vec1, vec2;
    unk8 stack1[0x24]; // TODO: clean this

    u32 tmp;
    fx32 tmp2;

    tmp = 0x7006;
    tmp &= ~0x7000;
    tmp |= 0x7000;

    mUnk_04.pos.x     = 0;
    mUnk_04.pos.z     = 0;
    mUnk_D8.mUnk_0C.y = 0;
    mUnk_D8.mUnk_08   = tmp;

    mUnk_04.pos.y = FX_F32_TO_FX32(0.49f);
    mUnk_D8.mUnk_04 |= 1;

    tmp2 = -FX_F32_TO_FX32(0.49f);

    mUnk_04.size      = FX_F32_TO_FX32(0.49f);
    mUnk_D8.mUnk_18.x = FX_F32_TO_FX32(0.49f);
    mUnk_D8.mUnk_18.z = FX_F32_TO_FX32(0.49f);
    mUnk_D8.mUnk_0C.x = tmp2;
    mUnk_D8.mUnk_0C.z = tmp2;
    mUnk_D8.mUnk_18.y = FX_F32_TO_FX32(0.90f);

    VecFx32_Init(tmp2, FX_F32_TO_FX32(0.90f), tmp2, &vec1);
    VecFx32_Init(FX_F32_TO_FX32(0.49f), FX_F32_TO_FX32(1.90f), FX_F32_TO_FX32(0.49f), &vec2);
    func_01ffcfcc((VecFx32 *) &stack1[0xC], &vec1, &vec2);

    func_ov000_0207f4fc(&mUnk_FC, &stack1, ((tmp & ~0x1F) & ~0x7000) | 0x3000, 1);

    data_ov094_021785a4.mUnk_1C = &mUnk_FC;
    mUnk_18                     = 2;
    mUnk_1A                     = 0x1333;
}

ActorUnkPSWB_194::~ActorUnkPSWB_194() {}

bool ActorUnkPSWB_194::vfunc_08(RefStruct param1, unk32 param2, unk32 param3) {
    if (param1.acRef.HasTypeIndexValue(REF_TYPE_INDEX(ActorRefType_0, 0x100)) ||
        param1.acRef.HasTypeIndexValue(REF_TYPE_INDEX(ActorRefType_0, 0x101))) {
        if (param1.acRef.HasTypeIndexValue(REF_TYPE_INDEX(ActorRefType_0, 0x100)) && param1.acRef.unk_id == 0) {
            func_ov000_0208bdd4(data_027e0ce0, 0, &mUnk_10->mVel);
            func_ov000_0207e20c(data_027e09c0, &data_ov094_021785c0, &mUnk_10->mPos);
        }
        ((ActorUnkPSWB *) mUnk_10)->func_ov094_02167bf0();
    } else if (((u32) param1.acRef.type_index) << 0x10 >> 0x1E != 0) {
        ActorBomb *actorBomb = (ActorBomb *) gpActorManager->func_01fff3b4(param1);
        if (actorBomb != NULL) {
            ActorId actorId = actorBomb->GetActorId();
            if (actorId == ActorId_Bomb) {
                if (func_01ff9258(mUnk_10->mPos.x - actorBomb->mPos.x, mUnk_10->mPos.z - actorBomb->mPos.z) <= 0x7D7) {
                    actorBomb->func_ov031_020e1920(&mUnk_10->mVel);
                }
            }
        }
    }
    ActorUnkSCCN_B8::vfunc_08(param1, param2, param3);
}

ActorUnkPSWB::ActorUnkPSWB() :
    mUnk_E0(G3d_GetModelPtr(GET_PROFILE(ActorProfileUnkPSWB)->mUnk_3C.mUnk_50)),
    mUnk_140(0),
    mUnk_144(0),
    mUnk_148(0),
    mUnk_14C(0),
    mUnk_150(0),
    mUnk_154(0),
    mUnk_158(0x1000),
    mUnk_15C(0),
    mUnk_160(1),
    mUnk_164(0),
    mUnk_166(0),
    mUnk_168(0),
    mUnk_16A(0),
    mUnk_16C(0),
    mUnk_16E(0),
    mUnk_170(0),
    mUnk_174(0, 0, 0),
    mUnk_180(0),
    mUnk_184(0),
    mUnk_188(-1),
    mUnk_18C(0),
    mUnk_190(0),
    mUnk_192(0),
    mUnk_194(this) {}

ActorUnkPSWB::~ActorUnkPSWB() {
    mUnk_184.func_ov000_020a0334();
    data_027e09c0->func_ov000_0207e254(&mUnk_194);
}

bool ActorUnkPSWB::Init(unk32 param1) {
#pragma unused(param1)
    data_ov094_021785c0.func_ov000_0207f4d4();
    mUnk_44 = 0x1D;
    mUnk_2C = 0;
    this->func_ov000_0209862c(3);
    mUnk_140 = mPos.x;
    mUnk_144 = mPos.z;
    mState   = 0;
    this->func_ov094_02166890();
    mUnk_94  = 0;
    mUnk_188 = 0xD0A7;
    mUnk_18C = 2;
    if (mUnk_5C.mParams[0] != 0) {
        VecFx32 vec1;
        fx32 ret; //! TODO: force onto the stack
        VecFx32 vec2;
        if (func_ov000_02070c84(data_027e09a4, &vec1, mUnk_5C.mUnk_24) != 0) {
            ret = data_027e0cd8->mUnk_0C->vfunc_28(&vec1, 1, 0);

            vec2       = vec1;
            mPos.x     = vec2.x;
            mPos.y     = vec2.y;
            mPos.z     = vec2.z;
            mPrevPos.x = vec2.x;
            mPrevPos.y = vec2.y;
            mPrevPos.z = vec2.z;

            mUnk_44 = 0x1C;
            this->func_ov000_0209862c(1);
            this->func_ov094_021668e0(4);
            mUnk_154 = ret - FX_F32_TO_FX32(0.3f);
            mUnk_15C = mPos.y;
        }
    }
    return true;
}

void ActorUnkPSWB::func_ov094_02166890(void) {
    mUnk_194.mUnk_04 = mRef;
    mUnk_194.mUnk_08 = &mPos;
    mUnk_194.mUnk_0C = &data_ov094_021786b0;
    data_027e09c0->func_ov000_0207e240(&mUnk_194);
}

void ActorUnkPSWB::func_ov094_021668cc(void) {
    mUnk_150 = 0;
    mUnk_166 = 0;
}

void ActorUnkPSWB::func_ov094_021668e0(ActorState param1) {
    mState = param1;
    this->func_ov094_021668cc();
    CALL_PTMF(data_ov094_0217703c[mState]);
}

void ActorUnkPSWB::Update(void) {}

void ActorUnkPSWB::vfunc_24(void) {
    if (mState == 0) {
        this->func_ov094_02166c10();
    }
}

void ActorUnkPSWB::func_ov094_02166bcc(void) {
    this->func_ov000_0209862c(3);
    data_027e09a8->func_ov000_02071b30(0x991E, &mPos, 0);
    mUnk_2C = 0;
    mVel.x  = 0;
    mVel.z  = 0;
}

void ActorUnkPSWB::func_ov094_02166c10(void) {
    this->func_ov094_02167688();
    this->func_ov094_02167b64(0);
}

void ActorUnkPSWB::func_ov094_02166c2c(void) {
    this->func_ov000_0209862c(0);
    u16 var;
    func_ov000_0208bb84(&var, data_027e0ce0, mUnk_98);
    if (var != 0) {
        func_ov000_0208bb94(data_027e0ce0, mUnk_98, 1);
    }
    mUnk_164 = func_ov000_0208bba4(data_027e0ce0, mUnk_98);
}

void ActorUnkPSWB::func_ov094_02166c88(void) {
    bool cond = false;
    if (this->func_ov094_02167518() != 0) {
        cond = true;
    }

    if (cond && func_ov048_021307f8(this, mUnk_160) != 0) {
        VecFx32 vec;
        func_ov048_02130790(this, mUnk_160, &vec, 0x1000);
        mUnk_140 = vec.x;
        mUnk_144 = vec.z;
        func_ov048_02130aa4(this, &vec);
        this->func_ov094_02167518();
    }

    this->func_ov000_02098838();
    VecFx32_Copy(&mPos, &mPrevPos);
    VecFx32_Add(&mPos, &mVel, &mPos);

    UnkStruct_ov094_02176fb8_Base itemVar; // Not the actual class (should be from ov048 maybe?)
    this->func_ov000_02098910(&itemVar, 0x10);

    if ((mUnk_46 & ~1) != 0) {
        func_ov000_0205ad64(&mPos, &mPos);
        mUnk_140 = mPos.x;
        mUnk_144 = mPos.z;
    } else {
        if (mUnk_140 == mPos.x && mUnk_144 == mPos.z) {
            this->func_ov094_021668e0(0);
        }
    }

    if (!GET_FLAG2(mUnk_46, 0)) {
        this->func_ov094_021668e0(2);
    } else {
        mVel.y = 0;
    }

    data_027e09a8->func_ov000_02071d34(&mRef, 0x991D, &mPos, 0);
}

void ActorUnkPSWB::func_ov094_02166e10(void) {
    u16 var;
    func_ov000_0208bb84(&var, data_027e0ce0, mUnk_98);
    if (var != 0) {
        func_ov000_0208bb94(data_027e0ce0, mUnk_98, 1);
    }
    mUnk_2C = 0x52;
    this->func_ov094_0216781c();
}

// non-matching (wrong class, reg usage in condition)
void ActorUnkPSWB::func_ov094_02166e60(void) {
    this->func_ov000_02098838();

    mPrevPos.x = mPos.x;
    mPrevPos.y = mPos.y;
    mPrevPos.z = mPos.z;
    VecFx32_Add(&mPos, &mVel, &mPos);

    UnkStruct_ov094_02176fb8_Base itemVar; // Not the actual class (the right one comes/inherits from ov048)
    this->func_ov000_02098910(&itemVar, 0x10);

    if (mUnk_46 == 1) {
        u32 var;
        func_01fff05c(&var, data_027e0cd8->mUnk_0C, &mPos);
        bool cond = true;
        if ((var & 0x1F) != 8 && (var >> 5 & 3) != 2) {
            cond = false;
        }
        if (cond != false) {
            this->func_ov094_021668e0(3);
            return;
        }
        this->func_ov094_021668e0(0);
    }

    if ((((u16 *) itemVar.unk_0x4)[0] & 1) != 0) {
        this->func_ov000_020984f0();
        return; // dumb but needed
    } else {
        func_01ff930c(&mUnk_16A, -5461, 0x300);
    }
}

// non-matching (regalloc)
void ActorUnkPSWB::func_ov094_02166f94(void) {
    mUnk_16E = mUnk_16A;
    mUnk_44  = 0x1C;
    this->func_ov000_0209862c(1);
    mUnk_2C  = 0x52;
    mUnk_15C = mPos.y;
    mUnk_144 = 0;
    mUnk_140 = 0;
    data_027e09a8->func_ov000_02071b30(0x991C, &mPos, 0);
    RefStruct ref;
    Actor::func_ov017_020c2438(&ref, 1, &mPos, 1, 1);
    mTimer.Set(0, 100);
}

void ActorUnkPSWB::func_ov094_02167024(void) {
    mVel.y += mUnk_2C;
    VecFx32_Copy(&mPos, &mPrevPos);
    VecFx32_Add(&mPos, &mVel, &mPos);

    switch (mUnk_166) {
        case 0: {
            mTimer.Update();
            if (mTimer.GetRemainingTime() % 5 == 0) {
                this->func_ov094_02167dbc();
            }

            Vec2bCpp vec2b;
            VecFx32 vec = mPos;
            vec.y += FX_F32_TO_FX32(1.0f);

            UnkStruct_027e0cd8_0C_Base *tmpVar = data_027e0cd8->mUnk_0C;
            func_01ffedac(&vec2b, &vec);

            fx32 tmpRet = tmpVar->func_01ffedf4(&vec2b);
            if (tmpRet - 0x66 <= mPos.y && 0 < mVel.y) {
                mUnk_154 = mPos.y;
                mVel.y   = 0;
                mUnk_2C  = 0;
                mUnk_166++;
                mUnk_168 = 0;
                if (mUnk_5C.mParams[0] != 0) {
                    VecFx32_Copy(&mPos, &mUnk_174.vec);
                    if (mUnk_5C.mParams[0] == 0) {
                        return;
                    }
                    func_ov000_0205ad64(&mUnk_174.vec, &mUnk_174.vec);
                    func_ov000_02070cc0(data_027e09a4, &mUnk_174.vec, mUnk_5C.mUnk_24);
                }
            }
            break;
        }
        case 1: {
            SET_FLAG2(mUnk_180, 0);
            VecFx32 vec;
            VecFx32_Init(0, 0, 0, &vec);
            func_01ff993c(&mVel, &vec, 0x21);
            this->func_ov094_021676f4();
            this->func_ov094_02167d20();
            if (GET_FLAG2(mUnk_180, 1)) {
                this->func_ov094_021668e0(4);
            }
            break;
        }
    }

    this->func_ov094_02167794(0x600, 0x80, 0x500);
}

void ActorUnkPSWB::func_ov094_02167224(void) {
    mUnk_2C = 0;
    VecFx32_Init(0, 0, 0, &mVel);
}

void ActorUnkPSWB::func_ov094_0216723c(void) {}
unk32 ActorUnkPSWB::func_ov094_02167518(void) {}
void ActorUnkPSWB::func_ov094_021675ac(void) {}
void ActorUnkPSWB::func_ov094_02167614(void) {}
void ActorUnkPSWB::func_ov094_02167688(void) {}

// matched (empty)
void ActorUnkPSWB::vfunc_6C(void) {}

void ActorUnkPSWB::func_ov094_021676f4(void) {}
void ActorUnkPSWB::func_ov094_02167794(unk32 param1, unk32 param2, unk32 param3) {}

void ActorUnkPSWB::func_ov094_0216781c(void) {
    mUnk_170 = FX_Atan2Idx(mVel.x, mVel.z);
}

unk32 ActorUnkPSWB::vfunc_5C(void) {
    return 0;
}

unk32 ActorUnkPSWB::vfunc_60(void) {
    return 0;
}

void ActorUnkPSWB::vfunc_2C(unk32 param1) {}

unk32 ActorUnkPSWB::vfunc_70(void) {
    return 0x63d;
}

void ActorUnkPSWB::func_ov094_02167ab8(void) {}

bool ActorUnkPSWB::func_ov094_02167b24(unk32 param1) {
    if (param1 == 1 && !data_027e0ce0->func_01fff1a4()) {
        return false;
    }
    return func_ov000_0208bba4(data_027e0ce0, param1);
}

void ActorUnkPSWB::func_ov094_02167b64(unk32 param1) {}

void ActorUnkPSWB::func_ov094_02167bf0(void) {
    if (GET_FLAG2(mUnk_180, 1)) {
        return;
    }

    SET_FLAG2(mUnk_180, 1);
    mUnk_14C = 0xFFFFFB33;

    if (mUnk_16E == 0) {
        mUnk_16C = 0;
    }
    mUnk_16E = 0x38E;

    if (GET_FLAG2(mUnk_180, 0)) {
        this->func_ov094_021668e0(4);
    }
}

void ActorUnkPSWB::func_ov094_02167c54(void) {
    if (mUnk_5C.mParams[0] == 0) {
        return;
    }

    VecFx32 vec1, vec2;
    if (func_ov000_02070c84(data_027e09a4, &vec1, mUnk_5C.mUnk_24) != 0) {
        if (!VecFx32_IsEqual_Bool(&vec1, &mUnk_5C.mInitialPos)) {
            vec2       = vec1;
            mPos.x     = vec2.x;
            mPos.y     = vec2.y;
            mPos.z     = vec2.z;
            mPrevPos.x = vec2.x;
            mPrevPos.y = vec2.y;
            mPrevPos.z = vec2.z;
            this->func_ov094_021668e0(4);
            mUnk_192 = 0x3B;
            mUnk_190 = 0;
        }
    }
}

void ActorUnkPSWB::func_ov094_02167d20(void) {}
void ActorUnkPSWB::func_ov094_02167dbc(void) {}
void ActorUnkPSWB::func_ov094_02167e58(void) {}

// return bool?
unk32 ActorUnkPSWB::vfunc_58(VecFx32 *param1) {
    if (UnkStruct_ov048_02137600::vfunc_58(param1) != 0) {
        u32 var1;
        unk32 ret = 1;
        func_01fff05c(&var1, data_027e0cd8->mUnk_0C, param1);
        if ((var1 & 0x1F) != 0xC) {
            u32 var2; // some kind of ref?
            func_01fff05c((u32 *) &var2, data_027e0cd8->mUnk_0C, param1);
            bool cond  = true;
            u32 tmpCpy = *(volatile u32 *) &var2;
            if ((var2 & 0x1F) != 8 && (tmpCpy >> 5 & 3) != 2) {
                cond = false;
            }
            if (!cond) {
                ret = 0;
            }
        }
        return ret;
    } else {
        return 0;
    }
}

// non-matching (regalloc in the FX_Muls)
void ActorUnkPSWB::func_ov094_0216825c(VecFx32 *param1, unk32 param2) {
    if (0 < VecFx32_Dot(param1, &mVel)) {
        return;
    }

    if (VecFx32_IsCleared(&mVel)) {
        return;
    }

    if (param1->x != 0) {
        mVel.x = FX_MulInline(param1->x, ABS(mVel.x));
    }

    if (param1->z != 0) {
        mVel.z = FX_MulInline(param1->z, ABS(mVel.z));
    }

    func_01ff93c0(&mVel, param2);
}

UnkStruct_ov094_02176fb8::UnkStruct_ov094_02176fb8(ActorUnkPSWB *param1) :
    mUnk_0C(param1) {}

UnkStruct_ov094_02176fb8::~UnkStruct_ov094_02176fb8() {
    mUnk_0C = NULL;
}

bool UnkStruct_ov094_02176fb8::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
    VecFx32 vec;
    VecFx16_Copy2VecFx32(&param1->mUnk_08, &vec);

    mUnk_0C->func_ov094_0216825c(&vec, 0x800);
    return 1;
}
