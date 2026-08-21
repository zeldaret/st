#include "Actor/ActorBomb.hpp"

#include "Actor/ActorBlast.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "MainGame/AdventureMode.hpp"
#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectBombFlower.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "Unknown/UnkStruct_027e0d8c.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

struct UnkStruct_ov031_020e5d18_00 {
    /* 00 */ Actor *mUnk_00;
    /* 04 */ STRUCT_PAD(0x04, 0x18);
    /* 18 */
};

extern "C" VecFx32 data_027e07d4;
extern "C" unk32 data_ov000_020aecf8;
extern "C" VecFx32 data_ov031_02110a10;
extern "C" VecFx32 data_ov031_02110a28;
extern "C" char data_ov031_02110a50;
extern "C" char data_ov031_02110a60;
extern "C" char data_ov031_02110a70;

extern "C" bool func_01ff916c(void *, int, int);
extern "C" void func_01ff9218(fx32 *, fx32, fx32);
extern "C" unk32 func_01ff9258(fx32, fx32);
extern "C" void func_01ff94cc(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" fx32 func_01ffb464(fx32);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" void func_01ffb974(unk32, VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" void func_01ffc5a0(ModelRender *, unk32, UnkAngleStruct, void *);
extern "C" void func_01ffe6c4(UnkStruct_ov031_020e5d18_00 *, ActorRef, VecFx32 *, VecFx32 *, s32, VecFx32 *,
                              UnkStruct_ov031_Items_00_Base *);
extern "C" void func_0200b578(G3d_RenderObject *, void (*)(), unk32, unk32, unk32);

extern "C" void func_ov017_020c2438(unk32 *, unk32, VecFx32 *, unk32, unk32);
extern "C" void func_ov017_020c26f8(unk32, VecFx32 *, unk32, unk32);

static ActorUnkZLSL_AnimationTag data_ov031_02112be8           = {.index = 0, .name = "bomb_clanim", .unknown = 0};
static PTMF<ActorBomb> data_ov031_02112c00[ActorBombState_Max] = {
    ActorBomb::func_ov031_020e1da0, // ActorUnkBOMBState_0
    ActorBomb::func_ov031_020e1ed8, // ActorUnkBOMBState_1
    ActorBomb::func_ov031_020e1f88, // ActorUnkBOMBState_2
    ActorBomb::func_ov031_020e1fe4, // ActorUnkBOMBState_3
    ActorBomb::func_ov031_020e2064, // ActorUnkBOMBState_4
    ActorBomb::func_ov031_020e20fc, // ActorUnkBOMBState_5
    ActorBomb::func_ov031_020e2134, // ActorUnkBOMBState_6
};

static PTMF<ActorBomb> data_ov031_02112c38[ActorBombState_Max] = {
    ActorBomb::func_ov031_020e1d48, // ActorUnkBOMBState_0
    ActorBomb::func_ov031_020e1ebc, // ActorUnkBOMBState_1
    ActorBomb::func_ov031_020e1f18, // ActorUnkBOMBState_2
    ActorBomb::func_ov031_020e1fe0, // ActorUnkBOMBState_3
    ActorBomb::func_ov031_020e2034, // ActorUnkBOMBState_4
    ActorBomb::func_ov031_020e20d8, // ActorUnkBOMBState_5
    ActorBomb::func_ov031_020e2100, // ActorUnkBOMBState_6
};

DECL_PROFILE(ActorProfileBomb);

Actor *ActorProfileBomb::Create() {
    return new(HeapIndex_2) ActorBomb();
}

ActorProfileBomb::ActorProfileBomb() :
    ActorProfile(ActorId_Bomb) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.2999f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.4f));
}

G3d_Model *ActorBomb::func_ov031_020e1540(u16 param1) {
    if (param1 == 0x0) {
        return data_027e0ce0->mUnk_1C->func_ov000_0208ed30(0x0, 0x1, &data_ov031_02110a60);
    }

    return G3d_GetModelPtr(
        ((MapObjectProfileBombFlower *) data_ov000_020b5d34.GetProfileFromId(MapObjectId_BombFlower))->mUnk_20.mUnk_50);
}

