#include "Actor/ActorUnkZLSL_ZSRS.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkFTRN.hpp"
#include "Actor/ActorUnkRAT0.hpp"
#include "Actor/ActorUnkRPMT.hpp"
#include "Actor/ActorUnkZSTG.hpp"
#include "Player/PlayerGet.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d8c.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"

extern "C" UnkActorSystem1_Derived1 data_ov060_02163ff4;

extern "C" void func_01ff916c(void *, int, int);
extern "C" unk32 func_01ff9258(fx32, fx32);
extern "C" unk32 func_01ff930c(s16 *, s16, unk32);
extern "C" void func_01ff9364(s16 *, UnkAngleStruct);
extern "C" void func_01ff93c0(VecFx32 *, unk32);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" void func_02015300(unk32 *);
extern "C" unk16 func_02016958(VecFx32 *, VecFx32 *);
extern "C" Actor *func_02016fbc(ActorId, VecFx32 *, unk32);

extern "C" void func_ov000_020578a4(unk32);
extern "C" void func_ov000_02057c98(ModelRender *, UnkSystem5 *);

static char data_ov031_021135f0[0x4]                            = "\x00 ";
static char data_ov031_021135f4[0x4]                            = "3\x03";
static char data_ov031_021135f8[0x4]                            = "\x00\x10";
static ActorUnkZLSL_AnimationTag data_ov031_021135fc            = {0, "wait"};
static bool (ActorUnkZLSL::*data_ov031_0211361c)(Actor *param1) = ActorUnkZLSL::func_ov031_020ea0b4;
static PTMF<ActorUnkZLSL> data_ov031_021137f8[0x11]             = {
    ActorUnkZLSL::func_ov031_020eaa88, // ActorUnkZLSLState_0
    ActorUnkZLSL::func_ov031_020ea8c8, // ActorUnkZLSLState_1
    ActorUnkZLSL::func_ov031_020ea8c4, // ActorUnkZLSLState_2
    ActorUnkZLSL::func_ov031_020ea8c0, // ActorUnkZLSLState_3
    ActorUnkZLSL::func_ov031_020eace0, // ActorUnkZLSLState_4
    ActorUnkZLSL::func_ov031_020ead78, // ActorUnkZLSLState_5
    ActorUnkZLSL::func_ov031_020ec058, // ActorUnkZLSLState_6
    ActorUnkZLSL::func_ov031_020ec0a8, // ActorUnkZLSLState_7
    ActorUnkZLSL::func_ov031_020ec12c, // ActorUnkZLSLState_8
    ActorUnkZLSL::func_ov031_020eb61c, // ActorUnkZLSLState_9
    ActorUnkZLSL::func_ov031_020eafb0, // ActorUnkZLSLState_10
    ActorUnkZLSL::func_ov031_020eb218, // ActorUnkZLSLState_11
    ActorUnkZLSL::func_ov031_020ec028, // ActorUnkZLSLState_12
    ActorUnkZLSL::func_ov031_020eb158, // ActorUnkZLSLState_13
    ActorUnkZLSL::func_ov031_020eab0c, // ActorUnkZLSLState_14
    ActorUnkZLSL::func_ov031_020ec170, // ActorUnkZLSLState_15
    ActorUnkZLSL::func_ov031_020eba8c, // ActorUnkZLSLState_16
};
static PTMF<ActorUnkZLSL> data_ov031_02113770[0x11] = {
    ActorUnkZLSL::func_ov031_020eaa68, // ActorUnkZLSLState_0
    ActorUnkZLSL::func_ov031_020ea86c, // ActorUnkZLSLState_1
    ActorUnkZLSL::func_ov031_020ea868, // ActorUnkZLSLState_2
    ActorUnkZLSL::func_ov031_020ea864, // ActorUnkZLSLState_3
    ActorUnkZLSL::func_ov031_020eac64, // ActorUnkZLSLState_4
    ActorUnkZLSL::func_ov031_020ead0c, // ActorUnkZLSLState_5
    ActorUnkZLSL::func_ov031_020ec034, // ActorUnkZLSLState_6
    ActorUnkZLSL::func_ov031_020ec05c, // ActorUnkZLSLState_7
    ActorUnkZLSL::func_ov031_020ec0d4, // ActorUnkZLSLState_8
    ActorUnkZLSL::func_ov031_020eb5f8, // ActorUnkZLSLState_9
    ActorUnkZLSL::func_ov031_020ead7c, // ActorUnkZLSLState_10
    ActorUnkZLSL::func_ov031_020eb188, // ActorUnkZLSLState_11
    ActorUnkZLSL::func_ov031_020ebfd8, // ActorUnkZLSLState_12
    ActorUnkZLSL::func_ov031_020eafe0, // ActorUnkZLSLState_13
    ActorUnkZLSL::func_ov031_020eaa8c, // ActorUnkZLSLState_14
    ActorUnkZLSL::func_ov031_020ec164, // ActorUnkZLSLState_15
    ActorUnkZLSL::func_ov031_020eba58, // ActorUnkZLSLState_16
};
static ActorUnkZLSL_AnimationTag data_ov031_02113a08      = {0, "blink"};
static ActorUnkZLSL_AnimationTag data_ov031_02113a20      = {0x01, "happy"};
static ActorUnkZLSL_AnimationTag data_ov031_02113a38      = {0x02, "levitate_s"};
static ActorUnkZLSL_AnimationTag data_ov031_02113a50      = {0x03, "sad"};
static ActorUnkZLSL_AnimationTag data_ov031_02113a68      = {0x04, "fear"};
static ActorUnkZLSL_AnimationTag data_ov031_02113a80      = {0x05, "clap_s"};
static ActorUnkZLSL_AnimationTag data_ov031_02113a98      = {0x06, "surprise"};
static ActorUnkZLSL_AnimationTag data_ov031_02113ab0      = {0x07, "trouble_s"};
static ActorUnkZLSL_AnimationTag data_ov031_02113ac8      = {0x08, "trouble_move"};
static ActorUnkZLSL_AnimationTag data_ov031_02113ae0      = {0x09, "appear_s"};
static ActorUnkZLSL_AnimationTag data_ov031_02113af8[0x4] = {
    {0x0A, "session_s"},
    {0x0B, "turn"},
    {0x0C, "gloomy"},
    {0x0D, "sing"},
};
static ActorUnkZLSL_AnimationTag data_ov031_02113b58[0x12] = {
    {0x00, "levitate_s"}, {0x01, "move_s"},     {0x02, "talk_s"},     {0x03, "pflute"},    {0x04, "turn"},
    {0x05, "happy"},      {0x06, "levitate_s"}, {0x07, "move_s"},     {0x08, "sad_s"},     {0x09, "happy_s"},
    {0x0A, "fear_s"},     {0x0B, "clap_s"},     {0x0C, "surprise_s"}, {0x0D, "trouble_s"}, {0x0E, "trouble_move_s"},
    {0x0F, "appear_s"},   {0x10, "talk_s"},     {0x11, "session_s"},
};
static unk32 data_ov031_02113d08 = 0;
// data_ov031_02113d14
// data_ov031_02113d3c
static char data_ov031_02113d58[0x0B] = "Npc/ZLDA/";

