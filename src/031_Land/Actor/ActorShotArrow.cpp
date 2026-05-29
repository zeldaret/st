#include "Actor/ActorShotArrow.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"

typedef struct {
    /* 000 */ STRUCT_PAD(0x0, 0x25B);
    /* 25B */ bool mUnk_25B;
} UnkStruct_ov060_02163ff4;

extern UnkStruct_027e0ce0 *data_027e0ce0;
extern UnkStruct_027e09a8 *data_027e09a8;
extern UnkStruct_ov060_02163ff4 data_ov060_02163ff4;

extern "C" void func_ov000_0207b6c0();
extern "C" void func_ov000_02098838(Actor *);

ARM DECL_PROFILE(ActorProfileShotArrow);

ARM Actor *ActorProfileShotArrow::Create() {
    return new(HeapIndex_2) ActorShotArrow();
}

ARM ActorProfileShotArrow::ActorProfileShotArrow() :
    ActorProfile(ActorId_AROW) {
    this->mUnk_04.Init(FLOAT_TO_Q20(0.2));
}

// non-matching
ARM ActorShotArrow::ActorShotArrow() {}

ARM unk32 ActorShotArrow::func_ov031_020f1404() {
    return data_027e0ce0->mUnk_1C->mUnk_0C;
}

// non-matching ?
ARM ActorShotArrow *ActorShotArrow::func_ov031_020f1608() {
    func_ov000_0207b6c0();
    return this;
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f173c() {}

ARM void ActorShotArrow::func_ov031_020f1868() {
    this->mUnk_2C = 0;
}

ARM void ActorShotArrow::func_ov031_020f1874() {}

static PTMF<ActorShotArrow> data_ov031_021142c0[] = {ActorShotArrow::func_ov031_020f1a64, ActorShotArrow::func_ov031_020f1c24,
                                                     ActorShotArrow::func_ov031_020f1dd4, ActorShotArrow::func_ov031_020f1f54,
                                                     ActorShotArrow::func_ov031_020f206c, ActorShotArrow::func_ov031_020f2134,
                                                     ActorShotArrow::func_ov031_020f21dc, ActorShotArrow::func_ov031_020f1874};

ARM void ActorShotArrow::func_ov031_020f1878(s16 param_1) {
    this->mUnk_4C = param_1;
    this->func_ov031_020f1868();

    CALL_PTMF(PTMF<ActorShotArrow>, data_ov031_021142c0[this->mUnk_4C]);
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f18bc() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1958() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f195c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1a64() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1b04() {}

ARM void ActorShotArrow::func_ov031_020f1c24() {
    this->mVel.x = FLOAT_TO_Q20(0.0);
    this->mVel.y = FLOAT_TO_Q20(0.0);
    this->mVel.z = FLOAT_TO_Q20(0.0);

    this->func_ov031_020f2794(0x1);
    this->mUnk_174 = 0x1555;

    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f1c7c() {}

ARM void ActorShotArrow::func_ov031_020f1dd4() {
    this->mVel.x = FLOAT_TO_Q20(0.0);
    this->mVel.y = FLOAT_TO_Q20(0.0);
    this->mVel.z = FLOAT_TO_Q20(0.0);

    this->func_ov031_020f2794(0x1);
    this->mUnk_174 = 0x1555;

    data_027e09a8->func_ov000_02071b30(0x8D7A, &this->mPos, 0);
    this->mUnk_16C = 0;
    this->mUnk_50  = 0;
    this->mUnk_52  = this->mUnk_258;
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f1e3c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f1f54() {}

ARM void ActorShotArrow::func_ov031_020f2010() {
    if (this->func_ov031_020f3210(0x1) != 0) {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    this->func_ov031_020f2280();
    func_ov000_02098838(this);

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);
}

ARM void ActorShotArrow::func_ov031_020f206c() {
    this->func_ov031_020f2794(0);
    this->mUnk_170 = 0x10;
    this->mUnk_16C = 0;
    this->mUnk_168 = 0;

    if (this->mUnk_25C != 0x0) {
        if (this->mUnk_25D == 0x0) {
            data_ov060_02163ff4.mUnk_25B = true;
        }
    }
}

// non-matching
ARM void ActorShotArrow::func_ov031_020f20bc() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2134() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2160() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f21dc() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2214() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2270() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2280() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f229c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f22d4() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2310() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2654() {}
// non-matching
ARM unk16 ActorShotArrow::func_ov031_020f2794(unk16 param_1) {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f28ac() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2b8c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2bbc() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2bec() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2c08() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2cac() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2ef0() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2f5c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f2f9c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3000() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f311c() {}
// non-matching
ARM unk16 ActorShotArrow::func_ov031_020f3210(unk16) {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3258() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3288() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f32c4() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f32e0() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3304() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3310() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f33bc() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f370c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f374c() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f38b0() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3c38() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3d04() {}
// non-matching
ARM void ActorShotArrow::func_ov031_020f3d4c() {}

ARM ActorShotArrow::~ActorShotArrow() {}
ARM ActorProfileShotArrow::~ActorProfileShotArrow() {}