UnkStruct_ov000_02058a84 *ActorBomb::func_ov031_020e15d0(u16 param1) {
    if (param1 == 0x0) {
        return data_027e0ce0->mUnk_1C->func_ov000_0208ee94(0x0, 0x1, &data_ov031_02110a70, 0x1);
    }
    return ((MapObjectProfileBombFlower *) data_ov000_020b5d34.GetProfileFromId(MapObjectId_BombFlower))
        ->mUnk_20.func_ov000_02058a84(0x1, &data_ov031_02110a50);
}

// non-matching
// seems not to be in the actor
// use a pattern like this->mUnk_04->mUnk_04
// so it's not ActorBomb and the class has at
// least 0xB3 bytes so it does not seem to be
// one of the auxiliary classes
void ActorBomb::func_ov031_020e1634() {}

ActorBomb::ActorBomb() :
    mUnk_094(this->func_ov031_020e1540(this->mUnk_5C.mParams[0])),
    mUnk_0F4(&this->mUnk_114, this->func_ov031_020e1540(this->mUnk_5C.mParams[0])),
    mUnk_17C(NULL),
    mUnk_180(this),
    mUnk_19C(this),
    mUnk_1CC(data_027e07d4),
    mUnk_1D8(0x1000),
    mUnk_1DC(0x0),
    mUnk_1E0(0x0),
    mUnk_1E4(0x0),
    mUnk_1E8(0x0),
    mUnk_1EA(0x0),
    mUnk_1EC(0x0),
    mUnk_1EE(false),
#if IS_JP
    mUnk_1F0(false),
    mUnk_1F1(false)
#else
    mUnk_1F0(false)
#endif
{
    if (this->mUnk_5C.mParams[0] != 0x1) {
        this->mUnk_1EF = false;
        this->mUnk_17C = &data_ov031_02110a28;
    } else {
        func_0200b578(&this->mUnk_094.mRenderObj, this->func_ov031_020e1634, 0x0, 0x2, 0x2);
        this->mUnk_17C = &data_ov031_02110a10;
        this->mUnk_1EF = true;
    }
    this->mUnk_164[0].mUnk_04 = 0x810;
    this->mUnk_164[0].mUnk_08 = 0x2;
    this->mUnk_164[1].mUnk_04 = 0x811;
    this->mUnk_164[1].mUnk_08 = 0x2;
    SET_FLAG(this->mFlags, ActorFlag_11);
#if IS_JP
    SET_FLAG(this->mFlags, ActorFlag_13);
#endif
}

void ActorBomb::func_ov031_020e17f4() {}

bool ActorBomb::vfunc_18(unk32 param1) {
    Cylinder *profileCylinder = &this->mpProfile->mUnk_04;

    this->mUnk_154.pos  = profileCylinder->pos;
    this->mUnk_154.size = profileCylinder->size;
    this->mUnk_30       = &this->mUnk_154;

    this->SetState(ActorBombState_0);

    this->mUnk_19C.mUnk_04 = this->mRef;
    VecFx32_Copy(&this->mPos, &this->mUnk_19C.mUnk_0C.pos);
    this->mUnk_19C.mUnk_0C.size = 0x666;

    this->mUnk_1EC = 0x78;
    this->mUnk_1EA = 0x0;
    this->Actor::func_ov000_0209862c(0x2);
    return true;
}

void ActorBomb::func_ov031_020e18a0() {
    this->func_ov000_0209862c(0x2);
    this->mUnk_2C = data_ov000_020aecf8;
}

void ActorBomb::SetState(ActorState state) {
    this->mState = state;
    this->func_ov031_020e18a0();

    CALL_PTMF(PTMF<ActorBomb>, data_ov031_02112c38[this->mState]);
}

void ActorBomb::func_ov031_020e1908() {
    this->mUnk_134.mUnk_04 |= 0x8000;
    this->mUnk_1F0 = true;
}

// non-matching
void ActorBomb::func_ov031_020e1920(VecFx32 *param1) {
    fx32 y           = param1->y;
    fx32 z           = param1->z;
    fx32 x           = param1->x;
    this->mUnk_1CC.x = x;
    this->mUnk_1CC.y = y;
    this->mUnk_1CC.z = z;
}