ActorUnkZLSL_27CC::~ActorUnkZLSL_27CC() {}
ActorUnkZLSL_2700::~ActorUnkZLSL_2700() {}
UnkStruct_ov031_0211372c::~UnkStruct_ov031_0211372c() {}

s8 ActorUnkZLSL_27CC::vfunc_30() {
    return this->mUnk_18;
}

void ActorUnkZLSL_27CC::vfunc_38(unk32 param1, unk32 param2) {
    func_ov000_020578a4(this->mUnk_04);
}

void ActorUnkZLSL_27CC::vfunc_3C() {
    func_ov000_02057c98(this->mUnk_08, this->vfunc_10());
}

void UnkStruct_ov031_0211372c::vfunc_38(unk32 param1, unk32 param2) {
    this->mUnk_04->func_ov000_020578a4(param1, param2);
    this->mUnk_1C->func_ov000_020578a4(param1, param2);
}

void UnkStruct_ov031_0211372c::vfunc_3C() {
    func_ov000_02057c98(this->mUnk_08, this->mUnk_04);
    func_ov000_02057c98(this->mUnk_08, this->mUnk_1C);
}

// --- Actor ZSRS ---

THUMB_BEGIN

void ModelRender_ov031_02113670::vfunc_0C() {
    ModelRender::vfunc_0C();
}

DECL_PROFILE(ActorProfileUnkZSRS);

Actor *ActorProfileUnkZSRS::Create() {
    return NULL;
}

ActorProfileUnkZSRS::ActorProfileUnkZSRS() :
    ActorProfile_Derived2(ActorId_ZSRS, ActorId_ZSRS) {}

ActorUnkZSRS::ActorUnkZSRS() :
    Actor_Derived1(NULL, 0x0) {}

// --- Actor ZLSL ---

DECL_PROFILE(ActorProfileUnkZLSL);

Actor *ActorProfileUnkZLSL::Create() {
    return new(HeapIndex_2) ActorUnkZLSL();
}

ActorProfileUnkZLSL::ActorProfileUnkZLSL() :
    ActorProfile(ActorId_ZLSL) {
    this->mUnk_04.size  = 0x666;
    this->mUnk_1C       = 0x1000;
    this->mUnk_1A       = 0x1800;
    this->mUnk_04.pos.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_04.pos.z = FLOAT_TO_FX32(0.0f);
    this->mUnk_04.pos.y = FLOAT_TO_FX32(0.5f);
    this->mUnk_18       = 0x0;
}

ActorUnkZLSL::ActorUnkZLSL() :
    Actor_Derived1(NULL, 0x0),
    mUnk_1620(NULL),
    mUnk_276C(NULL) {}

ActorUnkZLSL::~ActorUnkZLSL() {}

void func_ov031_020ea100() {}

bool ActorUnkZLSL::func_ov031_020ea0b4(Actor *param1) {
    if (param1 != NULL && param1->GetActorId() == ActorId_RAT0 && param1->mState == ActorUnkRAT0State_0 &&
        param1->mUnk_5C.mParams[1] == 0x1) {
        return true;
    }
    return false;
}
THUMB_END

// non-matching
void ActorUnkZLSL::GetOffsetPos(VecFx32 *pPos) const {
    VecFx32_Init(this->mUnk_2878.x, this->mUnk_2878.y + this->mYOffset, this->mUnk_2878.z, pPos);
}

bool ActorUnkZLSL::vfunc_18(unk32 param1) {
    this->mUnk_1620.func_ov000_02057c38(0x6, 0x2);
    this->mUnk_1620.func_ov000_0209a7b8(this, this->func_ov000_020a9804);

    this->mUnk_0E4 = ActorUnkZLSL::func_ov031_020ee1f4;

    this->mUnk_27CC.vfunc_1C(data_ov031_021135fc, 0x1000, 0x11F, 0x0);

    this->func_ov031_020ea674();

    this->mUnk_44   = 0xD;
    this->mUnk_282C = 0x937;
    this->mUnk_2830 = 0x2;
    this->mUnk_283C = 0x2;
    this->mUnk_2848 = 0x2;
    this->mUnk_2854 = 0x2;
    this->mUnk_2860 = 0x2;
    this->mUnk_2838 = 0x933;
    this->mUnk_2844 = 0x934;
    this->mUnk_2850 = 0x935;
    this->mUnk_285C = 0x936;
    this->mUnk_30   = &this->mUnk_2894;
    this->mUnk_34   = &this->mUnk_2894;

    return true;
}

void ActorUnkZLSL::vfunc_20() {
    UnkAngleStruct angleTmp = {.angle = this->mAngle};
    CALL_PTMF(PTMF<ActorUnkZLSL>, data_ov031_021137f8[this->mState]);

    if (!GET_FLAG(this->mFlags, ActorFlag_Visible)) {
        return;
    }
    this->func_ov031_020ee4c4(angleTmp);

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (this->mState != ActorUnkZLSLState_9 && this->mState != ActorUnkZLSLState_16) {
        this->func_ov031_020edc80();
        this->vfunc_A4();
    }

    this->func_ov031_020ee654();
    this->mUnk_1690.func_ov031_020eeca8();
    this->func_ov031_020ee41c();

    if (GET_FLAG(this->mFlags, ActorFlag_Alive) && (this->mUnk_2900 & 0x1)) {
        func_01ff916c(&this->mUnk_2890, 0x666, 0x29);

        VecFx32 vec = this->mPos;
        fx32 val    = this->mUnk_2890;
        fx32 offset = this->func_ov000_0209853c(0)->y;
        vec.y       = val + offset;

        UnkStruct_ov000_0207de98 unk;

        unk.vec.x  = vec.x;
        unk.vec.y  = vec.y;
        unk.vec.z  = vec.z;
        unk.param1 = val;
        unk.param2 = 0x1000;

        data_027e09c0->func_ov000_0207de98(this->mRef, &unk, this->mUnk_38);
    }

    this->mUnk_2894.Init(this->mUnk_2890);
}

void ActorUnkZLSL::vfunc_2C(unk32 param1) {
    Mat3p sp00;
    if (this->mUnk_28A4.x == FLOAT_TO_FX32(0.0f) && this->mUnk_28A4.y == FLOAT_TO_FX32(0.0f) &&
        this->mUnk_28A4.z == FLOAT_TO_FX32(0.0f)) {
        return;
    }
    switch (this->mUnk_2874) {
        case false:
            Mat3p_InitYRotation(&sp00, SIN((u16) this->mAngle), COS((u16) this->mAngle));
            this->mUnk_1620.vfunc_10(&this->mUnk_28A4, &sp00, &this->mPos);
            break;
        case true:
            Mat3p_InitYRotation(&sp00, SIN(1), COS(0));
            this->mUnk_276C.vfunc_10(&this->mUnk_28A4, &sp00, &this->mPos);
            break;
        default:
            break;
    }
    this->mUnk_1690.func_ov031_020eeca8();
}

