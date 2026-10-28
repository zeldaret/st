#include "global.h"

THUMB_BEGIN

#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkFTRN.hpp"
#include "Actor/ActorUnkRAT0.hpp"
#include "Actor/ActorUnkRPMT.hpp"
#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "Actor/ActorUnkZSTG.hpp"
#include "CommonFuncs.hpp"
#include "Player/PlayerActorBase.hpp"
#include "RefStruct.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0208.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d8c.hpp"
#include "Unknown/UnkStruct_ov000_020b3000.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

extern UnkActorSystem1_Derived1 data_ov060_02163ff4;

//! TODO: move to proper header once decompiled
class ActorPhantomBase : public Actor {
public:
    /* 000 (base) */
    /* 094 */ PAD(0x94, 0x316);
    /* 316 */ unk16 mUnk_316;
    /* 094 */ PAD(0x318, 0x530);
    /* 530 */ unk32 mUnk_530;
};

extern unk16 data_ov031_02110ac0;
extern unk16 data_ov031_02110ac4;
static const unk16 data_ov031_02110acc = 0x1333;

static char data_ov031_021135f0[0x4] = "\x00 ";
static char data_ov031_021135f4[0x4] = "3\x03";
static char data_ov031_021135f8[0x4] = "\x00\x10";

static ActorUnkZLSL_AnimationTag data_ov031_021135fc = {0, "wait"};

static PTMF<ActorUnkZLSL> data_ov031_02113770[ActorUnkZLSLState_Max] = {
    &ActorUnkZLSL::func_ov031_020eaa68, // ActorUnkZLSLState_OpenArms
    &ActorUnkZLSL::func_ov031_020ea86c, // ActorUnkZLSLState_1
    &ActorUnkZLSL::func_ov031_020ea868, // ActorUnkZLSLState_2
    &ActorUnkZLSL::func_ov031_020ea864, // ActorUnkZLSLState_3
    &ActorUnkZLSL::func_ov031_020eac64, // ActorUnkZLSLState_RotateClosedArms
    &ActorUnkZLSL::func_ov031_020ead0c, // ActorUnkZLSLState_ClosedArms
    &ActorUnkZLSL::func_ov031_020ec034, // ActorUnkZLSLState_FollowPath
    &ActorUnkZLSL::func_ov031_020ec05c, // ActorUnkZLSLState_RotateOpenArms
    &ActorUnkZLSL::func_ov031_020ec0d4, // ActorUnkZLSLState_Idle
    &ActorUnkZLSL::func_ov031_020eb5f8, // ActorUnkZLSLState_TakePhantomControl
    &ActorUnkZLSL::func_ov031_020ead7c, // ActorUnkZLSLState_TakeHumanShape
    &ActorUnkZLSL::func_ov031_020eb188, // ActorUnkZLSLState_GoOrbShapeAndIdle
    &ActorUnkZLSL::func_ov031_020ebfd8, // ActorUnkZLSLState_12
    &ActorUnkZLSL::func_ov031_020eafe0, // ActorUnkZLSLState_TakeHumanShapeTrainStation
    &ActorUnkZLSL::func_ov031_020eaa8c, // ActorUnkZLSLState_FollowLink
    &ActorUnkZLSL::func_ov031_020ec164, // ActorUnkZLSLState_DuetFinale
    &ActorUnkZLSL::func_ov031_020eba58, // ActorUnkZLSLState_16
};

static PTMF<ActorUnkZLSL> data_ov031_021137f8[ActorUnkZLSLState_Max] = {
    &ActorUnkZLSL::func_ov031_020eaa88, // ActorUnkZLSLState_OpenArms
    &ActorUnkZLSL::func_ov031_020ea8c8, // ActorUnkZLSLState_1
    &ActorUnkZLSL::func_ov031_020ea8c4, // ActorUnkZLSLState_2
    &ActorUnkZLSL::func_ov031_020ea8c0, // ActorUnkZLSLState_3
    &ActorUnkZLSL::func_ov031_020eace0, // ActorUnkZLSLState_RotateClosedArms
    &ActorUnkZLSL::func_ov031_020ead78, // ActorUnkZLSLState_ClosedArms
    &ActorUnkZLSL::func_ov031_020ec058, // ActorUnkZLSLState_FollowPath
    &ActorUnkZLSL::func_ov031_020ec0a8, // ActorUnkZLSLState_RotateOpenArms
    &ActorUnkZLSL::func_ov031_020ec12c, // ActorUnkZLSLState_Idle
    &ActorUnkZLSL::func_ov031_020eb61c, // ActorUnkZLSLState_TakePhantomControl
    &ActorUnkZLSL::func_ov031_020eafb0, // ActorUnkZLSLState_TakeHumanShape
    &ActorUnkZLSL::func_ov031_020eb218, // ActorUnkZLSLState_GoOrbShapeAndIdle
    &ActorUnkZLSL::func_ov031_020ec028, // ActorUnkZLSLState_12
    &ActorUnkZLSL::func_ov031_020eb158, // ActorUnkZLSLState_TakeHumanShapeTrainStation
    &ActorUnkZLSL::func_ov031_020eab0c, // ActorUnkZLSLState_FollowLink
    &ActorUnkZLSL::func_ov031_020ec170, // ActorUnkZLSLState_DuetFinale
    &ActorUnkZLSL::func_ov031_020eba8c, // ActorUnkZLSLState_16
};

// clang-format off
static ActorUnkZLSL_AnimationTag data_ov031_02113a08[] = {
    {0x00, "blink", 0x00},
    {0x01, "happy", 0x00},
    {0x02, "levitate_s", 0x00},
    {0x03, "sad", 0x00},
    {0x04, "fear", 0x00},
    {0x05, "clap_s", 0x00},
    {0x06, "surprise", 0x00},
    {0x07, "trouble_s", 0x00},
    {0x08, "trouble_move", 0x00},
    {0x09, "appear_s", 0x00},
    {0x0A, "session_s", 0x00},
    {0x0B, "turn", 0x00},
    {0x0C, "gloomy", 0x00},
    {0x0D, "sing", 0x00},
};

static ActorUnkZLSL_AnimationTag data_ov031_02113b58[] = {
    {0x00, "levitate_s", 0x00},
    {0x01, "move_s", 0x00},
    {0x02, "talk_s", 0x00},
    {0x03, "pflute", 0x00},
    {0x04, "turn", 0x01},
    {0x05, "happy", 0x00},
    {0x06, "levitate_s", 0x00},
    {0x07, "move_s", 0x00},
    {0x08, "sad_s", 0x00},
    {0x09, "happy_s", 0x00},
    {0x0A, "fear_s", 0x00},
    {0x0B, "clap_s", 0x01},
    {0x0C, "surprise_s", 0x01},
    {0x0D, "trouble_s", 0x00},
    {0x0E, "trouble_move_s", 0x00},
    {0x0F, "appear_s", 0x01},
    {0x10, "talk_s", 0x00},
    {0x11, "session_s", 0x00},
};
// clang-format on

static unk32 data_ov031_02113d08 = 0;
// data_ov031_02113d14
// data_ov031_02113d3c
static char data_ov031_02113d58[0x0B] = "Npc/ZLDA/";

// --- Actor ZSRS ---

DECL_PROFILE(ActorProfileUnkZSRS);

Actor *ActorProfileUnkZSRS::Create() {
    return NULL;
}

ActorProfileUnkZSRS::ActorProfileUnkZSRS() :
    ActorProfile_Derived2(ActorId_ZSRS, ActorId_ZSRS) {}

// --- Actor ZLSL ---

DECL_PROFILE(ActorProfileUnkZLSL);

Actor *ActorProfileUnkZLSL::Create() {
    return new(HeapIndex_2) ActorUnkZLSL();
}

ActorProfileUnkZLSL::ActorProfileUnkZLSL() :
    ActorProfile(ActorId_ZLSL) {
    this->mUnk_04.pos.x = FX_F32_TO_FX32(0.0f);
    this->mUnk_04.pos.y = FX_F32_TO_FX32(0.5f);
    this->mUnk_04.pos.z = FX_F32_TO_FX32(0.0f);
    this->mUnk_04.size  = FX_F32_TO_FX32(0.4f);
    this->mUnk_1C       = 0x1000;
    this->mUnk_1A       = 0x1800;
    this->mUnk_18       = 0x0;
}

bool UnkStruct_ov031_0211361c::vfunc_00(Actor *pActor) {
    if (pActor != NULL && pActor->GetActorId() == ActorId_RAT0 && pActor->mState == ActorUnkRAT0State_0 &&
        pActor->mUnk_5C.mParams[1] == 0x1) {
        return true;
    }

    return false;
}

ModelRender_ov031_02113670::ModelRender_ov031_02113670(G3d_Model *pModel) :
    ModelRender_ov000_020b4d64(pModel) {}

void ModelRender_ov031_02113670::vfunc_0C() {
    ModelRender::vfunc_0C();
}

void ActorUnkZLSL::func_ov031_020ea100() {
    GET_PROFILE(ActorProfileUnkZSRS)->vfunc_08();

    ActorParams params;
    params.mUnk_28.Reset();
    params.func_ov000_020975f8();
    params.mUnk_28.acRef.type_index = 0x100;
    params.mUnk_28.acRef.unk_id     = 0x00;

    RefStruct ref;
    Actor::func_ov000_020973f4(&ref, &data_ov000_020b539c_eur, ActorId_ZLSL, &params, 0x00);
}

static inline G3d_Model *GetModelFromProfile() {
    return G3d_GetModelPtr(GET_PROFILE(ActorProfileUnkZSRS)->vfunc_04()->mUnk_50);
}

