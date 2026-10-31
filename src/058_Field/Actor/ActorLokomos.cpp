#include "Actor/ActorLokomos.hpp"

#include "CommonFuncs.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"

// --- Actor SYOS ---
DECL_PROFILE(ActorProfileUnkSYOS);

Actor *ActorProfileUnkSYOS::Create() {
    return NULL;
}

ActorProfileUnkSYOS::ActorProfileUnkSYOS() :
    ActorProfile_Derived1(ActorId_SYOS, ActorId_SYOS) {}

ActorUnkSYOS::ActorUnkSYOS() {}

// --- Actor SYSS ---
DECL_PROFILE(ActorProfileUnkSYSS);

Actor *ActorProfileUnkSYSS::Create() {
    return NULL;
}

ActorProfileUnkSYSS::ActorProfileUnkSYSS() :
    ActorProfile_Derived1(ActorId_SYSS, ActorId_SYSS) {}

ActorUnkSYSS::ActorUnkSYSS() {}

// --- Actor SYWS ---
DECL_PROFILE(ActorProfileUnkSYWS);

Actor *ActorProfileUnkSYWS::Create() {
    return NULL;
}

ActorProfileUnkSYWS::ActorProfileUnkSYWS() :
    ActorProfile_Derived1(ActorId_SYWS, ActorId_SYWS) {}

ActorUnkSYWS::ActorUnkSYWS() {}

// --- Actor SYIS ---
DECL_PROFILE(ActorProfileUnkSYIS);

Actor *ActorProfileUnkSYIS::Create() {
    return NULL;
}

ActorProfileUnkSYIS::ActorProfileUnkSYIS() :
    ActorProfile_Derived1(ActorId_SYIS, ActorId_SYIS) {}

ActorUnkSYIS::ActorUnkSYIS() {}

// --- Actor SYDS ---
DECL_PROFILE(ActorProfileUnkSYDS);

Actor *ActorProfileUnkSYDS::Create() {
    return NULL;
}

ActorProfileUnkSYDS::ActorProfileUnkSYDS() :
    ActorProfile_Derived1(ActorId_SYDS, ActorId_SYDS) {}

ActorUnkSYDS::ActorUnkSYDS() {}

// --- Actor SYOL ---
DECL_PROFILE(ActorProfileUnkSYOL);

Actor *ActorProfileUnkSYOL::Create() {
    return NULL;
}

ActorProfileUnkSYOL::ActorProfileUnkSYOL() :
    ActorProfile_Derived1(ActorId_SYOL, ActorId_SYOL) {}

ActorUnkSYOL::ActorUnkSYOL() {}

// --- Actor SYSL ---
DECL_PROFILE(ActorProfileUnkSYSL);

Actor *ActorProfileUnkSYSL::Create() {
    return NULL;
}

ActorProfileUnkSYSL::ActorProfileUnkSYSL() :
    ActorProfile_Derived1(ActorId_SYSL, ActorId_SYSL) {}

ActorUnkSYSL::ActorUnkSYSL() {}

// --- Actor SYWL ---
DECL_PROFILE(ActorProfileUnkSYWL);

Actor *ActorProfileUnkSYWL::Create() {
    return NULL;
}

ActorProfileUnkSYWL::ActorProfileUnkSYWL() :
    ActorProfile_Derived1(ActorId_SYWL, ActorId_SYWL) {}

ActorUnkSYWL::ActorUnkSYWL() {}

// --- Actor SYIL ---
DECL_PROFILE(ActorProfileUnkSYIL);

Actor *ActorProfileUnkSYIL::Create() {
    return NULL;
}

ActorProfileUnkSYIL::ActorProfileUnkSYIL() :
    ActorProfile_Derived1(ActorId_SYIL, ActorId_SYIL) {}

ActorUnkSYIL::ActorUnkSYIL() {}

// --- Actor SYDL ---
DECL_PROFILE(ActorProfileUnkSYDL);

Actor *ActorProfileUnkSYDL::Create() {
    return NULL;
}

ActorProfileUnkSYDL::ActorProfileUnkSYDL() :
    ActorProfile_Derived1(ActorId_SYDL, ActorId_SYDL) {}

// --- Actor SYFO ---
DECL_PROFILE(ActorProfileUnkSYFO);

Actor *ActorProfileUnkSYFO::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

ActorProfileUnkSYFO::ActorProfileUnkSYFO() :
    ActorProfile_Derived1(ActorId_SYFO) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xEB2;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;

    ActorId id;
    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_b_last22) {
        id = ActorId_SYOL;
    } else {
        id = ActorId_SYOS;
    }

    this->mUnk_24 = id;
}

// --- Actor SYSN ---
DECL_PROFILE(ActorProfileUnkSYSN);

Actor *ActorProfileUnkSYSN::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

