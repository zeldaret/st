#define VECFX32_CTORS

#include "Actor/ActorUnkMKUR.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"

extern "C" unk32 data_ov000_020aecf8;

UnkStruct_ov019_020d24c8_28_258_00_Derived1 data_ov032_0212290c;
static const VecFx32 data_ov032_021223a8(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f));

static ActorUnkZLSL_AnimationTag data_ov032_021223b4 = {.index = 0, .name = "walk", .unknown = 0x0};
static ActorUnkZLSL_AnimationTag data_ov032_021223cc = {.index = 1, .name = "discover", .unknown = 0x1};

static PTMF<ActorUnkMKUR> data_ov032_021223e4[ActorUnkMKURState_Max] = {
    ActorUnkMKUR::func_ov032_0211c2c4, // ActorUnkMKURState_0
    ActorUnkMKUR::func_ov032_0211c444, // ActorUnkMKURState_1
    ActorUnkMKUR::func_ov032_0211be30, // ActorUnkMKURState_2
    ActorUnkMKUR::func_ov032_0211bf84, // ActorUnkMKURState_3
    ActorUnkMKUR::func_ov032_0211c53c, // ActorUnkMKURState_4
    ActorUnkMKUR::func_ov032_0211c73c, // ActorUnkMKURState_5
    ActorUnkMKUR::func_ov032_0211c07c  // ActorUnkMKURState_6
};
static PTMF<ActorUnkMKUR> data_ov032_0212241c[ActorUnkMKURState_Max] = {
    ActorUnkMKUR::func_ov032_0211c340, // ActorUnkMKURState_0
    ActorUnkMKUR::func_ov032_0211c4d4, // ActorUnkMKURState_1
    ActorUnkMKUR::func_ov032_0211bea8, // ActorUnkMKURState_2
    ActorUnkMKUR::func_ov032_0211bffc, // ActorUnkMKURState_3
    ActorUnkMKUR::func_ov032_0211c5cc, // ActorUnkMKURState_4
    ActorUnkMKUR::func_ov032_0211c7bc, // ActorUnkMKURState_5
    ActorUnkMKUR::func_ov032_0211c108  // ActorUnkMKURState_6
};

DECL_PROFILE(ActorProfileUnkMKUR);

Actor *ActorProfileUnkMKUR::Create() {
    return new(HeapIndex_2) ActorUnkMKUR();
}

ActorProfileUnkMKUR::ActorProfileUnkMKUR() :
    ActorProfile_ov000_020b3018(ActorId_MKUR, ActorId_KURI) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.4f));
}

ActorUnkMKUR::ActorUnkMKUR() :
    mUnk_0B0(G3d_GetModelPtr(GET_PROFILE(ActorProfileUnkMKUR)->vfunc_04()->mUnk_50)),
    mUnk_110(&this->mUnk_0B0, GET_PROFILE(ActorProfileUnkMKUR)->vfunc_04()),
    mUnk_1BC(-0x1),
    mUnk_1BE(0x0) {
    *(s16 *) &this->mUnk_44 |= 0x40;
    SET_FLAG(this->mFlags, ActorFlag_6);

    this->mUnk_1E0.mUnk_00.mUnk_08 = 0x1;
    this->mUnk_38                  = &this->mUnk_1E0.mUnk_00;
    this->mUnk_224                 = true;

    this->mUnk_21C = 0x0;
    this->mUnk_220 = 0x0;
    this->mUnk_1C0.mUnk_04 |= 0x8000;

    // TBD
    ((UnkStruct_ov019_020d24c8_28_258_00 *) &data_ov032_0212290c)->func_ov000_0205fc20(0x5D, 0x22, NULL, NULL);
    data_ov032_0212290c.func_ov000_0205fc20(0x5D, 0x7, NULL, NULL);

    this->Actor::func_ov000_0209862c(0x4);

    SET_FLAG(this->mFlags, ActorFlag_9);
    this->mUnk_A4 = &data_ov032_021223a8;

    if (this->func_ov032_0211be04()) {
        UNSET_FLAG(this->mFlags, ActorFlag_16);
    }
}

ActorUnkMKUR::~ActorUnkMKUR() {}

bool ActorUnkMKUR::vfunc_18(unk32 param1) {
    this->mUnk_1EC.mUnk_00 = this->mUnk_5C.mParams[1];

    this->SetState(0x0);

    return true;
}

void ActorUnkMKUR::SetState(ActorState state) {
    ActorState oldState = this->mState;
    this->mState        = state;

    this->mUnk_1BC = oldState;
    this->mUnk_1BE = 0x0;
    this->mUnk_2C  = data_ov000_020aecf8;
    this->mUnk_224 = true;

    CALL_PTMF(PTMF<ActorUnkMKUR>, data_ov032_021223e4[oldState]);
}

// non-matching
void ActorUnkMKUR::vfunc_20() {
    this->mUnk_3C = &this->mUnk_1C0;
    if (!this->func_ov032_0211c938()) {
        this->mUnk_1EC.func_ov032_0211d028();
    } else {
        this->mUnk_1EC.func_ov032_0211cf74();
    }

    CALL_PTMF(PTMF<ActorUnkMKUR>, data_ov032_0212241c[this->mState]);

    this->Actor::func_ov000_02098838();
    this->func_ov032_0211cb2c();
}