void ActorUnkZLSL::vfunc_58(ActorState state) {
    this->mState    = state;
    this->mUnk_286E = 0x0;

    this->func_ov031_020ea7a8();

    CALL_PTMF(PTMF<ActorUnkZLSL>, data_ov031_02113770[this->mState]);
}

void ActorUnkZLSL::vfunc_68() {
    if (this->mState != ActorUnkZLSLState_8) {
        if (this->mUnk_2900 & 0x2) {
            this->vfunc_58(ActorUnkZLSLState_14);
        } else {
            this->vfunc_58(ActorUnkZLSLState_11);
        }
    }
    this->mUnk_2900 &= 0xFFFD;
    UNSET_FLAG(this->mFlags, ActorFlag_Interacting);
    this->func_ov000_020a9200();
    this->mUnk_0B0 &= 0xFFFE;
}

void ActorUnkZLSL::vfunc_6C() {
    if (!this->mUnk_2874 && this->mUnk_28A4.z == FLOAT_TO_FX32(1.0f)) {
        this->vfunc_58(ActorUnkZLSLState_4);
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_10);
}

void ActorUnkZLSL::vfunc_70() {
    if (!this->mUnk_2874 && this->mUnk_28A4.z == FLOAT_TO_FX32(1.0f)) {
        this->vfunc_58(ActorUnkZLSLState_4);
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_10);
}

unk32 ActorUnkZLSL::vfunc_7C(unk32 param1) {
    switch (param1) {
        case 0x0:
            return this->func_ov031_020ec54c();
        case 0x1:
            this->mUnk_2900 |= 0x2;
            break;
        case 0x2:
            data_ov024_020d8660->func_ov024_020c4a8c(&data_ov060_02163ff4);
            break;
        case 0x3:
            this->mUnk_2900 |= 0x6;
            ActorUnkRAT0::func_ov053_0213c984();
            break;
        case 0x4:
            this->vfunc_58(ActorUnkZLSLState_11);
            break;
        case 0x5:
            this->vfunc_58(ActorUnkZLSLState_8);
            break;
        case 0x6:
            return this->func_ov031_020ec49c();
        case 0x7:
            data_ov000_020b51b8.func_ov000_0206c9a8(0x13A, 0x0, 0x7F, 0x0);
            break;
        case 0x8:
            return this->func_ov031_020ec3d0();
        case 0x9:
            data_027e0cd8->mUnk_0C->func_ov000_020809d8(0x28, -1);
        default:
            break;
    }
    return 0x1;
}

// non-matching
unk32 ActorUnkZLSL::vfunc_80(unk32 param1, unk32 param2) {
    u32 value = (u16) ((u8) (param1 + 1) | param2 << 0x8);
    if (value == 0x201) {
        ActorUnkRPMT *actor = (ActorUnkRPMT *) func_02016fbc(ActorId_RPMT, &this->mPos, 0x0);
        if (actor != NULL) {
            return actor->mUnk_A4;
        }
    }
    return false;
}

bool ActorUnkZLSL::vfunc_88() {
    if (this->func_ov031_020ee724()) {
        return true;
    }
    if (!this->mUnk_2874 && this->mUnk_28A4.z == FLOAT_TO_FX32(1.0f)) {
        return true;
    }
    if (this->mState != ActorUnkZLSLState_10) {
        this->vfunc_58(ActorUnkZLSLState_10);
    }
    return false;
}

bool ActorUnkZLSL::vfunc_8C() {
    return true;
}

// non-matching
void ActorUnkZLSL::vfunc_98(u32 param1) {
    if (param1 < 0x12) {
        bool flag = (this->mUnk_2900 & 0x40) != 0;

        this->mUnk_094.mUnk_0C->vfunc_1C(*(ActorUnkZLSL_AnimationTag *) (this->mUnk_0B8 + 0x18 * param1), 0x1000, 0x19A, flag);

        switch (param1) {
            case 0x0:
            case 0x7:
            case 0x12:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a38, 0x1000);
                break;
            case 0x1:
            case 0x2:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08, 0x1000);
                break;
            case 0x5:
            case 0x9:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a20, 0x1000);
                break;
            case 0x8:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a50, 0x1000);
                break;
            case 0xA:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a68, 0x1000);
                break;
            case 0xB:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a80, 0x1000);
                break;
            case 0xC:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a98, 0x1000);
                break;
            case 0xD:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113ab0, 0x1000);
                break;
            case 0xE:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113ac8, 0x1000);
                break;
            case 0xF:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113ae0, 0x1000);
                break;
            case 0x11:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113af8[0], 0x1000);
                break;
            default:
                break;
        }
    } else if (param1 >= 0x32 && param1 < 0x40) {
        this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113af8[param1 - 0x32], 0x1000);
    }

    this->mUnk_2900 &= ~0x40;
}

extern "C" fx16 func_01ffbbe0(fx32, fx32);
extern "C" void func_01ff9318(void *, unk32, unk32);

// non-matching
void ActorUnkZLSL::vfunc_A4() {
    VecFx32 sp0C;
    if ((this->mUnk_0B0 & 0x10) || !this->func_ov000_020a8ff4(&sp0C)) {
        func_01ff930c(&this->mUnk_0D8, 0x0, 0x71C);
        return;
    }
    VecFx32 sp00 = this->mPos;
    sp00.y       = sp00.y + this->mYOffset - FLOAT_TO_FX32(0.5f);
    func_01ffb714(&sp0C, &sp00, &sp0C);

    s16 var_r4 = this->mAngle - func_01ffbbe0(sp0C.x, sp0C.z);
    if (this->mUnk_0E8 < this->mUnk_0EA) {
        ++this->mUnk_0E8;
    }
    unk32 var_r0 = var_r4;
    if (var_r4 < 0) {
        var_r0 = -var_r4;
    }
    if ((var_r0 <= 0x4000 && func_01ff9258(sp0C.x, sp0C.z) < 0x2000) || this->mUnk_0B0 & 1) {
        if (var_r4 >= 0x2AAB) {
            var_r4 = 0x2AAB;
        } else if (var_r4 <= -0x2AAB) {
            var_r4 = -0x2AAB;
        }
        u16 temp_r0_2 = (u16) func_01ffbbe0(sp0C.y, func_01ff9258(sp0C.x, sp0C.z));
        s16 var_r2    = temp_r0_2;
        if (temp_r0_2 <= 0x18E4) {
            var_r2 = 0x18E4;
        } else if (var_r2 <= -0x18E4) {
            var_r2 = -0x18E4;
        }
        this->mUnk_0CC = (s16) var_r4;
        this->mUnk_0CE = var_r2;
        this->mUnk_0EA = 0x32;
        this->mUnk_0E8 = 0x0;
    } else if ((u32) this->mUnk_0E8 >= (u32) this->mUnk_0EA) {
        this->mUnk_0CE = 0x0;
        this->mUnk_0CC = 0x0;
    } else {
        if ((s32) var_r4 < 0x0) {
            var_r4 = 0 - var_r4;
        }
        if ((s32) var_r4 >= 0x71C7) {
            this->mUnk_0D0 = 0x0;
        }
    }

    func_01ff916c(&this->mUnk_0D0, 0x1EC, 0x19);
    unk16 temp_r1 = this->mUnk_0CC;
    if (this->mState != ActorUnkZLSLState_4) {
        func_01ff9318(&this->mUnk_0D8, temp_r1, this->mUnk_0D0);
    } else {
        func_01ff930c(&this->mUnk_0D8, temp_r1, 0x71C);
    }
    func_01ff9318(&this->mUnk_0DA, this->mUnk_0CE, this->mUnk_0D0);
}

