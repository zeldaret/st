#include "Actor/ActorItemBoomerang.hpp"
#include "CommonFuncs.hpp"

#include "Item/Item.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "MapObject/MapObjectUnkICEB.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d2c.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"

DECL_PROFILE(ActorProfileItemBoomerang);

Actor *ActorProfileItemBoomerang::Create() {
    return new(HeapIndex_2) ActorItemBoomerang();
}

ActorProfileItemBoomerang::ActorProfileItemBoomerang() :
    ActorProfile(ActorId_ITBM) {}

static inline G3d_Model *GetModel() {
    UnkStruct_027e0ce0_1C *ptr = data_027e0ce0->mUnk_1C;
    return ptr->func_ov000_0208ed30(0x0, 0x1, ItemManager::func_ov000_020a8974(ItemFlag_Boomerang)->mUnk_10);
}

// non-matching
ActorItemBoomerang::ActorItemBoomerang() :
    mUnk_94(GetModel(), true),
    mUnk_11C(this),
    mUnk_138(0, 0),
    mUnk_13C(0x8D71),
    mUnk_140(0x1000, 0x0) {
    this->mState = ActorItemBoomerangState_0;
    this->mTimer.Reset();
}

bool ActorItemBoomerang::Init(unk32 param1) {
    this->mUnk_CC.mUnk_30.func_ov031_020e45fc();

    this->mUnk_A0.mUnk_0C.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(-0.1003f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.4f));

    this->mUnk_10C.x = FX_F32_TO_FX32(0.0f);
    this->mUnk_10C.y = FX_F32_TO_FX32(-0.1003f);
    this->mUnk_10C.z = FX_F32_TO_FX32(0.0f);
    this->mUnk_118   = FX_F32_TO_FX32(0.0f);

    this->func_ov031_020e5034(0x0);

    unk16 sin = SIN((u16) this->mAngle.angle_s);
    unk16 cos = COS((u16) this->mAngle.angle_s);

    this->mVel.x = FX_MUL(sin, FX_F32_TO_FX32(0.5f));
    this->mVel.z = FX_MUL(cos, FX_F32_TO_FX32(0.5f));
    this->mVel.y = FX_F32_TO_FX32(0.0f);

    return true;
}

// non-matching
void ActorItemBoomerang::SetState(ActorState state) {
    this->mState = state;
    this->mTimer.Reset();
    ;
}

void ActorItemBoomerang::func_ov031_020e49b0(unk32 param1) {
    data_027e09a8->func_ov000_02071b30(param1, &this->mPos, 0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);
    this->func_ov031_020e5220();

    if (this->mState == ActorItemBoomerangState_1) {
        return;
    }
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.y = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    data_027e0d2c->func_ov031_020d95b4();
    this->SetState(ActorItemBoomerangState_1);
}

