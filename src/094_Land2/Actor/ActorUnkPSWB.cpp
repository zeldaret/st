#include "Actor/ActorUnkPSWB.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorBomb.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkSCCN.hpp"
#include "CommonFuncs.hpp"
#include "MapObject/MapObject.hpp"
#include "RefStruct.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "flags.h"
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
extern unk32 data_ov094_021785c0;

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
    mUnk_174(0),
    mUnk_178(0),
    mUnk_17C(0),
    mUnk_180(0),
    mUnk_184(0),
    mUnk_188(-1),
    mUnk_18C(0),
    mUnk_190(0),
    mUnk_192(0),
    mUnk_194(),
    mUnk_1A4(this) {}

ActorUnkPSWB::~ActorUnkPSWB() {
    mUnk_184.func_ov000_020a0334();
    data_027e09c0->func_ov000_0207e254(&mUnk_194);
}

bool ActorUnkPSWB::Init(unk32 param1) {}

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

void ActorUnkPSWB::func_ov094_02166c88(void) {}

void ActorUnkPSWB::func_ov094_02166e10(void) {
    u16 var;
    func_ov000_0208bb84(&var, data_027e0ce0, mUnk_98);
    if (var != 0) {
        func_ov000_0208bb94(data_027e0ce0, mUnk_98, 1);
    }
    mUnk_2C = 0x52;
    this->func_ov094_0216781c();
}

void ActorUnkPSWB::func_ov094_02166e60(void) {}
void ActorUnkPSWB::func_ov094_02166f94(void) {}
void ActorUnkPSWB::func_ov094_02167024(void) {}

void ActorUnkPSWB::func_ov094_02167224(void) {
    mUnk_2C = 0;
    VecFx32_Init(0, 0, 0, &mVel);
}

void ActorUnkPSWB::func_ov094_0216723c(void) {}
void ActorUnkPSWB::func_ov094_02167518(void) {}
void ActorUnkPSWB::func_ov094_021675ac(void) {}
void ActorUnkPSWB::func_ov094_02167614(void) {}
void ActorUnkPSWB::func_ov094_02167688(void) {}

// matched (empty)
void ActorUnkPSWB::vfunc_6C(void) {}

void ActorUnkPSWB::func_ov094_021676f4(void) {}
void ActorUnkPSWB::func_ov094_02167794(void) {}

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

void ActorUnkPSWB::func_ov094_02167c54(void) {}
void ActorUnkPSWB::func_ov094_02167d20(void) {}
void ActorUnkPSWB::func_ov094_02167dbc(void) {}
void ActorUnkPSWB::func_ov094_02167e58(void) {}
void ActorUnkPSWB::vfunc_58(void) {}
void ActorUnkPSWB::func_ov094_0216825c(void *param1, VecFx32 *param2, unk32 param3) {}

UnkStruct_ov094_02176fb8::UnkStruct_ov094_02176fb8(void *param1) :
    mUnk_0C(param1) {}

UnkStruct_ov094_02176fb8::~UnkStruct_ov094_02176fb8() {
    mUnk_0C = NULL;
}

bool UnkStruct_ov094_02176fb8::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
    VecFx32 vec;
    VecFx16_Copy2VecFx32(&param1->mUnk_08, &vec);
    // VecFx16_Copy(param1, &vec);
    ActorUnkPSWB::func_ov094_0216825c(mUnk_0C, &vec, 0x800);
    return 1;
}