static inline G3d_Model *GetModel() {
    return G3d_GetModelPtr(data_027e0ce0->mUnk_1C->mUnk_08[PlayerCharacter_Zelda][0]->mUnk_50);
}

extern Actor *data_027e0d3c;

ActorUnkZLSL::ActorUnkZLSL() :
    ActorUnkZSRS(&this->mUnk_1620, GetModel(), GET_PROFILE(ActorProfileUnkZSRS)->vfunc_04(),
                 data_027e0ce0->mUnk_1C->mUnk_08[PlayerCharacter_Zelda][0]->func_ov000_02058a24()),
    mUnk_1620(GetModel()),
    mUnk_2700(&this->mUnk_1620, GetModel(), data_027e0ce0->mUnk_1C->mUnk_08[PlayerCharacter_Zelda][0]->func_ov000_02058a24()),
    mUnk_276C(GetModelFromProfile()),
    mUnk_27CC(&this->mUnk_276C, GET_PROFILE(ActorProfileUnkZSRS)->vfunc_04()),
    mUnk_2864(0, 0),
    mUnk_2868(0),
    mUnk_286A(0),
    mUnk_286C(0),
    mUnk_286E(0),
    mUnk_2870(0),
    mUnk_2872(0),
    mUnk_2874(true),
    mUnk_2878(0, 0, 0),
    mUnk_2884(0),
    mUnk_2888(0),
    mUnk_288C(0),
    mUnk_2890(0),
    mUnk_28A4(0, 0, 0),
    mUnk_28B0(0, 0, 0),
    mUnk_28BC(0, 0, 0),
    mUnk_28C8(-1),
    mUnk_28DC(0),
    mUnk_28E0(0),
    mUnk_28E2(0),
    mUnk_28E4(0),
    mUnk_28E8(0, 0, 0),
    mUnk_28F4(0, 0, 0),
    mUnk_2900(0),
    mUnk_2904(0) {
    data_027e0d3c  = this;
    this->mUnk_0B8 = data_ov031_02113b58;
    this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[0], 0x1000, 0x00);

    for (int var_r4_2 = 0; var_r4_2 < ARRAY_LEN(this->mUnk_28CC); var_r4_2++) {
        this->mUnk_28CC[var_r4_2].ref.Reset();
    }

    this->mUnk_1690.func_ov031_020eeb58();
    this->mUnk_26F4.mUnk_08 = 0x001;
    this->mUnk_38           = (Actor_38 *) &this->mUnk_26F4;
    this->mUnk_2894.Init(0);
}

ActorUnkZLSL::~ActorUnkZLSL() {
    data_027e0d3c = NULL;

    data_027e0cec->func_ov000_020a0110(&this->mUnk_2828.mUnk_00);

    for (int i = 0; i < 4; i++) {
        data_027e0cec->func_ov000_020a0110(&this->mUnk_2834[i]);
    }
}

THUMB_END

void ActorUnkZLSL::func_ov031_020ea674() {
    this->func_ov031_020ecbe0();
    this->vfunc_58(ActorUnkZLSLState_Idle);
}

bool ActorUnkZLSL::Init(unk32 param1) {
#pragma unused(param1)

    this->mUnk_1620.func_ov000_02057c38(0x6, 0x2);
    this->mUnk_1620.func_ov000_0209a7b8(this, Actor_Derived1::func_ov000_020a9804);

    this->mUnk_0E4 = ActorUnkZLSL::func_ov031_020ee1f4;

    this->mUnk_27CC.vfunc_1C(data_ov031_021135fc, 0x1000, 0x11F, 0x0);

    this->func_ov031_020ea674();

    this->mUnk_44           = 0xD;
    this->mUnk_2828.mUnk_04 = 0x937;
    this->mUnk_2828.mUnk_08 = 0x2;

    this->mUnk_2834[0].mUnk_08 = 0x2;
    this->mUnk_2834[1].mUnk_08 = 0x2;
    this->mUnk_2834[2].mUnk_08 = 0x2;
    this->mUnk_2834[3].mUnk_08 = 0x2;

    this->mUnk_2834[0].mUnk_04 = 0x933;
    this->mUnk_2834[1].mUnk_04 = 0x934;
    this->mUnk_2834[2].mUnk_04 = 0x935;
    this->mUnk_2834[3].mUnk_04 = 0x936;

    this->mUnk_30 = &this->mUnk_2894;
    this->mUnk_34 = &this->mUnk_2894;

    return true;
}

void ActorUnkZLSL::vfunc_AC() {}

void ActorUnkZLSL::func_ov031_020ea7a8() {
    this->mUnk_2870 = 0x00;

    this->mUnk_0B0 &= ~0x10;
    this->mUnk_2900 &= ~0x01;
    SET_FLAG(this->mFlags, ActorFlag_Visible);
    this->mUnk_0B0 &= ~0x04;
    this->mUnk_2900 |= 0x10;

    VecFx32_Copy(&this->mPos, &this->mUnk_2878.vec);
    this->mUnk_2888 = 0x00;
    this->mUnk_288C = 0x00;
    this->mUnk_2C   = 0x00;
    this->mUnk_286A = 0x00;
    this->mUnk_286C = 0x00;
    VecFx32_Reset(&this->mUnk_28B0.vec);
    VecFx32_Reset(&this->mUnk_28BC.vec);

    this->mUnk_0B0 &= ~0x08;
    this->mUnk_2900 |= 0x20;
}

void ActorUnkZLSL::func_ov031_020ea864() {}

void ActorUnkZLSL::func_ov031_020ea868() {}

void ActorUnkZLSL::func_ov031_020ea86c() {}

void ActorUnkZLSL::vfunc_58(ActorState state) {
    this->mState    = state;
    this->mUnk_286E = 0x0;

    this->func_ov031_020ea7a8();

    CALL_PTMF(PTMF<ActorUnkZLSL>, data_ov031_02113770[this->mState]);
}

void ActorUnkZLSL::func_ov031_020ea8c0() {}

void ActorUnkZLSL::func_ov031_020ea8c4() {}

void ActorUnkZLSL::func_ov031_020ea8c8() {}

