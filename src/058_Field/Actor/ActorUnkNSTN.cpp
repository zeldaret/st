#include "Actor/ActorUnkNSTN.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

static PTMF<ActorUnkNSTN> data_ov058_02154620[ActorUnkNSTNState_Max] = {
    &ActorUnkNSTN::func_ov058_02142bb8,         // ActorUnkNSTNState_0
    &ActorUnkNSTN::func_ov058_02142bd0,         // ActorUnkNSTNState_1
    &ActorUnkNSTN::func_ov058_02142be8,         // ActorUnkNSTNState_2
    &ActorUnkNSTN::func_ov058_02142c00,         // ActorUnkNSTNState_3
    &ActorUnkNSTN::func_ov058_02142c20,         // ActorUnkNSTNState_4
    &ActorUnkNSTN::func_ov058_02142d08,         // ActorUnkNSTNState_5
    &Actor_ov031_02113fd4::func_ov031_020f0244, // ActorUnkNSTNState_6
    &Actor_ov031_02113fd4::func_ov031_020f0514, // ActorUnkNSTNState_7
};

static PTMF<ActorUnkNSTN> data_ov058_021545e0[ActorUnkNSTNState_Max] = {
    &ActorUnkNSTN::func_ov058_02142bac,         // ActorUnkNSTNState_0
    &ActorUnkNSTN::func_ov058_02142bc4,         // ActorUnkNSTNState_1
    &ActorUnkNSTN::func_ov058_02142bdc,         // ActorUnkNSTNState_2
    &ActorUnkNSTN::func_ov058_02142bf4,         // ActorUnkNSTNState_3
    &ActorUnkNSTN::func_ov058_02142c0c,         // ActorUnkNSTNState_4
    &ActorUnkNSTN::func_ov058_02142c34,         // ActorUnkNSTNState_5
    &Actor_ov031_02113fd4::func_ov031_020f0220, // ActorUnkNSTNState_6
    &Actor_ov031_02113fd4::func_ov031_020f04dc, // ActorUnkNSTNState_7
};

DECL_PROFILE(ActorProfileUnkNSTN);

Actor *ActorProfileUnkNSTN::Create() {
    return new(HeapIndex_2) ActorUnkNSTN();
}

ActorProfileUnkNSTN::ActorProfileUnkNSTN() :
    ActorProfile(ActorId_NSTN) {
    this->mUnk_04.size = FX_F32_TO_FX32(0.25f);
}

ActorUnkNSTN::ActorUnkNSTN() :
    mUnk_110(G3d_GetModelPtr(data_ov000_020b5d34.GetProfileFromId(MapObjectId_STNE)->vfunc_04()->mUnk_50), 0x1) {}

// non-matching seems like the dtor of the modelrender
void ActorUnkNSTN::func_ov058_02142abc() {}

bool ActorUnkNSTN::Init(unk32 param1) {
    this->Actor_ov031_02113fd4::Init(param1);
    this->mUnk_10C = 0x1;

    return true;
}

unk32 ActorUnkNSTN::vfunc_58() {
    return 0x6;
}

void ActorUnkNSTN::vfunc_5C(ActorState state) {
    this->mUnk_EC = 0x0;
    this->mState  = state;
    this->vfunc_60();

    CALL_PTMF(PTMF<ActorUnkNSTN>, data_ov058_021545e0[this->mState]);
}

void ActorUnkNSTN::Update() {
    CALL_PTMF(PTMF<ActorUnkNSTN>, data_ov058_02154620[this->mState]);
}

void ActorUnkNSTN::vfunc_2C(unk32 param1) {
    if (!this->Actor::func_01fff5d0(param1, 0x0)) {
        return;
    }

    this->mUnk_110.vfunc_18(&this->mPos);
}

void ActorUnkNSTN::func_ov058_02142bac() {
    this->Actor_ov031_02113fd4::func_ov031_020f0094();
}

void ActorUnkNSTN::func_ov058_02142bb8() {
    this->Actor_ov031_02113fd4::func_ov031_020f0098();
}

void ActorUnkNSTN::func_ov058_02142bc4() {
    this->Actor_ov031_02113fd4::func_ov031_020f009c();
}

void ActorUnkNSTN::func_ov058_02142bd0() {
    this->Actor_ov031_02113fd4::func_ov031_020f00a0();
}

void ActorUnkNSTN::func_ov058_02142bdc() {
    this->Actor_ov031_02113fd4::func_ov031_020f009c();
}

void ActorUnkNSTN::func_ov058_02142be8() {
    this->Actor_ov031_02113fd4::func_ov031_020f00c4();
}

void ActorUnkNSTN::func_ov058_02142bf4() {
    this->Actor_ov031_02113fd4::func_ov031_020f0198();
}

void ActorUnkNSTN::func_ov058_02142c00() {
    this->Actor_ov031_02113fd4::func_ov031_020f01ac();
}

void ActorUnkNSTN::func_ov058_02142c0c() {
    this->vfunc_40();
}

void ActorUnkNSTN::func_ov058_02142c20() {
    this->vfunc_44();
}

void ActorUnkNSTN::func_ov058_02142c34() {
    data_027e09a8->func_ov000_02071b30(0x101, &this->mPos, 0x0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);

    VecFx32Cpp vec(this->mPos.x, this->mPos.y + this->mUnk_110.mUnk_0C, this->mPos.z);

    data_027e0cec->func_ov000_0209feac(0x8D0, &vec.vec, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x8D1, &vec.vec, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x821, &vec.vec, 0x4, 0x0, 0x0);

    this->Actor_ov031_02113fd4::func_ov031_020f0450(0x0);
}

void ActorUnkNSTN::func_ov058_02142d08() {
    this->Actor_ov031_02113fd4::func_ov031_020f04a8();
}

ActorUnkNSTN::~ActorUnkNSTN() {}
ActorProfileUnkNSTN::~ActorProfileUnkNSTN() {}