// non-matching
void ActorItemBoomerang::Update() {
    VecFx32 sp6C;
    UnkStruct_ov031_020e5d18_00 sp54;
    VecFx32 sp48;
    VecFx32 sp3C;
    UnkStruct_ov031_020e5d18_00 sp24;
    MapObjRef sp20;
    struct {
        fx32 unk_00;
        fx32 unk_04;
    } sp18;
    RefStruct sp14;
    Vec2bCpp spE;
    Vec2bCpp spC;

    STACK_PAD(0x04);

    VecFx32 *temp_r0 = &this->mPos;
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(temp_r0, &this->mVel, temp_r0);

    if ((func_ov000_0205aeac() && this->mUnk_128 == 0x1) || this->mUnk_128 == 0x2) {
        VecFx32_Copy(&this->mPos, &this->mUnk_140.mUnk_00);
    }

    this->mAngle += DEG_TO_ANG(45);
    this->mTimer.Update();
    this->func_ov031_020e52a0();
    data_027e09a8->func_ov000_02071d34(&this->mRef, this->mUnk_13C, &this->mPos, 0x0);

    switch (this->mState) {
        case ActorItemBoomerangState_0: {
            s32 flags = 0;
            bool var1 = false;

            this->mUnk_A0.mUnk_0C.Init(this->mPos.x, this->mPos.y - 0x19A, this->mPos.z, 0x666);

            data_027e09c0->func_ov000_0207e58c(this->mRef, 0xC, 0x8, &this->mUnk_A0);

            if (data_027e0ce0->func_ov000_0208bc1c(0x1, 0x0, 0x16, &this->mUnk_A0.mUnk_0C, 0x0, 0x0)) {
                this->mUnk_138.Set(0, 20);
                var1 = true;
            }

            sp54.mUnk_00 = NULL;

            func_01ffe6c4(&sp54.mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, 0x1C, NULL, &this->mUnk_11C);

            flags |= ((Actor *) &sp54)->func_ov000_0207df88((Cylinder *) &this->mUnk_CC.mUnk_30.mUnk_00, 0xC);

            func_01ffe6c4(&sp54.mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, 0x1F, NULL, &this->mUnk_11C);

            flags |= ((Actor *) &sp54)->func_ov000_0207e294((Cylinder *) &this->mUnk_10C);

            if (flags != 0 || var1) {
                this->func_ov031_020e49b0(0x8D70);
                return;
            }

            if (data_027e0ce0->mUnk_2C->GetCurrentItem() != ItemFlag_Boomerang) {
                this->SetState(ActorItemBoomerangState_1);
                return;
            }

            sp14.Reset();

            if (!data_027e0d2c->func_ov031_020d962c(&this->mPos, 0x4CD, &sp6C, (ActorRef *) &sp14)) {
                this->SetState(ActorItemBoomerangState_1);
            } else {

                sp18.unk_00 = VecFx32_Length(&this->mVel);

                func_01ff916c(&sp18.unk_00, 0x0, FX_MUL(sp18.unk_00, 0x400));
                func_01ffb714(&sp6C, &this->mPos, &this->mVel);
                func_01ff97c8(&this->mVel, sp18.unk_00 + 0x200);
            }

            if (sp14.type != 0) {
                this->mUnk_CC.mUnk_0C.pos.z = this->mPos.z;
                this->mUnk_CC.mUnk_0C.pos.y = this->mPos.y + FX_F32_TO_FX32(-0.1003f);
                this->mUnk_CC.mUnk_0C.size  = 0xA000;
                this->mUnk_CC.mUnk_0C.pos.x = this->mPos.x;
                data_027e09c0->func_ov000_0207e58c(this->mRef, 0xC, 0x8, &this->mUnk_CC);
                return;
            }

            if (!(sp14.moRef.unk_00_u16 & 0x1000)) {
                return;
            }

            sp20 = sp14.data;
            spE  = sp20.GetUnk02();

            MapObject *temp_r0_5 = gpMapObjManager->func_01fff498(spE);

            if (temp_r0_5 == NULL) {
                return;
            }

            temp_r0_5->vfunc_1C(this->mRef, 0x0C, &this->mVel);

            if (temp_r0_5->mUnk_10 != NULL) {
                u32 val = (temp_r0_5->mUnk_10->mUnk_08 >> 0x09) & 0x07;

                if (val == 0x02) {
                    this->func_ov031_020e5034(0x01);
                } else if (val == 0x04) {
                    this->func_ov031_020e5034(0x02);
                }
            }

            MapObjectId objectId = temp_r0_5->GetMapObjectId();

            if (objectId != MapObjectId_SKDI && objectId != MapObjectId_SWHT && objectId != MapObjectId_Pot) {
                this->func_ov031_020e49b0(0x8D70);
                return;
            }

            break;
        }

        case ActorItemBoomerangState_1: {
            bool var_r4_2 = false;

            this->mUnk_A0.mUnk_0C.Init(this->mPos.x, this->mPos.y - 0x19A, this->mPos.z, 0x666);

            data_027e09c0->func_ov000_0207e58c(this->mRef, 0xC, 0x8, &this->mUnk_A0);

            sp24.mUnk_00 = NULL;
            func_01ffe6c4(&sp24.mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, 0x1C, NULL, &this->mUnk_11C);
            ((Actor *) &sp24)->func_ov000_0207df88((Cylinder *) &this->mUnk_CC.mUnk_30.mUnk_00, 0xC);

            if (this->mUnk_138.HasExpiredAlt() &&
                data_027e0ce0->func_ov000_0208bc1c(0x1, 0x0, 0x16, &this->mUnk_A0.mUnk_0C, 0x0, 0x0)) {
                var_r4_2 = true;
            }

            if (var_r4_2) {
                this->mUnk_138.Set(0, 20);
                this->func_ov031_020e49b0(0x8D70);
            }

            sp3C = *data_027e0ce0->func_01fff148(0x0);
            sp3C.y += 0x800;

            if (func_01ffb9cc(&sp3C, &this->mPos) <= 0x800) {
                if (this->mUnk_128 == 0x2) {
                    func_01ffedac(&spC, &sp3C);

                    MapObject *object = gpMapObjManager->func_01fff498(spC);

                    if (object != NULL && object->GetMapObjectId() == MapObjectId_ICEB) {
                        ((MapObjectUnkICEB *) object)->func_ov094_02174870();
                    }
                }
                data_027e0d2c->func_ov031_020d95b4();
                this->Kill();
                return;
            }

            func_01ff93c0(&this->mVel, 0xC00);
            func_01ffb714(&sp3C, &this->mPos, &sp48);
            func_01ff97c8(&sp48, 0x200);
            VecFx32_Add(&this->mVel, &sp48, &this->mVel);
            break;
        }

        default:
            break;
    }
}