void ActorBomb::func_ov031_020e193c() {
    if (this->mUnk_1EF && GET_FLAG(this->mFlags, ActorFlag_Visible)) {
        VecFx32 sp0C;
        func_01ffb974(this->mUnk_1D8, this->mUnk_17C, &this->mPos, &sp0C);
        VecFx32 sp00;
        // weird logic + 1
        func_01ffb974(this->mUnk_1D8, this->mUnk_17C + 1, &this->mPos, &sp00);

        data_027e0cec->func_ov000_020a0140(&this->mUnk_164[0], &sp0C);
        data_027e0cec->func_ov000_020a0140(&this->mUnk_164[1], &sp00);

        for (ActorBomb_unk *ptr = this->mUnk_164; ptr != this->mUnk_164 + ARRAY_LEN(this->mUnk_164); ptr++) {
            if (ptr->mUnk_00 != NULL) {
                ptr->mUnk_00->mUnk_24 &= ~0x8;
            }
        }

        return;
    }
    for (ActorBomb_unk *ptr = this->mUnk_164; ptr != this->mUnk_164 + ARRAY_LEN(this->mUnk_164); ptr++) {
        ptr->func_ov000_020a0334();
    }
}

void ActorBomb::vfunc_20() {
    this->mUnk_3C = &this->mUnk_134;

    CALL_PTMF(PTMF<ActorBomb>, data_ov031_02112c00[this->mState]);
    this->func_ov031_020e1b7c();

    if (!GET_FLAG(this->mFlags, ActorFlag_Alive)) {
        return;
    }
    this->func_ov031_020e193c();

    if (this->mState != ActorBombState_2 && this->mState != ActorBombState_4) {
        return;
    }

    if (func_01ff9258(this->mVel.x, this->mVel.z) <= 0x52) {
        return;
    }

    if (this->mUnk_1E4.type == 0x1) {
        if (!this->func_ov031_020e25bc()) {
            return;
        }

        ActorBlast::func_ov031_020e3b9c(this, 0x0, 0x0);
        this->func_ov000_020984d0();
        return;
    }

    this->func_ov031_020e262c();
}

void ActorBomb::vfunc_24() {
    if (this->mState != ActorBombState_1) {
        return;
    }
    this->func_ov031_020e1ed8();
    this->func_ov031_020e193c();
}

// non-matching
void ActorBomb::func_ov031_020e1b1c() {
    UnkStruct_ov000_02058a84 *param1 = this->func_ov031_020e15d0(this->mUnk_5C.mParams[0]);

    bool param3 = !(param1->mUnk_6 & 0x2);

    this->mUnk_0F4.func_ov000_020577a4(param1, 0x0, param3);

    this->mUnk_0F4.mUnk_08 = 0x1000;
    this->mUnk_0F4.mUnk_04 = data_ov031_02112be8.unknown;

    this->mUnk_094.func_ov000_02057cf4();

    this->mUnk_094.func_ov000_02057c98(&this->mUnk_0F4);
}

void ActorBomb::func_ov031_020e1b7c() {
    if (!this->mUnk_1EF) {
        return;
    }
    data_027e09a8->func_ov000_02071d34(&this->mRef, 0xF4, &this->mPos, 0x0);

    if (!this->mUnk_1EE) {
        if (!this->IsInternalTimerOut()) {
            return;
        }

        this->mUnk_1EE = true;
        this->mUnk_1EC = 0x3C;
        this->mUnk_1EA = 0x00;
        this->func_ov031_020e1b1c();
        return;
    }
    fx32 delta             = this->mUnk_1EC - this->mUnk_1EA;
    this->mUnk_0F4.mUnk_08 = FLOAT_TO_FX32(1.5f) - delta * FLOAT_TO_FX32(0.01985f);
    this->mUnk_0F4.func_01ffc3b4();

    if (delta > 0x0) {
        func_01ff9218(&this->mUnk_1D8, FLOAT_TO_FX32(1.3f), func_01ffb464((u32) delta << 0xC));
    }
    if (!this->IsInternalTimerOut()) {
        return;
    }
    ActorBlast::func_ov031_020e3b9c(this, 0x0, 0x0);

    if (this->mState == ActorBombState_6) {
        ActorParams params;
        ActorRef ref;
        params.mUnk_28 = 0;
        params.func_ov000_020975f8();

        VecFx32_Copy(&this->mPos, &params.mInitialPos);
        params.mInitialPos.y = this->mUnk_1DC;
        this->Actor::func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_EFSC, &params, 0x0);
    }
    this->Actor::func_ov000_020984d0();
}

