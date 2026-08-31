#define VECFX32_CTORS

#include "Actor/ActorSpinut.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"
#include "nitro/os.h"

extern "C" u16 data_ov000_020aecf4[];
extern "C" unk32 data_ov000_020aecf8;

extern "C" bool func_01ff916c(void *, int, int);
extern "C" unk32 func_01ff9258(fx32, fx32);
extern "C" unk32 func_01ff930c(s16 *, s16, unk32);
extern "C" void func_01ff9318(void *, unk32, unk32);
extern "C" void func_01ff941c(VecFx32 *, VecFx32 *);
extern "C" fx32 func_01ffb428(unk32, unk32);
extern "C" unk32 func_01ffb464(unk32 param1);
extern "C" fx32 func_01ffb66c(unk32, unk32);
extern "C" fx16 func_01ffbbe0(fx32, fx32);
extern "C" bool func_02016ae0(VecFx32 *, VecFx32 *, UnkAngleStruct, unk32, unk32);
extern "C" Actor *func_02016fbc(ActorId, VecFx32 *, unk32);

extern "C" bool func_ov000_0205adfc(VecFx32 *, VecFx32 *);
extern "C" void func_ov000_020986b4(s16 *param1, Actor_Derived2 *param2, unk32 param3);

extern "C" void func_ov017_020c2438(unk32 *, unk32, VecFx32 *, unk32, unk32);
extern "C" void func_ov017_020c26f8(unk32, VecFx32 *, unk32, unk32);

static const VecFx32 data_ov032_02122160(FLOAT_TO_FX32(1.7f), FLOAT_TO_FX32(0.5f), FLOAT_TO_FX32(1.7f));
static ActorUnkZLSL_AnimationTag data_ov032_02122184               = {.index = 0, .name = "walk", .unknown = 0x0};
static ActorUnkZLSL_AnimationTag data_ov032_0212219c               = {.index = 1, .name = "discover", .unknown = 0x1};
static ActorUnkZLSL_AnimationTag data_ov032_0212216c               = {.index = 0, .name = "KURI", .unknown = 0x1};
static PTMF<ActorSpinut> data_ov032_02122288[ActorSpinutState_Max] = {
    ActorSpinut::func_ov032_02119a0c, // ActorSpinutState_0
    ActorSpinut::func_ov032_02119c80, // ActorSpinutState_1
    ActorSpinut::func_ov032_02119df4, // ActorSpinutState_2
    ActorSpinut::func_ov032_02119f40, // ActorSpinutState_3
    ActorSpinut::func_ov032_0211a20c, // ActorSpinutState_4
    ActorSpinut::func_ov032_0211a52c, // ActorSpinutState_5
    ActorSpinut::func_ov032_0211a86c, // ActorSpinutState_6
    ActorSpinut::func_ov032_0211aac8, // ActorSpinutState_7
    ActorSpinut::func_ov032_0211abc0, // ActorSpinutState_8
    ActorSpinut::func_ov032_0211a9c8, // ActorSpinutState_9
    ActorSpinut::func_ov032_0211ac94, // ActorSpinutState_10
    ActorSpinut::func_ov032_0211adf4  // ActorSpinutState_11
};
static PTMF<ActorSpinut> data_ov032_02122348[ActorSpinutState_Max] = {
    ActorSpinut::func_ov032_02119990, // ActorSpinutState_0
    ActorSpinut::func_ov032_02119be8, // ActorSpinutState_1
    ActorSpinut::func_ov032_02119d7c, // ActorSpinutState_2
    ActorSpinut::func_ov032_02119e90, // ActorSpinutState_3
    ActorSpinut::func_ov032_0211a140, // ActorSpinutState_4
    ActorSpinut::func_ov032_0211a484, // ActorSpinutState_5
    ActorSpinut::func_ov032_0211a7b8, // ActorSpinutState_6
    ActorSpinut::func_ov032_0211aa40, // ActorSpinutState_7
    ActorSpinut::func_ov032_0211ab20, // ActorSpinutState_8
    ActorSpinut::func_ov032_0211a950, // ActorSpinutState_9
    ActorSpinut::func_ov032_0211ac20, // ActorSpinutState_10
    ActorSpinut::func_ov032_0211ad40  // ActorSpinutState_11
};

DECL_PROFILE(ActorProfileSpinut);

Actor *ActorProfileSpinut::Create() {
    return new(HeapIndex_2) ActorSpinut();
}

