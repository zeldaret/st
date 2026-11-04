#include "Actor/ActorUnkPSWB.hpp"
#include "CommonFuncs.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "flags.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"

struct UnkStruct_data_ov094_021785a4 {
    /* 00 */ PAD(0x00, 0x1C);
    /* 1C */ unk32 *mUnk_1C;
};

extern UnkStruct_data_ov094_021785a4 data_ov094_021785a4;

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
bool ActorUnkPSWB_194::vfunc_08() {}

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
void ActorUnkPSWB::func_ov094_02166890(void) {}

void ActorUnkPSWB::func_ov094_021668cc(void) {
    mUnk_150 = 0;
    mUnk_166 = 0;
}

void ActorUnkPSWB::func_ov094_021668e0(void) {}
void ActorUnkPSWB::Update(void) {}

void ActorUnkPSWB::vfunc_24(void) {
    if (mState == 0) {
        this->func_ov094_02166c10();
    }
}

void ActorUnkPSWB::func_ov094_02166bcc(void) {}

void ActorUnkPSWB::func_ov094_02166c10(void) {
    this->func_ov094_02167688();
    this->func_ov094_02167b64(0);
}

void ActorUnkPSWB::func_ov094_02166c2c(void) {}
void ActorUnkPSWB::func_ov094_02166c88(void) {}
void ActorUnkPSWB::func_ov094_02166e10(void) {}
void ActorUnkPSWB::func_ov094_02166e60(void) {}
void ActorUnkPSWB::func_ov094_02166f94(void) {}
void ActorUnkPSWB::func_ov094_02167024(void) {}
void ActorUnkPSWB::func_ov094_02167224(void) {}
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
    mUnk_170 = func_01ffbbe0(mVel.x, mVel.z);
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
void ActorUnkPSWB::func_ov094_02167bf0(void) {}
void ActorUnkPSWB::func_ov094_02167c54(void) {}
void ActorUnkPSWB::func_ov094_02167d20(void) {}
void ActorUnkPSWB::func_ov094_02167dbc(void) {}
void ActorUnkPSWB::func_ov094_02167e58(void) {}
void ActorUnkPSWB::vfunc_58(void) {}
void ActorUnkPSWB::func_ov094_0216825c(void *param1, VecFx32 *param2, unk32 param3) {}

UnkStruct_ov094_02176fb8::UnkStruct_ov094_02176fb8(void *param1) :
    // mUnk_08((0x7000 & ~0x7000) | 0x7000),
    mUnk_0C(param1) {
    mUnk_08 = 0;
    mUnk_08 &= ~0x7000;
    mUnk_08 |= 0x7000;
}

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
