#include "Actor/ActorUnkZLSL_ZSRS.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkRAT0.hpp"
#include "Actor/ActorUnkRPMT.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d8c.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"

extern "C" void func_01ff916c(void *, int, int);
extern "C" void func_01ff930c(s16 *, unk16, unk32);
extern "C" void func_01ff93c0(VecFx32 *, unk32);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" void func_02015300(unk32 *);
extern "C" unk16 func_02016958(VecFx32 *, VecFx32 *);
extern "C" ActorUnkRPMT *func_02016fbc(ActorId, fx32 *, unk32);

extern "C" void func_ov000_020578a4(unk32);
extern "C" void func_ov000_02057c98(ModelRender *, UnkSystem5 *);

UnkStruct_ov031_0211369c::~UnkStruct_ov031_0211369c() {}
UnkStruct_ov031_021136e4::~UnkStruct_ov031_021136e4() {}
UnkStruct_ov031_0211372c::~UnkStruct_ov031_0211372c() {}

s8 UnkStruct_ov031_0211369c::vfunc_30() {
    return this->mUnk_18;
}

void UnkStruct_ov031_0211369c::vfunc_38(unk32 param1, unk32 param2) {
    func_ov000_020578a4(this->mUnk_04);
}

void UnkStruct_ov031_0211369c::vfunc_3C() {
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

ModelRender_ov031_02113670::ModelRender_ov031_02113670(G3d_Model *pModel) :
    ModelRender_ov000_020b4d64(pModel) {}

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
    this->mUnk_04.pos.y = 0x800;
    this->mUnk_18       = 0x0;
}

ActorUnkZLSL::ActorUnkZLSL() :
    Actor_Derived1(NULL, 0x0) {}

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

static char data_ov031_021135f0[]    = " ";
static char data_ov031_021135f4[0x4] = "3\x03";
// data_ov031_021135f8
// data_ov031_021135fc
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
static const char data_ov031_02113a08[24] = "blink";
// data_ov031_02113a20
// data_ov031_02113a38
// data_ov031_02113a50
// data_ov031_02113a68
// data_ov031_02113a80
// data_ov031_02113a98
// data_ov031_02113ab0
// data_ov031_02113ac8
// data_ov031_02113ae0
// data_ov031_02113af8
// data_ov031_02113b58
// data_ov031_02113d08
// data_ov031_02113d14
// data_ov031_02113d3c
// data_ov031_02113d58

// non-matching
void ActorUnkZLSL::GetOffsetPos(VecFx32 *pPos) const {
    VecFx32_Init(this->mUnk_2878.x, this->mUnk_2878.y + this->mYOffset, this->mUnk_2878.z, pPos);
}

// non-matching
bool ActorUnkZLSL::vfunc_18(unk32 param1) {}

// non-matching
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

        VecFx32 vec   = this->mPos;
        VecFx32 *oVec = this->func_ov000_0209853c(0);

        VecFx32 lastVec;
        vec.x     = this->mUnk_2890;
        vec.y     = 0x1000;
        lastVec.y = oVec->y;
        lastVec.z = vec.z;

        data_027e09c0->func_ov000_0207de98(this->mRef, &lastVec, this->mUnk_38);
    }

    this->mUnk_2894 = 0;
    this->mUnk_2898 = this->mUnk_2890;
    this->mUnk_289C = 0;
    this->mUnk_28A0 = this->mUnk_2890;
}

// non-matching
void ActorUnkZLSL::vfunc_2C(unk32 param1) {}

void ActorUnkZLSL::vfunc_58(s16 state) {
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
    if (!this->mUnk_2874 && this->mUnk_28AC == 0x1000) {
        this->vfunc_58(ActorUnkZLSLState_4);
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_10);
}

void ActorUnkZLSL::vfunc_70() {
    if (!this->mUnk_2874 && this->mUnk_28AC == 0x1000) {
        this->vfunc_58(ActorUnkZLSLState_4);
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_10);
}

// non-matching
unk32 ActorUnkZLSL::vfunc_7C() {}