ActorProfileSpinut::ActorProfileSpinut() :
    ActorProfile_Derived1(ActorId_Spinut) {
    this->mUnk_04.Init(FLOAT_TO_FX32(0.4f));
    this->vfunc_04()->mUnk_15 = true;
}

// non-matching
ActorSpinut::ActorSpinut() :
    mUnk_0B0(G3d_GetModelPtr(GET_PROFILE(ActorProfileSpinut)->vfunc_04()->mUnk_50)),
    mUnk_110(&this->mUnk_0B0, GET_PROFILE(ActorProfileSpinut)->vfunc_04()),
    mUnk_1BC(&this->mUnk_0B0, GET_PROFILE(ActorProfileSpinut)->vfunc_04()),
    mUnk_218(0x0),
    mUnk_21C(0x0),
    mUnk_220(0x7B),
    mUnk_224(0x0),
    mUnk_264(0x3800) {
    SET_FLAG(this->mFlags, ActorFlag_6);
    SET_FLAG(this->mFlags, ActorFlag_13);

    this->mUnk_228.mUnk_04 |= 0x8000;
    this->mUnk_294 = true;

    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_288);

    Actor_38 *actor_38 = &this->mUnk_258.mUnk_00;
    actor_38->mUnk_08  = 0x1;
    this->mUnk_38      = actor_38;
    this->mUnk_296     = 0x0;
    this->mUnk_298     = 0x0;

    VecFx32_Init(FLOAT_TO_FX32(1.0f), FLOAT_TO_FX32(1.0f), FLOAT_TO_FX32(1.0f), &this->mUnk_27C);

    this->func_ov000_0209862c(0x4);

    SET_FLAG(this->mFlags, ActorFlag_9);

    this->mUnk_A4 = &data_ov032_02122160;
}

ActorSpinut::~ActorSpinut() {}

bool ActorSpinut::vfunc_18(unk32 param1) {
    if (this->Actor::func_ov000_02098a60(0x1)) {
        this->func_ov000_020984d0();
        return true;
    }

    if (this->mUnk_5C.mParams[0] == 0x1) {
        this->mUnk_1BC.func_ov000_02099ddc(data_ov032_0212216c, 0x1000, 0x1000);
        this->mUnk_48 = 0xC;
    } else {
        this->mUnk_1BC.func_ov000_02099ddc(data_ov032_0212216c, 0x1000, 0x0);
        this->mUnk_48 = 0x6;
    }
    return true;
}

// non-matching
void ActorSpinut::vfunc_1C() {
    if (this->mUnk_5C.mParams[0] == 0x2) {
        this->mUnk_294 = false;
        Actor *actor   = func_02016fbc(ActorId_Soldier, &this->mPos, 0x0);
        if (actor == NULL) {
            this->SetState(ActorSpinutState_0);
            return;
        }
        fx32 deltaZ  = actor->mPos.z - this->mPos.z;
        fx32 deltaX  = actor->mPos.x - this->mPos.x;
        this->mAngle = func_01ffbbe0(deltaX, deltaZ);
        this->SetState(ActorSpinutState_11);
        return;
    }
    this->SetState(ActorSpinutState_0);
}

void ActorSpinut::func_ov032_021194dc(ActorState state) {
    this->mUnk_2C  = data_ov000_020aecf8;
    this->mUnk_218 = 0x0;

    if (this->mState != ActorSpinutState_11) {
        return;
    }

    unk32 param2 = 0xA;
    if (state == ActorSpinutState_1) {
        param2 = 0x10;
    }

    if (this->mUnk_294) {
        return;
    }

    gpActorManager->func_01fff2fc((void (*)(Actor *, u16)) &ActorSpinut::func_ov032_0211b37c, param2);
}

void ActorSpinut::SetState(ActorState state) {
    this->func_ov032_021194dc(state);
    this->mState = state;

    CALL_PTMF(PTMF<ActorSpinut>, data_ov032_02122348[this->mState]);
}

