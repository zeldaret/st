#include "Actor/ActorItemFlower.hpp"

#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

static PTMF<ActorItemFlower> data_ov031_021141b4[ActorItemFlowerState_Max] = {
    ActorItemFlower::func_ov031_020f11b4, // ActorItemFlowerState_0
    ActorItemFlower::func_ov031_020f11cc, // ActorItemFlowerState_1
    ActorItemFlower::func_ov031_020f11e4, // ActorItemFlowerState_2
    ActorItemFlower::func_ov031_020f11fc, // ActorItemFlowerState_3
    ActorItemFlower::func_ov031_020f121c, // ActorItemFlowerState_4
    ActorItemFlower::func_ov031_020f1308, // ActorItemFlowerState_5
    ActorItemFlower::func_ov031_020f0244, // ActorItemFlowerState_6
    ActorItemFlower::func_ov031_020f0514, // ActorItemFlowerState_7
};

static PTMF<ActorItemFlower> data_ov031_02114174[ActorItemFlowerState_Max] = {
    ActorItemFlower::func_ov031_020f11a8, // ActorItemFlowerState_0
    ActorItemFlower::func_ov031_020f11c0, // ActorItemFlowerState_1
    ActorItemFlower::func_ov031_020f11d8, // ActorItemFlowerState_2
    ActorItemFlower::func_ov031_020f11f0, // ActorItemFlowerState_3
    ActorItemFlower::func_ov031_020f1208, // ActorItemFlowerState_4
    ActorItemFlower::func_ov031_020f1230, // ActorItemFlowerState_5
    ActorItemFlower::func_ov031_020f0220, // ActorItemFlowerState_6
    ActorItemFlower::func_ov031_020f04dc, // ActorItemFlowerState_7
};

DECL_PROFILE(ActorProfileItemFlower);

Actor *ActorProfileItemFlower::Create() {
    return new(HeapIndex_2) ActorItemFlower();
}

ActorProfileItemFlower::ActorProfileItemFlower() :
    ActorProfile(ActorId_ItemFlower) {
    this->mUnk_04.size = FLOAT_TO_FX32(0.25f);
}

ActorItemFlower::ActorItemFlower() :
    mUnk_110(G3d_GetModelPtr(data_ov000_020b5d34.GetProfileFromId(MapObjectId_ITFL)->vfunc_04()->mUnk_50), 0x1, 0x1) {}

bool ActorItemFlower::vfunc_18(unk32 param1) {
    this->Actor_ov031_02113fd4::vfunc_18(param1);
    this->vfunc_5C(ActorItemFlowerState_0);
    return true;
}

void ActorItemFlower::vfunc_5C(ActorState state) {
    this->mState  = state;
    this->mUnk_EC = 0x0;

    CALL_PTMF(PTMF<ActorItemFlower>, data_ov031_02114174[this->mState]);
}

void ActorItemFlower::vfunc_20() {
    CALL_PTMF(PTMF<ActorItemFlower>, data_ov031_021141b4[this->mState]);
}

void ActorItemFlower::vfunc_2C(unk32 param1) {
    if (!this->func_01fff5d0(param1, 0x0)) {
        return;
    }
    this->mUnk_110.vfunc_18(&this->mPos);
}

void ActorItemFlower::func_ov031_020f11a8() {
    this->Actor_ov031_02113fd4::func_ov031_020f0094();
}

void ActorItemFlower::func_ov031_020f11b4() {
    this->Actor_ov031_02113fd4::func_ov031_020f0098();
}

void ActorItemFlower::func_ov031_020f11c0() {
    this->Actor_ov031_02113fd4::func_ov031_020f009c();
}

void ActorItemFlower::func_ov031_020f11cc() {
    this->Actor_ov031_02113fd4::func_ov031_020f00a0();
}

void ActorItemFlower::func_ov031_020f11d8() {
    this->Actor_ov031_02113fd4::func_ov031_020f009c();
}

void ActorItemFlower::func_ov031_020f11e4() {
    this->Actor_ov031_02113fd4::func_ov031_020f00c4();
}

void ActorItemFlower::func_ov031_020f11f0() {
    this->Actor_ov031_02113fd4::func_ov031_020f0198();
}

void ActorItemFlower::func_ov031_020f11fc() {
    this->Actor_ov031_02113fd4::func_ov031_020f01ac();
}

void ActorItemFlower::func_ov031_020f1208() {
    this->vfunc_40();
}

void ActorItemFlower::func_ov031_020f121c() {
    this->vfunc_44();
}

void ActorItemFlower::func_ov031_020f1230() {
    data_027e09a8->func_ov000_02071b30(0x102, &this->mPos, 0x0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);

    VecFx32 vecSp08;
    VecFx32_Init(this->mPos.x, this->mPos.y + FLOAT_TO_FX32(0.5f), this->mPos.z, &vecSp08);

    data_027e0cec->func_ov000_0209feac(0x875, &vecSp08, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x876, &vecSp08, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x821, &vecSp08, 0x4, 0x0, 0x0);

    this->Actor_ov031_02113fd4::func_ov031_020f0450(0x0);
}

void ActorItemFlower::func_ov031_020f1308() {
    this->Actor_ov031_02113fd4::func_ov031_020f04a8();
}