void ActorUnkZLSL::vfunc_AC() {}

void ActorUnkZLSL::vfunc_B0() {
    if (data_027e09b8->func_01ffd420() != 0x0) {
        return;
    }
    ActorUnk_vfunc_B0 stack = ActorUnk_vfunc_B0();
    stack.mUnk_32           = 0x1;
    stack.mpActor           = this;

    unk32 var = this->mUnk_2904;
    if (var == 0x0) {
        ActorUnkZSTG *actor = (ActorUnkZSTG *) func_02016fbc(ActorId_ZSTG, &this->mPos, 0x0);
        if (actor != NULL) {
            var = actor->mUnk_5C.mUnk_20;
            if (actor->mUnk_5C.mParams[1] == 0x1) {
                stack.mUnk_32 = 0x0;
            }
        }
    } else {
        ActorUnkZSTG *actor = (ActorUnkZSTG *) func_02016fbc(ActorId_ZSTG, &this->mPos, 0x0);
        if (actor != NULL) {
            if (actor->mUnk_5C.mParams[1] == 0x1) {
                stack.mUnk_32 = 0x0;
            }
        }
    }

    stack.mUnk_0C = var;
    stack.mUnk_14 = 0x0;
    stack.mUnk_18 = -1;
    stack.mUnk_1C = -1;
    stack.mUnk_20 = false;
    stack.mUnk_21 = false;

    this->GetOffsetPos(&stack.mUnk_34);
    this->mUnk_0B4 = data_027e09b8->func_ov000_02073470(&stack, 0x0);
}

void ActorUnkZLSL::vfunc_B4() {
    if (this->mState == ActorUnkZLSLState_8) {
        this->vfunc_58(ActorUnkZLSLState_10);
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_0);
}

void ActorUnkZLSL::func_ov031_020ea674() {
    this->func_ov031_020ecbe0();
    this->vfunc_58(ActorUnkZLSLState_8);
}

// non-matching
void ActorUnkZLSL::func_ov031_020ea7a8() {
    this->mUnk_0B0 &= 0xFFEF;
    this->mUnk_2900 &= 0xFFFE;

    this->mUnk_2870 = 0x0;
    this->mUnk_0B0 &= 0xFFFB;
    SET_FLAG(this->mFlags, ActorFlag_Visible);

    VecFx32_Copy(&this->mPos, &this->mUnk_2878);

    this->mUnk_2888   = FLOAT_TO_FX32(0.0f);
    this->mUnk_288C   = 0x0;
    this->mUnk_2C     = 0x0;
    this->mUnk_286A   = 0x0;
    this->mUnk_286C   = 0x0;
    this->mUnk_28B0.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_28B0.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_28B0.z = FLOAT_TO_FX32(0.0f);
    this->mUnk_28BC   = 0x0;
    this->mUnk_28C0   = 0x0;
    this->mUnk_28C4   = 0x0;

    this->mUnk_0B0 &= 0xFFF7;
    this->mUnk_2900 |= 0x30;
}

// non-matching
void ActorUnkZLSL::func_ov031_020ea864() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ea868() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ea86c() {}

void ActorUnkZLSL::func_ov031_020eaa68() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    this->vfunc_98(0x0);
}

void ActorUnkZLSL::func_ov031_020eaa8c() {
    this->mUnk_2890 = FLOAT_TO_FX32(0.0f);
    this->mVel.x    = FLOAT_TO_FX32(0.0f);
    this->mVel.y    = FLOAT_TO_FX32(0.0f);
    this->mVel.z    = FLOAT_TO_FX32(0.0f);
    this->mUnk_2900 |= 0x1;

    if ((this->mUnk_2900 & 0x4) != 0x0) {
        this->vfunc_98(0xA);
        this->mUnk_4A[0] = 0x0;
        this->mUnk_0B0 |= 0x10;
    } else {
        this->vfunc_98(0x0);
        this->mUnk_4A[0] = 0x5;
    }
    this->mUnk_2884 = 0x0;
}

void ActorUnkZLSL::func_ov031_020eac64() {
    this->mUnk_2884 = 0x0;
    this->mUnk_2888 = this->mPos.y;
    this->mVel.x    = FLOAT_TO_FX32(0.0f);
    this->mVel.y    = FLOAT_TO_FX32(0.0f);
    this->mVel.z    = FLOAT_TO_FX32(0.0f);
    this->mUnk_0B0 |= 0x1;

    if ((this->mUnk_0B0 & 0x2) != 0x0) {
        if (this->func_ov000_020a9248(0x2000)) {
            this->vfunc_58(ActorUnkZLSLState_5);
            return;
        }
    }
    this->vfunc_98(0x1);
}

void ActorUnkZLSL::func_ov031_020ead0c() {
    this->mUnk_2888 = this->mPos.y;
    this->mVel.x    = FLOAT_TO_FX32(0.0f);
    this->mVel.y    = FLOAT_TO_FX32(0.0f);
    this->mVel.z    = FLOAT_TO_FX32(0.0f);

    if (this->mUnk_094.mUnk_0C->vfunc_30() != 0x1) {
        if (this->mUnk_094.mUnk_0C->vfunc_30() != 0x0) {
            return;
        }
    }
    this->vfunc_98(0x2);
}

// non-matching
void ActorUnkZLSL::func_ov031_020ead7c() {
    ActorUnkRPMT *actor = (ActorUnkRPMT *) func_02016fbc(ActorId_RPMT, &this->mPos, 0x0);
    if (actor != NULL && actor->mState == ActorUnkRPMTState_1) {
        this->mUnk_0B0 |= 0x8;
    }
    VecFx32 vec = *this->func_ov000_0209853c(0x0);
    if (this->mUnk_0B0 & 0x8) {
        if (data_027e0ce0->func_01fff1a4()) {
            data_027e0ce0->func_ov000_0208ba94(0x1, &vec);
        }
    }
    VecFx32 oVec;
    VecFx32_Copy(&vec, &oVec);
    oVec = this->mPos;

    this->mUnk_28E4 = this->func_ov031_020ee2c8();

    this->func_ov031_020ec6d8(true);
    this->mUnk_28A4.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_28A4.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_28A4.z = FLOAT_TO_FX32(0.0f);
    this->mUnk_2884   = 0x0;
    this->mVel.x      = FLOAT_TO_FX32(0.0f);
    this->mVel.y      = FLOAT_TO_FX32(0.0f);
    this->mVel.z      = FLOAT_TO_FX32(0.0f);
    this->mUnk_52     = 0xA;
    this->mUnk_50     = 0x0;
    this->mUnk_2884   = 0x0;
    this->mUnk_2888   = 0x0;
}