void ActorUnkZLSL::Update() {
    UnkAngleStruct angle = this->mAngle.angle_s;

    CALL_PTMF(PTMF<ActorUnkZLSL>, data_ov031_021137f8[this->mState]);

    if (!GET_FLAG(this->mFlags, ActorFlag_Visible)) {
        return;
    }

    this->func_ov031_020ee4c4(angle);

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    if (this->mState != ActorUnkZLSLState_TakePhantomControl && this->mState != ActorUnkZLSLState_16) {
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

void ActorUnkZLSL::func_ov031_020eaa68() {
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    this->vfunc_98(0x0);
}

void ActorUnkZLSL::func_ov031_020eaa88() {}

void ActorUnkZLSL::func_ov031_020eaa8c() {
    this->mUnk_2890 = FX_F32_TO_FX32(0.0f);
    this->mVel.x    = FX_F32_TO_FX32(0.0f);
    this->mVel.y    = FX_F32_TO_FX32(0.0f);
    this->mVel.z    = FX_F32_TO_FX32(0.0f);
    this->mUnk_2900 |= 0x1;

    if (this->mUnk_2900 & 0x4) {
        this->vfunc_98(0xA);
        this->mUnk_4A[0] = 0x0;
        this->mUnk_0B0 |= 0x10;
    } else {
        this->vfunc_98(0x0);
        this->mUnk_4A[0] = 0x5;
    }

    this->mUnk_2884 = 0x0;
}

void ActorUnkZLSL::func_ov031_020eab0c() {
    if (this->mUnk_2900 & 0x4) {
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

    oVec.y = FX_F32_TO_FX32(0.0f);
    VecFx32_TryNormalize(&oVec);

    func_01ff93c0(&oVec, param1);

    oVec.y += FX_F32_TO_FX32(0.5f);
    VecFx32_Add(&vec, &oVec, &vec);

    func_01ffb714(&vec, &this->mPos, &oVec);

    func_01ff93c0(&oVec, FX_F32_TO_FX32(0.05f));

    VecFx32_Add(&this->mVel, &oVec, &this->mVel);
    func_01ff93c0(&this->mVel, FX_F32_TO_FX32(0.8f));

    if (VecFx32_Length(&this->mVel) > FX_F32_TO_FX32(0.1001f)) {
        VecFx32_TryNormalize(&this->mVel);
        func_01ff93c0(&this->mVel, FX_F32_TO_FX32(0.1001f));
    }

    VecFx32 *pVec2 = this->func_ov000_0209853c(0x0);
    func_01ff930c(&this->mAngle.angle_s, func_02016958(&this->mPos, pVec2), 0x71C);
}

void ActorUnkZLSL::func_ov031_020eac64() {
    this->mUnk_2884 = 0x0;
    this->mUnk_2888 = this->mPos.y;
    this->mVel.x    = FX_F32_TO_FX32(0.0f);
    this->mVel.y    = FX_F32_TO_FX32(0.0f);
    this->mVel.z    = FX_F32_TO_FX32(0.0f);
    this->mUnk_0B0 |= 0x1;

    if ((this->mUnk_0B0 & 0x2) != 0x0) {
        if (this->func_ov000_020a9248(0x2000)) {
            this->vfunc_58(ActorUnkZLSLState_ClosedArms);
            return;
        }
    }
    this->vfunc_98(0x1);
}

void ActorUnkZLSL::func_ov031_020eace0() {
    if (!this->func_ov031_020ec8c4()) {
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_ClosedArms);
}

void ActorUnkZLSL::func_ov031_020ead0c() {
    this->mUnk_2888 = this->mPos.y;
    this->mVel.x    = FX_F32_TO_FX32(0.0f);
    this->mVel.y    = FX_F32_TO_FX32(0.0f);
    this->mVel.z    = FX_F32_TO_FX32(0.0f);

    if (this->mUnk_094.mUnk_0C->vfunc_30() != 0x1) {
        if (this->mUnk_094.mUnk_0C->vfunc_30() != 0x0) {
            return;
        }
    }
    this->vfunc_98(0x2);
}

void ActorUnkZLSL::func_ov031_020ead78() {}

void ActorUnkZLSL::func_ov031_020ead7c() {
    VecFx32 sp24;
    VecFx32 sp18;
    VecFx32 spC;
    unk16 spA;
    unk16 sp8;
    unk16 sp6;
    unk16 sp4;

    ActorUnkRPMT *actor = (ActorUnkRPMT *) func_02016fbc(ActorId_RPMT, &this->mPos, 0x0);

    if (actor != NULL && actor->mState == ActorUnkRPMTState_1) {
        this->mUnk_0B0 |= 0x8;
    }

    sp24 = *this->func_ov000_0209853c(0x0);
    if (this->mUnk_0B0 & 0x8) {
        if (data_027e0ce0->func_01fff1a4()) {
            data_027e0ce0->func_ov000_0208ba94(0x1, &sp24);
        }
    }

    VecFx32_Copy(&sp24, &this->mPos);
    this->mPos.y += 0x800;
    spC              = this->mPos;
    this->mPos.x     = spC.x;
    this->mPos.y     = spC.y;
    this->mPos.z     = spC.z;
    this->mPrevPos.x = spC.x;
    this->mPrevPos.y = spC.y;
    this->mPrevPos.z = spC.z;

    this->mUnk_28E4 = this->func_ov031_020ee2c8();

    UnkStruct_027e0ce0 *ptr = data_027e0ce0;
    func_01fff17c(&spA, data_027e0ce0, 0);

    if (this->mUnk_0B0 & 0x08) {
        unk16 *psp8 = (unk16 *) &sp8;
        func_01fff17c((unk16 *) psp8, data_027e0ce0, 1);
        spA = *psp8;
    }

    if (this->mUnk_0B0 & 0x08) {
        this->mUnk_28E4 = 0;
    }

    sp6 = spA + this->mUnk_28E4;
    func_020169d4(&sp18, &sp24, &sp6, (void *) &data_ov031_02110acc);

    if (func_02016c68(&sp24, &sp18, this->mRef, 4, 0) || func_02016cf0(&sp24, &sp18, this->mRef, 8, 0)) {
        this->mUnk_28E4 = -this->mUnk_28E4;
    }

    sp4 = spA + this->mUnk_28E4;
    func_020169d4(&this->mUnk_2878.vec, &sp24, &sp4, (void *) &data_ov031_02110acc);

    this->func_ov031_020ec6d8(true);
    VecFx32_Reset(&this->mUnk_28A4.vec);
    this->mUnk_2884 = 0x0;
    VecFx32_Reset(&this->mVel);
    this->mTimer.Set(0, 10);
    this->mUnk_2888 = 0x0;
}

void ActorUnkZLSL::func_ov031_020eafb0() {
    if (this->func_ov031_020ed8ac(0x800)) {
        this->vfunc_58(ActorUnkZLSLState_RotateClosedArms);
    }
}

void ActorUnkZLSL::func_ov031_020eafe0() {
    VecFx32 spC;
    unk16 spA;
    unk16 sp8;
    unk16 sp6;
    unk16 sp4;

    this->func_ov000_0209853c(0x00);
    this->mUnk_28E4 = 0x2AAB;

    func_01fff17c(&sp8, data_027e0ce0, 0x00);

    spA = sp8 + this->mUnk_28E4;
    func_020169d4(&spC, this->func_ov000_0209853c(0x0), &spA, (void *) &data_ov031_02110acc);

    if (func_02016c68(this->func_ov000_0209853c(0x00), &spC, this->mRef, 4, 0) ||
        func_02016cf0(this->func_ov000_0209853c(0x00), &spC, this->mRef, 8, 0)) {
        this->mUnk_28E4 = 0xD555;
    }

    func_01fff17c(&sp4, data_027e0ce0, 0);
    sp6 = sp4 + this->mUnk_28E4;
    func_020169d4(&this->mUnk_2878.vec, this->func_ov000_0209853c(0x00), &sp6, (void *) &data_ov031_02110acc);

    this->func_ov031_020ec6d8(true);
    VecFx32_Init(FX_F32_TO_FX32(0.5f), FX_F32_TO_FX32(0.5f), FX_F32_TO_FX32(0.5f), &this->mUnk_28A4.vec);
    this->mTimer.Set(0, 5);
    this->mUnk_2888 = 0x0;
    VecFx32_Copy(&this->mPos, &this->mUnk_28F4.vec);
}

void ActorUnkZLSL::func_ov031_020eb158() {
    if (!this->func_ov031_020ed6cc(0x1800)) {
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_FollowLink);
}

void ActorUnkZLSL::func_ov031_020eb188() {
    this->mUnk_2900 |= 0x40;
    this->vfunc_98(0xF);

    func_02015300(&this->mUnk_094.mUnk_0C->vfunc_10()->mUnk_04);
    this->mUnk_4A[0] = 0x0;
    this->mUnk_2888  = FX_F32_TO_FX32(0.3f);
    this->mVel.x     = FX_F32_TO_FX32(0.0f);
    this->mVel.y     = FX_F32_TO_FX32(0.0f);
    this->mVel.z     = FX_F32_TO_FX32(0.0f);
    this->mUnk_2900 |= 0x1;
    VecFx32_Copy(&this->mPos, &this->mUnk_2878.vec);
}

void ActorUnkZLSL::func_ov031_020eb218() {
    if (*(volatile u16 *) &this->mUnk_2900 & 0x10 && !this->mUnk_2874) {
        this->mUnk_2900 &= ~0x10;
        data_027e09a8->func_ov000_02071c90(0x139, &this->mPos, 0x0);
    }

    if (this->func_ov031_020eb2b0(this->func_ov000_0209853c(0x00), 0xA000)) {
        this->vfunc_58(ActorUnkZLSLState_Idle);
    }
}

bool ActorUnkZLSL::func_ov031_020eb2b0(VecFx32 *param1, unk32 param2) {
    VecFx32 sp1C;
    VecFx32 sp10;
    VecFx32 sp4;
    s32 sp0;
    bool var_r7;
    s32 temp_r8;

    func_01ff916c(&this->mUnk_2878.vec.y, param1->y, 0xCD);
    func_01ff930c(&this->mAngle.angle_s, func_02016958(&this->mPos, param1), 0x71C);

    sp1C = *param1;
    sp1C.y += FX_F32_TO_FX32(0.5f);

    var_r7 = false;

    if (this->mUnk_2874 == 0) {
        if (this->mUnk_094.mUnk_0C->vfunc_10()->mUnk_04.mUnk_08 < 0xA000) {
            temp_r8 = this->mUnk_28A4.vec.z;
            func_01ff916c(&this->mUnk_28A4.vec.x, 0x333, 0x19A);
            func_01ff916c(&this->mUnk_28A4.vec.y, 0x333, 0x19A);

            if (func_01ff916c(&this->mUnk_28A4.vec.z, 0x333, 0x19A) != 0) {
                this->func_ov031_020ec6d8(true);
                this->mUnk_28A4.vec.x = FX_F32_TO_FX32(1.0f);
                this->mUnk_28A4.vec.y = FX_F32_TO_FX32(1.0f);
                this->mUnk_28A4.vec.z = FX_F32_TO_FX32(1.0f);
                this->mUnk_2900 &= ~0x01;
            }

            if (this->mUnk_28A4.vec.z <= 0x800 && temp_r8 > 0x800) {
                this->mUnk_2888       = 0x4CD;
                this->mUnk_2884       = func_01ff9258(this->mPos.x - sp1C.x, this->mPos.z - sp1C.z);
                this->mUnk_28B0.vec.x = this->mPos.x;
                this->mUnk_28B0.vec.y = this->mPos.y;
                this->mUnk_28B0.vec.z = this->mPos.z;
            }

            if (this->mUnk_28A4.vec.z <= 0x800) {
                var_r7 = true;
            }
        }
    } else {
        var_r7 = true;
    }

    if (var_r7) {
        func_01ffb714(&this->mUnk_28B0.vec, &sp1C, &sp4);
        VecFx32_TryNormalize(&sp4);
        func_01ff93c0(&sp4, this->mUnk_2884);
        VecFx32_Add(&sp4, &sp1C, &sp4);

        this->mUnk_28B0.vec.x = sp4.x;
        this->mUnk_28B0.vec.y = sp4.y;
        this->mUnk_28B0.vec.z = sp4.z;

        sp10.x = sp4.x;
        sp10.y = sp4.y;
        sp10.z = sp4.z;

        sp0 = this->mUnk_2884;
        func_01ff9218(&sp0, 0, 0x19A);

        if (this->mUnk_2884 - sp0 > param2) {
            this->mUnk_2884 -= param2;
        } else {
            this->mUnk_2884 = sp0;
        }

        func_01ffb714(&sp1C, &this->mUnk_28B0.vec, &sp4);
        sp4.y = 0;

        func_01ff9638(&sp4, 0x4000);
        VecFx32_TryNormalize(&sp4);
        func_01ff93c0(&sp4, FX_MUL(this->mUnk_2888, SIN((u16) this->mUnk_286A)));
        VecFx32_Add(&sp4, &sp10, &sp4);
        this->mUnk_286A += 0x1000;
        this->mPos.x = sp4.x;
        this->mPos.y = sp4.y;
        this->mPos.z = sp4.z;

        if (func_01ff9258(sp1C.x - this->mPos.x, sp1C.z - this->mPos.z) < 0x333) {
            this->mUnk_28A4.vec.x = 0;
            this->mUnk_28A4.vec.y = 0;
            this->mUnk_28A4.vec.z = 0;
            return true;
        }
    }

    return false;
}

void ActorUnkZLSL::func_ov031_020eb5f8() {
    this->mUnk_28A4.vec.x = FX_F32_TO_FX32(0.0f);
    this->mUnk_28A4.vec.y = FX_F32_TO_FX32(0.0f);
    this->mUnk_28A4.vec.z = FX_F32_TO_FX32(0.0f);
    this->func_ov031_020ec6d8(true);
}

class ActorUnkZLSL_020eb61ec_16C_vfunc_10 {
public:
    /* 00 */ PAD(0x00, 0x04);
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
    /* 094 */ PAD(0x94, 0x16C);
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

            this->func_ov031_020ecc68(false);
            actor->func_ov071_021540ac(0x19);
            this->mTimer.Set(0, 20);
            this->mUnk_286E++;
            break;
        case 0x1:
            if (this->mUnk_28C8 < 0x0) {
                return;
            }
            if (data_027e09b8->func_ov000_020732ec(this->mUnk_28C8) == 0x0) {
                return;
            }
            if (this->mTimer.HasExpired()) {
                this->func_ov031_020eafe0();
                this->mUnk_286E++;
            }
            this->func_ov031_020ed4e4(0xF, 0x93F);
            break;
        case 0x2:
            this->func_ov031_020edd14(&vec);
            vec.y = this->mPos.y;
            if (this->func_ov031_020ed6cc(0xC00)) {
                this->mTimer.Set(0, 15);
                this->mUnk_286E++;
            }
            this->mAngle = func_02016958(&this->mPos, &vec);
            VecFx32_Copy(&this->mPos, &vec);
            vec.y += FX_F32_TO_FX32(0.5f);
            VecFx32_Copy(&vec, &this->mUnk_28F4.vec);

            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x3:
            if (this->mTimer.HasExpired()) {
                this->mUnk_286E++;
                this->mUnk_2884 = 0x0;
                this->func_ov031_020eb188();
            }
            VecFx32_Copy(&this->mPos, &vec);
            vec.y += FX_F32_TO_FX32(0.5f);
            VecFx32_Copy(&vec, &this->mUnk_28F4.vec);

            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x4:
            if (this->func_ov031_020eb2b0(&actor->mPos, 0xA000)) {
                data_027e09a8->func_ov000_02071bd4(0x8D5B, &this->mPos, 0x0);
                this->mUnk_28A4.vec.x = FX_F32_TO_FX32(0.0f);
                this->mUnk_28A4.vec.y = FX_F32_TO_FX32(0.0f);
                this->mUnk_28A4.vec.z = FX_F32_TO_FX32(0.0f);
                actor->func_ov071_0215414c();
                this->mUnk_286E++;
                data_027e0cec->func_ov000_020a0110(&this->mUnk_2828.mUnk_00);
            }
            VecFx32_Copy(&this->mPos, &vec);
            vec.y += 0x800;
            VecFx32_Copy(&vec, &this->mUnk_28F4.vec);

            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x5:
            if (actor->mUnk_16C.vfunc_10()->mUnk_04.func_01ff8fa8()) {
                this->mUnk_286E++;
                data_027e0d8c->func_ov093_021660a8(this->mUnk_28DC);
                actor->func_ov071_021540ac(0x1A);
                this->mTimer.Set(0, 30);
            }
            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x6:
            if (this->mTimer.HasExpired()) {
                data_027e09b8->func_ov000_020732fc(this->mUnk_28C8);
                this->mUnk_28A4.vec.x = FX_F32_TO_FX32(1.0f);
                this->mUnk_28A4.vec.y = FX_F32_TO_FX32(1.0f);
                this->mUnk_28A4.vec.z = FX_F32_TO_FX32(1.0f);
                this->vfunc_58(ActorUnkZLSLState_Idle);
            }
            this->func_ov031_020ed4e4(0x5, 0x93F);
        default:
            break;
    }
}

void ActorUnkZLSL::func_ov031_020eba58() {
    this->mUnk_28A4.vec.x = FX_F32_TO_FX32(0.0f);
    this->mUnk_28A4.vec.y = FX_F32_TO_FX32(0.0f);
    this->mUnk_28A4.vec.z = FX_F32_TO_FX32(0.0f);
    this->func_ov031_020ec6d8(true);
    this->mUnk_0B0 |= 0x8;
}

void ActorUnkZLSL::func_ov031_020eba8c() {
    ActorUnkZLSL_020eb61ec *actor = (ActorUnkZLSL_020eb61ec *) gpActorManager->func_01fff3b4(this->mUnk_28DC);

    VecFx32 vec;
    switch (this->mUnk_286E) {
        case 0x0:
            if (data_027e09b8->func_01ffd420()) {
                return;
            }

            this->func_ov031_020ecc68(true);
            actor->func_ov071_021540ac(0x19);
            this->mTimer.Set(0, 20);
            this->mUnk_286E++;
            break;
        case 0x1:
            if (this->mUnk_28C8 < 0x0) {
                return;
            }
            if (data_027e09b8->func_ov000_020732ec(this->mUnk_28C8) == 0x0) {
                return;
            }
            if (this->mTimer.HasExpired()) {
                this->func_ov031_020ead7c();
                data_027e0d8c->func_ov090_021660e8();
                data_027e0d8c->func_ov093_021660f8();
                this->mUnk_286E++;
            }
            this->func_ov031_020ed4e4(0xF, 0x93F);
            break;
        case 0x2:
            this->func_ov031_020edd14(&vec);
            vec.y = this->mPos.y;
            if (this->func_ov031_020ed8ac(0x800)) {
                this->mTimer.Set(0, 15);
                this->mUnk_286E++;
            }
            this->mAngle = func_02016958(&this->mPos, &vec);
            VecFx32_Copy(&this->mPos, &vec);
            VecFx32_Copy(&vec, &this->mUnk_28F4.vec);

            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x3:
            if (this->mTimer.HasExpired()) {
                data_027e0d8c->func_ov093_02166108();
                this->mUnk_286E++;
                this->mUnk_2884 = 0x0;
                this->mTimer.Set(0, 30);
                this->func_ov031_020eb188();
            }
            VecFx32_Copy(&this->mPos, &vec);
            VecFx32_Copy(&vec, &this->mUnk_28F4.vec);

            this->func_ov031_020ed4e4(0x5, 0x93F);
            break;
        case 0x4: {
            VecFx32 *pVec = this->func_ov000_0209853c(0x0);
            if (func_01ff9258(this->mPos.x - pVec->x, this->mPos.z - pVec->z) > 0x3000) {
                this->func_ov031_020eb2b0(&actor->mPos, 0x666);
            } else {
                this->func_ov031_020eb2b0(&actor->mPos, 0xA000);
            }
            VecFx32_Copy(&this->mPos, &vec);
            VecFx32_Copy(&vec, &this->mUnk_28F4.vec);

            this->func_ov031_020ed4e4(0xA, 0x93F);

            if (!this->mTimer.HasExpired()) {
                break;
            }
            this->mUnk_286E++;

            pVec = this->func_ov000_0209853c(0x1);
            if (func_01ff9258(actor->mPos.x - pVec->x, actor->mPos.z - pVec->z) <= 0x3000) {
                break;
            }
            this->func_ov031_020ed3c0();

            this->mTimer.Set(0, 15);
            break;
        }
        case 0x5:
            if (!this->mTimer.HasExpired()) {
                break;
            }
            if (!this->func_ov031_020eb2b0(&actor->mPos, 0xA000)) {
                return;
            }

            this->mUnk_28A4.vec.x = FX_F32_TO_FX32(0.0f);
            this->mUnk_28A4.vec.y = FX_F32_TO_FX32(0.0f);
            this->mUnk_28A4.vec.z = FX_F32_TO_FX32(0.0f);

            actor->func_ov071_0215414c();

            this->mUnk_286E++;

            data_027e09a8->func_ov000_02071bd4(0x8D5B, &this->mPos, 0x0);
            data_027e0cec->func_ov000_020a0110(&this->mUnk_2828.mUnk_00);
            break;
        case 0x6:
            if (actor->mUnk_16C.vfunc_10()->mUnk_04.func_01ff8fa8() == 0x0) {
                return;
            }
            this->mUnk_286E++;
            data_027e0d8c->func_ov093_021660a8(this->mUnk_28DC);
            actor->func_ov071_021540ac(0x1A);
            this->mTimer.Set(0, 30);
            break;
        case 0x7:
            if (!this->mTimer.HasExpired()) {
                return;
            }
            data_027e09b8->func_ov000_020732fc(this->mUnk_28C8);

            this->mUnk_28A4.vec.x = FX_F32_TO_FX32(1.0f);
            this->mUnk_28A4.vec.y = FX_F32_TO_FX32(1.0f);
            this->mUnk_28A4.vec.z = FX_F32_TO_FX32(1.0f);

            this->vfunc_58(ActorUnkZLSLState_Idle);
            break;
        default:
            break;
    }
}

void ActorUnkZLSL::func_ov031_020ebfd8() {
    this->mUnk_28A4.vec.x = FX_F32_TO_FX32(1.0f);
    this->mUnk_28A4.vec.y = FX_F32_TO_FX32(1.0f);
    this->mUnk_28A4.vec.z = FX_F32_TO_FX32(1.0f);
    this->func_ov031_020ec6d8(false);
    this->mAngle = func_02016958(&this->mPos, this->func_ov000_0209853c(0x0));
    this->func_ov031_020eb188();
}

void ActorUnkZLSL::func_ov031_020ec028() {
    this->func_ov031_020eb218();
}

void ActorUnkZLSL::func_ov031_020ec034() {
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);
    this->vfunc_98(0x1);
}

// non-matching
void ActorUnkZLSL::func_ov031_020ec058() {}

void ActorUnkZLSL::func_ov031_020ec05c() {
    this->mVel.x = FX_F32_TO_FX32(0.0f);
    this->mVel.z = FX_F32_TO_FX32(0.0f);

    if (this->func_ov000_020a9248(0x2000) == 0x0) {
        this->vfunc_98(0x1);
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_OpenArms);
}

void ActorUnkZLSL::func_ov031_020ec0a8() {
    if (!this->func_ov031_020ec8c4()) {
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_OpenArms);
}

void ActorUnkZLSL::func_ov031_020ec0d4() {
    this->mUnk_28A4.vec.x = FX_F32_TO_FX32(0.0f);
    this->mUnk_28A4.vec.y = FX_F32_TO_FX32(0.0f);
    this->mUnk_28A4.vec.z = FX_F32_TO_FX32(0.0f);

    UNSET_FLAG(this->mFlags, ActorFlag_Visible);

    this->vfunc_98(0x0);

    this->mUnk_4A[0] = false;
    data_027e0cec->func_ov000_020a0110(&this->mUnk_2828.mUnk_00);
}

void ActorUnkZLSL::func_ov031_020ec12c() {
    this->func_ov031_020ecbe0();

    VecFx32_Copy(this->func_ov000_0209853c(0x0), &this->mUnk_2878.vec);
}

void ActorUnkZLSL::func_ov031_020ec164() {
    this->func_ov031_020ead7c();
}

void ActorUnkZLSL::func_ov031_020ec170() {
    this->mUnk_0B0 |= 0x10;

    if (this->mUnk_286E == 0x0) {
        if (this->func_ov031_020ed8ac(0x800)) {
            this->vfunc_98(0x11);
            this->mUnk_286E++;
        }
    }

    this->mAngle = 0x0;
}

void ActorUnkZLSL::vfunc_2C(unk32 param1) {
#pragma unused(param1)
    MtxFx33 sp00;

    if (this->mUnk_28A4.vec.x == FX_F32_TO_FX32(0.0f) && this->mUnk_28A4.vec.y == FX_F32_TO_FX32(0.0f) &&
        this->mUnk_28A4.vec.z == FX_F32_TO_FX32(0.0f)) {
        return;
    }

    switch (this->mUnk_2874 ? 1 : 0) {
        case false:
            MtxFx33_InitYRotation(&sp00, SIN((u16) this->mAngle.angle_s), COS((u16) this->mAngle.angle_s));
            this->mUnk_1620.vfunc_10(&this->mUnk_28A4.vec, &sp00, &this->mPos);
            break;
        case true:
            MtxFx33_InitYRotation(&sp00, SIN(1), COS(0));
            this->mUnk_276C.vfunc_10(&this->mUnk_28A4.vec, &sp00, &this->mPos);
            break;
        default:
            break;
    }

    this->mUnk_1690.func_ov031_020eece8();
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
            this->vfunc_58(ActorUnkZLSLState_GoOrbShapeAndIdle);
            break;
        case 0x5:
            this->vfunc_58(ActorUnkZLSLState_Idle);
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

bool ActorUnkZLSL::func_ov031_020ec3d0() {
    bool var = false;
    switch (this->mUnk_2872) {
        case 0x0:
            data_ov000_020b51b8.func_ov000_0206d0bc(0x0);
            this->mTimer.Set(0, 0);
            ++this->mUnk_2872;
            break;
        case 0x1:
            if (!this->mTimer.HasExpired()) {
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
            this->mTimer.Set(0, 10);
            ++this->mUnk_2872;
            break;
        case 0x1:
            if (!this->mTimer.HasExpired()) {
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
            if (this->mState == ActorUnkZLSLState_Idle) {
                var = true;
                break;
            }
            this->vfunc_58(ActorUnkZLSLState_GoOrbShapeAndIdle);
            ++this->mUnk_2872;
            break;
        case 0x1:
            if (this->mState != ActorUnkZLSLState_Idle) {
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

void ActorUnkZLSL::vfunc_B0() {
    if (data_027e09b8->func_01ffd420()) {
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

void ActorUnkZLSL::func_ov031_020ec6d8(bool param1) {
    if (param1 != true && this->mUnk_2874 == true && (this->mUnk_2900 & 0x20)) {
        data_027e09a8->func_ov000_02071c90(0x138, &this->mPos, 0x0);
        this->mUnk_2900 |= 0x1;
    }

    if (param1 != true) {
        data_027e0cec->func_ov000_020a0110(&this->mUnk_2828.mUnk_00);
    }

    this->mUnk_2874 = param1;
}

void ActorUnkZLSL::vfunc_6C() {
    if (!this->mUnk_2874 && this->mUnk_28A4.vec.z == FX_F32_TO_FX32(1.0f)) {
        this->vfunc_58(ActorUnkZLSLState_RotateClosedArms);
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_TakeHumanShape);
}

void ActorUnkZLSL::vfunc_70() {
    if (!this->mUnk_2874 && this->mUnk_28A4.vec.z == FX_F32_TO_FX32(1.0f)) {
        this->vfunc_58(ActorUnkZLSLState_RotateClosedArms);
        return;
    }
    this->vfunc_58(ActorUnkZLSLState_TakeHumanShape);
}

void ActorUnkZLSL::vfunc_68() {
    if (this->mState != ActorUnkZLSLState_Idle) {
        if (this->mUnk_2900 & 0x2) {
            this->vfunc_58(ActorUnkZLSLState_FollowLink);
        } else {
            this->vfunc_58(ActorUnkZLSLState_GoOrbShapeAndIdle);
        }
    }
    this->mUnk_2900 &= 0xFFFD;
    UNSET_FLAG(this->mFlags, ActorFlag_Interacting);
    this->func_ov000_020a9200();
    this->mUnk_0B0 &= 0xFFFE;
}

bool ActorUnkZLSL::vfunc_88() {
    if (this->func_ov031_020ee724()) {
        return true;
    }
    if (!this->mUnk_2874 && this->mUnk_28A4.vec.z == FX_F32_TO_FX32(1.0f)) {
        return true;
    }
    if (this->mState != ActorUnkZLSLState_TakeHumanShape) {
        this->vfunc_58(ActorUnkZLSLState_TakeHumanShape);
    }
    return false;
}

bool ActorUnkZLSL::vfunc_8C() {
    return true;
}

bool ActorUnkZLSL::func_ov031_020ec8c4() {
    VecFx32 vec;
    UnkAngleStruct angleStruct;

    if (!this->func_ov000_020a8ff4(&vec)) {
        angleStruct.angle_s = this->mAngle.angle_s;
    } else {
        angleStruct.angle_s = func_02016958(&this->mPos, &vec);
    }

    if (this->mUnk_0B0 & 0x2) {
        func_01ff9364(&this->mAngle.angle_u, angleStruct);

        s16 angle = angleStruct.angle_s - this->mAngle.angle_s;
        if (ABS(angle) < 0x2000) {
            return true;
        }
    }

    return func_01ff930c(&this->mAngle.angle_s, angleStruct.angle_u, 0x71C);
}

void ActorUnkZLSL::vfunc_98(u32 param1) {
    if (param1 < 0x12) {
        if (this->mUnk_2900 & 0x40) {
            this->mUnk_094.mUnk_0C->vfunc_1C(this->mUnk_0B8[param1], 0x1000, 0x19A, true);
        } else {
            this->mUnk_094.mUnk_0C->vfunc_1C(this->mUnk_0B8[param1], 0x1000, 0x19A, false);
        }

        switch (param1) {
            case 0x0:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[2], 0x1000, 0x00);
                break;
            case 0x1:
            case 0x2:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[0], 0x1000, 0x00);
                break;
            case 0x5:
            case 0x9:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[1], 0x1000, 0x00);
                break;
            case 0x7:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[2], 0x1000, 0x00);
                break;
            case 0x8:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[3], 0x1000, 0x00);
                break;
            case 0xA:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[4], 0x1000, 0x00);
                break;
            case 0xB:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[5], 0x1000, 0x00);
                break;
            case 0xC:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[6], 0x1000, 0x00);
                break;
            case 0xD:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[7], 0x1000, 0x00);
                break;
            case 0xE:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[8], 0x1000, 0x00);
                break;
            case 0xF:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[9], 0x1000, 0x00);
                break;
            case 0x11:
                this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[10], 0x1000, 0x00);
                break;
            default:
                break;
        }
    }

    if (param1 >= 0x32 && param1 < 0x40) {
        this->mUnk_2700.func_ov000_02099ddc(data_ov031_02113a08[param1 - 0x32], 0x1000, 0x00);
    }

    this->mUnk_2900 &= ~0x40;
}