void ActorBomb::func_ov031_020e1d18() {
    this->func_ov000_02098838();
    VecFx32_Add(&this->mPos, &this->mUnk_1CC, &this->mPos);
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_1CC);
}

void ActorBomb::func_ov031_020e1d48() {
    this->mUnk_1E4 = 0;
    this->mUnk_2C  = 0x0;
}

bool ActorBomb::func_ov031_020e1d58() {
    return this->mUnk_154.pos.y >= FLOAT_TO_FX32(0.2999f);
}

bool ActorBomb::func_ov031_020e1d74() {
    if (this->func_ov031_020e1d58()) {
        if (this->mUnk_46 & 0x1) {
            return true;
        }
    }
    return false;
}

void ActorBomb::func_ov031_020e1da0() {
    this->func_ov031_020e1d18();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020e2a9c();

    if (this->func_ov031_020e1d74() || this->mUnk_180.mUnk_04 & 0x1) {
        if (this->mUnk_180.mUnk_04 & 0x8) {
            if (this->func_ov031_020e1d58()) {
                this->SetState(ActorBombState_6);
            }
        } else {
            if (this->func_ov031_020e2b40()) {
                this->func_ov000_020984d0();
                return;
            }
            if (this->mUnk_180.mUnk_0C.z >= FLOAT_TO_FX32(-0.1003f)) {
                this->mUnk_2C = 0x0;
                VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mVel);
                func_01ffb974(-0x29, &this->mUnk_180.mUnk_0C, &this->mVel, &this->mVel);
            } else {
                func_01ff9218(&this->mUnk_2C, data_ov000_020aecf8, 0x800);
            }
        }
    } else {
        func_01ff9218(&this->mUnk_2C, data_ov000_020aecf8, 0x200);
    }

    this->func_ov031_020e238c();
}

void ActorBomb::func_ov031_020e1ebc() {
    this->func_ov000_0209862c(0x0);
    this->mUnk_2C = 0x0;
}

void ActorBomb::func_ov031_020e1ed8() {
    if (this->mUnk_1E0.type_index != 0x100) {
        return;
    }
    unk32 param1 = 0x101;
    if (this->mUnk_1E0.type_index == param1) {
        param1 = 0x0;
    } else {
        param1 = this->mUnk_1E0.unk_id;
    }
    data_027e0ce0->func_ov000_0208bacc(param1, &this->mPos);
}

void ActorBomb::func_ov031_020e1f18() {
    if (!this->mUnk_1EF) {
        bool var = true;
        if (this->mUnk_1E0.type_index != 0x100 && this->mUnk_1E0.type_index != 0x101) {
            var = false;
        }
        if (var) {
#if IS_JP
            if (!this->mUnk_1F1)
#endif
            {
                ItemManager *itemManager = data_027e0ce0->mUnk_2C;
                if (itemManager != NULL && itemManager->GetInventory()->GetBombAmount() > 0) {
                    itemManager->GetInventory()->GiveBombs(-1);
#if IS_JP
                    this->mUnk_1F1 = true;
#endif
                }
            }
        }
    }
    if (!this->mUnk_1F0) {
        this->mUnk_1EF = true;
    }
}

void ActorBomb::func_ov031_020e1f88() {
    this->mUnk_3C = &this->mUnk_134;

    this->func_ov031_020e1d18();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020e2a9c();
    this->func_ov031_020e2c2c();
    this->func_ov031_020e238c();
}

void ActorBomb::func_ov031_020e1fe0() {}

void ActorBomb::func_ov031_020e1fe4() {
    this->func_ov031_020e1d18();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020e2a9c();
    this->func_ov031_020e2c2c();
    this->func_ov031_020e238c();
}

void ActorBomb::func_ov031_020e2034() {
    this->mUnk_1E4 = 0;
    this->mUnk_2C  = 0x0;

    this->Actor::vfunc_40();

    this->mUnk_44 = (s16) this->mUnk_44 & ~0x20;
    this->mUnk_134.func_ov000_02097bec();
}