extern "C" void func_01fff17c(unk16 *, UnkStruct_027e0ce0 *, unk32);
extern "C" void func_020169d4(VecFx32 *, VecFx32 *, unk16 *, const char *);
extern "C" bool func_02016c68(VecFx32 *, VecFx32 *, ActorRef);

extern "C" const char *data_ov031_02110acc; // 3\x13\x00\x00

// non-matching
void ActorUnkZLSL::func_ov031_020eafe0() {
    this->func_ov000_0209853c(0x0);
    this->mUnk_28E4 = 0x2AAB;

    s16 tab[2];
    func_01fff17c(tab, data_027e0ce0, 0x0);

    tab[1] = tab[0] + this->mUnk_28E4;
    VecFx32 vec;
    func_020169d4(&vec, this->func_ov000_0209853c(0x0), ((fx16 *) tab + 1), data_ov031_02110acc);
    if (func_02016c68(this->func_ov000_0209853c(0x0), &vec, this->mRef)) {
    }
}

void ActorUnkZLSL::func_ov031_020eb188() {
    this->mUnk_2900 |= 0x40;
    this->vfunc_98(0xF);

    func_02015300(&this->mUnk_094.mUnk_0C->vfunc_10()->mUnk_04);
    this->mUnk_4A[0] = 0x0;
    this->mUnk_2888  = FLOAT_TO_FX32(0.3f);
    this->mVel.x     = FLOAT_TO_FX32(0.0f);
    this->mVel.y     = FLOAT_TO_FX32(0.0f);
    this->mVel.z     = FLOAT_TO_FX32(0.0f);
    this->mUnk_2900 |= 0x1;
    VecFx32_Copy(&this->mPos, &this->mUnk_2878);
}

void ActorUnkZLSL::func_ov031_020eb5f8() {
    this->mUnk_28A4.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_28A4.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_28A4.z = FLOAT_TO_FX32(0.0f);
    this->func_ov031_020ec6d8(true);
}

void ActorUnkZLSL::func_ov031_020eba58() {
    this->mUnk_28A4.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_28A4.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_28A4.z = FLOAT_TO_FX32(0.0f);
    this->func_ov031_020ec6d8(true);
    this->mUnk_0B0 |= 0x8;
}

void ActorUnkZLSL::func_ov031_020ebfd8() {
    this->mUnk_28A4.x = FLOAT_TO_FX32(1.0f);
    this->mUnk_28A4.y = FLOAT_TO_FX32(1.0f);
    this->mUnk_28A4.z = FLOAT_TO_FX32(1.0f);
    this->func_ov031_020ec6d8(false);
    this->mAngle = func_02016958(&this->mPos, this->func_ov000_0209853c(0x0));
    this->func_ov031_020eb188();
}

void ActorUnkZLSL::func_ov031_020ec034() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);
    this->vfunc_98(0x1);
}

void ActorUnkZLSL::func_ov031_020ec05c() {
    this->mVel.x = FLOAT_TO_FX32(0.0f);
    this->mVel.z = FLOAT_TO_FX32(0.0f);

    if (this->func_ov000_020a9248(0x2000) == 0x0) {
        this->vfunc_98(0x1);
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_0);
}

void ActorUnkZLSL::func_ov031_020ec0d4() {
    this->mUnk_28A4.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_28A4.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_28A4.z = FLOAT_TO_FX32(0.0f);

    UNSET_FLAG(this->mFlags, ActorFlag_Visible);

    this->vfunc_98(0x0);

    this->mUnk_4A[0] = false;
    data_027e0cec->func_ov000_020a0110(&this->mUnk_2828);
}

void ActorUnkZLSL::func_ov031_020ec164() {
    this->func_ov031_020ead7c();
}

// non-matching
void ActorUnkZLSL::func_ov031_020ecbe0() {
    s16 sp[2];

    func_01fff17c(sp, data_027e0ce0, 0x0);

    sp[1] = sp[0] + FLOAT_TO_FX32(2.6668f);
    func_020169d4(&this->mPos, this->func_ov000_0209853c(0x0), ((fx16 *) sp + 1), data_ov031_021135f4);
    this->mPos.y += FLOAT_TO_FX32(0.5f);
    this->mPrevPos.x = this->mPos.x;
    this->mPrevPos.y = this->mPos.y;
    this->mPrevPos.z = this->mPos.z;
}

// non-matching
void ActorUnkZLSL::func_ov031_020ee1f4() {}

bool ActorUnkZLSL::func_ov031_020ee724() {
    struct {
        bool (ActorUnkZLSL::*ptr)(Actor *);
    } sp0;
    sp0.ptr = data_ov031_0211361c;

    Actor **actor = gpActorManager->func_01fff350(&sp0, gpActorManager->mActorTable);
    return *actor != NULL;
}

// non-matching
void ActorUnkZLSL::func_ov031_020ea8c0() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ea8c4() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ea8c8() {}

// non-matching
void ActorUnkZLSL::func_ov031_020eaa88() {}

void ActorUnkZLSL::func_ov031_020eab0c() {
    if ((this->mUnk_2900 & 0x4) != 0x0) {
        return;
    }
    this->func_ov031_020eab40(0x1800);
    this->vfunc_60();
}

void ActorUnkZLSL::func_ov031_020eab40(unk32 param1) {
    VecFx32 vec;
    VecFx32_Copy(this->func_ov000_0209853c(0x0), &vec);

    VecFx32 *pVec = this->func_ov000_0209853c(0x0);

    VecFx32 oVec;
    func_01ffb714(&this->mPos, pVec, &oVec);

    oVec.y = FLOAT_TO_FX32(0.0f);
    VecFx32_TryNormalize(&oVec);

    func_01ff93c0(&oVec, param1);

    oVec.y += FLOAT_TO_FX32(0.5f);
    VecFx32_Add(&vec, &oVec, &vec);

    func_01ffb714(&vec, &this->mPos, &oVec);

    func_01ff93c0(&oVec, FLOAT_TO_FX32(0.05f));

    VecFx32_Add(&this->mVel, &oVec, &this->mVel);
    func_01ff93c0(&this->mVel, FLOAT_TO_FX32(0.8f));

    if (VecFx32_Length(&this->mVel) > FLOAT_TO_FX32(0.1001f)) {
        VecFx32_TryNormalize(&this->mVel);
        func_01ff93c0(&this->mVel, FLOAT_TO_FX32(0.1001f));
    }
    VecFx32 *pVec2 = this->func_ov000_0209853c(0x0);

    func_01ff930c(&this->mAngle, func_02016958(&this->mPos, pVec2), 0x71C);
}

void ActorUnkZLSL::func_ov031_020eace0() {
    if (!this->func_ov031_020ec8c4()) {
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_5);
}

// non-matching
void ActorUnkZLSL::func_ov031_020ead78() {}

void ActorUnkZLSL::func_ov031_020eafb0() {
    if (!this->func_ov031_020ed8ac(0x800)) {
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_4);
}

void ActorUnkZLSL::func_ov031_020eb158() {
    if (!this->func_ov031_020ed6cc(0x1800)) {
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_14);
}