void ActorUnkZLSL::func_ov031_020ecbe0() {
    unk16 sp2;
    unk16 sp0;

    unk16 *psp0 = (unk16 *) &sp0;
    func_01fff17c(psp0, data_027e0ce0, 0x0);

    sp2 = *psp0 + FX_F32_TO_FX32(2.6668f);
    func_020169d4(&this->mPos, this->func_ov000_0209853c(0x00), &sp2, data_ov031_021135f4);
    this->mPos.y += FX_F32_TO_FX32(0.5f);

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
}

void ActorUnkZLSL::func_ov031_020ecc68(bool param1) {
    Actor *temp_r7 = gpActorManager->func_01fff3b4(this->mUnk_28DC);
    UnkStackStruct1 sp34;
    VecFx32 sp28;
    UnkStackStruct2 sp8;

    if (param1) {
        VecFx32 *temp_r0 = this->func_ov000_0209853c(0x01);

        if (func_01ff9258(temp_r7->mPos.x - temp_r0->x, temp_r7->mPos.z - temp_r0->z) > 0x3000) {
            this->func_ov031_020ed0b0();
        } else {
            UnkAngleStruct sp6 = 0x2000;
            this->func_ov031_020ecea8(sp6, 0x6000, 0x4800, 0x01);
        }
    } else {
        UnkAngleStruct sp4 = 0x2000;
        this->func_ov031_020ecea8(sp4, 0x6000, 0x4800, 0x00);
    }

    func_ov000_02072fd0(&sp34);
    sp34.mUnk_08 = -0x1;
    sp34.mUnk_38 |= 0x80;
    sp34.mUnk_00 = 0x80;
    sp34.mUnk_3A = 0x2;
    sp34.mUnk_3B = 0x4;
    VecFx32_Copy(&this->mUnk_28F4.vec, &sp34.mUnk_0C);
    sp34.mUnk_18.s = this->func_ov031_020ed47c(0x93F);

    this->mUnk_28C8 = data_027e09b8->func_ov000_02073388(&sp34, 0x0);

    unk32 temp_r6 = func_01ffb9cc(&this->mUnk_28F4.vec, &this->mUnk_28E8.vec);
    func_01ffb714(&this->mUnk_28E8.vec, &this->mUnk_28F4.vec, &sp28);

    VecFx32_TryNormalize(&sp28);

    func_01ff93c0(&sp28, temp_r6 - 0x1000);

    VecFx32_Copy(&this->mUnk_28F4.vec, &this->mUnk_28E8.vec);
    VecFx32_Add(&this->mUnk_28E8.vec, &sp28, &this->mUnk_28E8.vec);

    ActorPhantomBase *pPhantom = (ActorPhantomBase *) gpActorManager->func_01fff3b4(this->mUnk_28DC);
    if (pPhantom != NULL) {
        pPhantom->mUnk_530 = this->mUnk_28C8;
    }
}