void ActorBomb::func_ov031_020e2064() {
    this->Actor::vfunc_44();

    if (GET_FLAG(this->mFlags, ActorFlag_5)) {
        this->SetState(ActorBombState_3);
        this->mUnk_44 = (s16) this->mUnk_44 | 0x20;
    }
    this->func_ov031_020e238c();
    this->func_ov031_020e1d18();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->func_ov031_020e2a9c();
}

void ActorBomb::func_ov031_020e20d8() {
    this->mUnk_1E4 = 0x0;
    ActorBlast::func_ov031_020e3b9c(this, 0x1, 0x0);
    this->Actor::func_ov000_020984d0();
}

void ActorBomb::func_ov031_020e20fc() {}

void ActorBomb::func_ov031_020e2100() {
    fx32 newY = this->mPos.y - FLOAT_TO_FX32(0.0125f);
    newY -= FLOAT_TO_FX32(0.1875f);

    this->mUnk_1E9 = 0x50;
    this->mUnk_2C  = 0x0;
    this->mPos.y   = newY;
    this->mUnk_1DC = newY;
    this->mUnk_44  = (s16) this->mUnk_44 & ~0x3;
}

void ActorBomb::func_ov031_020e2134() {
    fx32 newZ = MUL_FX32(this->mVel.z, FLOAT_TO_FX32(0.3f));
    fx32 newX = MUL_FX32(this->mVel.x, FLOAT_TO_FX32(0.3f));

    this->mVel.x = newX;
    this->mVel.y = FLOAT_TO_FX32(-0.0102f);
    this->mVel.z = newZ;

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    ActorBomb_ov031_020e2134 sp00 = ActorBomb_ov031_020e2134();
    this->func_ov031_020e295c(&sp00);
    this->func_ov031_020e2820(&sp00);

    if (!(--this->mUnk_1E9 & 0xFF)) {
        this->func_ov000_020984d0();
    }
}

void ActorBomb::vfunc_2C(unk32 param1) {
    if (!this->Actor::func_01fff5d0(param1, 0x0)) {
        for (ActorBomb_unk *ptr = this->mUnk_164; ptr != this->mUnk_164 + ARRAY_LEN(this->mUnk_164); ptr++) {
            ptr->func_ov000_020a0334();
        }
        return;
    }

    if (!data_027e09b8->mUnk_97) {
        for (ActorBomb_unk *ptr = this->mUnk_164; ptr != this->mUnk_164 + ARRAY_LEN(this->mUnk_164); ptr++) {
            if (ptr->mUnk_00 != NULL) {
                ptr->mUnk_00->mUnk_24 |= 0x8;
            }
        }
        return;
    }

    for (ActorBomb_unk *ptr = this->mUnk_164; ptr != this->mUnk_164 + ARRAY_LEN(this->mUnk_164); ptr++) {
        if (ptr->mUnk_00 != NULL) {
            ptr->mUnk_00->mUnk_24 &= ~0x8;
        }
    }

    func_01ffc5a0(&this->mUnk_094, this->mUnk_1D8, this->mAngleStruct, &this->mPos);

    VecFx32 sp0C;
    VecFx32_Init(this->mPos.x, this->mPos.y + FLOAT_TO_FX32(0.4f), this->mPos.z, &sp0C);

    if (this->mState == ActorBombState_6) {
        return;
    }

    data_027e09b4->func_ov017_020c08c4(&sp0C, 0x59A, 0x59A, 0x1F, 0x0, 0x1);
}

// non-matching (switch case)
void ActorBomb::func_ov031_020e238c() {
    this->Actor::func_ov000_020989e0();
    if (!(this->mUnk_134.mUnk_08 & 0x3FFFF)) {
        return;
    }

    u16 value = this->mUnk_134.mUnk_1C;
    switch ((s32) value) {
        case 15:
            this->mUnk_134.mUnk_04 &= ~0x8000;
            data_027e0d8c->func_ov093_021661c0(this->mRef);
            break;
        case 4:
            if (!data_027e0d38->func_ov031_020d9c04(0x1, 0x0, 0x0)) {
                break;
            }
            this->SetState(ActorBombState_4);
            break;
        case 0:
            this->SetState(ActorBombState_5);
            break;
        default:
            ActorBlast::func_ov031_020e3b9c(this, 0x0, 0x0);
            this->Actor::func_ov000_020984d0();
            break;
    }
}

