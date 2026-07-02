#include "Actor/ActorItemBoomerang.hpp"

#include "MapObject/MapObjectUnkICEB.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d2c.hpp"

extern "C" void func_01ff916c(void *, int, int);
extern "C" void func_01ff93c0(VecFx32 *, unk32);
extern "C" void func_01ff97c8(VecFx32 *, int);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, void *);
extern "C" unk32 func_01ffb9cc(VecFx32 *, VecFx32 *);
extern "C" void func_01ffe6c4(Actor **, ActorRef, VecFx32 *, VecFx32 *, s32, VecFx32 *, UnkStruct_ov031_Items_00 *);
extern "C" void func_01ffedac(u16 *, VecFx32 *);
extern "C" bool func_ov000_0205aeac();
extern "C" bool func_ov000_020982d8();

DECL_PROFILE(ActorProfileItemBoomerang);

Actor *ActorProfileItemBoomerang::Create() {
    return new(HeapIndex_2) ActorItemBoomerang();
}

ActorProfileItemBoomerang::ActorProfileItemBoomerang() :
    ActorProfile(ActorId_ITBM) {}

// non-matching
ActorItemBoomerang::ActorItemBoomerang() :
    mUnk_94(data_027e0ce0->func_ov000_0208ed30(0x0, 0x1, ItemManager::func_ov000_020a8974(0x1)->mUnk_10)),
    mUnk_9C(true),
    mUnk_11C(this),
    mUnk_12C(),
    mUnk_138(0x0),
    mUnk_13A(0x0),
    mUnk_13C((u16) 0x8D71),
    mUnk_140(0x1000, 0x0) {
    this->mState  = ActorItemBoomerangState_0;
    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0x0;
}

bool ActorItemBoomerang::vfunc_18(unk32 param1) {
    this->mUnk_CC.mUnk_30.func_ov031_020e45fc();

    this->mUnk_A0.mUnk_0C.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_A0.mUnk_0C.y = FLOAT_TO_FX32(-0.1003f);
    this->mUnk_A0.mUnk_0C.z = FLOAT_TO_FX32(0.0f);
    this->mUnk_A0.mUnk_18   = FLOAT_TO_FX32(0.4f);

    this->mUnk_10C.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_10C.y = FLOAT_TO_FX32(-0.1003f);
    this->mUnk_10C.z = FLOAT_TO_FX32(0.0f);
    this->mUnk_118   = FLOAT_TO_FX32(0.0f);

    this->func_ov031_020e5034(0x0);

    unk16 sin = SIN((u16) this->mAngle);
    unk16 cos = COS((u16) this->mAngle);

    this->mVel.x = MUL_FX32(sin, FLOAT_TO_FX32(0.5f));
    this->mVel.z = MUL_FX32(cos, FLOAT_TO_FX32(0.5f));
    this->mVel.y = FLOAT_TO_FX32(0.0f);

    return true;
}

// non-matching
void ActorItemBoomerang::SetState(ActorState state) {
    this->mState  = state;
    this->mUnk_52 = 0xFFFF;
    this->mUnk_50 = 0;
}

void ActorItemBoomerang::func_ov031_020e49b0(unk32 param1) {
    data_027e09a8->func_ov000_02071b30(param1, &this->mPos, 0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);
    this->func_ov031_020e5220();

    if (this->mState == ActorItemBoomerangState_1) {
        return;
    }
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.y = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    data_027e0d2c->func_ov031_020d95b4();
    this->SetState(ActorItemBoomerangState_1);
}