void ActorUnkZLSL::func_ov031_020ecea8(UnkAngleStruct param1, unk32 param2, unk32 param3, unk32 param4) {
    VecFx32 sp58;
    VecFx32 sp4C;
    VecFx32 sp40;
    VecFx32 sp34;
    VecFx32 sp28;
    VecFx32 sp1C;
    struct {
        VecFx32 unk_00;
        s16 unk_0C;
        u8 unk_0E;
        unk8 unk_0F;
        s32 unk_10;
        s32 unk_14;
    } sp4;
    unk16 sp2;
    unk16 sp0;
    s16 temp_r5;
    VecFx32 *temp_r0_2;
    VecFx32 *temp_r0_3;

    sp58 = *this->func_ov000_0209853c(param4);
    this->func_ov031_020edd14(&sp4C);
    temp_r5 = func_02016958(&sp58, &sp4C);

    if (sp4C.z > this->func_ov000_0209853c(0)->z) {
        VecFx32_Copy(&sp4C, &sp40);
    } else {
        VecFx32_Copy(this->func_ov000_0209853c(0), &sp40);
    }

    if (sp4C.z > this->mPos.z) {
        func_01ffb714(&sp4C, &sp58, &sp1C);
    } else {
        func_01ffb714(&sp58, &sp4C, &sp1C);
    }

    s16 angle = func_01ffbbe0(sp1C.x, sp1C.z);
    sp2       = param1.angle_s + angle;
    func_020169d4(&sp34, &sp40, &sp2, (char *) &param2);

    angle = func_01ffbbe0(sp1C.x, sp1C.z);
    sp0   = angle - param1.angle_s;
    func_020169d4(&sp28, &sp40, &sp0, (char *) &param2);

    if (sp34.z < sp28.z) {
        VecFx32_Copy(&sp28, &sp34);
    }

    VecFx32_Copy(&sp34, &this->mUnk_28E8.vec);
    this->mUnk_28E8.vec.y += param3;

    VecFx32_Copy(&sp58, &this->mUnk_28F4.vec);
    this->mUnk_28F4.vec.y += FX_F32_TO_FX32(0.5f);

    sp4.unk_0E = 0xFF;
    sp4.unk_0F = 0;
    sp4.unk_10 = 0;
    sp4.unk_14 = 0;

    temp_r0_3    = this->func_ov000_0209853c(0);
    sp4.unk_00.x = temp_r0_3->x;
    sp4.unk_00.y = temp_r0_3->y;
    sp4.unk_00.z = temp_r0_3->z;
    sp4.unk_0C   = temp_r5;
    data_027e0ce0->func_ov000_0208bbc4(0, &sp4);
}