bool ActorBomb::Grab(ActorGrabParams grabParams) {
    this->SetState(ActorBombState_1);
    this->mUnk_1E0         = grabParams.mUnk_00;
    this->mUnk_1E4         = 0;
    this->mUnk_180.mUnk_18 = 0x0;

    this->Actor::Grab(grabParams);
}

bool ActorBomb::Drop(ActorGrabParams grabParams, const VecFx32 *pVel) {
    this->SetState(ActorBombState_2);
    this->mUnk_1E4 = this->mUnk_1E0;
    this->mUnk_1E0 = 0x0;

    if (!(grabParams.mUnk_00.type_index != 0x100 && grabParams.mUnk_00.type_index != 0x2 + 0xFF)) {
        unk32 param1;
        if (grabParams.mUnk_00.type_index == 0x101) {
            param1 = 0x0;
        } else {
            param1 = grabParams.mUnk_00.unk_id;
        }

        VecFx32 sp0C = *this->Actor::func_ov000_0209853c(param1);

        this->mUnk_154.pos.y = sp0C.y + FLOAT_TO_FX32(0.4f) - this->mPos.y;
        this->mPrevPos.x     = sp0C.x;
        this->mPrevPos.z     = sp0C.z;
    } else {
        Actor *actor = gpActorManager->func_01fff3b4(grabParams.mUnk_00);

        if (actor != NULL) {
            VecFx32 sp00         = actor->mPos;
            this->mUnk_154.pos.y = sp00.y + FLOAT_TO_FX32(0.4f) - this->mPos.y;
            this->mPrevPos.x     = sp00.x;
            this->mPrevPos.z     = sp00.z;
        }
    }

    return this->Actor::Drop(grabParams, pVel);
}

bool ActorBomb::func_ov031_020e25bc() {
    bool ret = true;
    Cylinder cylinder;
    VecFx32_Copy(&this->mPos, &cylinder.pos);
    cylinder.size = 0x666;

    if (!data_027e09c0->func_ov000_0207e458(0x4, 0x0, &cylinder.pos, 0x1, NULL, 0x0)) {
        ret = false;
    }
    return ret;
}

bool ActorBomb::func_ov031_020e262c() {
    VecFx32_Copy(&this->mPos, &this->mUnk_19C.mUnk_0C.pos);
    this->mUnk_19C.mUnk_0C.size = FLOAT_TO_FX32(0.4f);

    data_027e09c0->func_ov000_0207e58c(this->mRef, 0x0, 0xC, &this->mUnk_19C);
    return true;
}

void ActorBomb::func_ov031_020e2680(VecFx32 *param1) {
    if (this->mVel.y == FLOAT_TO_FX32(0.0f)) {
        return;
    }

    if (param1->x == FLOAT_TO_FX32(0.0f) && param1->y == FLOAT_TO_FX32(0.0f) && param1->z == FLOAT_TO_FX32(0.0f)) {
        return;
    }

    VecFx32 sp0C = this->mVel;
    VecFx32 sp00 = this->mVel;

    if (VecFx32_Dot(param1, &sp00) >= FLOAT_TO_FX32(0.0f)) {
        return;
    }

    fx32 velLength = VecFx32_Length(&this->mVel);

    func_01ff94cc(&sp00, param1, &sp0C);
    VecFx32_TryNormalize(&sp00);

    this->mVel.x = MUL_FX32(sp00.x, MUL_FX32(velLength, FLOAT_TO_FX32(0.2f)));
    this->mVel.z = MUL_FX32(sp00.z, MUL_FX32(velLength, FLOAT_TO_FX32(0.2f)));
}

void ActorBomb::func_ov031_020e2780(VecFx32 *param1) {
    VecFx32 sp00 = *param1;

    if (!VecFx32_TryNormalize(&sp00)) {
        return;
    }

    fx32 dot = VecFx32_Dot(&sp00, &this->mVel);
    if (dot >= FLOAT_TO_FX32(0.0f)) {
        return;
    }

    func_01ffb974(ROUND_FX32(dot * FLOAT_TO_FX32(-1.2002f)), &sp00, &this->mVel, &this->mVel);
    this->mVel.x = ROUND_FX32(this->mVel.x * FLOAT_TO_FX32(0.75f));
    this->mVel.z = ROUND_FX32(this->mVel.z * FLOAT_TO_FX32(0.75f));
}