// non-matching
void ActorUnkZLSL::func_ov031_020eb218() {
    if ((this->mUnk_2900 & 0x10) != 0x0) {
        if (!this->mUnk_2874) {
            this->mUnk_2900 &= 0xFFEF;
            data_027e09a8->func_ov000_02071c90(0x139, &this->mPos, 0x0);
        }
    }
    VecFx32 *vec = this->func_ov000_0209853c(0x0);
    if (!this->func_ov031_020eb2b0(vec, 0xA000)) {
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_8);
}

// non-matching
bool ActorUnkZLSL::func_ov031_020eb2b0(VecFx32 *param1, unk32 param2) {
    func_01ff916c(&this->mUnk_2800, param1->y, 0xCD);
    unk16 res = func_02016958(&this->mPos, param1);
    func_01ff930c(&this->mAngle, res, 0x71C);

    VecFx32 vec = *param1;
    vec.y += 0x800;
    if (!this->mUnk_2874) {
        if (this->mUnk_094.mUnk_0C->vfunc_10()->mUnk_0C < 0xA000) {
            func_01ff916c(&this->mUnk_2800, 0xCD - 0x400, 0xCD + 0xCD);
        }
    }
}

class ActorUnkZLSL_020eb61ec_16C_vfunc_10 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x04);
    /* 04 */ UnkStruct_PlayerGet_50 mUnk_04;
};

class ActorUnkZLSL_020eb61ec_16C {
public:
    /* 00 (vtable) */
    /* 04 */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual ActorUnkZLSL_020eb61ec_16C_vfunc_10 *vfunc_10();
};

// related to ov071 ?
class ActorUnkZLSL_020eb61ec : public Actor {
public:
    /* 000 (base) */
    /* 094 */ STRUCT_PAD(0x94, 0x16C);
    /* 16C */ ActorUnkZLSL_020eb61ec_16C mUnk_16C;
};

void ActorUnkZLSL::func_ov031_020eb61c() {
    ActorUnkZLSL_020eb61ec *actor = (ActorUnkZLSL_020eb61ec *) gpActorManager->func_01fff3b4(this->mUnk_28DC);

    VecFx32 vec;
    switch (this->mUnk_286E) {
        case 0x0:
            if (data_027e09b8->func_01ffd420()) {
                return;
            }
            this->func_ov031_020ecc68(0x0);
            actor->func_ov071_021540ac(0x19);
            this->mUnk_52 = 0x14;
            this->mUnk_50 = 0x0;
            ++this->mUnk_286E;
            break;
        case 0x1:
            if (this->mUnk_28C8 < 0x0) {
                return;
            }
            if (data_027e09b8->func_ov000_020732ec(this->mUnk_28C8) == 0x0) {
                return;
            }
            if (this->IsTimerOut()) {
                this->func_ov031_020eafe0();
                ++this->mUnk_286E;
            }
            this->func_ov031_020ed4e4(0xF, 0x93F);
            break;
        case 0x2:
            this->func_ov031_020edd14(&vec);
            vec.y = this->mPos.y;
            if (this->func_ov031_020ed6cc(0xC00)) {
                this->mUnk_52 = 0xF;
                this->mUnk_50 = 0x0;
                ++this->mUnk_286E;
            }
            this->mAngle = func_02016958(&this->mPos, &vec);
            VecFx32_Copy(&this->mPos, &vec);
            vec.y += FLOAT_TO_FX32(0.5f);
            VecFx32_Copy(&vec, &this->mUnk_28F4);

            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x3:
            if (this->IsTimerOut()) {
                ++this->mUnk_286E;
                this->mUnk_2884 = 0x0;
                this->func_ov031_020eb188();
            }
            VecFx32_Copy(&this->mPos, &vec);
            vec.y += FLOAT_TO_FX32(0.5f);
            VecFx32_Copy(&vec, &this->mUnk_28F4);

            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x4:
            if (this->func_ov031_020eb2b0(&actor->mPos, 0xA000)) {
                data_027e09a8->func_ov000_02071bd4(0x8D5B, &this->mPos, 0x0);
                this->mUnk_28A4.x = FLOAT_TO_FX32(0.0f);
                this->mUnk_28A4.y = FLOAT_TO_FX32(0.0f);
                this->mUnk_28A4.z = FLOAT_TO_FX32(0.0f);
                actor->func_ov071_0215414c();
                ++this->mUnk_286E;
                data_027e0cec->func_ov000_020a0110(&this->mUnk_2828);
            }
            VecFx32_Copy(&this->mPos, &vec);
            vec.y += 0x800;
            VecFx32_Copy(&vec, &this->mUnk_28F4);

            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x5:
            if (actor->mUnk_16C.vfunc_10()->mUnk_04.func_01ff8fa8()) {
                ++this->mUnk_286E;
                data_027e0d8c->func_ov093_021660a8(this->mUnk_28DC);
                actor->func_ov071_021540ac(0x1A);
                this->mUnk_52 = 0x1E;
                this->mUnk_50 = 0x0;
            }
            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x6:
            if (this->IsTimerOut()) {
                data_027e09b8->func_ov000_020732fc(this->mUnk_28C8);
                this->mUnk_28A4.x = FLOAT_TO_FX32(1.0f);
                this->mUnk_28A4.y = FLOAT_TO_FX32(1.0f);
                this->mUnk_28A4.z = FLOAT_TO_FX32(1.0f);
                this->vfunc_58(ActorUnkZLSLState_8);
            }
            this->func_ov031_020ed4e4(0x5, 0x93F);
        default:
            break;
    }
}