void ActorSpinut::vfunc_20() {
    if (!this->Actor_Derived2::func_ov017_020bef4c(0x4000) && mUnk_48 != 0) {
        bool var_r1 = true;
        bool var_r2 = true;
        if (this->mState != ActorSpinutState_8 && this->mState != ActorSpinutState_7) {
            var_r2 = false;
        }
        if (var_r2 == 0 && this->mUnk_5C.mParams[0] != 2) {
            var_r1 = false;
        }
        if (var_r1 == 0) {
            return;
        }
    }

    this->mUnk_3C = &this->mUnk_228;
    CALL_PTMF(PTMF<ActorSpinut>, data_ov032_02122288[this->mState]);

    this->Actor_Derived2::func_ov017_020bf894(&this->mUnk_248);
    this->Actor::func_ov000_02098838();
    this->func_ov032_0211b298();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->Actor::func_ov000_02098b8c(0x1, &this->mUnk_268);

    if (this->mUnk_46 & 0x1) {
        this->mVel.y = FLOAT_TO_FX32(0.0f);
    }

    if (this->func_ov032_0211b17c()) {
        return;
    }

    this->Actor::func_ov000_020989e0();
    bool var = true;

    if (this->mUnk_228.mUnk_08 & 0x3FFFF) {
        var = false;
        switch (this->mUnk_228.mUnk_1C) {
            case 0xE:
                if (!this->Actor::func_ov000_020986fc(0) && !this->Actor::func_ov000_020986fc(1)) {
                    var = true;
                    break;
                }
            case 0xF:
                this->Actor_Derived2::func_ov000_020990c0(&this->mUnk_228, 0, 0);
                this->SetState(ActorSpinutState_6);
                break;

            case 0xC:
                this->Actor_Derived2::func_ov017_020bf178(&this->mUnk_228, 1);
                data_027e09a8->func_ov000_02071b30(0x983C, &this->mPos, 0x0);
                this->mUnk_248.func_ov000_02099a0c();
                this->SetState(ActorSpinutState_7);
                break;

            case 0x4:
                if (data_027e0d38->func_ov031_020d9c04(0x1, 0x0, 0x0)) {
                    this->SetState(ActorSpinutState_8);
                }
                break;

            default:
                this->mUnk_48 -= this->mUnk_228.mUnk_1E;
                this->Actor_Derived2::func_ov000_020990c0(&this->mUnk_228, 0x0, 0x0);
                data_027e09a8->func_ov000_02071b30(0x983C, &this->mPos, 0x0);
                this->SetState(ActorSpinutState_6);
                break;
        }
    }
    if (var && (this->Actor::func_ov000_02098ab4(0x2, 0x0, 0x1, NULL) & 1) && (this->mState == ActorSpinutState_3)) {
        this->SetState(ActorSpinutState_5);
    }

    if (GET_FLAG(this->mFlags, ActorFlag_14)) {
        this->mUnk_110.vfunc_34();
    }

    if (!GET_FLAG(this->mFlags, ActorFlag_Alive)) {
        return;
    }

    if (this->func_ov032_0211b17c()) {
        return;
    }

    VecFx32 vec = this->mPos;

    UnkStruct_ov000_0207de98 stack;
    VecFx32_Copy(&vec, &stack.vec);
    stack.param1 = 0x548;
    stack.param2 = 0x1000;

    data_027e09c0->func_ov000_0207de98(this->mRef, &stack, this->mUnk_38);
}

void ActorSpinut::vfunc_2C(unk32 param1) {
    if (!this->Actor::func_01fff5d0(param1, 0x0)) {
        return;
    }
    this->func_ov017_020bf5c4(&this->mPos, 0x548, 0x548, 0x1F, 0x0);
    VecFx32 sp14;
    VecFx32_Copy(&this->mUnk_27C, &sp14);
    func_01ff941c(&sp14, &this->mUnk_98);

    VecFx32 sp08 = this->mPos;
    sp08.y += this->mUnk_288.y;
    this->mUnk_0B0.func_01ffc634(&sp14, this->mAngleStruct, &sp08);
}

void ActorSpinut::func_ov032_02119990() {
    this->mVel.x   = FLOAT_TO_FX32(0.0f);
    this->mVel.z   = FLOAT_TO_FX32(0.0f);
    this->mUnk_264 = 0x3800;

    this->mUnk_110.vfunc_1C(data_ov032_02122184, 0x1000, 0x19A, 0x0);
    this->mUnk_220 = 0x7B;
}