// non-matching
fx32 ActorBomb::func_ov031_020e2820(UnkStruct_ov031_Items_00 *param1) {
    UnkStruct_ov031_020e5d18_00 sp60;
    sp60.mUnk_00 = NULL;
    VecFx32 sp54 = this->mPos;
    VecFx32 sp48 = this->mPrevPos;
    VecFx32 sp3C;

    func_01ffb714(&sp54, &sp48, &sp3C);
    fx32 sp3CLength = VecFx32_Length(&sp3C);

    VecFx32 sp0C = sp48;
    VecFx32 sp30 = sp0C;
    VecFx32 sp24 = sp0C;
    VecFx32 sp18 = sp3C;

    if (VecFx32_TryNormalize(&sp18) != 0x0) {
        while (sp3CLength != FLOAT_TO_FX32(0.0f)) {
            if (sp3CLength > FLOAT_TO_FX32(0.5f)) {
                func_01ffb974(FLOAT_TO_FX32(0.5f), &sp18, &sp24, &sp24);
                sp3CLength -= FLOAT_TO_FX32(0.5f);
            } else {
                func_01ffb974(sp3CLength, &sp18, &sp24, &sp24);
                sp3CLength = FLOAT_TO_FX32(0.0f);
            }
            func_01ffe6c4(&sp60, this->mRef, &sp24, &sp30, (s16) this->mUnk_44, &this->mPos, param1);

            if (!this->Actor::func_ov000_0207e294(this->mUnk_30)) {
                VecFx32_Copy(&sp24, &sp30);
            }
        }
    }

    return sp3CLength;
}

// non-matching
fx32 ActorBomb::func_ov031_020e295c(UnkStruct_ov031_Items_00 *param1) {
    UnkStruct_ov031_020e5d18_00 sp60;
    sp60.mUnk_00 = NULL;
    VecFx32 sp54 = this->mPos;
    VecFx32 sp48 = this->mPrevPos;
    VecFx32 sp3C;

    func_01ffb714(&sp54, &sp48, &sp3C);
    fx32 sp3CLength = VecFx32_Length(&sp3C);

    VecFx32 sp0C = sp48;
    VecFx32 sp30 = sp0C;
    VecFx32 sp24 = sp0C;
    VecFx32 sp18 = sp3C;

    if (VecFx32_TryNormalize(&sp18) != 0x0) {
        while (sp3CLength != FLOAT_TO_FX32(0.0f)) {
            if (sp3CLength > FLOAT_TO_FX32(0.5f)) {
                func_01ffb974(FLOAT_TO_FX32(0.5f), &sp18, &sp24, &sp24);
                sp3CLength -= FLOAT_TO_FX32(0.5f);
            } else {
                func_01ffb974(sp3CLength, &sp18, &sp24, &sp24);
                sp3CLength = FLOAT_TO_FX32(0.0f);
            }
            func_01ffe6c4(&sp60, this->mRef, &sp24, &sp30, (s16) this->mUnk_44, &this->mPos, param1);

            if (!this->Actor::func_ov000_0207df88(this->mUnk_30, 0x10)) {
                VecFx32_Copy(&sp24, &sp30);
            }
        }
    }

    return sp3CLength;
}

void ActorBomb::func_ov031_020e2a9c() {
    UnkStruct_ov031_020e5d18_00 s0C;
    s0C.mUnk_00 = NULL;

    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_180.mUnk_0C);

    func_01ffe6c4(&s0C, this->mRef, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos, &this->mUnk_180);

    unk32 value = this->func_ov031_020e295c(&this->mUnk_180) | this->func_ov031_020e2820(&this->mUnk_180);
    if (this->mUnk_1E0.type_index != 0x0) {
        this->mUnk_154.pos.y = 0x4CC;
    } else {
        func_01ff916c(&this->mUnk_154.pos.y, 0x4CC, 0x333);
    }
    this->mUnk_46 = value;
}