// non-matching
void ActorUnkMKUR::vfunc_30(Actor_vfunc_30 *param1) {
    if (!this->func_ov032_0211be04()) {
        return;
    }
    this->Actor::func_ov017_020bef88(param1, (void *) 0x11142, 0x1);
}

extern "C" void func_01ffc634(ModelRender *, VecFx32 *, UnkAngleStruct, VecFx32 *);

// non-matching
void ActorUnkMKUR::vfunc_2C(unk32 param1) {
    if (!this->Actor::func_01fff5d0(param1, 0x0)) {
        return;
    }

    this->Actor::func_ov017_020bf5c4(&this->mPos, 0x548, 0x548, 0x1F, 0x0);

    VecFx32 vec = this->mPos;

    vec.y += this->mUnk_21C;

    func_01ffc634(&this->mUnk_0B0, &this->mUnk_98, this->mAngleStruct, &vec);
}

bool ActorUnkMKUR::func_ov032_0211be04() {
    if (this->mUnk_5C.mParams[2] == 0x1 && !this->func_ov000_02098a60(0x0)) {
        return true;
    }

    return false;
}

void ActorUnkMKUR::func_ov032_0211be30() {
    this->mUnk_110.vfunc_1C(data_ov032_021223b4, 0x1000, 0x19A, 0x0);

    this->mUnk_1C0.func_ov000_02097bec();
    this->mUnk_38->mUnk_08 = 0x3;
}

// non-matching
void ActorUnkMKUR::func_ov032_0211bea8() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211bf84() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211bffc() {}

void ActorUnkMKUR::func_ov032_0211c07c() {
    this->mUnk_110.vfunc_1C(data_ov032_021223cc, 0x1000, 0x19A, 0x0);

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    data_027e09a8->func_ov000_02071b30(0x9837, &this->mPos, 0x0);
}

// non-matching
void ActorUnkMKUR::func_ov032_0211c108() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211c2c4() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211c340() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211c444() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211c4d4() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211c53c() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211c5cc() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211c73c() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211c7bc() {}
// non-matching
bool ActorUnkMKUR::func_ov032_0211c938() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211c9d8() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211ca20() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211ca6c() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211cab8() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211cb2c() {}

ActorUnkMKUR_1EC::ActorUnkMKUR_1EC() :
    mUnk_00(0x0),
    mUnk_04(0x0),
    mUnk_08(0x0),
    mUnk_1C(0x0),
    mUnk_20(0x0),
    mUnk_24(0x0),
    mUnk_2C(0x0) {
    this->mUnk_0C = 0x0;
    this->mUnk_10 = 0x0;
    this->mUnk_14 = 0x0;
    this->mUnk_18 = 0x0;
    this->mUnk_28 = 0x0;
}

// non-matching
void ActorUnkMKUR::func_ov032_0211cc48() {}

// non-matching
UnkStruct_027e0960_TableEntry_04 *ActorUnkMKUR_1EC::func_ov032_0211cd20(VecFx32 *param1) {
    UnkStruct_027e0960_TableEntry *tEntry = data_027e0960->func_ov000_0205a3fc(*param1, this->mUnk_00);
    tEntry->func_ov000_02059da4(param1);
    return tEntry->mTable.GetPtr(0x1);
}

// non-matching
void ActorUnkMKUR::func_ov032_0211cd60() {}

void ActorUnkMKUR_1EC::func_ov032_0211cf74() {
    this->func_ov032_0211cfac(0x0);

    if (!data_027e0ce0->func_01fff1a4()) {
        return;
    }

    this->func_ov032_0211cfac(0x1);
}

extern "C" bool func_02017930(unk32, UnkStruct_027e0960_TableEntry_04 *);

// non-matching
void ActorUnkMKUR_1EC::func_ov032_0211cfac(unk32 param1) {
    VecFx32 sp00;
    UnkStruct_027e0960_TableEntry_04 *entry04 = this->func_ov032_0211cd20(data_027e0ce0->func_01fff148(param1));
    entry04->vfunc_0C(&sp00);

    if (entry04->mUnk_0C != 0x0 && func_02017930(entry04->mUnk_0C, entry04)) {
        return;
    }
    entry04->mUnk_0C = 0x0;
}

void ActorUnkMKUR_1EC::func_ov032_0211d028() {
    this->mUnk_14 = 0x0;
    this->mUnk_18 = 0x0;
    this->mUnk_0C = 0x0;
    this->mUnk_10 = 0x0;
}

// non-matching
void ActorUnkMKUR::func_ov032_0211d040() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d08c() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d2e4() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d384() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d568() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d674() {}
// non-matching
void ActorUnkMKUR_1EC::func_ov032_0211d6d8() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d7e8() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d80c() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d830() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d864() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d910() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211d920() {}
// non-matching
void ActorUnkMKUR::func_ov032_0211da0c() {}