// non-matching (regalloc)
void ActorSpinut::func_ov032_02119a0c() {
    switch (this->mUnk_218) {
        case 0x0:
            unk32 var;
            if (gRandom.Next32(0) & 0x80000000) {
                var = 0x1;
            } else {
                var = -0x1;
            }
            this->mUnk_21C = var;

            this->mUnk_52 = gRandom.Next32(0x15) + 0x1E;
            this->mUnk_50 = 0x00;

            ++this->mUnk_218;
            break;

        case 0x1:
            this->mUnk_224 = this->mUnk_21C * gRandom.Next32(0x38E) + this->mAngle;

            if (func_01ff930c(&this->mAngle, this->mUnk_224, 0x71C)) {
                u16 angle    = this->mAngle;
                this->mVel.x = MUL_FX32(SIN(angle), this->mUnk_220);
                this->mVel.z = MUL_FX32(COS(angle), this->mUnk_220);

                if (this->func_ov032_0211b064(0x0)) {
                    this->SetState(ActorSpinutState_1);
                    break;
                }

                if (this->IsTimerOut()) {
                    this->SetState(ActorSpinutState_0);
                }
            }
            break;

        default:
            break;
    }

    this->func_ov032_0211b1e0();
}

void ActorSpinut::func_ov032_02119be8() {
    this->mUnk_264 = 0x4800;
    this->mUnk_110.vfunc_1C(data_ov032_0212219c, 0x14CD, 0x19A, 0x0);

    data_027e09a8->func_ov000_02071b30(0x9836, &this->mPos, 0x0);

    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
}

// non-matching
void ActorSpinut::func_ov032_02119c80() {
    UnkStruct_PlayerGet_50 *playerGet50 = this->mUnk_110.vfunc_28();

    fx32 val = func_01ffb428(playerGet50->mUnk_10 - playerGet50->mUnk_08, 0x14CD);
    val >>= 0xC;

    s16 var;
    func_ov000_020986b4(&var, this, 0x0);

    if (val > 0x0) {
        unk32 param2 = func_01ffb464(val << 0xC);
        func_01ff9318(&this->mAngle, var, param2);
    }

    if (this->mUnk_110.vfunc_28()->func_01ff8fa8() == 0x0) {
        return;
    }

    data_027e0cec->func_ov000_0209feac(0x880, &this->mPos, 0x2, 0x0, 0x0);

    if (this->mUnk_5C.mParams[0] == 0x1 && !this->func_ov032_0211b114()) {
        this->SetState(ActorSpinutState_4);
        return;
    }

    this->SetState(ActorSpinutState_3);
}

void ActorSpinut::func_ov032_02119d7c() {
    this->mUnk_110.vfunc_1C(data_ov032_02122184, 0x1000, 0x19A, 0x0);
    this->mUnk_52 = 0x14;
    this->mUnk_50 = 0x00;
    this->mVel.x  = FLOAT_TO_FX32(0.0f);
    this->mVel.z  = FLOAT_TO_FX32(0.0f);
}

// non-matching
void ActorSpinut::func_ov032_02119df4() {
    s16 var;
    s16 delta = this->mUnk_52 - this->mUnk_50;
    func_ov000_020986b4(&var, this, 0x0);

    s16 val = var;
    if (delta > 0x0) {
        func_01ff9318(&this->mAngle, val, func_01ffb464(delta << 0xC));
    }

    if (this->IsTimerOut()) {
        this->SetState(ActorSpinutState_3);
    }
    this->func_ov032_0211b1e0();
}

// non-matching
void ActorSpinut::func_ov032_02119e90() {
    this->mUnk_110.vfunc_1C(data_ov032_02122184, 0x1000, 0x19A, 0x0);

    this->mUnk_288.x = func_01ffb66c(0x1800, func_01ffb428(0x148, 0x14) >> 0xC);

    this->mUnk_50 = 0x0;
    this->mUnk_52 = 0xB4;

    if (this->mUnk_5C.mParams[0] == 0x2) {
        this->mUnk_264 = 0x14000;
    } else {
        this->mUnk_264 = 0x4800;
    }

    this->mUnk_220 = 0x0;
    this->mVel.x   = FLOAT_TO_FX32(0.0f);
    this->mVel.z   = FLOAT_TO_FX32(0.0f);
}

