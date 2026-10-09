#include "Actor/ActorBlast.hpp"
#include "CommonFuncs.hpp"

#include "Actor/ActorManager.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d2c.hpp"
#include "global.h"
#include "math.hpp"

extern VecFx32 data_027e07d4;

DECL_PROFILE(ActorProfileBlast);

Actor *ActorProfileBlast::Create() {
    return new(HeapIndex_2) ActorBlast();
}

ActorProfileBlast::ActorProfileBlast() :
    ActorProfile(ActorId_Blast) {
    VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), &this->mUnk_04.pos);
}

bool ActorBlast_E8::vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3, const VecFx32 *param4) {
    struct {
        VecFx32 unk_00;
        int pad;
    } sp24;
    struct {
        VecFx32 unk_00;
        VecFx32 unk_0C;
    } spC;
    s32 temp_r1;
    s32 temp_r2_2;
    s32 var_r0;
    s32 var_r0_2;
    u16 *temp_r2;
    Actor *temp_r0;
    MapObject *temp_r0_2;

    param2->vfunc_10(&sp24.unk_00);

    if (ref.common.type != 0) {
        temp_r0 = gpActorManager->func_01fff3b4(ref);

        if (temp_r0 != NULL) {
            var_r0 = this->mUnk_04->mPos.y - (sp24.unk_00.y + temp_r0->mPos.y);

            if (var_r0 < 0) {
                var_r0 = 0 - var_r0;
            }

            if (var_r0 > 0x800) {
                return false;
            }
        }
    } else if (ref.moRef.unk_00_u16 & 0x1000) {
        RefStruct sp8 = ref;
        Vec2bCpp sp4  = sp8.moRef.GetUnk02();
        temp_r0_2     = gpMapObjManager->func_01fff498(sp4);

        if (temp_r0_2 != NULL) {
            if (temp_r0_2->GetMapObjectId() == 0x424C4354) {
                param2->vfunc_14(&spC.unk_00);

                if (this->mUnk_04->mPos.y < spC.unk_00.y + temp_r0_2->mPos.y &&
                    temp_r0_2->mPos.y + this->mUnk_04->mPos.y > spC.unk_0C.y + 0x800) {
                    return false;
                }
            } else {
                var_r0_2 = this->mUnk_04->mPos.y - (sp24.unk_00.y + temp_r0_2->mPos.y);

                if (var_r0_2 < 0) {
                    var_r0_2 = -var_r0_2;
                }

                if (var_r0_2 > 0x800) {
                    return false;
                }
            }
        }
    }

    return this->UnkStruct_027e0ce0_38_Base::vfunc_0C(ref, param2, param3, param4);
}

ActorBlast::ActorBlast() :
    mUnk_94(FX_F32_TO_FX32(0.625f)),
    mUnk_98(0, 24),
    mUnk_E8(this) {}

bool ActorBlast::Init(unk32 param1) {
#pragma unused(param1)

    this->mPos.y += FX_F32_TO_FX32(0.5f);

    this->mUnk_C8 = *this->mUnk_34;
    VecFx32_Add(&this->mUnk_C8.pos, &this->mPos, &this->mUnk_C8.pos);

    this->mUnk_D8 = *this->mUnk_30;
    VecFx32_Add(&this->mUnk_D8.pos, &this->mPos, &this->mUnk_D8.pos);

    data_027e09a8->func_ov000_02071b30(0xF3, &this->mPos, 0x0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);

    if (this->mUnk_5C.mParams[1] == 0x1) {
        this->mUnk_F4 = FX_F32_TO_FX32(0.2f);
        this->mUnk_F0 = FX_F32_TO_FX32(1.5f);
    } else {
        this->mUnk_F4 = FX_F32_TO_FX32(0.1f);
        this->mUnk_F0 = FX_F32_TO_FX32(1.0f);
    }

    data_027e09bc->mUnk_04[2]->func_ov000_0207a1e0(0x6);

    if (this->mUnk_5C.mParams[0] != 0x0) {
        data_027e0cec->func_ov000_0209feac(0x812, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x813, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x814, &this->mPos, 0x2, 0x0, 0x0);
    } else {
        data_027e0cec->func_ov000_0209feac(0x80B, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x80C, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x80D, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x80E, &this->mPos, 0x2, 0x0, 0x0);
        data_027e0cec->func_ov000_0209feac(0x80F, &this->mPos, 0x2, 0x0, 0x0);
    }

    UnkStruct_027e0cd8_0C_Base *data = data_027e0cd8->mUnk_0C;
    if (data->mUnk_110 == 0x7 && data->func_ov000_0208217c(&this->mPos, 0x1)) {
        ActorParams actorParams;
        RefStruct actorRef;
        actorParams.mUnk_28 = 0x0;

        actorParams.func_ov000_020975f8();
        actorParams.mUnk_28 = this->mRef;

        VecFx32_Copy(&this->mPos, &actorParams.mInitialPos);
        actorParams.mParams[0] = 0x1;
        Actor::func_ov000_020973f4(&actorRef, &data_ov000_020b539c_eur, ActorId_FLDK, &actorParams, 0x0);
    }
    return true;
}