// non-matching
void ActorItemBoomerang::vfunc_20() {
    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (func_ov000_0205aeac() && this->mUnk_128 == 0x1 || this->mUnk_128 == 0x2) {
        VecFx32_Copy(&this->mPos, &this->mUnk_140.mUnk_00);
    }

    this->IsTimerOut();
    this->mAngle += DEG_TO_ANG(45);
    this->func_ov031_020e52a0();
    data_027e09a8->func_ov000_02071d34(&this->mRef, this->mUnk_13C, &this->mPos, 0x0);

    bool var2 = false;
    switch (this->mState) {
        case ActorItemBoomerangState_0:
            this->mUnk_A0.mUnk_0C.z = this->mPos.z;
            this->mUnk_A0.mUnk_0C.y = this->mPos.y + FLOAT_TO_FX32(-0.1003f);
            this->mUnk_A0.mUnk_0C.x = this->mPos.x;
            this->mUnk_A0.mUnk_18   = FLOAT_TO_FX32(0.3f);

            data_027e09c0->func_ov000_0207e58c(this->mRef, 0xC, 0x8, &this->mUnk_A0);

            bool var1 = false;
            if (data_027e0ce0->func_ov000_0208bc1c(0x1, 0x0, 0x16, 0x0, 0x0, 0x0)) {
                var1           = true;
                this->mUnk_13A = 0x14;
                this->mUnk_138 = 0x0;
            }

            Actor *sp54; /* actor* ? */
            func_01ffe6c4(&sp54, this->mRef, &this->mPos, &this->mPrevPos, 0x1C, NULL, &this->mUnk_11C);
            unk32 tmp = sp54->func_ov000_0207df88((Cylinder *) &this->mUnk_CC.mUnk_30.mUnk_00, 0xC);
            func_01ffe6c4(&sp54, this->mRef, &this->mPos, &this->mPrevPos, 0x1F, NULL, &this->mUnk_11C);

            if ((tmp | sp54->func_ov000_0207e294((Cylinder *) &this->mUnk_10C)) == 0 && !var1) {
                if (data_027e0ce0->mUnk_2C->mEquippedItem != ItemFlag_Boomerang) {
                    this->SetState(ActorItemBoomerangState_1);
                    return;
                }

                VecFx32 sp6C;
                ActorRef sp14;
                if (!data_027e0d2c->func_ov031_020d962c(&this->mPos, 0x4CD, &sp6C, &sp14)) {
                    this->SetState(ActorItemBoomerangState_1);
                } else {
                    unk32 vecLength      = VecFx32_Length(&this->mVel);
                    unk32 lengthModified = (vecLength << 0xA) + 0x800;
                    unk32 sp18           = lengthModified;
                    func_01ff916c(&sp18, 0x0, MUL_FX32(vecLength, lengthModified));
                    func_01ffb714(&sp6C, &this->mPos, &this->mVel);
                    func_01ff97c8(&this->mPos, sp18 + 0x200);
                }

                if (sp14.type != 0) {
                    this->mUnk_CC.mUnk_0C.z = this->mPos.z;
                    this->mUnk_CC.mUnk_0C.y = this->mPos.y + FLOAT_TO_FX32(-0.1003f);
                    this->mUnk_CC.mUnk_18   = 0xA000;
                    this->mUnk_CC.mUnk_0C.x = this->mPos.x;
                    data_027e09c0->func_ov000_0207e58c(this->mRef, 0xC, 0x8, &this->mUnk_CC);
                    return;
                }
                if (!(sp14.data & 0x1000)) {
                    return;
                }

                Vec2bCpp pos;
                pos.x             = 0x0;
                pos.y             = 0x0;
                MapObject *object = gpMapObjManager->func_01fff498(pos);
                if (object == NULL) {
                    return;
                }
                object->vfunc_1C(this->mRef, 0xC, &this->mVel);
                if (object->mUnk_10 != NULL) {
                    unk32 val = object->mUnk_10->mUnk_0C.y;
                    if (val == 0x2) {
                        this->func_ov031_020e5034(0x1);
                    } else if (val == 0x4) {
                        this->func_ov031_020e5034(0x2);
                    }
                }
                MapObjectId objectId = object->GetMapObjectId();
                if (objectId != MapObjectId_SKDI && objectId != MapObjectId_SWHT && objectId != MapObjectId_TSUB) {
                    this->func_ov031_020e49b0(0x8D70);
                }
                return;
            }
            this->func_ov031_020e49b0(0x8D70);
            break;
        case ActorItemBoomerangState_1:
            this->mUnk_A0.mUnk_0C.z = this->mPos.z;
            this->mUnk_A0.mUnk_0C.y = this->mPos.y + FLOAT_TO_FX32(-0.1003f);
            this->mUnk_A0.mUnk_0C.x = this->mPos.x;
            this->mUnk_A0.mUnk_18   = FLOAT_TO_FX32(0.3f);

            data_027e09c0->func_ov000_0207e58c(this->mRef, 0xC, 0x8, &this->mUnk_A0);
            Actor *sp24; /* actor* ? */
            func_01ffe6c4(&sp24, this->mRef, &this->mPos, &this->mPrevPos, 0x1C, NULL, &this->mUnk_11C);
            sp24->func_ov000_0207df88((Cylinder *) &this->mUnk_CC.mUnk_30.mUnk_00, 0xC);

            bool var3 = false;
            if ((u32) this->mUnk_138 < (u32) this->mUnk_13A) {
                ++this->mUnk_138;
            } else {
                var2 = true;
            }
            if (var2 && data_027e0ce0->func_ov000_0208bc1c(0x1, 0x0, 0x16, 0x0, 0x0, 0x0)) {
                var3 = true;
            }
            if (var3) {
                this->mUnk_13A = 0x14;
                this->mUnk_138 = 0x0;
                this->func_ov031_020e49b0(0x8D70);
            }

            u16 spC;
            VecFx32 sp3C;
            VecFx32_Copy(data_027e0ce0->func_01fff148(0x0), &sp3C);

            if (func_01ffb9cc(&sp3C, &this->mPos) <= 0x800) {
                if (this->mUnk_128 == 0x2) {
                    func_01ffedac(&spC, &sp3C);

                    Vec2bCpp pos;
                    pos.x             = 0x0;
                    pos.y             = 0x0;
                    MapObject *object = gpMapObjManager->func_01fff498(pos);
                    if (object != NULL && object->GetMapObjectId() == MapObjectId_ICEB) {
                        ((MapObjectUnkICEB *) object)->func_ov094_02174870();
                    }
                }
                data_027e0d2c->func_ov031_020d95b4();
                this->Kill();
                return;
            }
            VecFx32 sp48;
            func_01ff93c0(&this->mVel, 0xC00);
            func_01ffb714(&sp3C, &this->mPos, &sp48);
            func_01ff97c8(&sp48, 0x200);
            VecFx32_Add(&this->mVel, &sp48, &this->mVel);
            break;
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
            for (ptr = this->mUnk_12C; ptr != (void *) &this->mUnk_138; ++ptr) {
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
            for (ptr = this->mUnk_12C; ptr != (void *) &this->mUnk_138; ++ptr) {
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

// non-matching
void ActorItemBoomerang::func_ov031_020e52a0() {
    if (this->mUnk_128 == 0x1 || this->mUnk_128 == 0x2) {
        for (UnkStruct_PlayerGet_ec *ptr = this->mUnk_12C; ptr != (void *) &this->mUnk_138; ++ptr) {
            // non sense
            ptr->mUnk_00->mUnk_28 = this->mPos.x + ptr->mUnk_00->mUnk_24;
            ptr->mUnk_00->mUnk_2C = this->mPos.y + ptr->mUnk_00->mUnk_28;
            ptr->mUnk_00->mUnk_30 = this->mPos.z + ptr->mUnk_00->mUnk_2C;
        }
        return;
    }
    for (UnkStruct_PlayerGet_ec *ptr = this->mUnk_12C; ptr != (void *) &this->mUnk_138; ++ptr) {
        ptr->func_ov000_020a0334();
    }
}

// non-matching
bool ActorItemBoomerang::vfunc_2C(unk32 param1) {
    if (Actor::func_01fff5d0(param1, 0x0)) {
        this->mUnk_94.func_01ffc6d4((u16) this->mAngle, &this->mPos);
        data_027e09b4->func_ov017_020c08c4(&this->mPos, 0x400, 0x400, 0x1F, 0x0, 0x1);
    }
    return true;
}

void ActorItemBoomerang_A0::vfunc_10(Actor *actor) {
    data_027e0d2c->func_ov031_020d95c8(actor->mRef);
}

void ActorItemBoomerang_CC::vfunc_10(Actor *actor) {
    data_027e0d2c->func_ov031_020d95c8(actor->mRef);
}

// non-matching
bool ActorItemBoomerang_CC::vfunc_0C(Actor *actor, VecFx32 *param2) {
    if (actor) {
        if (actor->mRef.Get32() == this->mUnk_2C && actor->mVel.x == FLOAT_TO_FX32(0.0f) &&
            actor->mVel.y == FLOAT_TO_FX32(0.0f) && actor->mVel.z == FLOAT_TO_FX32(0.0f)) {
            this->mUnk_2C = 0x0;
            return UnkStruct_ov031_Items_01::vfunc_0C(actor, param2);
        }
    }
    return false;
}

void ActorItemBoomerang_Unknown::func_ov031_020e45fc() {
    this->mUnk_00   = 0x0;
    this->mUnk_04.x = FLOAT_TO_FX32(-0.1003f);
    this->mUnk_04.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_04.z = FLOAT_TO_FX32(0.3f);
}

// non-matching
ActorItemBoomerang_11C::ActorItemBoomerang_11C(ActorItemBoomerang *param1) :
    mUnk_08(param1) {}
// non-matching
ActorItemBoomerang_11C::~ActorItemBoomerang_11C() {}

// non-matching
bool ActorItemBoomerang_11C::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {
    u32 var = param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06];

    if ((var >> 0x18 & 1) == 1) {
        return false;
    }

    return func_ov000_020982d8();
}

bool ActorItemBoomerang_11C::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2) {
    u32 val = param1->mUnk_08 >> 9 & 7;
    if (val == 0x2) {
        this->mUnk_08->func_ov031_020e5034(0x1);
    }

    if (val == 0x4) {
        this->mUnk_08->func_ov031_020e5034(0x2);
    }

    if (param1->mUnk_08 >> 0x18 & 1) {
        return false;
    }

    Vec2bCpp pos;
    if (this->mUnk_08->mState == ActorItemBoomerangState_1) {
        if (param2 & 0x1000) {
            pos.x = (u8) param2 >> 16;
            pos.y = (u8) param2 >> 24;

            MapObject *mapObject = gpMapObjManager->func_01fff498(pos);
            if (mapObject != NULL) {
                if (mapObject->GetMapObjectId() == MapObjectId_ICEB || mapObject->GetMapObjectId() == MapObjectId_THAW) {
                    mapObject->vfunc_1C(this->mUnk_08->mRef, 0xC, &this->mUnk_08->mVel);
                }
            }
        }
        return false;
    }

    if (param2 & 0x1000) {
        pos.x = (u8) param2 >> 16;
        pos.y = (u8) param2 >> 24;

        MapObject *mapObject = gpMapObjManager->func_01fff498(pos);
        if (mapObject != NULL) {
            switch (mapObject->GetMapObjectId()) {
                case MapObjectId_SKDI:
                case MapObjectId_SWHT:
                    data_027e0d2c->func_ov031_020d95c8(param2);
                case MapObjectId_TSUB:
                    mapObject->vfunc_1C(this->mUnk_08->mRef, 0xC, &this->mUnk_08->mVel);
                    return false;
            }
        }
    }

    UnkStruct_027e0ce0_38_Base::vfunc_0C(param1, param2);
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