ActorProfileUnkSYSN::ActorProfileUnkSYSN() :
    ActorProfile_Derived1(ActorId_SYSN) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xCCD;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;

    ActorId id;
    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_b_last22) {
        id = ActorId_SYSL;
    } else {
        id = ActorId_SYSS;
    }

    this->mUnk_24 = id;
}

// --- Actor SYWA ---
DECL_PROFILE(ActorProfileUnkSYWA);

Actor *ActorProfileUnkSYWA::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

ActorProfileUnkSYWA::ActorProfileUnkSYWA() :
    ActorProfile_Derived1(ActorId_SYWA) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xD9A;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;

    ActorId id;
    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_b_last22) {
        id = ActorId_SYWL;
    } else {
        id = ActorId_SYWS;
    }

    this->mUnk_24 = id;
}

// --- Actor SYFI ---
DECL_PROFILE(ActorProfileUnkSYFI);

Actor *ActorProfileUnkSYFI::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

ActorProfileUnkSYFI::ActorProfileUnkSYFI() :
    ActorProfile_Derived1(ActorId_SYFI) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xE8F;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;

    ActorId id;
    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_b_last22) {
        id = ActorId_SYIL;
    } else {
        id = ActorId_SYIS;
    }

    this->mUnk_24 = id;
}

// --- Actor SYDE ---
DECL_PROFILE(ActorProfileUnkSYDE);

Actor *ActorProfileUnkSYDE::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

ActorProfileUnkSYDE::ActorProfileUnkSYDE() :
    ActorProfile_Derived1(ActorId_SYDE) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xE8F;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;

    ActorId id;
    if (data_027e09a4->mUnk_00.sceneIndex == SceneIndex_b_last22) {
        id = ActorId_SYDL;
    } else {
        id = ActorId_SYDS;
    }

    this->mUnk_24 = id;
}

// --- GENERAL ---

static ActorUnkZLSL_AnimationTag data_ov058_021546e8               = {0, "car_move", 0};
static ActorUnkZLSL_AnimationTag data_ov058_0215491c[]             = {{0, "blink", 0}, {1, "close", 1}, {2, "turn", 1}};
static PTMF<ActorLokomo> data_ov058_021549b0[ActorLokomoState_Max] = {
    &ActorLokomo::vfunc_0BC, // ActorLokomoState_0
    &ActorLokomo::vfunc_0C0, // ActorLokomoState_1
    &ActorLokomo::vfunc_0C4, // ActorLokomoState_2
    &ActorLokomo::vfunc_0C8, // ActorLokomoState_3
    &ActorLokomo::vfunc_0CC, // ActorLokomoState_4
    &ActorLokomo::vfunc_0D0, // ActorLokomoState_5
    &ActorLokomo::vfunc_0D4, // ActorLokomoState_6
    &ActorLokomo::vfunc_0D8, // ActorLokomoState_7
    &ActorLokomo::vfunc_0DC, // ActorLokomoState_8
    &ActorLokomo::vfunc_114, // ActorLokomoState_9
    &ActorLokomo::vfunc_118, // ActorLokomoState_10
    &ActorLokomo::vfunc_11C, // ActorLokomoState_11
    &ActorLokomo::vfunc_120, // ActorLokomoState_12
};
static PTMF<ActorLokomo> data_ov058_02154a18[ActorLokomoState_Max] = {
    &ActorLokomo::vfunc_0E0, // ActorLokomoState_0
    &ActorLokomo::vfunc_0E4, // ActorLokomoState_1
    &ActorLokomo::vfunc_0E8, // ActorLokomoState_2
    &ActorLokomo::vfunc_0EC, // ActorLokomoState_3
    &ActorLokomo::vfunc_0F0, // ActorLokomoState_4
    &ActorLokomo::vfunc_0F4, // ActorLokomoState_5
    &ActorLokomo::vfunc_0F8, // ActorLokomoState_6
    &ActorLokomo::vfunc_0FC, // ActorLokomoState_7
    &ActorLokomo::vfunc_100, // ActorLokomoState_8
    &ActorLokomo::vfunc_124, // ActorLokomoState_9
    &ActorLokomo::vfunc_128, // ActorLokomoState_10
    &ActorLokomo::vfunc_12C, // ActorLokomoState_11
    &ActorLokomo::vfunc_130, // ActorLokomoState_12
};
static ActorUnkZLSL_AnimationTag data_ov058_02154cdc[] = {
    {0, "wait", 0},        {1, "wait", 0},        {2, "talk", 0},        {3, "wait", 0},        {4, "play", 0},
    {5, "play_body", 0},   {6, "play_arm", 1},    {7, "play_arm", 0},    {8, "play_armLL", 1},  {9, "play_armLC", 1},
    {10, "play_armRR", 1}, {11, "play_armRC", 1}, {12, "play_armLL", 0}, {13, "play_armLC", 0}, {14, "play_armRR", 0},
    {15, "play_armRC", 0}, {16, "rhythm", 0},     {17, "fear", 0},       {18, "tremble", 0},    {19, "fly", 0}};