void ActorUnkZLSL::func_ov031_020eba8c() {
    ActorUnkZLSL_020eb61ec *actor = (ActorUnkZLSL_020eb61ec *) gpActorManager->func_01fff3b4(this->mUnk_28DC);

    VecFx32 vec;
    switch (this->mUnk_286E) {
        case 0x0:
            if (data_027e09b8->func_01ffd420()) {
                return;
            }
            this->func_ov031_020ecc68(0x1);
            actor->func_ov071_021540ac(0x19);
            this->mUnk_52 = 0x14;
            this->mUnk_50 = 0x0;
            ++this->mUnk_286E;
            break;
        case 0x1:
            if (this->mUnk_28C8 < 0x0) {
                return;
            }
            if (data_027e09b8->func_ov000_020732ec(this->mUnk_28C8) == 0x0) {
                return;
            }
            if (this->IsTimerOut()) {
                this->func_ov031_020ead7c();
                data_027e0d8c->func_ov090_021660e8();
                data_027e0d8c->func_ov093_021660f8();
                ++this->mUnk_286E;
            }
            this->func_ov031_020ed4e4(0xF, 0x93F);
            break;
        case 0x2:
            this->func_ov031_020edd14(&vec);
            vec.y = this->mPos.y;
            if (this->func_ov031_020ed8ac(0x800)) {
                this->mUnk_52 = 0xF;
                this->mUnk_50 = 0x0;
                ++this->mUnk_286E;
            }
            this->mAngle = func_02016958(&this->mPos, &vec);
            VecFx32_Copy(&this->mPos, &vec);
            VecFx32_Copy(&vec, &this->mUnk_28F4);

            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x3:
            if (this->IsTimerOut()) {
                data_027e0d8c->func_ov093_02166108();
                ++this->mUnk_286E;
                this->mUnk_2884 = 0x0;
                this->mUnk_52   = 0x1E;
                this->mUnk_50   = 0x0;
                this->func_ov031_020eb188();
            }
            VecFx32_Copy(&this->mPos, &vec);
            VecFx32_Copy(&vec, &this->mUnk_28F4);

            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x4:
            VecFx32 *pVec = this->func_ov000_0209853c(0x0);
            if (func_01ff9258(this->mPos.x - pVec->x, this->mPos.z - pVec->z) > 0x3000) {
                this->func_ov031_020eb2b0(&actor->mPos, 0x666);
            } else {
                this->func_ov031_020eb2b0(&actor->mPos, 0xA000);
            }
            VecFx32_Copy(&this->mPos, &vec);
            VecFx32_Copy(&vec, &this->mUnk_28F4);

            this->func_ov031_020ed4e4(0xA, 0x93F);

            if (!this->IsTimerOut()) {
                break;
            }
            ++this->mUnk_286E;

            pVec = this->func_ov000_0209853c(0x1);
            if (func_01ff9258(actor->mPos.x - pVec->x, actor->mPos.z - pVec->z) <= 0x3000) {
                break;
            }
            this->func_ov031_020ed3c0();

            this->mUnk_52 = 0xF;
            this->mUnk_50 = 0x0;
            break;
        case 0x5:
            if (!this->IsTimerOut()) {
                break;
            }
            if (!this->func_ov031_020eb2b0(&actor->mPos, 0xA000)) {
                return;
            }

            this->mUnk_28A4.x = FLOAT_TO_FX32(0.0f);
            this->mUnk_28A4.y = FLOAT_TO_FX32(0.0f);
            this->mUnk_28A4.z = FLOAT_TO_FX32(0.0f);

            actor->func_ov071_0215414c();

            ++this->mUnk_286E;

            data_027e09a8->func_ov000_02071bd4(0x8D5B, &this->mPos, 0x0);
            data_027e0cec->func_ov000_020a0110(&this->mUnk_2828);
            break;
        case 0x6:
            if (actor->mUnk_16C.vfunc_10()->mUnk_04.func_01ff8fa8() == 0x0) {
                return;
            }
            ++this->mUnk_286E;
            data_027e0d8c->func_ov093_021660a8(this->mUnk_28DC);
            actor->func_ov071_021540ac(0x1A);
            this->mUnk_52 = 0x1E;
            this->mUnk_50 = 0x0;
            break;
        case 0x7:
            if (!this->IsTimerOut()) {
                return;
            }
            data_027e09b8->func_ov000_020732fc(this->mUnk_28C8);

            this->mUnk_28A4.x = FLOAT_TO_FX32(1.0f);
            this->mUnk_28A4.y = FLOAT_TO_FX32(1.0f);
            this->mUnk_28A4.z = FLOAT_TO_FX32(1.0f);

            this->vfunc_58(ActorUnkZLSLState_8);
            break;
        default:
            break;
    }
}

void ActorUnkZLSL::func_ov031_020ec028() {
    this->func_ov031_020eb218();
}

// non-matching
void ActorUnkZLSL::func_ov031_020ec058() {}

void ActorUnkZLSL::func_ov031_020ec0a8() {
    if (!this->func_ov031_020ec8c4()) {
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_0);
}

void ActorUnkZLSL::func_ov031_020ec12c() {
    this->func_ov031_020ecbe0();

    VecFx32_Copy(this->func_ov000_0209853c(0x0), &this->mUnk_2878);
}

void ActorUnkZLSL::func_ov031_020ec170() {
    this->mUnk_0B0 |= 0x10;

    if (this->mUnk_286E == 0x0) {
        if (this->func_ov031_020ed8ac(0x800)) {
            this->vfunc_98(0x11);
            ++this->mUnk_286E;
        }
    }

    this->mAngle = 0x0;
}

bool ActorUnkZLSL::func_ov031_020ec3d0() {
    bool var = false;
    switch (this->mUnk_2872) {
        case 0x0:
            data_ov000_020b51b8.func_ov000_0206d0bc(0x0);
            this->mUnk_52 = 0x0;
            this->mUnk_50 = 0x0;
            ++this->mUnk_2872;
            break;
        case 0x1:
            if (!this->IsTimerOut()) {
                break;
            }
            data_ov000_020b51b8.func_ov000_0206c9a8(0x4E, 0x0, 0x7F, 0x0);
            data_027e09a8->func_ov000_020717cc(0x8C3C, &this->mPos);
            var = true;
            break;
        default:
            break;
    }
    if (var == true) {
        this->mUnk_2872 = 0x0;
    }
    return var;
}

bool ActorUnkZLSL::func_ov031_020ec49c() {
    bool var = false;
    switch (this->mUnk_2872) {
        case 0x0:
            data_ov000_020b51b8.func_ov000_0206d0bc(0xA);
            this->mUnk_52 = 0xA;
            this->mUnk_50 = 0x0;
            ++this->mUnk_2872;
            break;
        case 0x1:
            if (!this->IsTimerOut()) {
                break;
            }
            data_ov000_020b5214.func_ov000_0206db44(0x988A);
            var = true;
            break;
        default:
            break;
    }
    if (var == 0x1) {
        this->mUnk_2872 = 0x0;
    }
    return var;
}

unk32 ActorUnkZLSL::func_ov031_020ec54c() {
    ActorUnkFTRN *val = (ActorUnkFTRN *) func_02016fbc(ActorId_FieldTrain, &this->mPos, 0x0);

    bool var = false;
    switch (this->mUnk_2872) {
        case 0x0:
            if (this->mState == ActorUnkZLSLState_8) {
                var = true;
                break;
            }
            this->vfunc_58(ActorUnkZLSLState_11);
            ++this->mUnk_2872;
            break;
        case 0x1:
            if (this->mState != ActorUnkZLSLState_8) {
                break;
            }
            var = true;
            val->func_ov040_021260dc(0x0);
            break;
        default:
            break;
    }
    if (var == 0x1) {
        this->mUnk_2872 = 0x0;
    }
    return var;
}

void ActorUnkZLSL::func_ov031_020ec6d8(bool param1) {
    if (param1 != true && this->mUnk_2874 == true && (this->mUnk_2900 & 0x20)) {
        data_027e09a8->func_ov000_02071c90(0x138, &this->mPos, 0x0);
        this->mUnk_2900 |= 0x1;
    }
    if (param1 != true) {
        data_027e0cec->func_ov000_020a0110(&this->mUnk_2828);
    }
    this->mUnk_2874 = param1;
}

bool ActorUnkZLSL::func_ov031_020ec8c4() {
    VecFx32 vec;
    UnkAngleStruct angleStruct;
    if (!this->func_ov000_020a8ff4(&vec)) {
        angleStruct.angle = this->mAngle;
    } else {
        angleStruct.angle = func_02016958(&this->mPos, &vec);
    }

    if (this->mUnk_0B0 & 0x2) {
        func_01ff9364(&this->mAngle, angleStruct);

        s16 angle = angleStruct.angle - this->mAngle;
        if (ABS(angle) < 0x2000) {
            return true;
        }
    }

    return func_01ff930c(&this->mAngle, angleStruct.angle, 0x71C);
}