// non-matching
void ActorBlast::Update() {
    this->mUnk_94 += this->mUnk_F4;

    if (this->mUnk_94 <= this->mUnk_F0) {
        this->mUnk_C8.size = this->mUnk_94;
        this->mUnk_D8.size = this->mUnk_94;
    } else {
        this->mUnk_94      = this->mUnk_F0;
        this->mUnk_C8.size = -1;
    }

    if (this->mUnk_98.HasExpired()) {
        this->func_ov000_020984d0();
        return;
    }

    if (this->mUnk_C8.size <= FX_F32_TO_FX32(0.0f)) {
        return;
    }

    this->mUnk_9C.mUnk_0C = this->mUnk_C8;

    data_027e09c0->func_ov000_0207e58c(this->mRef, 0x0, 0xC, &this->mUnk_9C);

    UnkStruct_ov031_020e5d18_00 sp14;
    sp14.mUnk_00 = NULL;

    UnkStruct_ov031_020e5d18_00 *psp14 = (UnkStruct_ov031_020e5d18_00 *) &sp14;
    func_01ffe6c4(&psp14->mUnk_00, this->mRef, &data_027e07d4, &data_027e07d4, 0x1C, NULL, &this->mUnk_E8);

    ((Actor *) psp14)->func_ov000_0207df88(&this->mUnk_C8, 0x0);

    if (this->func_ov000_0209867c(0x0) < 0x1000) {
        data_027e09c0->func_ov000_0207e458(0x4, 0x0, &this->mUnk_C8.pos, 0x1, NULL, 0x0);
    }

    if (data_027e0ce0->func_01fff1a4()) {
        data_027e09c0->func_ov000_0207e458(0x2, 0x1A, &this->mUnk_C8.pos, 0x2, NULL, 0x0);
    }
}

void ActorBlast::vfunc_24() {
    fx32 f0     = this->mUnk_F0;
    fx32 newVal = this->mUnk_94 + this->mUnk_F4;
    if (newVal >= f0) {
        newVal = f0;
    }
    this->mUnk_94 = newVal;
    if (!this->mUnk_98.HasExpired()) {
        return;
    }
    this->func_ov000_020984d0();
}

fx32 ActorBlast::func_ov031_020e3b94() {
    return FX_F32_TO_FX32(0.5f);
}

void ActorBlast::func_ov031_020e3b9c(Actor *spawner, unk16 param1, unk16 param2) {
    ActorParams actorParams;
    RefStruct ref;

    actorParams.mUnk_28 = 0x0;
    actorParams.func_ov000_020975f8();
    actorParams.func_ov000_020975f8();

    actorParams.mUnk_28 = spawner->mRef;
    VecFx32_Copy(&spawner->mPos, &actorParams.mInitialPos);

    actorParams.mParams[0] = param1;
    actorParams.mParams[1] = param2;

    spawner->func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_Blast, &actorParams, 0x0);
}