void ActorUnkZLSL::func_ov031_020ed0b0() {
    VecFx32 sp24;
    VecFx32 sp18;
    VecFx32 spC;

    sp24 = *this->func_ov000_0209853c(1);
    sp24.y += FX_F32_TO_FX32(0.5f);

    VecFx32_Copy(&sp24, &sp18);
    sp18.x += FX_MUL(SIN(0x6AAA), 0x1800);
    sp18.z += FX_MUL(COS(0x6AAA), 0x1800);

    if (func_02016c68(&sp24, &sp18, this->mRef, 4, 0)) {
        VecFx32_Copy(&sp24, &sp18);
        sp18.x += FX_MUL(SIN(0x2AAA), 0x1800);
        sp18.z += FX_MUL(COS(0x2AAA), 0x1800);

        if (func_02016c68(&sp24, &sp18, this->mRef, 4, 0)) {
            VecFx32_Copy(&sp24, &sp18);
            sp18.x += FX_MUL(SIN(0xAAAA), 0x1800);
            sp18.z += FX_MUL(COS(0xAAAA), 0x1800);

            if (func_02016c68(&sp24, &sp18, this->mRef, 4, 0)) {

                VecFx32_Copy(&sp24, &sp18);
                sp18.x += FX_MUL(SIN(0xEAAA), 0x1800);
                sp18.z += FX_MUL(COS(0xEAAA), 0x1800);
            }
        }
    }

    func_01ffb714(&sp18, &sp24, &this->mUnk_28BC.vec);
    func_01ff9770(&this->mUnk_28BC.vec, 0xE66);
    VecFx32_Add(&this->mUnk_28BC.vec, &sp24, &this->mUnk_28BC.vec);
    this->mUnk_28BC.vec.y += FX_F32_TO_FX32(1.0f);

    this->func_ov031_020edd14(&spC);
    func_020169d4(&this->mUnk_28E8.vec, &sp24, (unk16 *) &data_ov031_02110ac0, (void *) &data_ov031_02110ac4);
    this->mUnk_28E8.vec.y += 0x4800;

    VecFx32_Copy(&sp24, &this->mUnk_28F4.vec);
    this->mUnk_28F4.vec.y += FX_F32_TO_FX32(0.5f);
}

void ActorUnkZLSL::func_ov031_020ed3c0() {
    VecFx32 sp14;
    VecFx32 sp08;
    UnkAngleStruct angleStruct;

    sp14                = this->mUnk_28B0.vec;
    angleStruct.angle_u = 0xE39;

    this->func_ov031_020ecea8(angleStruct, 0x7000, 0x4800, 0x01);

    VecFx32_Copy(&sp14, &this->mUnk_28B0.vec);

    this->func_ov031_020edd14(&sp08);
    sp08.y += 0x800;
    VecFx32_Copy(&sp08, &this->mUnk_28F4.vec);

    this->func_ov031_020ed4e4(0x0, 0x93F);
}

UnkStackStruct2::Inner ActorUnkZLSL::func_ov031_020ed47c(unk32 param2) {
    UnkStackStruct2 sp4;
    sp4.s.mUnk_02 = param2;
    sp4.s.mUnk_00 = 0x800;
    VecFx32_Reset(&sp4.s.mUnk_0C);
    func_020158e8(&sp4.s.mUnk_08, &sp4.s.mUnk_04, &sp4.s.mUnk_06, &this->mUnk_28F4.vec, &this->mUnk_28E8.vec);
    return sp4.s;
}

void ActorUnkZLSL::func_ov031_020ed4e4(unk32 param1, unk32 param2) {
    if (this->mUnk_28C8 < 0x0) {
        return;
    }

    if (data_027e09b8->func_ov000_020732ec(this->mUnk_28C8) == 0x0) {
        return;
    }

    data_027e09bc->mUnk_04[2]->func_ov000_02078834(&this->mUnk_28F4.vec, &this->mUnk_28E8.vec, param2, param1);
}

bool ActorUnkZLSL::func_ov031_020ed55c(unk32 param1) {
    unk16 spA;
    unk16 sp8;
    unk16 sp6;
    unk16 sp4;

    if (data_027e09b8->func_01ffd420()) {
        return false;
    }

    if (this->mState == ActorUnkZLSLState_Idle) {
        this->mUnk_2904 = param1;
        this->vfunc_58(ActorUnkZLSLState_TakeHumanShapeTrainStation);

        unk16 *psp8 = (unk16 *) &sp8;
        func_01fff17c(psp8, data_027e0ce0, 0);
        spA = *psp8 + 0xE39;

        func_020169d4(&this->mUnk_28B0.vec, this->func_ov000_0209853c(0), &spA, data_ov031_021135f0);

        if (func_02016c68(&this->mPos, &this->mUnk_28B0.vec, this->mRef, 4, 0)) {
            unk16 *psp4 = (unk16 *) &sp4;
            func_01fff17c(psp4, data_027e0ce0, 0);
            sp6 = *psp4 + 0xFFFF8E39;

            func_020169d4(&this->mUnk_28B0.vec, this->func_ov000_0209853c(0), &sp6, data_ov031_021135f8);
        }

        return true;
    }

    if (this->mState == ActorUnkZLSLState_GoOrbShapeAndIdle && this->mUnk_2874 == 1) {
        this->mUnk_2904 = param1;
        this->vfunc_58(ActorUnkZLSLState_TakeHumanShapeTrainStation);
        return true;
    }

    return false;
}