unk32 ActorLokomo::func_ov058_02143438(unk32 param1) {}

ActorLokomo::ActorLokomo() :
    ActorKenzo_Base(NULL, NULL),
    mUnk_24C(NULL),
    mUnk_2BC(NULL),
    mUnk_328(NULL),
    mUnk_38C(NULL),
    mUnk_3F0(NULL),
    mUnk_458(NULL, NULL, NULL),
    mUnk_4C4(NULL, NULL, NULL, NULL),
    mUnk_5B0(NULL, NULL, NULL, NULL),
    mUnk_69C(NULL, NULL, NULL, NULL),
    mUnk_788(NULL, NULL, NULL, NULL),
    mUnk_888(NULL),
    mUnk_8D4(0x0),
    mUnk_8D8(0x0),
    mUnk_8DC(0x0),
    mUnk_8F0(false),
    mUnk_8F1(true),
    mUnk_8F4(0x3),
    mUnk_8F8(0x3),
    mUnk_901(false),
    mUnk_902(false),
    mUnk_903(false),
    mUnk_908(0x0),
    mUnk_90C(0x0),
    mUnk_910(0x0),
    mUnk_9AC(0x0),
    mUnk_9B0(0x0),
    mUnk_9B4(0x0),
    mUnk_9B8(0x0),
    mUnk_9BC(0x0),
    mUnk_9C0(0x0),
    mUnk_8FE(0x0) {

    this->mUnk_4C4.vfunc_08();
    this->mUnk_4C4.mUnk_0C = this->func_ov058_02143438(0x1);
    this->mUnk_4C4.vfunc_1C(data_ov058_021546e8, 0x1000, 0x19A, 0x0);

    this->func_ov058_021470d8();

    this->mUnk_8E0 = 0x0;
    this->mUnk_8E4 = 0x402;
    this->mUnk_8E8 = -0x104;

    this->mUnk_908 = this->mUnk_24C.func_ov000_02057f18(NULL);
    this->mUnk_90C = this->mUnk_24C.func_ov000_02057f18(NULL);
    this->mUnk_910 = this->mUnk_24C.func_ov000_02057f18(NULL);

    this->mUnk_8D0 = this->mUnk_2BC.func_ov000_02057f18(NULL);
    this->mUnk_9A4 = this->mUnk_2BC.func_ov000_02057f18(NULL);
    this->mUnk_9A8 = this->mUnk_2BC.func_ov000_02057f18(NULL);

    memset(&this->mUnk_914, 0, sizeof(this->mUnk_914));
    memset(&this->mUnk_944, 0, sizeof(this->mUnk_944));
    memset(&this->mUnk_974, 0, sizeof(this->mUnk_974));
}

ActorLokomo::~ActorLokomo() {}

extern unk32 data_ov058_0215616c[];
extern unk32 data_ov058_02156170[];
extern unk32 data_ov058_02156174[];
extern unk32 data_ov058_02156178[];
extern unk32 data_ov058_0215617c[];
extern unk32 data_ov058_02156180[];
extern unk32 data_ov058_02156184[];
extern unk32 data_ov058_02156188[];
extern unk32 data_ov058_0215618c[];
extern unk32 data_ov058_02156190[];
extern unk32 data_ov058_02156194[];
extern unk32 data_ov058_02156198[];
extern unk32 data_ov058_0215619c[];
extern unk32 data_ov058_021561a0[];
extern unk32 data_ov058_021561a4[];