extern "C" void func_ov000_02072fd0(UnkStackStruct1 *);
extern "C" unk32 func_01ffb9cc(VecFx32 *, VecFx32 *);

class ActorUnkZLSL_020ecc68 : public Actor {
public:
    /* 000 (base) */
    /* 094 */ STRUCT_PAD(0x94, 0x530);
    /* 530 */ unk32 mUnk_530;
};

// non-matching
void ActorUnkZLSL::func_ov031_020ecc68(unk32 param1) {
    UnkStruct_ov031_020ecc68 stack;
    Actor *actor = gpActorManager->func_01fff3b4(this->mUnk_28DC);
    if (param1 != 0x0) {
        VecFx32 *vec = this->func_ov000_0209853c(0x1);
        if (func_01ff9258(actor->mPos.x - vec->x, actor->mPos.z - vec->z) > 0x3000) {
            this->func_ov031_020ed0b0();
        } else {
            UnkAngleStruct angleStruct = this->mAngleStruct;
            angleStruct.angle          = 0x2000;
            this->func_ov031_020ecea8(angleStruct, 0x6000, 0x4800, 0x0);
        }
    } else {
        UnkAngleStruct angleStruct = this->mAngleStruct;
        angleStruct.angle          = 0x2000;
        this->func_ov031_020ecea8(angleStruct, 0x6000, 0x4800, 0x0);
    }
    func_ov000_02072fd0(&stack.sp_34);
    stack.sp_34.mUnk_08 = -0x1;
    stack.sp_34.mUnk_00 = 0x80;
    stack.sp_34.mUnk_3B = 0x4;
    stack.sp_34.mUnk_38 |= 0x80;
    stack.sp_34.mUnk_3A = 0x2;

    VecFx32_Copy(&this->mUnk_28F4, &stack.sp_34.mUnk_0C);

    stack.func_ov031_020ed47c(this, 0x93F);

    stack.sp_34.mUnk_18 = stack.sp_08;
    stack.sp_34.mUnk_1A = stack.sp_0A;
    stack.sp_34.mUnk_1C = stack.sp_0C;
    stack.sp_34.mUnk_1E = stack.sp_0E;
    stack.sp_34.mUnk_20 = stack.sp_10;
    stack.sp_34.mUnk_24 = stack.sp_14;
    stack.sp_34.mUnk_30 = stack.sp_20;
    stack.sp_34.mUnk_32 = stack.sp_22;
    stack.sp_34.mUnk_34 = stack.sp_24;
    stack.sp_34.mUnk_36 = stack.sp_26;

    this->mUnk_28C8 = data_027e09b8->func_ov000_02073388(&stack.sp_34, 0x0);

    unk32 val = func_01ffb9cc(&this->mUnk_28F4, &this->mUnk_28E8);
    func_01ffb714(&this->mUnk_28E8, &this->mUnk_28F4, &stack.sp_28);

    VecFx32_TryNormalize(&stack.sp_28);

    func_01ff93c0(&stack.sp_28, val - 0x1000);

    VecFx32_Copy(&this->mUnk_28F4, &this->mUnk_28E8);
    VecFx32_Add(&this->mUnk_28E8, &stack.sp_28, &this->mUnk_28E8);

    actor = gpActorManager->func_01fff3b4(this->mUnk_28DC);
    if (actor != NULL) {
        ((ActorUnkZLSL_020ecc68 *) actor)->mUnk_530 = this->mUnk_28C8;
    }
}

// non-matching
void ActorUnkZLSL::func_ov031_020ecea8(UnkAngleStruct param1, unk32 param2, unk32 param3, unk32 param4) {}

// non-matching
void ActorUnkZLSL::func_ov031_020ed0b0() {}

void ActorUnkZLSL::func_ov031_020ed3c0() {
    VecFx32 sp14;
    VecFx32 sp08;
    UnkAngleStruct angleStruct;

    sp14              = this->mUnk_28B0;
    angleStruct.angle = 0xE39;

    this->func_ov031_020ecea8(angleStruct, 0x7000, 0x4800, 0x1);

    VecFx32_Copy(&sp14, &this->mUnk_28B0);

    this->func_ov031_020edd14(&sp08);
    sp08.y += 0x800;
    VecFx32_Copy(&sp08, &this->mUnk_28F4);

    this->func_ov031_020ed4e4(0x0, 0x93F);
}

// non-matching
void UnkStruct_ov031_020ecc68::func_ov031_020ed47c(ActorUnkZLSL *param1, unk32 param2) {}

void ActorUnkZLSL::func_ov031_020ed4e4(unk32 param1, unk32 param2) {
    if (this->mUnk_28C8 < 0x0) {
        return;
    }
    if (data_027e09b8->func_ov000_020732ec(this->mUnk_28C8) == 0x0) {
        return;
    }
    data_027e09bc->mUnk_0C->func_ov000_02078834(&this->mUnk_28F4, &this->mUnk_28E8, param2, param1);
}

// non-matching
void ActorUnkZLSL::func_ov031_020ed55c() {}

// non-matching
bool ActorUnkZLSL::func_ov031_020ed6cc(unk32 param1) {}

// non-matching
bool ActorUnkZLSL::func_ov031_020ed8ac(unk32 param1) {}

extern "C" void func_01ffe6c4(Actor **, ActorRef, VecFx32 *, VecFx32 *, s32, VecFx32 *, UnkStruct_ov031_Items_00 *);

// non-matching
void ActorUnkZLSL::func_ov031_020edc80() {
    unk32 var_r6 = 0;
    Actor *actor = NULL;
    func_01ffe6c4(&actor, this->mRef, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos, NULL);
    if (this->mUnk_2900 & 1) {
        var_r6 = data_027e09c0->func_ov000_0207dc88(&actor, this->mUnk_38);
    }
    unk32 temp_r6 = var_r6 | actor->func_ov000_0207df88(this->mUnk_30, 0x10);
    this->mUnk_46 = (s16) (temp_r6 | actor->func_ov000_0207e294(this->mUnk_30));
}

void ActorUnkZLSL::func_ov031_020edd14(VecFx32 *param1) {
    VecFx32_Copy(&gpActorManager->func_01fff3b4(this->mUnk_28DC)->mPos, param1);
}

// non-matching
void ActorUnkZLSL::func_ov031_020edd54() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ede30() {}

// non-matching
void ActorUnkZLSL::func_ov031_020edf98() {}

// non-matching
unk16 ActorUnkZLSL::func_ov031_020ee2c8() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ee41c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ee4c4(UnkAngleStruct angle) {}

// non-matching
void ActorUnkZLSL::func_ov031_020ee654() {}

ActorProfileUnkZLSL::~ActorProfileUnkZLSL() {}
ActorProfileUnkZSRS::~ActorProfileUnkZSRS() {}
