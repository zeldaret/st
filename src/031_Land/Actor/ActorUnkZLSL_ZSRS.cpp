#include "Actor/ActorUnkZLSL_ZSRS.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkRAT0.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

extern "C" void func_02015300(unk32 *);
extern "C" void func_01ff916c(void *, int, int);
extern "C" unk16 func_02016958(VecFx32 *, VecFx32 *);
extern "C" void func_01ff930c(s16 *, unk16, unk32);

UnkStruct_ov031_0211369c::~UnkStruct_ov031_0211369c() {}
UnkStruct_ov031_021136e4::~UnkStruct_ov031_021136e4() {}
UnkStruct_ov031_0211372c::~UnkStruct_ov031_0211372c() {}

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

static const char data_ov031_021135f0[] = " ";
// data_ov031_021135f4
// data_ov031_021135f8
// data_ov031_021135fc
static bool (ActorUnkZLSL::*data_ov031_0211361c)(Actor *param1) = ActorUnkZLSL::func_ov031_020ea0b4;
// PTMF data_ov031_021137f8
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
void ActorUnkZLSL::vfunc_20() {}

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
unk32 ActorUnkZLSL::vfunc_80() {}

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

// non-matching
void ActorUnkZLSL::func_ov031_020ea674() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ea7a8() {}

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
    this->mUnk_2890 = 0x0;
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

// non-matching
void ActorUnkZLSL::func_ov031_020ead0c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ead7c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020eafe0() {}

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
void ActorUnkZLSL::func_ov031_020ecbe0() {}

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

// non-matching
void ActorUnkZLSL::func_ov031_020eab40(unk32 param1) {}

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

// non-matching
void ActorUnkZLSL::func_ov031_020eb61c() {}

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

// non-matching
void ActorUnkZLSL::func_ov031_020ec3d0() {}

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
void ActorUnkZLSL::func_ov031_020ecc68() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ecea8() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ed0b0() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ed3c0() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ed47c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ed4e4() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ed55c() {}

// non-matching
bool ActorUnkZLSL::func_ov031_020ed6cc(unk32 param1) {}

// non-matching
bool ActorUnkZLSL::func_ov031_020ed8ac(unk32 param1) {}

// non-matching
void ActorUnkZLSL::func_ov031_020edc80() {}

// non-matching
void ActorUnkZLSL::func_ov031_020edd14() {}

// non-matching
void ActorUnkZLSL::func_ov031_020edd54() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ede30() {}

// non-matching
void ActorUnkZLSL::func_ov031_020edf98() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ee2c8() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ee41c() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ee4c4() {}

// non-matching
void ActorUnkZLSL::func_ov031_020ee654() {}

ActorProfileUnkZLSL::~ActorProfileUnkZLSL() {}
ActorProfileUnkZSRS::~ActorProfileUnkZSRS() {}