// non-matching
unk32 ActorUnkZLSL::vfunc_80(unk32 param1, unk32 param2) {
    u32 value = (u16) ((u8) (param1 + 1) | param2 << 0x8);
    if (value == 0x201) {
        ActorUnkRPMT *actor = func_02016fbc(ActorId_RPMT, &this->mPos.x, 0x0);
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
    if (!this->mUnk_2874 && this->mUnk_28AC == 0x1000) {
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
void ActorUnkZLSL::vfunc_98(unk32 param1) {}

// non-matching
void ActorUnkZLSL::vfunc_A4() {}

void ActorUnkZLSL::vfunc_AC() {}

// non-matching
void ActorUnkZLSL::vfunc_B0() {}

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
    this->mUnk_0B0 &= 0xFFFB;

    this->mUnk_2870 = 0x0;
    SET_FLAG(this->mFlags, ActorFlag_Visible);

    this->mUnk_2878.x = this->mPos.x;
    this->mUnk_2878.y = this->mPos.y;
    this->mUnk_2878.z = this->mPos.z;

    this->mUnk_2888 = FLOAT_TO_FX32(0.0f);
    this->mUnk_288C = 0x0;
    this->mUnk_2C   = 0x0;
    this->mUnk_286A = 0x0;
    this->mUnk_286C = 0x0;
    this->mUnk_28B0 = 0x0;
    this->mUnk_28B4 = 0x0;
    this->mUnk_28B8 = 0x0;
    this->mUnk_28BC = 0x0;
    this->mUnk_28C0 = 0x0;
    this->mUnk_28C4 = 0x0;

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

// non-matching
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
    ActorUnkRPMT *actor = func_02016fbc(ActorId_RPMT, &this->mPos.x, 0x0);
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
    this->mUnk_28A4 = 0x0;
    this->mUnk_28A8 = 0x0;
    this->mUnk_28AC = 0x0;
    this->mUnk_2884 = 0x0;
    this->mVel.x    = FLOAT_TO_FX32(0.0f);
    this->mVel.y    = FLOAT_TO_FX32(0.0f);
    this->mVel.z    = FLOAT_TO_FX32(0.0f);
    this->mUnk_52   = 0xA;
    this->mUnk_50   = 0x0;
    this->mUnk_2884 = 0x0;
    this->mUnk_2888 = 0x0;
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
    this->mUnk_28A4 = 0x0;
    this->mUnk_28A8 = 0x0;
    this->mUnk_28AC = 0x0;
    this->func_ov031_020ec6d8(true);
}

void ActorUnkZLSL::func_ov031_020eba58() {
    this->mUnk_28A4 = 0x0;
    this->mUnk_28A8 = 0x0;
    this->mUnk_28AC = 0x0;
    this->func_ov031_020ec6d8(true);
    this->mUnk_0B0 |= 0x8;
}

void ActorUnkZLSL::func_ov031_020ebfd8() {
    this->mUnk_28A4 = 0x1000;
    this->mUnk_28A8 = 0x1000;
    this->mUnk_28AC = 0x1000;
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
    this->mUnk_28A4 = 0x0;
    this->mUnk_28A8 = 0x0;
    this->mUnk_28AC = 0x0;

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
        bool (ActorUnkZLSL::**ptr)(Actor *);
    } sp0;
    sp0.ptr = &data_ov031_0211361c;

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

// non-matching
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
                this->mUnk_28A4 = 0x0;
                this->mUnk_28A8 = 0x0;
                this->mUnk_28AC = 0x0;
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
                this->mUnk_28A4 = 0x1000;
                this->mUnk_28A8 = 0x1000;
                this->mUnk_28AC = 0x1000;
                this->vfunc_58(ActorUnkZLSLState_8);
            }
            this->func_ov031_020ed4e4(0x5, 0x93F);
        default:
            break;
    }
}

// non-matching
void ActorUnkZLSL::func_ov031_020eba8c() {}

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

// non-matching
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

// non-matching
void ActorUnkZLSL::func_ov031_020ec49c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ec54c() {}

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

// non-matching
bool ActorUnkZLSL::func_ov031_020ec8c4() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ecc68(unk32 param1) {}

// non-matching
void ActorUnkZLSL::func_ov031_020ecea8() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ed0b0() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ed3c0() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ed47c() {}

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