bool ActorUnkZLSL::func_ov031_020ed6cc(unk32 param1) {
    unk16 sp2;
    unk16 sp0;
    unk16 *psp2;
    unk16 *psp0;
    s32 temp_r4;

    this->func_ov031_020eab40(param1);

    switch (this->mUnk_2870) {
        case 0:
            psp2 = (unk16 *) &sp2;
            func_ov000_020986b4(psp2, this, 0);
            this->mAngle = *psp2;

            temp_r4 = func_01ff916c(&this->mUnk_28A4.vec.x, 0x1000, 0x345);
            func_01ff916c(&this->mUnk_28A4.vec.z, 0x1000, 0x345);
            func_01ff916c(&this->mUnk_28A4.vec.y, 0x1000, 0x345);

            if (this->mTimer.HasExpired() && temp_r4 != 0) {
                this->mUnk_2870++;
                this->mTimer.Set(0, 50);
                this->mUnk_28A4.vec.x = FX_F32_TO_FX32(0.2f);
                this->mUnk_28A4.vec.y = FX_F32_TO_FX32(0.2f);
                this->mUnk_28A4.vec.z = FX_F32_TO_FX32(0.2f);
                this->func_ov031_020ec6d8(false);
                this->mUnk_2864.Set(0, 31);
                this->vfunc_98(0x0F);
            }
            break;
        case 1:
            psp0 = (unk16 *) &sp0;
            func_ov000_020986b4(psp0, this, 0);
            this->mAngle = *psp0;

            func_01ff916c(&this->mUnk_28A4.vec.x, 0x1000, 0x19A);
            func_01ff916c(&this->mUnk_28A4.vec.z, 0x1000, 0x19A);
            func_01ff916c(&this->mUnk_28A4.vec.y, 0x1000, 0x19A);

            if (this->mUnk_094.mUnk_0C->vfunc_10()->mUnk_04.func_01ff8fa8() != 0) {
                this->vfunc_98(0x00);
                return true;
            }
        default:
            break;
    }

    return false;
}

bool ActorUnkZLSL::func_ov031_020ed8ac(unk32 param1) {
    VecFx32 sp28;
    VecFx32 sp1C;
    VecFx32 sp10;
    unk16 spE;
    unk16 spC;
    unk16 *pspC;
    unk16 spA;
    unk16 sp8;
    unk16 sp6;
    unk16 sp4;

    this->mUnk_28E0 = 0;
    this->mUnk_0D8  = 0;

    func_01fff17c(&spE, data_027e0ce0, 0);
    sp28   = this->mPos;
    sp10   = *this->func_ov000_0209853c(0);
    sp1C.x = sp10.x;
    sp1C.y = sp10.y + param1;
    sp1C.z = sp10.z;

    pspC = (unk16 *) &spC;
    func_ov000_020986b4(pspC, this, 0);
    this->mAngle = *pspC;

    if (VecFx32_IsCleared(&this->mUnk_28BC.vec)) {
        func_01fff17c(&sp8, data_027e0ce0, 0);
        spA = sp8 + this->mUnk_28E4;
        func_020169d4(&sp28, &sp1C, &spA, (void *) &data_ov031_02110acc);
    } else {
        sp28.x = this->mUnk_28BC.vec.x;
        sp28.y = this->mUnk_28BC.vec.y;
        sp28.z = this->mUnk_28BC.vec.z;
    }

    switch (this->mUnk_2870) {
        case 0:
            if (this->mTimer.HasExpired()) {
                this->mUnk_2870++;
                this->mUnk_286A = spE - 0x8000;
                this->mUnk_2888 = 0x4CD;
                this->mTimer.Set(0, 30);
                this->mUnk_28B0.vec.x = this->mPos.x;
                this->mUnk_28B0.vec.y = this->mPos.y;
                this->mUnk_28B0.vec.z = this->mPos.z;
            }

            break;
        case 1:
            this->mUnk_286A += 0x1000;
            func_01ff916c(&this->mUnk_28A4.vec.x, 0x1000, 0x19A);
            func_01ff916c(&this->mUnk_28A4.vec.z, 0x1000, 0x19A);
            func_01ff916c(&this->mUnk_28A4.vec.y, 0x1000, 0x19A);
            func_01ff916c(&this->mUnk_2888, 0, 0x52);
            sp6 = this->mUnk_286A;
            func_020169d4(&this->mPos, &this->mUnk_28B0.vec, &sp6, &this->mUnk_2888);
            func_01ff9984(&this->mUnk_28B0.vec, &sp28, 0x334, 0, 0x7FFFFFFF);

            if (func_01ffb9cc(&sp28, &this->mPos) < 0x800) {
                this->mUnk_2870++;
                this->mUnk_28A4.vec.x = FX_F32_TO_FX32(0.2f);
                this->mUnk_28A4.vec.y = FX_F32_TO_FX32(0.2f);
                this->mUnk_28A4.vec.z = FX_F32_TO_FX32(0.2f);
                this->func_ov031_020ec6d8(false);
                this->mUnk_2864.Set(0, 31);
                this->vfunc_98(0x0F);
            }

            break;
        case 2:
            func_01ff916c(&this->mUnk_28A4.vec.x, 0x1000, 0x19A);
            func_01ff916c(&this->mUnk_28A4.vec.z, 0x1000, 0x19A);
            func_01ff916c(&this->mUnk_28A4.vec.y, 0x1000, 0x19A);
            this->mUnk_286A += 0x1000;
            func_01ff916c(&this->mUnk_2888, 0, 0x52);
            sp4 = this->mUnk_286A;
            func_020169d4(&this->mPos, &this->mUnk_28B0.vec, &sp4, &this->mUnk_2888);
            func_01ff9984(&this->mUnk_28B0.vec, &sp28, 0x334, 0, 0x7FFFFFFF);

            if (this->mUnk_094.mUnk_0C->vfunc_10()->mUnk_04.func_01ff8fa8() != 0) {
                this->vfunc_98(0x00);
                return true;
            }

            break;
        default:
            break;
    }

    return false;
}

void ActorUnkZLSL::func_ov031_020edc80() {
    unk32 var_r6 = 0;

    UnkStruct_ov031_020e5d18_00 spC;
    spC.mUnk_00 = NULL;
    func_01ffe6c4(&spC.mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos, NULL);

    if (this->mUnk_2900 & 0x01) {
        var_r6 = data_027e09c0->func_ov000_0207dc88(&spC.mUnk_00, this->mUnk_38);
    }

    var_r6 |= ((Actor *) &spC)->func_ov000_0207df88(this->mUnk_30, 0x10);
    var_r6 |= ((Actor *) &spC)->func_ov000_0207e294(this->mUnk_30);
    this->mUnk_46 = var_r6;
}

void ActorUnkZLSL::func_ov031_020edd14(VecFx32 *param1) {
    VecFx32_Copy(&gpActorManager->func_01fff3b4(this->mUnk_28DC)->mPos, param1);
}

void ActorUnkZLSL::func_ov031_020edd54(RefStruct ref) {
    if (data_027e0ce0->func_01fff1a4() && data_027e0d8c->func_ov093_02166118() == 0) {
        return;
    }

    ActorPhantomBase *pPhantom = (ActorPhantomBase *) gpActorManager->func_01fff3b4(ref);

    bool var_r2 = false;
    if (!(pPhantom->mState != 0x0E || pPhantom->mUnk_316 != 0x01)) {
        var_r2 = true;
    }

    if (var_r2) {
        this->mUnk_28DC = ref;

        if (data_027e0ce0->func_01fff1a4()) {
            this->vfunc_58(ActorUnkZLSLState_16);
        } else {
            this->vfunc_58(ActorUnkZLSLState_TakePhantomControl);
        }
    }
}

void ActorUnkZLSL::func_ov031_020ede30(RefStruct ref) {
    unk32 var_r6 = 0;
    u8 var_r7    = 0;

    Actor *temp_r0 = gpActorManager->func_01fff3b4(ref);

    if (temp_r0 != NULL) {
        VecFx32 *pPos = &temp_r0->mPos;

        if (func_01ff9258((*(VecFx32 **) &pPos)->x - this->mPos.x, pPos->z - this->mPos.z) > 0x4800) {
            this->func_ov031_020edf98(ref);
            return;
        }
    }

    if (data_0204a110.func_01ff9b50() == 0x80) {
        for (u8 var_r1 = 0; var_r1 < ARRAY_LEN(this->mUnk_28CC); var_r1++) {
            this->mUnk_28CC[var_r1].ref.Reset();
        }
    } else {
        for (u8 var_r8 = 0; var_r8 < ARRAY_LEN(this->mUnk_28CC); var_r8++) {
            if (this->mUnk_28CC[var_r8].ref.Get32() == ref.Get32()) {
                return;
            }

            if (this->mUnk_28CC[var_r8].ref.acRef.type_index == 0) {
                this->mUnk_28CC[var_r8].ref.data = ref.data;
                return;
            }

            VecFx32 *pPos   = &gpActorManager->func_01fff3b4(this->mUnk_28CC[var_r8].ref)->mPos;
            unk32 temp_r0_5 = func_01ff9258(pPos->x - this->mPos.x, pPos->z - this->mPos.z);

            if (temp_r0_5 > var_r6) {
                var_r6 = temp_r0_5;
                var_r7 = var_r8;
            }
        }

        this->mUnk_28CC[var_r7].ref = ref;
    }
}

