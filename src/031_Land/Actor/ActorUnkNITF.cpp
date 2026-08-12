#include "Actor/ActorUnkNITF.hpp"

#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

static PTMF<ActorUnkNITF> data_ov031_021141b4[ActorUnkNITFState_Max] = {
    ActorUnkNITF::func_ov031_020f11b4, // ActorUnkNITFState_0
    ActorUnkNITF::func_ov031_020f11cc, // ActorUnkNITFState_1
    ActorUnkNITF::func_ov031_020f11e4, // ActorUnkNITFState_2
    ActorUnkNITF::func_ov031_020f11fc, // ActorUnkNITFState_3
    ActorUnkNITF::func_ov031_020f121c, // ActorUnkNITFState_4
    ActorUnkNITF::func_ov031_020f1308, // ActorUnkNITFState_5
    ActorUnkNITF::func_ov031_020f0244, // ActorUnkNITFState_6
    ActorUnkNITF::func_ov031_020f0514, // ActorUnkNITFState_7
};

static PTMF<ActorUnkNITF> data_ov031_02114174[ActorUnkNITFState_Max] = {
    ActorUnkNITF::func_ov031_020f11a8, // ActorUnkNITFState_0
    ActorUnkNITF::func_ov031_020f11c0, // ActorUnkNITFState_1
    ActorUnkNITF::func_ov031_020f11d8, // ActorUnkNITFState_2
    ActorUnkNITF::func_ov031_020f11f0, // ActorUnkNITFState_3
    ActorUnkNITF::func_ov031_020f1208, // ActorUnkNITFState_4
    ActorUnkNITF::func_ov031_020f1230, // ActorUnkNITFState_5
    ActorUnkNITF::func_ov031_020f0220, // ActorUnkNITFState_6
    ActorUnkNITF::func_ov031_020f04dc, // ActorUnkNITFState_7
};

DECL_PROFILE(ActorProfileUnkNITF);

Actor *ActorProfileUnkNITF::Create() {
    return new(HeapIndex_2) ActorUnkNITF();
}

ActorProfileUnkNITF::ActorProfileUnkNITF() :
    ActorProfile(ActorId_NITF) {
    this->mUnk_04.size = FLOAT_TO_FX32(0.25f);
}

ActorUnkNITF::ActorUnkNITF() :
    mUnk_110(G3d_GetModelPtr(data_ov000_020b5d34.GetProfileFromId(MapObjectId_ITFL)->vfunc_04()->mUnk_50), 0x1, 0x1) {}

bool ActorUnkNITF::vfunc_18(unk32 param1) {
    this->Actor_ov031_02113fd4::vfunc_18(param1);
    this->vfunc_5C(ActorUnkNITFState_0);
    return true;
}

void ActorUnkNITF::vfunc_5C(ActorState state) {
    this->mState  = state;
    this->mUnk_EC = 0x0;

    CALL_PTMF(PTMF<ActorUnkNITF>, data_ov031_02114174[this->mState]);
}

void ActorUnkNITF::vfunc_20() {
    CALL_PTMF(PTMF<ActorUnkNITF>, data_ov031_021141b4[this->mState]);
}

void ActorUnkNITF::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    this->mUnk_110.vfunc_18(&this->mPos);
}

void ActorUnkNITF::func_ov031_020f11a8() {
    this->Actor_ov031_02113fd4::func_ov031_020f0094();
}

void ActorUnkNITF::func_ov031_020f11b4() {
    this->Actor_ov031_02113fd4::func_ov031_020f0098();
}

void ActorUnkNITF::func_ov031_020f11c0() {
    this->Actor_ov031_02113fd4::func_ov031_020f009c();
}

void ActorUnkNITF::func_ov031_020f11cc() {
    this->Actor_ov031_02113fd4::func_ov031_020f00a0();
}

void ActorUnkNITF::func_ov031_020f11d8() {
    this->Actor_ov031_02113fd4::func_ov031_020f009c();
}

void ActorUnkNITF::func_ov031_020f11e4() {
    this->Actor_ov031_02113fd4::func_ov031_020f00c4();
}

void ActorUnkNITF::func_ov031_020f11f0() {
    this->Actor_ov031_02113fd4::func_ov031_020f0198();
}

void ActorUnkNITF::func_ov031_020f11fc() {
    this->Actor_ov031_02113fd4::func_ov031_020f01ac();
}

void ActorUnkNITF::func_ov031_020f1208() {
    this->vfunc_40();
}

void ActorUnkNITF::func_ov031_020f121c() {
    this->vfunc_44();
}

void ActorUnkNITF::func_ov031_020f1230() {
    data_027e09a8->func_ov000_02071b30(0x102, &this->mPos, 0x0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);

    VecFx32 vecSp08;
    VecFx32_Init(this->mPos.x, this->mPos.y + FLOAT_TO_FX32(0.5f), this->mPos.z, &vecSp08);

    data_027e0cec->func_ov000_0209feac(0x875, &vecSp08, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x876, &vecSp08, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x821, &vecSp08, 0x4, 0x0, 0x0);

    this->Actor_ov031_02113fd4::func_ov031_020f0450(0x0);
}

void ActorUnkNITF::func_ov031_020f1308() {
    this->Actor_ov031_02113fd4::func_ov031_020f04a8();
}