bool ActorBomb::func_ov031_020e2b40() {
    if (this->mUnk_180.mUnk_04 & 0x4) {
        func_ov017_020c26f8(0x2, &this->mPos, 0x1, 0x1);
        data_027e09a8->func_ov000_02071b30(0xED, &this->mPos, 0x0);

        ActorBlast::func_ov031_020e3b9c(this, 0x0, 0x0);

        return true;
    }

    if (this->mUnk_180.mUnk_04 & 0x2) {
        unk32 sp00;
        func_ov017_020c2438(&sp00, 0x2, &this->mPos, 0x1, 0x1);

        data_027e09a8->func_ov000_02071b30(0xEA, &this->mPos, 0x0);

        return true;
    }

    if (!(this->mUnk_180.mUnk_04 & 0x1)) {
        return false;
    }

    data_027e09a8->func_ov000_02071b30(0xE8, &this->mPos, 0x0);
    return true;
}

void ActorBomb::func_ov031_020e2c2c() {
    if (this->func_ov031_020e1d74() || (this->mUnk_180.mUnk_04 & 0x1) != 0x0) {
        if (this->mUnk_1F0) {
            this->mUnk_1EF = true;
        }

        if (this->mUnk_180.mUnk_04 & 0x8) {
            if (!this->func_ov031_020e1d58()) {
                return;
            }
            this->SetState(ActorBombState_6);
            return;
        }

        if (this->func_ov031_020e2b40()) {
            this->Actor::func_ov000_020984d0();
            return;
        }

        ++this->mUnk_1E8;
        this->mVel.y = MUL_FX32(-this->mVel.y, FLOAT_TO_FX32(0.6f));
        this->mVel.x = MUL_FX32(this->mVel.x, FLOAT_TO_FX32(0.2f));
        this->mVel.z = MUL_FX32(this->mVel.z, FLOAT_TO_FX32(0.2f));

        if (this->mUnk_1E8 <= 0x3) {
            return;
        }

        VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mVel);
        this->SetState(ActorBombState_0);
        return;
    }

    if (!(this->mUnk_46 & 0x1C)) {
        return;
    }

    this->func_ov031_020e2780(&this->mUnk_180.mUnk_0C);
}

ActorBomb_180::ActorBomb_180(Actor *param1) :
    mUnk_08(param1) {
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_0C);
    this->mUnk_18 = 0x0;
}

ActorBomb_180::~ActorBomb_180() {
    this->mUnk_08 = NULL;
}

// non-matching (wrong instruction in condition)
bool ActorBomb_180::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {
    if (((((u32) param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06]) >> 0x19) & 1) == 1) {
        return false;
    }

    VecFx16_Copy2VecFx32(&param1->mUnk_08, &this->mUnk_0C);
    return this->UnkStruct_ov031_Items_00::vfunc_08(param1);
}

// non-matching
bool ActorBomb_180::vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) {}

bool ActorBomb_180::vfunc_10(ActorRef param1, unk32 param2) {
    if (param1.type == 0x1) {
        Actor *actor = gpActorManager->func_01fff3b4(param1);
        if (actor != NULL && actor->GetActorId() == ActorId_Bomb) {
            ActorBlast::func_ov031_020e3b9c(this->mUnk_08, 0x0, 0x0);
            this->mUnk_08->func_ov000_020984d0();
            ((ActorBomb *) actor)->SetState(ActorBombState_5);
        }
    }
    return true;
}

// non-matching (unreachable code ?)
bool ActorBomb_ov031_020e2134::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {
    if ((((u32) param1->mUnk_04->mUnk_24[param1->mUnk_00->mUnk_06] >> 0x9) & 0x7) == 0xA) {
        return false;
    }
    return this->UnkStruct_ov031_Items_00::vfunc_08(param1);
}

ActorBomb_19C::ActorBomb_19C(Actor *param1) :
    mUnk_2C(param1) {}

void ActorBomb_19C::vfunc_10(Actor *actor) {
    Actor *bomb = this->mUnk_2C;
    if (!GET_FLAG(bomb->mFlags, ActorFlag_Alive)) {
        return;
    }
    ActorBlast::func_ov031_020e3b9c(bomb, 0x0, 0x0);
    this->mUnk_2C->func_ov000_020984d0();
}

ActorBomb_unk::ActorBomb_unk() :
    UnkSystem7(NULL),
    mUnk_04(-0x1),
    mUnk_08(0x0) {}