void ActorUnkZLSL::func_ov031_020edf98(RefStruct ref) {
    for (u8 var_ip = 0; var_ip < ARRAY_LEN(this->mUnk_28CC); var_ip++) {
        if (this->mUnk_28CC[var_ip].ref.Get32() == ref.Get32()) {
            this->mUnk_28CC[var_ip].ref.Reset();
            return;
        }
    }
}

void ActorUnkZLSL::GetOffsetPos(VecFx32 *pPos) const {
    VecFx32_Copy(&this->mUnk_2878.vec, pPos);
    pPos->y += this->mYOffset;
}

void ActorUnkZLSL::vfunc_A4() {
    VecFx32 sp0C;
    if ((this->mUnk_0B0 & 0x10) || !this->func_ov000_020a8ff4(&sp0C)) {
        func_01ff930c(&this->mUnk_0D8, 0x0, 0x71C);
        return;
    }

    VecFx32 sp00 = this->mPos;
    sp00.y       = sp00.y + this->mYOffset - FX_F32_TO_FX32(0.5f);
    func_01ffb714(&sp0C, &sp00, &sp0C);

    int angle  = this->mAngle.angle_s;
    int temp   = func_01ffbbe0(sp0C.x, sp0C.z);
    s16 var_r4 = (angle - (s16) temp);

    this->mUnk_0E8.Update();

    unk32 var_r0 = var_r4;
    if (var_r4 < 0) {
        var_r0 = -var_r4;
    }

    if ((var_r0 <= 0x4000 && func_01ff9258(sp0C.x, sp0C.z) < 0x2000) || this->mUnk_0B0 & 1) {
        int clamped1 = CLAMP3(var_r4, -0x2AAB, 0x2AAB);

        int temp_r0_2 = func_01ffbbe0(sp0C.y, func_01ff9258(sp0C.x, sp0C.z));
        int clamped2  = CLAMP3((s16) temp_r0_2, -0x18E4, 0x18E4);

        this->mUnk_0CC = clamped1;
        this->mUnk_0CE = clamped2;
        this->mUnk_0E8.Set(0, 50);
    } else if (this->mUnk_0E8.HasReachedMaxU()) {
        this->mUnk_0CE = 0x0;
        this->mUnk_0CC = 0x0;
    } else if (ABS(var_r4) >= 0x71C7) {
        this->mUnk_0D0 = 0x0;
    }

    func_01ff916c(&this->mUnk_0D0, 0x1EC, 0x19);
    unk16 temp_r1 = this->mUnk_0CC;

    if (this->mState != ActorUnkZLSLState_RotateClosedArms) {
        func_01ff9318(&this->mUnk_0D8, temp_r1, this->mUnk_0D0);
    } else {
        func_01ff930c(&this->mUnk_0D8, temp_r1, 0x71C);
    }

    func_01ff9318(&this->mUnk_0DA, this->mUnk_0CE, this->mUnk_0D0);
}

void ActorUnkZLSL::func_ov031_020ee1f4(Actor *param1, G3d_RenderState *param2) {
    ActorUnkZLSL *thisx             = (ActorUnkZLSL *) param1;
    G3d_RenderObject *pRenderObject = param2->renderObj;
    s32 var_r2                      = param2->flag & 0x10 ? param2->currentBoneMtxId : -1;

    if (var_r2 == 0x0A && pRenderObject->mUnk_25 == 2) {
        MtxFx33 sp24;
        MtxFx33 sp0;
        G3d_RenderState_B4 *temp_r6 = param2->mUnk_B4;

        temp_r6->mUnk_00 &= ~0x02;
        MtxFx33_InitZRotation(&sp24, SIN((u16) thisx->mUnk_28E0), COS((u16) thisx->mUnk_28E0));
        MtxFx33_InitYRotation(&sp0, SIN((u16) thisx->mUnk_28E2), COS((u16) thisx->mUnk_28E2));
        func_01ffa60c(&sp24, &sp0, &sp24);
        func_01ffa60c(&sp24, &temp_r6->mUnk_28, &temp_r6->mUnk_28);
    }
}

unk16 ActorUnkZLSL::func_ov031_020ee2c8() {
    VecFx32 sp20;
    VecFx32 sp14;
    VecFx32 sp8;
    unk16 sp6;
    unk16 sp4;
    unk16 sp2;
    unk16 sp0;
    unk16 var_r6;

    func_01fff17c(&sp4, data_027e0ce0, 0);
    sp6 = sp4 + 0x2AAB;
    func_020169d4(&sp14, this->func_ov000_0209853c(0), &sp6, (void *) &data_ov031_02110acc);

    func_01fff17c(&sp0, data_027e0ce0, 0);
    var_r6 = 0xD555;
    sp2    = sp0 + var_r6;
    func_020169d4(&sp20, this->func_ov000_0209853c(0), &sp2, (void *) &data_ov031_02110acc);

    sp8.x = data_027e0208.mUnk_240.x;
    sp8.y = data_027e0208.mUnk_240.y;
    sp8.z = data_027e0208.mUnk_240.z;

    func_01ffb714(&sp20, &sp8, &sp20);
    func_01ffb714(&sp14, &sp8, &sp14);
    unk32 temp_r4 = func_01ff9258(sp14.x, sp14.z);

    if (func_01ff9258(sp20.x, sp20.z) <= temp_r4) {
        var_r6 = 0x2AAB;
    }

    return var_r6;
}

void ActorUnkZLSL::vfunc_B4() {
    if (this->mState == ActorUnkZLSLState_Idle) {
        this->vfunc_58(ActorUnkZLSLState_TakeHumanShape);
    } else {
        this->vfunc_58(ActorUnkZLSLState_OpenArms);
    }
}

void ActorUnkZLSL::func_ov031_020ee41c() {
    this->mUnk_2864.Update();

    int time = this->mUnk_2864.GetRemainingTime();

    if (time > 1) {
        for (int var_r8 = 0; var_r8 < ARRAY_LEN(this->mUnk_2834); var_r8++) {
            data_027e0cec->func_ov000_020a0140(&this->mUnk_2834[var_r8], &this->mPos);
        }
    } else if (time == 1) {
        for (int var_r7 = 0; var_r7 < ARRAY_LEN(this->mUnk_2834); var_r7++) {
            data_027e0cec->func_ov000_020a0110(&this->mUnk_2834[var_r7]);
        }
    }
}

void ActorUnkZLSL::func_ov031_020ee4c4(UnkAngleStruct angle) {
    s16 diff = angle.angle_s - this->mAngle.angle_s;
    func_01ff930c(&this->mUnk_28E0, (s16) -diff * 4, 0x300);

    VecFx32 sp0;
    sp0.x = FX_MUL(SIN((u16) this->mAngle.angle_s), 0x1000);
    sp0.z = FX_MUL(COS((u16) this->mAngle.angle_s), 0x1000);
    sp0.y = 0;

    if (!VecFx32_IsCleared(&this->mVel) && VecFx32_Dot(&sp0, &this->mVel) < 0) {
        fx32 temp_ret = VecFx32_Length(&this->mVel);
        s16 value     = FX_MUL(FX_MUL(temp_ret, 0xA000), 0x2000);
        func_01ff930c(&this->mUnk_28E2, -value, 0x1000);
    } else {
        func_01ff930c(&this->mUnk_28E2, 0, 0x200);
    }
}

void ActorUnkZLSL::func_ov031_020ee654() {
    switch (this->mUnk_2874 ? 1 : 0) {
        case 0:
            this->mUnk_094.mUnk_0C->vfunc_34();
            this->mUnk_2700.vfunc_34();
            break;
        case 1:
            this->mUnk_27CC.vfunc_34();
            data_027e0cec->func_ov000_020a0140(&this->mUnk_2828.mUnk_00, &this->mPos);
            break;
        default:
            break;
    }
}

unk32 ActorUnkZLSL::vfunc_80(unk32 param1, unk32 param2) {
    u16 value = ((param1 + 1) & 0xFF) | (param2 << 8);

    switch (value) {
        case 0x201: {

            ActorUnkRPMT *actor = (ActorUnkRPMT *) func_02016fbc(ActorId_RPMT, &this->mPos, 0x0);

            if (actor != NULL) {
                return actor->mUnk_A4;
            }

            break;
        }
        default:
            break;
    }

    return 0;
}

bool ActorUnkZLSL::func_ov031_020ee724() {
    UnkStruct_ov031_0211361c stack;
    Actor **actor = gpActorManager->func_01fff350(&stack, gpActorManager->mActorTable);
    return *actor != NULL;
}

void ActorUnkZLSL_27CC::vfunc_3C() {
    this->mUnk_08->func_ov000_02057c98(this->vfunc_10());
}

void ActorUnkZLSL_27CC::vfunc_38(unk32 param1, unk32 param2) {
    this->mUnk_04->func_ov000_020578a4(param1, param2);
}

s8 ActorUnkZLSL_27CC::vfunc_30() {
    return this->mUnk_18;
}

void ActorUnkZSRS_120::vfunc_3C() {
    this->mUnk_08->func_ov000_02057c98(this->mUnk_04);
    this->mUnk_08->func_ov000_02057c98(this->mUnk_1C);
}

void ActorUnkZSRS_120::vfunc_38(unk32 param1, unk32 param2) {
    this->mUnk_04->func_ov000_020578a4(param1, param2);
    this->mUnk_1C->func_ov000_020578a4(param1, param2);
}