// non-matching
void ActorLokomo::func_ov058_021446b8() {
    unk32 value = this->func_ov058_021456a4();
    switch (this->func_ov058_021456d8()) {
        case 0x0:
            this->mUnk_5B0.vfunc_38(data_ov058_0215616c[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156170[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156174[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156178[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_0215617c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156180[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156184[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156188[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_0215618c[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156190[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156194[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156198[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_021561a0[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_021561a4[(u32) (value * 0x3C) / 4], 0x1);
            break;

        case 0x1:
            this->mUnk_5B0.vfunc_38(data_ov058_0215616c[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156170[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156174[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156178[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_0215617c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156180[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156184[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156188[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_0215618c[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156190[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156194[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156198[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_0215619c[(u32) (value * 0x3C) / 4], 0x1);
            break;

        default:
            this->mUnk_5B0.vfunc_38(data_ov058_0215616c[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156170[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156174[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156178[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_0215617c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156180[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156184[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_02156188[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_5B0.vfunc_38(data_ov058_0215618c[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156190[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156194[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_5B0.vfunc_38(data_ov058_02156198[(u32) (value * 0x3C) / 4], 0x1);
            break;
    }
}

// non-matching
void ActorLokomo::func_ov058_02144ba0() {
    unk32 value = this->func_ov058_021456a4();
    switch (this->func_ov058_021456d8()) {
        case 0x0:
            this->mUnk_69C.vfunc_38(data_ov058_0215616c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156170[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156174[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156178[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_0215617c[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_69C.vfunc_38(data_ov058_02156180[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156184[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156188[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_0215618c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156190[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156194[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156198[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_021561a0[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_021561a4[(u32) (value * 0x3C) / 4], 0x0);
            break;

        case 0x1:
            this->mUnk_69C.vfunc_38(data_ov058_0215616c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156170[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156174[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_69C.vfunc_38(data_ov058_02156178[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_69C.vfunc_38(data_ov058_0215617c[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_69C.vfunc_38(data_ov058_02156180[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156184[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156188[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_0215618c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156190[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156194[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156198[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_0215619c[(u32) (value * 0x3C) / 4], 0x0);
            break;

        default:
            this->mUnk_69C.vfunc_38(data_ov058_0215616c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156170[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156174[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_69C.vfunc_38(data_ov058_02156178[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_69C.vfunc_38(data_ov058_0215617c[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_69C.vfunc_38(data_ov058_02156180[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156184[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156188[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_0215618c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156190[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156194[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_69C.vfunc_38(data_ov058_02156198[(u32) (value * 0x3C) / 4], 0x0);
            break;
    }
}

// non-matching
void ActorLokomo::func_ov058_02145120() {
    unk32 value = this->func_ov058_021456a4();
    switch (this->func_ov058_021456d8()) {
        case 0x0:
            this->mUnk_788.vfunc_38(data_ov058_0215616c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156170[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156174[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156178[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_0215617c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156180[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_788.vfunc_38(data_ov058_02156184[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_788.vfunc_38(data_ov058_02156188[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_788.vfunc_38(data_ov058_0215618c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156190[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156194[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156198[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_021561a0[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_021561a4[(u32) (value * 0x3C) / 4], 0x0);
            break;

        case 0x1:
            this->mUnk_788.vfunc_38(data_ov058_0215616c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156170[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156174[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156178[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_0215617c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156180[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_788.vfunc_38(data_ov058_02156184[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_788.vfunc_38(data_ov058_02156188[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_788.vfunc_38(data_ov058_0215618c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156190[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156194[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156198[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_0215619c[(u32) (value * 0x3C) / 4], 0x0);
            break;

        default:
            this->mUnk_788.vfunc_38(data_ov058_0215616c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156170[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156174[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156178[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_0215617c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156180[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_788.vfunc_38(data_ov058_02156184[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_788.vfunc_38(data_ov058_02156188[(u32) (value * 0x3C) / 4], 0x1);
            this->mUnk_788.vfunc_38(data_ov058_0215618c[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156190[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156194[(u32) (value * 0x3C) / 4], 0x0);
            this->mUnk_788.vfunc_38(data_ov058_02156198[(u32) (value * 0x3C) / 4], 0x0);
            break;
    }
}

unk32 ActorLokomo::func_ov058_021456a4() {
    switch (this->func_ov058_021456d8()) {
        case 0x0:
            return 0x1;

        case 0x1:
            return 0x2;

        default:
            break;
    }

    return 0x0;
}

unk32 ActorLokomo::func_ov058_021456d8() {
    if (this->GetActorId() == ActorId_SYFO) {
        return 0x0;
    }

    if (this->GetActorId() == ActorId_SYSN) {
        return 0x1;
    }

    if (this->GetActorId() == ActorId_SYWA) {
        return 0x2;
    }

    if (this->GetActorId() == ActorId_SYFI) {
        return 0x3;
    }

    return 0x4;
}

extern u8 data_ov058_02153010[];

// non-matching
bool ActorLokomo::Init(unk32 param1) {
    this->mUnk_2BC.func_ov000_02057c38(0x6, 0x2);
    this->mUnk_2BC.func_ov000_0209a7b8(this, &ActorLokomo::func_ov058_02147860);
    this->vfunc_98(0x0);
    this->func_ov058_021456a4();

    for (int i = 0; i < 16; ++i) {
        if (i != 12 || (this->func_ov058_021456d8() == 0x1 && i - 13 > 1) || this->func_ov058_021456d8() == 0x0) {
            // TODO
            this->mUnk_24C.func_ov000_02057f18(&data_ov058_02153010[i * 0x10]);
        }
    }

    this->func_ov058_021446b8();
    this->func_ov058_02144ba0();
    this->func_ov058_02145120();

    bool retValue  = this->Actor_Derived1::Init(param1);
    this->mUnk_0E4 = &ActorLokomo::func_ov058_02147760;

    if (this->mUnk_904) {
        // TODO
    }

    return retValue;
}

// non-matching
void ActorLokomo::vfunc_54(unk32 param1) {
    this->ActorCharacter::vfunc_54(param1);
    this->func_ov058_02147aec();
}

void ActorLokomo::SetState(ActorState state) {
    this->mUnk_4A[0] = 0x5;
    this->mState     = state;

    this->vfunc_104();

    CALL_PTMF(data_ov058_021549b0[this->mState]);
}

void ActorLokomo::func_ov058_021459b8() {
    UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    data_027e0cec->func_ov000_020a0110(&this->mUnk_888);
}

void ActorLokomo::Update() {
    if (!this->vfunc_108(0x5000)) {
        return;
    }

    if ((this->mUnk_5C.mParams[2] == 0x2 || this->mUnk_5C.mParams[2] == 0x1 ||
         (this->GetActorId() == ActorId_SYWA && this->mUnk_5C.mParams[2] == 0x3)) &&
        this->Actor_Derived1::func_ov000_020a8dd0()) {
        this->func_ov058_021459b8();
    }
    this->vfunc_60();
    CALL_PTMF(data_ov058_02154a18[this->mState]);

    if (!GET_FLAG(this->mFlags, ActorFlag_Visible)) {
        return;
    }

    this->Actor::func_ov000_02098838();

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mVel, &this->mPos);

    this->vfunc_A4();
    this->mUnk_5B0.vfunc_34();
    this->mUnk_69C.vfunc_34();
    this->mUnk_788.vfunc_34();
    this->vfunc_10C();

    if (this->mUnk_880) {
        this->mUnk_458.vfunc_34();
    }

    if (!this->mUnk_904) {
        this->mUnk_4C4.vfunc_34();
        if (this->mUnk_4C4.vfunc_10()->mUnk_04.mUnk_04 != 0x0) {
            data_027e09a8->func_ov000_02071d34(&this->mRef, 0x98E2, &this->mPos, 0x0);
        }
    }

    if (this->mState == ActorLokomoState_8) {
        return;
    }

    this->func_ov058_02145bd4();
}

// non-matching
void ActorLokomo::func_ov058_02145bd4() {}
// non-matching
unk32 ActorLokomo::vfunc_7C(unk32 param1) {}
// non-matching
unk32 ActorLokomo::vfunc_80(unk32 param1, unk32 param2) {}

void ActorLokomo::func_ov058_02145e94(bool param1) {
    this->mUnk_903 = param1;
    this->func_ov058_02146070();
    this->mUnk_901 = true;

    this->vfunc_114();

    this->mUnk_8F0 = true;
    this->mUnk_8F1 = false;

    if (this->mUnk_903) {
        return;
    }

    this->mUnk_0B0 |= 0x10;
    UNSET_FLAG(this->mFlags, ActorFlag_Visible);
}

void ActorLokomo::func_ov058_02145ef0() {
    if (this->mUnk_903) {
        VecFx32 sp28;
        VecFx32 sp1C;
        VecFx32 sp10;
        VecFx32 sp04;

        if (this->func_ov000_020a8ff4(&sp28)) {
            this->mAngle.angle_u = func_02016958(&this->mPos, &sp28);
        }

        data_027e0cec->func_ov000_020a0110(&this->mUnk_888);
        this->func_ov058_02145bd4();
        this->SetState(ActorLokomoState_5);
        this->vfunc_134(0x2);

        UnkAngleStruct angle = this->mAngle.angle_s - DEG_TO_ANG(180);

        UnkStruct_027e0ce0 *data = data_027e0ce0;
        sp1C                     = *data->func_01fff148(0x0);

        data->func_ov000_0208bbd4(0x0, &sp1C, angle);

        this->GetOffsetPos(&sp10);
        VecFx32_Copy(&sp10, &sp04);

        data_027e09bc->mUnk_04[2]->func_ov000_02078a70(&sp04, 0x0);
    } else {
        this->SetState(ActorLokomoState_0);
        this->mUnk_901 = false;
        UNSET_FLAG(this->mFlags, ActorFlag_Visible);
        data_027e0cec->func_ov000_020a0110(&this->mUnk_888);
    }

    this->mUnk_0B0 &= ~0x10;
    this->mUnk_8F1 = true;
}
// non-matching
void ActorLokomo::func_ov058_02146070() {}
// non-matching
void ActorLokomo::vfunc_2C(unk32 param1) {}

void ActorLokomo::vfunc_B8() {
    VecFx32 pos = this->mPos;
    data_027e09b4->func_01fff60c(&pos, 0x5EC, 0x5EC, 0x1F, 0x0, 0x0);
}

void ActorLokomo::vfunc_0BC() {
    this->mUnk_454 = false;

    this->ActorCharacter::vfunc_0BC();

    this->func_ov058_02147b98();
    this->func_ov058_021470d8();
}

void ActorLokomo::vfunc_0C0() {
    this->mUnk_454 = false;

    this->ActorCharacter::vfunc_0C0();

    this->func_ov058_02147b6c();
    this->func_ov058_021470d8();
}

void ActorLokomo::vfunc_0C4() {
    this->mUnk_454 = false;

    this->ActorCharacter::vfunc_0C4();

    this->func_ov058_02147b6c();
    this->func_ov058_021470d8();
}

void ActorLokomo::vfunc_0C8() {
    this->mUnk_454 = false;

    this->ActorCharacter::vfunc_0C8();

    this->func_ov058_02147b98();
}

void ActorLokomo::vfunc_0CC() {
    this->mUnk_454 = false;

    this->ActorCharacter::vfunc_0CC();

    this->func_ov058_02147b6c();
    this->func_ov058_021470d8();
}

void ActorLokomo::vfunc_0D0() {
    this->mUnk_454 = false;

    this->ActorCharacter::vfunc_0D0();

    this->func_ov058_02147b98();
    this->func_ov058_021470d8();

    this->mUnk_901 = false;
}

void ActorLokomo::vfunc_0D4() {
    this->mUnk_454 = false;

    this->ActorCharacter::vfunc_0D4();

    this->func_ov058_02147b98();
    this->func_ov058_021470d8();

    this->mUnk_901 = false;
}

void ActorLokomo::vfunc_0D8() {
    this->mUnk_454 = false;

    this->ActorCharacter::vfunc_0D8();

    this->func_ov058_02147b98();
    this->func_ov058_021470d8();

    this->mUnk_901 = false;
}

void ActorLokomo::vfunc_0DC() {
    this->ActorCharacter::vfunc_0DC();
    data_027e0cec->func_ov000_020a0110(&this->mUnk_888);
}

void ActorLokomo::vfunc_114() {
    this->mUnk_454 = true;
    unk32 val      = 0x1;
    this->func_ov058_02147b98();
    this->mUnk_8EC = 0x14;

    unk32 ret = this->func_ov058_021456d8();
    if (!(ret != 0x0 && ret != 0x1)) {
        val = 0x0;
    }

    this->Actor_Derived1::func_ov000_020a9200();

    this->func_ov058_02146984(0x2, val);
    this->func_ov058_02147148();

    this->mUnk_8F4 = 0x3;
    this->mUnk_8F8 = 0x3;
    this->mUnk_900 = false;
}

// non-matching
void ActorLokomo::vfunc_118() {}
// non-matching
void ActorLokomo::vfunc_11C() {}
// non-matching
void ActorLokomo::vfunc_120() {}
// non-matching
void ActorLokomo::vfunc_0E0() {
    this->ActorCharacter::vfunc_0E0();

    if (!this->mUnk_901) {
        return;
    }

    this->vfunc_124();
}

void ActorLokomo::vfunc_0F4() {
    this->ActorCharacter::vfunc_0F4();

    if (!this->mUnk_901) {
        return;
    }

    this->vfunc_124();
}

void ActorLokomo::vfunc_100() {
    this->ActorCharacter::vfunc_100();
}

// non-matching
void ActorLokomo::vfunc_124() {}
// non-matching
void ActorLokomo::func_ov058_02146848() {}
// non-matching
void ActorLokomo::func_ov058_021468d8() {}
// non-matching
void ActorLokomo::vfunc_128() {}
// non-matching
void ActorLokomo::vfunc_12C() {}
// non-matching
void ActorLokomo::vfunc_130() {}

void ActorLokomo::func_ov058_02146984(unk32 param1, unk32 param2) {
#pragma unused(param2)
    switch (param1) {
        case 0x1:
            this->func_ov058_02146d74(0x4);
            this->mUnk_902 = true;
            break;

        case 0x2:
            this->func_ov058_02146d74(0x10);
            this->mUnk_902 = false;
            break;

        case 0x3:
            this->func_ov058_02146d74(0x4);
            this->mUnk_902 = true;
            break;

        case 0x0:
        default:
            break;
    }
}
// non-matching
void ActorLokomo::vfunc_98(u32 param1) {}

void ActorLokomo::vfunc_134(unk32 param1) {
    this->mUnk_094.mUnk_0C->mUnk_0C = this->func_ov058_02143438(0x0);
    this->mUnk_5B0.mUnk_0C          = this->func_ov058_02143438(0x0);
    this->mUnk_69C.mUnk_0C          = this->func_ov058_02143438(0x0);
    this->mUnk_788.mUnk_0C          = this->func_ov058_02143438(0x0);

    this->mUnk_5B0.vfunc_1C(data_ov058_02154cdc[param1], 0x1000, 0x1000, 0x0);
    this->mUnk_69C.vfunc_1C(data_ov058_02154cdc[param1], 0x1000, 0x1000, 0x0);
    this->mUnk_788.vfunc_1C(data_ov058_02154cdc[param1], 0x1000, 0x1000, 0x0);

    this->func_ov058_02146c6c();
}

void ActorLokomo::func_ov058_02146c6c() {
    this->func_ov058_021446b8();
    this->func_ov058_02144ba0();
    this->func_ov058_02145120();
    this->mUnk_5B0.mUnk_08->func_ov000_02057cc8();
    this->mUnk_5B0.vfunc_3C();
    this->mUnk_69C.vfunc_3C();
    this->mUnk_788.vfunc_3C();
}

unk32 ActorLokomo::func_ov058_02146ccc() {
    unk32 val = this->func_ov058_021456d8();

    if (val == 0x0 || val == 0x1 || val == 0x3) {
        return 0x5;
    }

    return 0x4;
}

unk32 ActorLokomo::func_ov058_02146cec(unk32 param1) {
    switch (this->func_ov058_021456d8()) {
        case 0x0:
        case 0x1:
            return 0x6;

        case 0x3:
            if (param1 != 0x0) {
                return 0x9;
            }
            return 0x8;

        default:
            return 0x4;
    }
}

unk32 ActorLokomo::func_ov058_02146d30(unk32 param1) {
    switch (this->func_ov058_021456d8()) {
        case 0x0:
        case 0x1:
            return 0x6;

        case 0x3:
            if (param1 != 0x0) {
                return 0xB;
            }
            return 0xA;

        default:
            return 0x4;
    }
}

// non-matching
void ActorLokomo::func_ov058_02146d74(unk32 param1) {}

void ActorLokomo::func_ov058_021470d8() {
    if (!this->mUnk_880 || this->mUnk_884 == 0x0) {
        return;
    }

    this->mUnk_458.func_ov000_02099ddc(data_ov058_0215491c[0], 0x1000, 0x0);
    this->mUnk_884 = 0x0;
}

void ActorLokomo::func_ov058_02147148() {
    if (!this->mUnk_880 || this->mUnk_884 == 0x1) {
        return;
    }

    this->mUnk_458.func_ov000_02099ddc(data_ov058_0215491c[1], 0x1000, 0x0);
    this->mUnk_884 = 0x1;
}

void ActorLokomo::vfunc_A4() {
    this->Actor_Derived1::vfunc_A4();

    if (!this->mUnk_903) {
        return;
    }

    if (!(this->mUnk_0B0 & 0x10)) {
        return;
    }

    func_01ff930c(&this->mUnk_0DA, 0x0, 0x16C);
}
// non-matching
void ActorLokomo::func_ov058_021471f4() {}

extern unk32 data_ov063_021641d0[];

void ActorLokomo_874::vfunc2_00() {
    data_ov063_021641d0[((ActorLokomo *) this->mUnk_04)->func_ov058_021456d8()] = (unk32) this->mUnk_04;
}

// non-matching
void ActorLokomo::func_ov058_02147760(Actor *param0, G3d_RenderState_ *param1) {
    ActorLokomo *thiz = (ActorLokomo *) param0;

    G3d_RenderObject *renderObj = param1->renderObj;
    s32 val                     = param1->flag & 0x10 ? param1->currentBoneMtxId : -1;
    if (val == thiz->mUnk_908) {
        if (renderObj->mUnk_25 == 0x2) {
            param1->callbackSegment[6] = 0x3;
            renderObj->mUnk_25         = 0x3;
            return;
        }

        if (renderObj->mUnk_25 != 0x3) {
            return;
        }

        G3d_GetCurrentMtx(&thiz->mUnk_914, NULL);

        param1->callbackSegment[6] = 0x2;
        renderObj->mUnk_25         = 0x2;
        return;
    }

    if (val == thiz->mUnk_90C) {
        if (renderObj->mUnk_25 == 0x2) {
            param1->callbackSegment[6] = 0x3;
            renderObj->mUnk_25         = 0x3;
            return;
        }

        if (renderObj->mUnk_25 != 0x3) {
            return;
        }

        G3d_GetCurrentMtx(&thiz->mUnk_944, NULL);

        param1->callbackSegment[6] = 0x2;
        renderObj->mUnk_25         = 0x2;
        return;
    }

    if (val != thiz->mUnk_910) {
        return;
    }

    if (renderObj->mUnk_25 == 0x2) {
        param1->callbackSegment[6] = 0x3;
        renderObj->mUnk_25         = 0x3;
        return;
    }

    if (renderObj->mUnk_25 != 0x3) {
        return;
    }

    G3d_GetCurrentMtx(&thiz->mUnk_974, NULL);

    param1->callbackSegment[6] = 0x2;
    renderObj->mUnk_25         = 0x2;
}
// non-matching
void ActorLokomo::func_ov058_02147860(Actor *param0, G3d_RenderState_ *param1) {}

bool ActorLokomo::vfunc_9C() {
    if (this->GetActorId() == ActorId_SYWA) {
        PassengerManager *instance = gpPassengerManager;
        instance->TryBoardTrain(this->GetActorId(), SceneIndex_f_water2, 0xFF);
    }

    return true;
}

unk32 ActorLokomo::vfunc_A0() {
    if (this->func_ov058_02147aec()) {
        gpPassengerManager->TryResetAtDestination();
    }

    return 0x1;
}

bool ActorLokomo::vfunc_5C(unk32 param1, unk32 param2) {
    this->func_ov058_02147b6c();
    this->func_ov058_021470d8();

    bool retValue = this->Actor_Derived1::vfunc_5C(param1, param2);
    if (retValue) {
        if (this->mUnk_5C.mParams[2] == 0x1 ||
            (this->mUnk_5C.mParams[2] == 0x0 && this->Actor_Derived1::func_ov000_020a8dd0())) {
            this->func_ov058_021459b8();
        }
    }

    return retValue;
}

bool ActorLokomo::func_ov058_02147aec() {
    if (this->GetActorId() != ActorId_SYWA) {
        return false;
    }

    PassengerManager *instance = gpPassengerManager;
    if (instance->CanCompleteTrip()) {
        instance = instance->GetInstance();

        if (instance->mPassenger.mActorId == this->GetActorId() &&
            data_027e09a4->mUnk_00.sceneIndex == instance->mPassenger.mSceneIndex) {
            return true;
        }
    }

    return false;
}

void ActorLokomo::func_ov058_02147b6c() {
    if (this->mUnk_904) {
        return;
    }

    this->mUnk_4C4.vfunc_24(0x1000);
}

void ActorLokomo::func_ov058_02147b98() {
    if (this->mUnk_904) {
        return;
    }

    this->mUnk_4C4.vfunc_24(0x0);
}

// non-matching (something on the stack (params))
void ActorLokomo::func_ov058_02147bc4(VecFx32 *vec, UnkAngleStruct param1) {
    if (this->mUnk_904) {
        this->mPos   = *vec;
        this->mAngle = param1;
    }
}

void ActorLokomo::func_ov058_02147bf4() {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    this->func_ov058_02147b98();
    this->vfunc_98(0x12);
}

void ActorLokomo::func_ov058_02147c30() {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    this->func_ov058_02147b98();
    this->vfunc_98(0x11);
}

void ActorLokomo::func_ov058_02147c6c() {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    this->func_ov058_02147b98();
    this->vfunc_98(0x2);
}

void ActorLokomo::func_ov058_02147ca8() {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    this->func_ov058_02147b98();
    this->vfunc_98(0x0);
}

void ActorLokomo::func_ov058_02147ce4(unk32 param1) {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    if (param1 != 0x0) {
        this->func_ov058_02147b6c();
        return;
    }

    this->func_ov058_02147b98();
}

void ActorLokomo::func_ov058_02147d20() {
    if (this->GetActorId() != ActorId_SYWA) {
        return;
    }

    this->func_ov058_02147b98();
    this->vfunc_98(0x13);
}

void ActorLokomo_874::vfunc2_04() {}

ActorKenzo_Base_160::~ActorKenzo_Base_160() {}
inline ActorKenzo_Base::~ActorKenzo_Base() {}
ActorProfileUnkSYOS::~ActorProfileUnkSYOS() {}
ActorProfileUnkSYSS::~ActorProfileUnkSYSS() {}
ActorProfileUnkSYWS::~ActorProfileUnkSYWS() {}
ActorProfileUnkSYIS::~ActorProfileUnkSYIS() {}
ActorProfileUnkSYDS::~ActorProfileUnkSYDS() {}
ActorProfileUnkSYOL::~ActorProfileUnkSYOL() {}
ActorProfileUnkSYSL::~ActorProfileUnkSYSL() {}
ActorProfileUnkSYWL::~ActorProfileUnkSYWL() {}
ActorProfileUnkSYIL::~ActorProfileUnkSYIL() {}
ActorProfileUnkSYDL::~ActorProfileUnkSYDL() {}
ActorProfileUnkSYFO::~ActorProfileUnkSYFO() {}
ActorProfileUnkSYSN::~ActorProfileUnkSYSN() {}
ActorProfileUnkSYWA::~ActorProfileUnkSYWA() {}
ActorProfileUnkSYFI::~ActorProfileUnkSYFI() {}
ActorProfileUnkSYDE::~ActorProfileUnkSYDE() {}