void ActorItemBoomerang::func_ov031_020e5034(unk32 param1) {
    if (this->mUnk_128 == param1) {
        return;
    }
    this->mUnk_128              = param1;
    UnkStruct_PlayerGet_ec *ptr = NULL;

    switch (this->mUnk_128) {
        case 0x1:
            this->mUnk_13C = 0x8D72;
            for (ptr = this->mUnk_12C; ptr != &this->mUnk_12C[ARRAY_LEN(this->mUnk_12C)]; ++ptr) {
                ptr->func_ov000_020a0334();
            }

            data_027e0cec->func_ov000_0209ff8c(&this->mUnk_12C[0], 0x818, &this->mPos, 0x2);
            data_027e0cec->func_ov000_0209ff8c(&this->mUnk_12C[1], 0x819, &this->mPos, 0x2);

            if (!func_ov000_0205aeac()) {
                return;
            }

            if (this->mUnk_12C[0].mUnk_00 != NULL) {
                this->mUnk_12C[0].mUnk_00->mUnk_A0 = 0;
            }

            if (this->mUnk_12C[1].mUnk_00 != NULL) {
                this->mUnk_12C[1].mUnk_00->mUnk_A0 = 0;
            }

            data_027e0cd8->mUnk_0C->func_ov000_02080a5c(&this->mUnk_140.mUnk_00);
            return;
        case 0x2:
            this->mUnk_13C = 0x8D73;
            for (ptr = this->mUnk_12C; ptr != &this->mUnk_12C[ARRAY_LEN(this->mUnk_12C)]; ++ptr) {
                ptr->func_ov000_020a0334();
            }

            data_027e0cec->func_ov000_020a00d4(&this->mUnk_12C[0], 0x815, 0x816, 0x817, &this->mPos, 0x2);
            if (!func_ov000_0205aeac()) {
                return;
            }
            if (this->mUnk_12C[0].mUnk_00 != NULL) {
                this->mUnk_12C[0].mUnk_00->mUnk_A0 = 0;
            }
            if (this->mUnk_12C[1].mUnk_00 != NULL) {
                this->mUnk_12C[1].mUnk_00->mUnk_A0 = 0;
            }
            if (this->mUnk_12C[2].mUnk_00 != NULL) {
                this->mUnk_12C[2].mUnk_00->mUnk_A0 = 0;
            }
            data_027e0cd8->mUnk_0C->func_ov000_02080a5c(&this->mUnk_140.mUnk_00);
            return;
        default:
            this->mUnk_13C = 0x8D71;
            if (!func_ov000_0205aeac()) {
                return;
            }
            data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_140.mUnk_00);
            break;
    }
}

void ActorItemBoomerang::func_ov031_020e5220() {
    data_027e0cec->func_ov000_0209feac(0x81A, &this->mPos, 0x2, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x81B, &this->mPos, 0x2, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x81C, &this->mPos, 0x2, 0x0, 0x0);
}

void ActorItemBoomerang::func_ov031_020e52a0() {
    if (!(this->mUnk_128 != 0x1 && this->mUnk_128 != 0x2)) {
        for (UnkStruct_PlayerGet_ec *ptr = this->mUnk_12C; ptr != this->mUnk_12C + 0x3; ++ptr) {
            UnkSystem7_UnkStruct_00 *data = ptr->mUnk_00;

            if (data != NULL) {
                data->mUnk_28.x = this->mPos.x + data->mUnk_20->mUnk_00->mUnk_04.x;
                data->mUnk_28.y = this->mPos.y + data->mUnk_20->mUnk_00->mUnk_04.y;
                data->mUnk_28.z = this->mPos.z + data->mUnk_20->mUnk_00->mUnk_04.z;
            }
        }
    } else {
        for (UnkStruct_PlayerGet_ec *ptr = this->mUnk_12C; ptr != this->mUnk_12C + 0x3; ++ptr) {
            ptr->func_ov000_020a0334();
        }
    }
}