// non-matching (case 1)
void ActorSpinut::func_ov032_02119f40() {
    if (this->IsTimerOut()) {
        this->mUnk_218 = 0x2;
    }

    switch (this->mUnk_218) {
        case 0x0: {
            this->mUnk_220 += 0x14;
            fx32 newValAdd                     = this->mUnk_110.vfunc_28()->mUnk_04 + this->mUnk_288.x;
            this->mUnk_110.vfunc_28()->mUnk_04 = newValAdd;

            if (this->mUnk_220 < 0x148) {
                break;
            }

            this->mUnk_220                     = 0x148;
            this->mUnk_110.vfunc_28()->mUnk_04 = FLOAT_TO_FX32(2.5f);
            ++this->mUnk_218;
            break;
        }

        case 0x1: {
            s16 var;
            s16 *r5 = &var;
            func_ov000_020986b4(r5, this, 0x0);
            func_01ff930c(&this->mAngle, *r5, 0x2D8);

            if (!this->func_ov032_0211b064(0x1)) {
                ++this->mUnk_218;
            }
            break;
        }

        case 0x2: {
            fx32 newValSub                     = this->mUnk_110.vfunc_28()->mUnk_04 - this->mUnk_288.x;
            this->mUnk_110.vfunc_28()->mUnk_04 = newValSub;
            this->mUnk_220 -= 0x14;

            if (this->mUnk_220 > 0x0) {
                break;
            }

            this->mUnk_220                     = 0x0;
            this->mUnk_110.vfunc_28()->mUnk_04 = FLOAT_TO_FX32(1.0f);

            this->SetState(ActorSpinutState_9);
            break;
        }

        default:
            _OS_Panic();
            break;
    }

    u16 angle    = this->mAngle;
    this->mVel.x = MUL_FX32(SIN(angle), this->mUnk_220);
    this->mVel.z = MUL_FX32(COS(angle), this->mUnk_220);

    this->func_ov032_0211b1e0();
}

void ActorSpinut::func_ov032_0211a140() {
    this->mUnk_110.vfunc_1C(data_ov032_02122184, 0x2000, 0x19A, 0x0);
    this->mUnk_220 = 0x11F;
    this->mUnk_264 = 0x4800;

    unk32 var;
    if (gRandom.Next32(0) & 0x80000000) {
        var = 1;
    } else {
        var = -1;
    }

    this->mUnk_21C = var;

    this->mVel.x  = FLOAT_TO_FX32(0.0f);
    this->mVel.z  = FLOAT_TO_FX32(0.0f);
    this->mUnk_52 = 0x1E;
    this->mUnk_50 = 0x00;
}

// non-matching
void ActorSpinut::func_ov032_0211a20c() {}

void ActorSpinut::func_ov032_0211a484() {
    this->mUnk_110.vfunc_1C(data_ov032_02122184, this->mUnk_110.vfunc_28()->mUnk_04, 0x19A, 0x0);
    fx32 val         = func_01ffb428(this->mUnk_220, 0x14);
    this->mUnk_288.x = func_01ffb66c(0x1000 - this->mUnk_110.vfunc_28()->mUnk_04, val >> 0xC);
}

// non-matching
void ActorSpinut::func_ov032_0211a52c() {
    switch (this->mUnk_218) {
        case 0x0: {
            this->mUnk_110.vfunc_28()->mUnk_04 = this->mUnk_110.vfunc_28()->mUnk_04 + this->mUnk_288.x;

            unk32 val      = this->mUnk_220 - 0x14;
            fx32 sinValue  = SIN((u16) this->mAngle);
            fx32 cosValue  = COS((u16) this->mAngle);
            this->mUnk_220 = val;

            this->mVel.x = MUL_FX32(sinValue, val);
            this->mVel.z = MUL_FX32(cosValue, val);

            if (val > 0x0) {
                return;
            }

            this->mVel.x   = FLOAT_TO_FX32(0.0f);
            this->mVel.z   = FLOAT_TO_FX32(0.0f);
            this->mUnk_220 = 0x0;

            this->mUnk_110.vfunc_28()->mUnk_04 = FLOAT_TO_FX32(1.0f);
            ++this->mUnk_218;
            break;
        }

        case 0x1:
            this->mUnk_110.vfunc_1C(data_ov032_0212219c, 0x1000, 0x19A, 0x0);

            data_027e09a8->func_ov000_02071b30(0x9836, &this->mPos, 0x0);
            ++this->mUnk_218;
            break;

        case 0x2:
            if (!this->mUnk_110.vfunc_28()->func_01ff8fa8()) {
                return;
            }

            data_027e0cec->func_ov000_0209feac(0x880, &this->mPos, 0x2, 0x0, 0x0);

            this->mUnk_110.vfunc_28()->mUnk_02 = 0x0;
            this->mUnk_110.vfunc_28()->mUnk_08 = FLOAT_TO_FX32(0.0f);

            data_027e09a8->func_ov000_02071b30(0x9836, &this->mPos, 0x0);

            ++this->mUnk_218;
            break;

        case 0x3:
            if (!this->mUnk_110.vfunc_28()->func_01ff8fa8()) {
                return;
            }

            data_027e0cec->func_ov000_0209feac(0x880, &this->mPos, 0x2, 0x0, 0x0);
            this->func_ov032_0211b024();
            break;

        default:
            break;
    }
}