// non-matching
void ActorItemBoomerang::vfunc_2C(Actor_vfunc_30 *param1) {
    if (Actor::func_01fff5d0(param1, 0x0)) {
        this->mUnk_94.func_01ffc6d4(this->mAngle, &this->mPos);
        data_027e09b4->func_ov017_020c08c4(&this->mPos, 0x400, 0x400, 0x1F, 0x0, 0x1);
    }
}

void ActorItemBoomerang_A0::vfunc_10(Actor *actor) {
    data_027e0d2c->func_ov031_020d95c8(actor->mRef);
}

void ActorItemBoomerang_CC::vfunc_10(Actor *actor) {
    data_027e0d2c->func_ov031_020d95c8(actor->mRef);
}

bool ActorItemBoomerang_CC::vfunc_0C(Actor *actor, VecFx32 *param2) {
    if (actor != NULL) {
        u32 refData = *(vu32 *) &this->mUnk_2C;

        if (*(u32 *) &actor->mRef == refData && VecFx32_IsCleared(&actor->mVel)) {
            this->mUnk_2C.Reset();
            return UnkStruct_ov031_Items_01::vfunc_0C(actor, param2);
        }
    }

    return false;
}

void ActorItemBoomerang_Unknown::func_ov031_020e45fc() {
    this->mUnk_00   = 0x0;
    this->mUnk_04.x = FX_F32_TO_FX32(-0.1003f);
    this->mUnk_04.y = FX_F32_TO_FX32(0.0f);
    this->mUnk_04.z = FX_F32_TO_FX32(0.3f);
}

ActorItemBoomerang_11C::ActorItemBoomerang_11C(ActorItemBoomerang *param1) :
    mUnk_08(param1) {}

ActorItemBoomerang_11C::~ActorItemBoomerang_11C() {}

bool ActorItemBoomerang_11C::vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) {
    u32 var = param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06];

    if (((var >> 0x18) & 1) == 1) {
        return false;
    }

    return this->UnkStruct_ov031_Items_00::vfunc_08(param1, param2);
}

bool ActorItemBoomerang_11C::vfunc_0C(MapObjRef ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                      const VecFx32 *param4) {
    u32 val = (param2->mUnk_08 >> 9) & 7;

    if (val == 0x2) {
        this->mUnk_08->func_ov031_020e5034(0x1);
    } else if (val == 0x4) {
        this->mUnk_08->func_ov031_020e5034(0x2);
    }

    if (((param2->mUnk_08 >> 0x18) & 1) == 1) {
        return false;
    }

    if (this->mUnk_08->mState == ActorItemBoomerangState_1) {
        if (ref.unk_00_u16 & 0x1000) {
            MapObjRef ref2 = ref;
            Vec2bCpp pos   = ref2.GetUnk02();

            MapObject *mapObject = gpMapObjManager->func_01fff498(pos);

            if (mapObject == NULL) {
                return false;
            }

            switch (mapObject->GetMapObjectId()) {
                case MapObjectId_ICEB:
                case MapObjectId_THAW:
                    mapObject->vfunc_1C(this->mUnk_08->mRef, 0xC, &this->mUnk_08->mVel);
                    break;
                default:
                    break;
            }
        }
        return false;
    }

    if (ref.unk_00_u16 & 0x1000) {
        MapObjRef ref2 = ref;
        Vec2bCpp pos   = ref2.GetUnk02();

        MapObject *mapObject = gpMapObjManager->func_01fff498(pos);

        if (mapObject == NULL) {
            return false;
        }

        switch (mapObject->GetMapObjectId()) {
            case MapObjectId_SKDI:
            case MapObjectId_SWHT:
                data_027e0d2c->func_ov031_020d95c8(*(ActorRef *) &ref); //! TODO: ref conflicts
            case MapObjectId_Pot:
                mapObject->vfunc_1C(this->mUnk_08->mRef, 0xC, &this->mUnk_08->mVel);
                return false;
        }
    }

    return this->UnkStruct_027e0ce0_38_Base::vfunc_0C(ref, param2, param3, param4);
}

void ActorItemBoomerang_Unknown::func_ov031_020e5704() {
    this->mUnk_00 = 0;
}

ActorItemBoomerang::~ActorItemBoomerang() {
    if (data_027e0d2c) {
        data_027e0d2c->func_ov031_020d95b4();
    }
    if (func_ov000_0205aeac()) {
        data_027e0cd8->mUnk_0C->func_ov000_02080a78(&this->mUnk_140.mUnk_00);
    }
}

ActorProfileItemBoomerang::~ActorProfileItemBoomerang() {}