void ActorSpinut::func_ov032_0211a7b8() {
    this->mUnk_110.vfunc_1C(data_ov032_02122184, this->mUnk_110.vfunc_28()->mUnk_04, 0x19A, 0x0);

    this->mUnk_288.x = func_01ffb66c(0x1000 - this->mUnk_110.vfunc_28()->mUnk_04, data_ov000_020aecf4[0]);

    this->mUnk_228.func_ov000_02097bec();

    this->mUnk_38->mUnk_08 = 0x3;
}

// non-matching
void ActorSpinut::func_ov032_0211a86c() {
    fx32 sum                           = this->mUnk_110.vfunc_28()->mUnk_04 + this->mUnk_288.x;
    this->mUnk_110.vfunc_28()->mUnk_04 = sum;

    this->func_ov000_020992dc();

    if (!GET_FLAG(this->mFlags, ActorFlag_5)) {
        return;
    }
    Actor_38 *actor38 = this->mUnk_38;
    actor38->mUnk_08  = 0x1;

    if (this->mUnk_48 <= 0x0) {
        this->vfunc_54(0x0);
        return;
    }

    if (this->mUnk_248.mUnk_08 < this->mUnk_248.mUnk_0A) {
        this->SetState(ActorSpinutState_7);
        return;
    }

    if (this->func_ov032_0211b064(0x0) || this->mUnk_5C.mParams[0] == 0x2) {
        this->func_ov032_0211b024();
        return;
    }
    this->SetState(ActorSpinutState_0);
}

void ActorSpinut::func_ov032_0211a950() {
    this->mUnk_110.vfunc_1C(data_ov032_02122184, 0x1000, 0x19A, 0x0);

    this->mUnk_52 = 0x14;
    this->mUnk_50 = 0x00;
    this->mVel.x  = FLOAT_TO_FX32(0.0f);
    this->mVel.z  = FLOAT_TO_FX32(0.0f);
}

void ActorSpinut::func_ov032_0211a9c8() {
    if (this->IsTimerOut()) {
        if (this->func_ov032_0211b064(0x0) || this->mUnk_5C.mParams[0] == 0x2) {
            this->SetState(ActorSpinutState_1);
        } else {
            this->SetState(ActorSpinutState_0);
        }
    }
    this->func_ov032_0211b1e0();
}

extern "C" u16 data_ov000_020aecf0;

void ActorSpinut::func_ov032_0211aa40() {
    this->Actor_Derived2::func_ov000_02099450(&this->mUnk_248, &this->mUnk_228.mUnk_10, 0x0, data_ov000_020aecf0);

    this->mUnk_110.vfunc_1C(data_ov032_02122184, 0x0, 0x19A, 0x0);

    this->mUnk_228.func_ov000_02097bec();
}

void ActorSpinut::func_ov032_0211aac8() {
    this->Actor_Derived2::func_ov000_020994a0();

    if (!GET_FLAG(this->mFlags, ActorFlag_5)) {
        return;
    }

    if (this->func_ov032_0211b064(0x0) || this->mUnk_5C.mParams[0] == 0x2) {
        this->func_ov032_0211b024();
        return;
    }

    this->SetState(ActorSpinutState_0);
}

void ActorSpinut::func_ov032_0211ab20() {
    this->Actor_Derived2::func_ov000_02098f34(&this->mUnk_228.mUnk_10);

    this->vfunc_40();
    *((s16 *) &this->mUnk_44) &= ~0x20;
    this->mUnk_2C = 0x0;

    this->mUnk_110.vfunc_1C(data_ov032_02122184, 0x1000, 0x19A, 0x0);

    this->mUnk_38->mUnk_08 = 0x3;
    this->mUnk_228.func_ov000_02097bec();
}

void ActorSpinut::func_ov032_0211abc0() {
    this->vfunc_44();

    if (!GET_FLAG(this->mFlags, ActorFlag_5)) {
        return;
    }

    this->mUnk_38->mUnk_08 = 0x1;
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_228.mUnk_10);

    this->mUnk_248.func_ov000_02099a0c();

    this->SetState(ActorSpinutState_7);

    *((s16 *) &this->mUnk_44) |= 0x20;
}

void ActorSpinut::func_ov032_0211ac20() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    this->mUnk_52 = 0xA;
    this->mUnk_50 = 0x0;

    this->mUnk_110.vfunc_1C(data_ov032_02122184, 0x1000, 0x19A, 0x0);
}

void ActorSpinut::func_ov032_0211ac94() {
    this->mUnk_27C.y -= 0x199;

    if (!this->IsTimerOut()) {
        return;
    }

    data_027e09a8->func_ov000_02071b30(0x983D, &this->mPos, 0x0);

    this->Actor::func_ov000_020984d0();

    if (this->mUnk_5C.mParams[0] == 0x2) {
        this->func_ov000_02098a88(0x0, 0x1);
    }
    this->func_ov017_020bf3e0(0x1, 0x0);

    this->Actor_Derived2::func_ov000_020997c4(0x0);
}

void ActorSpinut::func_ov032_0211ad40() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    this->mUnk_110.vfunc_1C(data_ov032_02122184, 0x1000, 0x19A, 0x0);

    this->mUnk_298 = gRandom.Next32(0xE);
    this->mUnk_296 = 0x0;
}

// non-matching
void ActorSpinut::func_ov032_0211adf4() {
    this->IsTimerOut();
    switch (this->mUnk_218) {
        case 0x0:
            if (!this->IsInternalTimerOut()) {
                break;
            }

            ++this->mUnk_218;
            this->mUnk_110.vfunc_1C(data_ov032_0212219c, 0x1000, 0x19A, 0x0);
            data_027e09a8->func_ov000_02071b30(0x9836, &this->mPos, 0x0);
            break;

        case 0x1: {
            if (this->mUnk_110.vfunc_28()->func_01ff8fa8() == 0x0) {
                break;
            }

            data_027e0cec->func_ov000_0209feac(0x880, &this->mPos, 0x2, 0x0, 0x0);
            this->mUnk_110.vfunc_1C(data_ov032_02122184, 0x1000, 0x19A, 0x0);
            if (this->func_ov032_0211b064(0x0) || (this->mUnk_294 && this->mUnk_50 >= this->mUnk_52)) {
                this->SetState(ActorSpinutState_1);
                return;
            }
            u16 random     = gRandom.Next32(0);
            this->mUnk_298 = random + 0xA;
            this->mUnk_296 = 0x0;
            this->mUnk_218 = 0x0;
            break;
        }

        default:
            break;
    }
}

void ActorSpinut::func_ov032_0211b024() {
    if (this->mUnk_5C.mParams[0] == 0x1 && !this->func_ov032_0211b114()) {
        this->SetState(ActorSpinutState_4);
        return;
    }
    this->SetState(ActorSpinutState_2);
}

// non-matching
bool ActorSpinut::func_ov032_0211b064(unk32 param1) {
    VecFx32 *vec = data_027e0ce0->func_01fff148(0x0);
    bool ret     = false;
    if (func_ov000_0205adfc(vec, &this->mPos) &&
        func_01ff9258(vec->x - this->mPos.x, vec->z - this->mPos.z) < this->mUnk_264) {
        ret = true;
    }

    if (param1 != 0x0) {
        if (!ret || !func_02016ae0(&this->mPos, vec, this->mAngleStruct, 0x4E39, 0x1) == 0x0) {
            ret = true;
        } else {
            ret = false;
        }
    }

    return ret;
}

// non-matching
bool ActorSpinut::func_ov032_0211b114() {}

bool ActorSpinut::func_ov032_0211b17c() {
    return this->mState == ActorSpinutState_10;
}

// non-matching
void ActorSpinut::func_ov032_0211b190(s32 param1, s32 param2) {}

void ActorSpinut::func_ov032_0211b1e0() {
    if (this->mUnk_110.vfunc_30() != 0x0 || !GET_FLAG(this->mFlags, ActorFlag_14)) {
        return;
    }

    if (this->mUnk_110.vfunc_10()->mUnk_04.func_02015080(0x1000) != 0x0) {
        data_027e09a8->func_ov000_02071b30(0x9838, &this->mPos, 0x0);
        return;
    }

    if (this->mUnk_110.vfunc_10()->mUnk_04.func_02015080(0xF000) != 0x0) {
        data_027e09a8->func_ov000_02071b30(0x9839, &this->mPos, 0x0);
        return;
    }
}

// non-matching
void ActorSpinut::func_ov032_0211b298() {
    if (this->mUnk_110.vfunc_30() != 0x1) {
        if (this->mUnk_288.y <= FLOAT_TO_FX32(0.0f)) {
            this->mUnk_288.z = FLOAT_TO_FX32(0.0f);
            return;
        }

        this->mUnk_288.z -= this->mUnk_2C;

        func_01ff916c(&this->mUnk_288.y, 0x0, this->mUnk_288.z);
        return;
    }

    fx32 value = this->mUnk_110.vfunc_28()->mUnk_08;

    if (value > FLOAT_TO_FX32(1.0f) && value < FLOAT_TO_FX32(16.0f)) {
        value -= FLOAT_TO_FX32(1.0f);
        this->mUnk_288.y = MUL_FX32(value + MUL_FX32(-MUL_FX32(value, value), 0x92492493), 0x3B4);
        return;
    }

    this->mUnk_288.y = FLOAT_TO_FX32(0.0f);
}

void ActorSpinut::func_ov032_0211b37c(ActorSpinut *thisx, u16 param1) {
    if (thisx->GetActorId() == ActorId_Spinut) {
        thisx->mUnk_294 = true;
        thisx->mUnk_52  = param1;
        thisx->mUnk_50  = 0x0;
    }
}

void ActorSpinut::func_ov032_0211b3b0() {
    if (this->mUnk_5C.mUnk_1A[1] != 0x0) {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    } else {
        this->Actor::func_ov000_020984d0();
    }

    if (this->mUnk_5C.mParams[0] == 0x2) {
        this->Actor::func_ov000_02098a88(0x0, 0x1);
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
        return;
    }
    this->Actor::func_ov000_020984d0();
}

void ActorSpinut::vfunc_54(unk32 param1) {
    switch (param1) {
        case 0x0:
            data_027e09a8->func_ov000_02071b30(0x983D, &this->mPos, 0x0);

            this->func_ov017_020bf3e0(this->mUnk_A8->mUnk_00, 0x0);
            this->func_ov000_020997c4(this->mUnk_A8->mUnk_04);
            this->func_ov032_0211b3b0();
            break;

        case 0x1:
            data_027e09a8->func_ov000_02071b30(0xE8, &this->mPos, 0x0);

            this->func_ov032_0211b3b0();
            break;

        case 0x3:
            unk32 sp04;
            func_ov017_020c2438(&sp04, this->mUnk_A8->mUnk_08, &this->mPos, 0x1, 0x1);
            data_027e09a8->func_ov000_02071b30(0xEA, &this->mPos, 0x0);

            this->func_ov032_0211b3b0();
            break;

        case 0x2:
            data_027e09a8->func_ov000_02071b30(0x983D, &this->mPos, 0x0);
            func_ov017_020c26f8(this->mUnk_A8->mUnk_0C, &this->mPos, 0x1, 0x1);
            data_027e09a8->func_ov000_02071b30(0xED, &this->mPos, 0x0);

            this->func_ov017_020bf3e0(this->mUnk_A8->mUnk_00, 0x0);
            this->func_ov000_020997c4(this->mUnk_A8->mUnk_04);
            this->func_ov032_0211b3b0();
            break;

        default:
            break;
    }
}

ActorSpinut_268::ActorSpinut_268() {
    VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &this->mUnk_08);
}

ActorSpinut_268::~ActorSpinut_268() {}

// non-matching
bool ActorSpinut_268::vfunc_08(const UnkStruct_ov031_020f3310 *param1) {
    VecFx16_Copy2VecFx32(&param1->mUnk_08, &this->mUnk_08);
    this->UnkStruct_ov031_Items_00::vfunc_08(param1);
}

void ActorSpinut_1BC::vfunc_3C() {
    this->mUnk_08->func_ov000_02057c98(this->vfunc_10());
}

void ActorSpinut_1BC::vfunc_38(unk32 param1, unk32 param2) {
    this->mUnk_04->func_ov000_020578a4(param1, param2);
}

s8 ActorSpinut_1BC::vfunc_30() {
    return this->mUnk_18;
}

void ActorSpinut_110::vfunc_3C() {
    this->mUnk_08->func_ov000_02057c98(this->mUnk_04);
    this->mUnk_08->func_ov000_02057c98(this->mUnk_1C);
}

void ActorSpinut_110::vfunc_38(unk32 param1, unk32 param2) {
    this->mUnk_04->func_ov000_020578a4(param1, param2);
    this->mUnk_1C->func_ov000_020578a4(param1, param2);
}
