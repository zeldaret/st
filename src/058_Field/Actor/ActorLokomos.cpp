#include "Actor/ActorLokomos.hpp"

#include "CommonFuncs.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_ov059_021641c8.hpp"
#include "Unknown/UnkStruct_ov063_021641c8.hpp"

// --- Actor SYOS ---
DECL_PROFILE(ActorProfileUnkSYOS);

Actor *ActorProfileUnkSYOS::Create() {
    return NULL;
}

ActorProfileUnkSYOS::ActorProfileUnkSYOS() :
    ActorProfile_Derived1(ActorId_SYOS, ActorId_SYOS) {}

// --- Actor SYSS ---
DECL_PROFILE(ActorProfileUnkSYSS);

Actor *ActorProfileUnkSYSS::Create() {
    return NULL;
}

ActorProfileUnkSYSS::ActorProfileUnkSYSS() :
    ActorProfile_Derived1(ActorId_SYSS, ActorId_SYSS) {}

// --- Actor SYWS ---
DECL_PROFILE(ActorProfileUnkSYWS);

Actor *ActorProfileUnkSYWS::Create() {
    return NULL;
}

ActorProfileUnkSYWS::ActorProfileUnkSYWS() :
    ActorProfile_Derived1(ActorId_SYWS, ActorId_SYWS) {}

// --- Actor SYIS ---
DECL_PROFILE(ActorProfileUnkSYIS);

Actor *ActorProfileUnkSYIS::Create() {
    return NULL;
}

ActorProfileUnkSYIS::ActorProfileUnkSYIS() :
    ActorProfile_Derived1(ActorId_SYIS, ActorId_SYIS) {}

// --- Actor SYDS ---
DECL_PROFILE(ActorProfileUnkSYDS);

Actor *ActorProfileUnkSYDS::Create() {
    return NULL;
}

ActorProfileUnkSYDS::ActorProfileUnkSYDS() :
    ActorProfile_Derived1(ActorId_SYDS, ActorId_SYDS) {}

// --- Actor SYOL ---
DECL_PROFILE(ActorProfileUnkSYOL);

Actor *ActorProfileUnkSYOL::Create() {
    return NULL;
}

ActorProfileUnkSYOL::ActorProfileUnkSYOL() :
    ActorProfile_Derived1(ActorId_SYOL, ActorId_SYOL) {}

// --- Actor SYSL ---
DECL_PROFILE(ActorProfileUnkSYSL);

Actor *ActorProfileUnkSYSL::Create() {
    return NULL;
}

ActorProfileUnkSYSL::ActorProfileUnkSYSL() :
    ActorProfile_Derived1(ActorId_SYSL, ActorId_SYSL) {}

// --- Actor SYWL ---
DECL_PROFILE(ActorProfileUnkSYWL);

Actor *ActorProfileUnkSYWL::Create() {
    return NULL;
}

ActorProfileUnkSYWL::ActorProfileUnkSYWL() :
    ActorProfile_Derived1(ActorId_SYWL, ActorId_SYWL) {}

// --- Actor SYIL ---
DECL_PROFILE(ActorProfileUnkSYIL);

Actor *ActorProfileUnkSYIL::Create() {
    return NULL;
}

ActorProfileUnkSYIL::ActorProfileUnkSYIL() :
    ActorProfile_Derived1(ActorId_SYIL, ActorId_SYIL) {}

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

inline ActorId GetGageModelId() {
    return data_027e09a4->IsLastSession() ? ActorId_SYOL : ActorId_SYOS;
}

ActorProfileUnkSYFO::ActorProfileUnkSYFO() :
    ActorProfile_Derived1(ActorId_SYFO) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xEB2;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;
    this->mUnk_24             = GetGageModelId();
}

// --- Actor SYSN ---
DECL_PROFILE(ActorProfileUnkSYSN);

Actor *ActorProfileUnkSYSN::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

inline ActorId GetSteemModelId() {
    return data_027e09a4->IsLastSession() ? ActorId_SYSL : ActorId_SYSS;
}

ActorProfileUnkSYSN::ActorProfileUnkSYSN() :
    ActorProfile_Derived1(ActorId_SYSN) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xCCD;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;
    this->mUnk_24             = GetSteemModelId();
}

// --- Actor SYWA ---
DECL_PROFILE(ActorProfileUnkSYWA);

Actor *ActorProfileUnkSYWA::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

inline ActorId GetCarbenModelId() {
    return data_027e09a4->IsLastSession() ? ActorId_SYWL : ActorId_SYWS;
}

ActorProfileUnkSYWA::ActorProfileUnkSYWA() :
    ActorProfile_Derived1(ActorId_SYWA) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xD9A;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;
    this->mUnk_24             = GetCarbenModelId();
}

// --- Actor SYFI ---
DECL_PROFILE(ActorProfileUnkSYFI);

Actor *ActorProfileUnkSYFI::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

inline ActorId GetEmbroseModelId() {
    return data_027e09a4->IsLastSession() ? ActorId_SYIL : ActorId_SYIS;
}

ActorProfileUnkSYFI::ActorProfileUnkSYFI() :
    ActorProfile_Derived1(ActorId_SYFI) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xE8F;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;
    this->mUnk_24             = GetEmbroseModelId();
}

// --- Actor SYDE ---
DECL_PROFILE(ActorProfileUnkSYDE);

Actor *ActorProfileUnkSYDE::Create() {
    return new(HeapIndex_2) ActorLokomo();
}

inline ActorId GetRaelModelId() {
    return data_027e09a4->IsLastSession() ? ActorId_SYDL : ActorId_SYDS;
}

ActorProfileUnkSYDE::ActorProfileUnkSYDE() :
    ActorProfile_Derived1(ActorId_SYDE) {
    this->mUnk_04.Init(0x0, FX_F32_TO_FX32(0.58f), 0x0, FX_F32_TO_FX32(0.48f));
    this->mUnk_1C = 0xE8F;
    this->mUnk_18 = 0x0;
    this->mUnk_1A = 0x1B33;

    this->vfunc_04()->mUnk_15 = 0x1;
    this->mUnk_24             = GetRaelModelId();
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

UnkActorFileSystem2 *ActorLokomo::func_ov058_02143438(unk32 param1) {
    ActorLokomo_ lokomoId;
    if (param1 != 0) {
        ActorId id = data_ov000_020b539c_eur.mUnk_30->mActorId;
        if (id == ActorId_SYFO) {
            lokomoId = ActorLokomo_Gage;
        } else if (id == ActorId_SYSN) {
            lokomoId = ActorLokomo_Steem;
        } else if (id == ActorId_SYWA) {
            lokomoId = ActorLokomo_Carben;
        } else if (id == ActorId_SYFI) {
            lokomoId = ActorLokomo_Embrose;
        } else {
            lokomoId = ActorLokomo_Rael;
        }
    } else if (this->GetActorId() == ActorId_SYFO) {
        lokomoId = ActorLokomo_Gage;
    } else if (this->GetActorId() == ActorId_SYSN) {
        lokomoId = ActorLokomo_Steem;
    } else if (this->GetActorId() == ActorId_SYWA) {
        lokomoId = ActorLokomo_Carben;
    } else if (this->GetActorId() == ActorId_SYFI) {
        lokomoId = ActorLokomo_Embrose;
    } else {
        lokomoId = ActorLokomo_Rael;
    }

    ActorProfile *profile;
    switch (lokomoId) {
        case ActorLokomo_Gage:
            profile = data_ov000_020b539c_eur.GetProfileFromId(GetGageModelId());
            break;

        case ActorLokomo_Steem:
            profile = data_ov000_020b539c_eur.GetProfileFromId(GetSteemModelId());
            break;

        case ActorLokomo_Carben:
            profile = data_ov000_020b539c_eur.GetProfileFromId(GetCarbenModelId());
            break;

        case ActorLokomo_Embrose:
            profile = data_ov000_020b539c_eur.GetProfileFromId(GetEmbroseModelId());
            break;

        case ActorLokomo_Rael:
            profile = data_ov000_020b539c_eur.GetProfileFromId(GetRaelModelId());
            break;

        default:
            break;
    }
    return profile->vfunc_04();
}

extern char data_ov058_02153100[];

inline ActorProfile_Derived1 *GetLokomoProfile(ActorId currentActorId) {
    ActorProfile_Derived1 *profile;
    // switch according to M2C but could not match
    if (currentActorId == ActorId_SYFO) {
        profile = GET_PROFILE(ActorProfileUnkSYFO);
    } else if (currentActorId == ActorId_SYSN) {
        profile = GET_PROFILE(ActorProfileUnkSYSN);
    } else if (currentActorId == ActorId_SYWA) {
        profile = GET_PROFILE(ActorProfileUnkSYWA);
    } else if (currentActorId == ActorId_SYFI) {
        profile = GET_PROFILE(ActorProfileUnkSYFI);
    } else if (currentActorId == ActorId_SYDE) {
        profile = GET_PROFILE(ActorProfileUnkSYDE);
    } else {
        profile = NULL;
    }

    return profile;
}

inline G3d_Model *GetLokomoModel(ActorId currentActorId, const char *names) {
    u32 index;
    // switch according to M2C but could not match
    if (currentActorId == ActorId_SYFO) {
        index = ActorLokomo_Gage;
    } else if (currentActorId == ActorId_SYSN) {
        index = ActorLokomo_Steem;
    } else if (currentActorId == ActorId_SYWA) {
        index = ActorLokomo_Carben;
    } else if (currentActorId == ActorId_SYFI) {
        index = ActorLokomo_Embrose;
    } else {
        index = ActorLokomo_Rael;
    }
    return G3d_GetUnkPtr(GetLokomoProfile(currentActorId)->vfunc_04()->mUnk_50, &names[index * 0x54]);
}

ActorLokomo::ActorLokomo() :
    ActorKenzo_Base(&this->mUnk_24C, (UnkActorFileSystem2 *) GetLokomoProfile(data_ov000_020b539c_eur.mUnk_30->mActorId)
                                         ->vfunc_04()
                                         ->func_ov000_02058a24()),
    mUnk_24C(GetLokomoModel(data_ov000_020b539c_eur.mUnk_30->mActorId, data_ov058_02153100)),
    mUnk_2BC(GetLokomoModel(data_ov000_020b539c_eur.mUnk_30->mActorId, data_ov058_02153100 + 0x10)),
    mUnk_328(GetLokomoModel(data_ov000_020b539c_eur.mUnk_30->mActorId, data_ov058_02153100 + 0x20)),
    mUnk_38C(GetLokomoModel(data_ov000_020b539c_eur.mUnk_30->mActorId, data_ov058_02153100 + 0x30)),
    mUnk_3F0(GetLokomoModel(data_ov000_020b539c_eur.mUnk_30->mActorId, data_ov058_02153100 + 0x40)),
    mUnk_458(&mUnk_474, &mUnk_2BC, GetLokomoProfile(data_ov000_020b539c_eur.mUnk_30->mActorId)->vfunc_04()),
    mUnk_474(&mUnk_4A0, NULL),
    mUnk_4C4(&mUnk_4F0, &mUnk_550, &mUnk_2BC, GetLokomoProfile(data_ov000_020b539c_eur.mUnk_30->mActorId)->vfunc_04()),
    mUnk_4F0(&mUnk_51C, NULL),
    mUnk_550(&mUnk_57C, NULL),
    mUnk_5B0(&mUnk_5DC, &mUnk_63C, &mUnk_24C, GetLokomoProfile(data_ov000_020b539c_eur.mUnk_30->mActorId)->vfunc_04(), 0),
    mUnk_5DC(&mUnk_608, NULL),
    mUnk_63C(&mUnk_668, NULL),
    mUnk_69C(&mUnk_6C8, &mUnk_708, &mUnk_24C, GetLokomoProfile(data_ov000_020b539c_eur.mUnk_30->mActorId)->vfunc_04(), 0),
    mUnk_6C8(&mUnk_6F4, NULL),
    mUnk_708(&mUnk_734, NULL),
    mUnk_788(&mUnk_7B4, &mUnk_7F4, &mUnk_24C, GetLokomoProfile(data_ov000_020b539c_eur.mUnk_30->mActorId)->vfunc_04(), 0),
    mUnk_7B4(&mUnk_7E0, NULL),
    mUnk_7F4(&mUnk_820, NULL),
    mUnk_888(NULL),
    mUnk_8D4(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_8F0(false),
    mUnk_8F1(true),
    mUnk_8F4(0x3),
    mUnk_8F8(0x3),
    mUnk_8FE(0x0),
    mUnk_901(false),
    mUnk_902(false),
    mUnk_903(false),
    mUnk_908(0x0),
    mUnk_90C(0x0),
    mUnk_910(0x0),
    mUnk_9AC(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_9B8(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)) {

    bool var = true;
    if (data_027e09a4->mUnk_00.sceneIndex != SceneIndex_b_last22) {
        var = false;
    }
    this->mUnk_904 = var;

    if (!(var & 0xFF)) {
        this->mUnk_4C4.vfunc_08(GetLokomoModel(data_ov000_020b539c_eur.mUnk_30->mActorId, data_ov058_02153100 + 0x10));
        this->mUnk_4C4.mUnk_0C = this->func_ov058_02143438(0x1);
        this->mUnk_4C4.vfunc_1C(data_ov058_021546e8, 0x1000, 0x19A, 0x0);
    }

    this->func_ov058_021470d8();

    this->mUnk_8E0.Set(0x0, 0x402, -0x104);

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
        case ActorLokomo_Gage:
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

        case ActorLokomo_Steem:
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
        case ActorLokomo_Gage:
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

        case ActorLokomo_Steem:
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
        case ActorLokomo_Gage:
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

        case ActorLokomo_Steem:
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
        case ActorLokomo_Gage:
            return 0x1;

        case ActorLokomo_Steem:
            return 0x2;

        default:
            break;
    }

    return 0x0;
}

ActorLokomo_ ActorLokomo::func_ov058_021456d8() {
    if (this->GetActorId() == ActorId_SYFO) {
        return ActorLokomo_Gage;
    }

    if (this->GetActorId() == ActorId_SYSN) {
        return ActorLokomo_Steem;
    }

    if (this->GetActorId() == ActorId_SYWA) {
        return ActorLokomo_Carben;
    }

    if (this->GetActorId() == ActorId_SYFI) {
        return ActorLokomo_Embrose;
    }

    return ActorLokomo_Rael;
}

extern u8 data_ov058_02153010[];
extern unk32 data_ov058_02152fac[][5];

// non-matching
bool ActorLokomo::Init(unk32 param1) {
    this->mUnk_2BC.func_ov000_02057c38(0x6, 0x2);
    this->mUnk_2BC.func_ov000_0209a7b8(this, &ActorLokomo::func_ov058_02147860);
    this->vfunc_98(0x0);
    this->func_ov058_021456a4();

    for (int i = 0; i < 16; ++i) {
        if (i != 12 || (this->func_ov058_021456d8() == ActorLokomo_Steem && i - 13 > 1) ||
            this->func_ov058_021456d8() == ActorLokomo_Gage) {
            this->mUnk_24C.func_ov000_02057f18(&data_ov058_02153010[i * 0x10]);
        }
    }

    this->func_ov058_021446b8();
    this->func_ov058_02144ba0();
    this->func_ov058_02145120();

    bool retValue  = this->Actor_Derived1::Init(param1);
    this->mUnk_0E4 = &ActorLokomo::func_ov058_02147760;

    if (this->mUnk_904) {
        unk32 *array           = data_ov058_02152fac[this->func_ov058_021456d8()];
        ActorUnkKOKO_unk *koko = this->mUnk_894;
        for (int idx = 0; idx < 5; ++idx) {
            koko[idx].mUnk_04 = array[idx];
            koko[idx].mUnk_08 = 0x2;
        }
    }

    return retValue;
}

void ActorLokomo::vfunc_54(unk32 param1) {
    this->ActorCharacter::vfunc_54(param1);
    bool val = false;
    if (this->func_ov058_02147aec()) {
        val = true;
    }

    if (val && this->mUnk_5C.mParams[2] == 0x3) {
        ActorUnk_vfunc_B0 stack = ActorUnk_vfunc_B0();
        stack.mpActor           = this;

        stack.mUnk_0C = this->mUnk_5C.mUnk_20;
        stack.mUnk_14 = 0x0;
        stack.mUnk_18 = -0x1;
        stack.mUnk_1C = -0x1;
        stack.mUnk_20 = false;
        stack.mUnk_21 = false;
        stack.mUnk_32 = 0x1;

        this->GetOffsetPos(&stack.mUnk_34);

        data_027e09b8->func_ov000_02073470(&stack, 0x0);
    }

    if (this->mUnk_904) {
        UNSET_FLAG(this->mFlags, ActorFlag_Visible);
    }

    this->mUnk_88C = 0x8C7;
    this->mUnk_890 = 0x2;
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

void ActorLokomo::func_ov058_02145bd4() {
    if (!GET_FLAG(this->mFlags, ActorFlag_Visible) || this->mUnk_8D4.vec.y == FX_F32_TO_FX32(262144.0f)) {
        return;
    }

    data_027e0cec->func_ov000_020a0140(&this->mUnk_888, &this->mUnk_8D4.vec);

    VecFx32Cpp vec(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f), -0x4CD);

    func_01ff9638(&vec.vec, this->mAngle.angle_s);
    VecFx32_Normalize(&vec.vec, &vec.vec);

    this->mUnk_888.func_ov000_020a036c(&vec.vec);
}

// non-matching
unk32 ActorLokomo::vfunc_7C(unk32 param1) {
    switch ((u32) param1) {
        case 0x0:
        case 0x1:
        case 0x2: {
            if (this->mUnk_8F0 == 0) {
                this->mUnk_8F0 = true;
                this->mUnk_8F1 = false;

                stack_ov000_02073578 stack = stack_ov000_02073578();
                stack.unk_00               = 1;
                stack.unk_08               = 9;
                stack.unk_04               = (unk32) & this->mUnk_874;
                data_027e09b8->func_ov000_02073578(&stack, 1);
                this->mUnk_87C = param1;
                return 0;
            }

            bool var_r0 = false;
            if (this->mUnk_8F1) {
                this->mUnk_8F0 = false;
                var_r0         = true;
            }
            return var_r0;
        }

        case 0xA:
            data_ov059_021641c8->func_ov063_0215ca28();
            break;

        default:
            if (param1 >= 1000000 && param1 < 2000000) {
                data_ov059_021641c8->func_ov063_0215d5cc((u16) (param1 % 1000000) * 0x10624dd3, param1 % 1000);
            }
            break;
    }
    return 1;
}

s16 ActorLokomo::vfunc_80(unk32 param1, unk32 param2, unk32 param3) {
#pragma unused(param3)
    switch ((u16) ((u8) (param1 + 1) | param2 << 8)) {
        case 0x201: {
            u32 retValue;
            if (data_ov063_021641c8.mUnk_050 != 0x1) {
                retValue = 0x1;
            } else {
                retValue = 0x0;
            }
            return (unk16) retValue;
        }

        case 0x202: {
            u32 retValue;
            if (data_ov063_021641c8.mUnk_050 != 0x0) {
                retValue = 0x1;
            } else {
                retValue = 0x0;
            }
            return (unk16) retValue;
        }

        case 0x502: {
            switch (data_ov063_021641c8.mUnk_050) {
                default:
                    return 0x0;
                case 0x3:
                    return 0x1;
                case 0x6:
                    return 0x2;
                case 0x4:
                case 0x5:
                    return 0x3;
                case 0x7:
                    return 0x4;
            }
            break;
        }

        default:
            return 0;
    }
}

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

void ActorLokomo::func_ov058_02146070() {
    if (!this->mUnk_903) {
        return;
    }

    u8 param1 = (u8) this->mUnk_5C.mParams[1];
    if (param1 == 0x0) {
        return;
    }

    UnkStruct_027e0960_TableEntry *tableEntry = data_027e0960->func_ov000_0205a390(param1);

    VecFx32Cpp sp04;
    tableEntry->mTable.GetPtr(0)->vfunc_0C(&sp04.vec);
    sp04.CopyIn(&this->mPos);
    this->mAngle = 0x0;

    tableEntry->mTable.GetPtr(1)->vfunc_0C(&sp04.vec);
    data_027e0ce0->func_ov000_0208bbd4(0x0, &sp04.vec, 0x0);
    data_027e0cec->func_ov000_020a0110(&this->mUnk_888);

    this->func_ov058_02145bd4();
}

void ActorLokomo::vfunc_2C(unk32 param1) {
    if (!this->Actor::func_01fff5d0(param1, 0x0)) {
        return;
    }

    if (!GET_FLAG(this->mFlags, ActorFlag_Visible)) {
        return;
    }

    if (this->mUnk_903 || !this->mUnk_901) {
        this->vfunc_B8();
    }

    VecFx32 sp0C = this->mPos;
    VecFx32 sp00 = this->mUnk_8E0.vec;

    func_01ff9638(&sp00, this->mAngle.angle_s);
    VecFx32_Add(&sp0C, &sp00, &sp0C);

    if (this->mUnk_904) {
        bool cmpr           = false;
        ActorLokomo_ lokomo = this->func_ov058_021456d8();
        if (!(lokomo != ActorLokomo_Gage && lokomo != ActorLokomo_Steem)) {
            cmpr = true;
        }

        bool operand = true;
        if (param1 != 0x0) {
            operand = false;
        }

        if (operand ^ cmpr) {
            return;
        }
    }

    this->mUnk_24C.func_01ffc6d4(this->mAngle, &sp0C);

    if (this->mUnk_454) {
        if (this->mUnk_388) {
            this->mUnk_328.func_ov000_02058038(&this->mUnk_914);
        }

        if (this->mUnk_3EC) {
            this->mUnk_38C.func_ov000_02058038(&this->mUnk_944);
        }

        if (this->mUnk_450) {
            this->mUnk_3F0.func_ov000_02058038(&this->mUnk_974);
        }
    }

    this->mUnk_2BC.func_01ffc6d4(this->mAngle, &this->mPos);
}

void ActorLokomo::vfunc_B8() {
    VecFx32 pos = this->mPos;
#if IS_JP
    if (this->func_ov058_021456d8() == ActorLokomo_Carben && this->mUnk_5B0.vfunc_30() == 0x13) {
        data_027e09b4->func_ov017_020c08c4(&pos, 0x5EC, 0x5EC, 0x1F, 0x0, 0x1);
        return;
    }
#endif
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

    unk32 lokomo = this->func_ov058_021456d8();
    if (!(lokomo != ActorLokomo_Gage && lokomo != ActorLokomo_Steem)) {
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

extern unk32 data_ov063_021642fc[];

// non-matching
void ActorLokomo::vfunc_124() {
    unk32 val;
    UnkStruct_ov063_021641c8 *data = &data_ov063_021641c8;
    if (this->mUnk_903) {
        val = this->vfunc_08();
    } else {
        val = data->mUnk_148;
    }

    this->func_ov058_02146984(val, 0x1);

    if (this->mUnk_903) {
        switch (this->mUnk_8F4) {
            case 0x1: {
                UnkStruct_027e0ce0 *data = data_027e0ce0;
                UnkAngleStruct sp04;
                unk16 sp00;
                if (!this->mUnk_900) {
                    this->mUnk_900 = true;
                    func_01fff17c(&sp00, data, NULL);
                    this->mUnk_8FE = sp00;
                }

                sp04         = 0;
                unk32 var    = func_01ff930c(&this->mUnk_8FE.angle_s, 0, this->mUnk_8FC);
                VecFx32 sp20 = *data->func_01fff148(0x0);

                data->func_ov000_0208bbd4(0x0, &sp20, this->mUnk_8FE);

                this->func_ov058_02146848(&sp20, sp04);
                if (var != 0x0) {
                    this->mUnk_8F4 = 0x3;
                }
                break;
            }

            case 0x3: {
                UnkStruct_027e0ce0 *data = data_027e0ce0;
                VecFx32 sp14             = *data->func_01fff148(0x0);
                data->func_ov000_0208bbd4(0x0, &sp14, this->mUnk_8FE);
                this->func_ov058_02146848(&sp14, 0x0);
                break;
            }

            case 0x0:
            default:
                break;
        }

        switch (this->mUnk_8F8) {
            case 0x3:
                this->mUnk_0B0 |= 0x10;
                break;

            case 0x1: {
                unk32 var = func_01ff930c(&this->mAngle.angle_s, 0, this->mUnk_8FC);
                this->mUnk_0B0 |= 0x10;
                if (var == 0x0) {
                    break;
                }

                this->mUnk_8F8 = 0x3;
                this->func_ov058_02147b98();
                break;
            }

            case 0x0: {
                VecFx32 sp08;
                unk32 var_r5 = 1;
                if (this->Actor_Derived1::func_ov000_020a8ff4(&sp08) != 0) {
                    var_r5 = func_01ff930c(&this->mAngle.angle_s, func_02016958(&this->mPos, &sp08), this->mUnk_8FC);
                }

                unk32 var_r6        = 0;
                this->mUnk_900      = false;
                ActorLokomo_ lokomo = this->func_ov058_021456d8();
                if (lokomo == ActorLokomo_Carben || lokomo == ActorLokomo_Rael) {
                    var_r6 = 1;
                }

                if (var_r6 != 0) {
                    this->mUnk_0B0 |= 0x10;
                } else {
                    this->mUnk_0B0 &= 0xFFEF;
                }

                if (var_r5 == 0) {
                    break;
                }

                this->mUnk_8F8 = 0x2;
                this->func_ov058_02147b98();
                break;
            }

            default:
                break;
        }
    }

    if (this->mUnk_903) {
        if (data_ov063_021641c8.mUnk_130 == -1) {
            return;
        }

        this->func_ov058_021471f4(data_ov063_021641c8.mUnk_130);
        return;
    }

    unk32 param = data_ov063_021642fc[this->func_ov058_021456d8()];
    if (param == -1) {
        return;
    }

    this->func_ov058_021471f4(param);
}

void ActorLokomo::func_ov058_02146848(VecFx32 *param1, UnkAngleStruct param2) {
    VecFx32 sp04 = *param1;

    sp04.x += SIN(param2.angle_u) * 0xA000;
    sp04.z += COS(param2.angle_u) * 0xA000;

    data_027e0ce0->func_ov000_0208bde4(0, 0xA, &sp04, 0xB33);
}

void ActorLokomo::func_ov058_021468d8(unk32 param1, unk32 param2, unk16 param3) {
    if (!this->mUnk_903) {
        return;
    }
    this->mUnk_8FC = param3;

    if (param2 == 0x0) {
        if (param1 != 0x0) {
            if (this->mUnk_8F4 == 0x1 || this->mUnk_8F4 == 0x3) {
                this->mUnk_8F4 = 0x0;
            }
        } else if (this->mUnk_8F4 == 0x0 || this->mUnk_8F4 == 0x2) {
            this->mUnk_8F4 = 0x1;
        }
    }

    if (param1 != 0x0) {
        if (this->mUnk_8F8 != 0x1 && this->mUnk_8F8 != 0x3) {
            return;
        }

        this->mUnk_8F8 = 0x0;
        this->func_ov058_02147b6c();
        return;
    }

    if (this->mUnk_8F8 != 0x0 && this->mUnk_8F8 != 0x2) {
        return;
    }

    this->mUnk_8F8 = 0x1;
    this->func_ov058_02147b6c();
}

void ActorLokomo::vfunc_128() {}

void ActorLokomo::vfunc_12C() {}

void ActorLokomo::vfunc_130() {}

void ActorLokomo::func_ov058_02146984(unk32 param1, unk32 param2) {
    switch (param1) {
        case 0x1:
            this->func_ov058_02146d74(0x4, param2);
            this->mUnk_902 = true;
            break;

        case 0x2:
            this->func_ov058_02146d74(0x10, param2);
            this->mUnk_902 = false;
            break;

        case 0x3:
            this->func_ov058_02146d74(0x4, param2);
            this->mUnk_902 = true;
            break;

        case 0x0:
        default:
            break;
    }
}

void ActorLokomo::vfunc_98(u32 param1) {
    u32 val = param1;
    if (this->mUnk_904) {
        if (!(val != 0x0 && val != 0x1 && val != 0x2)) {
            val = 0x10;
        }
    }

    this->mUnk_094.mUnk_0C->mUnk_0C = this->func_ov058_02143438(0x0);
    this->mUnk_5B0.mUnk_0C          = this->func_ov058_02143438(0x0);
    this->mUnk_69C.mUnk_0C          = this->func_ov058_02143438(0x0);
    this->mUnk_788.mUnk_0C          = this->func_ov058_02143438(0x0);

    this->mUnk_5B0.vfunc_1C(data_ov058_02154cdc[val], 0x1000, 0x19A, 0x0);
    this->mUnk_69C.vfunc_1C(data_ov058_02154cdc[val], 0x1000, 0x19A, 0x0);
    this->mUnk_788.vfunc_1C(data_ov058_02154cdc[val], 0x1000, 0x19A, 0x0);

    this->func_ov058_02146c6c();
}

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
    unk32 lokomo = this->func_ov058_021456d8();

    if (lokomo == ActorLokomo_Gage || lokomo == ActorLokomo_Steem || lokomo == ActorLokomo_Embrose) {
        return 0x5;
    }

    return 0x4;
}

unk32 ActorLokomo::func_ov058_02146cec(unk32 param1) {
    switch (this->func_ov058_021456d8()) {
        case ActorLokomo_Gage:
        case ActorLokomo_Steem:
            return 0x6;

        case ActorLokomo_Embrose:
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
        case ActorLokomo_Gage:
        case ActorLokomo_Steem:
            return 0x6;

        case ActorLokomo_Embrose:
            if (param1 != 0x0) {
                return 0xB;
            }
            return 0xA;

        default:
            return 0x4;
    }
}

void ActorLokomo::func_ov058_02146d74(unk32 param1, unk32 param2) {
    if (this->mUnk_8EC == param1) {
        return;
    }

    unk32 var = 0x19A;
    if (param2 == 0x0) {
        var = 0x1000;
    }

    switch (param1) {
        case 0x4: {
            unk32 var4          = 0x0;
            ActorLokomo_ lokomo = this->func_ov058_021456d8();

            if (lokomo == ActorLokomo_Gage || lokomo == ActorLokomo_Steem || lokomo == ActorLokomo_Embrose) {
                var4 = 0x1000;
            }

            if (this->mUnk_903) {
                ActorUnkZLSL_AnimationTag *data = data_ov058_02154cdc;
                this->mUnk_5B0.vfunc_1C(data[this->func_ov058_02146ccc()], FX_Mul(var4, 0x1000), var, 0x0);
                this->mUnk_69C.vfunc_1C(data[this->func_ov058_02146cec(0x0)], 0x0, var, 0x0);
                this->mUnk_788.vfunc_1C(data[this->func_ov058_02146d30(0x0)], 0x0, var, 0x0);
            } else {
                ActorUnkZLSL_AnimationTag *data = data_ov058_02154cdc;
                this->mUnk_5B0.vfunc_1C(data[this->func_ov058_02146ccc()], 0x1000, var, 0x0);
                this->mUnk_69C.vfunc_1C(data[this->func_ov058_02146cec(0x0)], 0x1000, var, 0x0);
                this->mUnk_788.vfunc_1C(data[this->func_ov058_02146d30(0x0)], 0x1000, var, 0x0);
            }

            break;
        }

        case 0x10:
            this->mUnk_5B0.vfunc_1C(data_ov058_02154cdc[16], 0x1000, var, 0x0);
            this->mUnk_69C.vfunc_1C(data_ov058_02154cdc[16], 0x1000, var, 0x0);
            this->mUnk_788.vfunc_1C(data_ov058_02154cdc[16], 0x1000, var, 0x0);
            break;

        default:
            break;
    }

    this->func_ov058_02146c6c();

    this->mUnk_8EC = param1;
    switch (param1) {
        case 0x4:
            this->func_ov058_02147148();
            break;

        case 0x10:
            this->func_ov058_021470d8();
            break;

        default:
            break;
    }
}

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

extern VecFx32 data_ov058_02152f10[];

// non-matching
void ActorLokomo::func_ov058_021471f4(unk32 param1) {
    switch (param1 >> 16) {
        case 0x1:
            if (!this->mUnk_902) {
                this->func_ov058_02146984(0x1, 0x1);
            }
            break;

        case 0x2:
            if (this->mUnk_902) {
                this->func_ov058_02146984(0x2, 0x1);
            }
            break;

        case 0x3: {
            if (GET_FLAG(this->mFlags, ActorFlag_Visible)) {
                break;
            }
            SET_FLAG(this->mFlags, ActorFlag_Visible);

            UnkStruct_027e0cec *data = data_027e0cec;
            for (ActorUnkKOKO_unk *ptr = this->mUnk_894; ptr < this->mUnk_894 + ARRAY_LEN(this->mUnk_894); ++ptr) {
                data->func_ov000_020a0140(ptr, &this->mPos);
            }

            VecFx32 *vec = &data_ov058_02152f10[this->func_ov058_021456d8()];
            for (int idx = 0; idx < 3; ++idx) {
                data_027e0cec->func_ov000_0209feac(vec->values[idx], &this->mPos, 0x2, 0x0, 0x0);
            }

            data_027e09a8->func_ov000_02071c90(0x143, &this->mPos, 0x0);
            break;
        }

        default:
            break;
    }

    if (!this->mUnk_902) {
        return;
    }

    switch (this->func_ov058_021456d8()) {
        case ActorLokomo_Gage: {
            u32 value                          = ((u32) param1 << 0x10) >> 4;
            this->mUnk_69C.vfunc_28()->mUnk_08 = value;
            this->mUnk_788.vfunc_28()->mUnk_08 = value;
            break;
        }

        case ActorLokomo_Carben:
        case ActorLokomo_Rael: {
            u32 value                          = ((u32) param1 << 0x10) >> 4;
            this->mUnk_69C.vfunc_28()->mUnk_08 = value;
            this->mUnk_788.vfunc_28()->mUnk_08 = value;
            this->mUnk_5B0.vfunc_28()->mUnk_08 = value;
            break;
        }

        case ActorLokomo_Steem: {
            UnkStruct_PlayerGet_50 *pGet50_69C = this->mUnk_69C.vfunc_28();
            if (pGet50_69C->func_01ff8fa8() == 0x0 && pGet50_69C->mUnk_08 != pGet50_69C->mUnk_0C) {
                break;
            }

            if (param1 != 0x1) {
                break;
            }

            pGet50_69C->mUnk_04 = 0x3CCD;
            pGet50_69C->mUnk_08 = 0x0;
            *(u16 *) &pGet50_69C->mUnk_02 &= 0xFFF7;

            UnkStruct_PlayerGet_50 *pGet50_788 = this->mUnk_788.vfunc_28();
            pGet50_788->mUnk_04                = 0x3CCD;
            pGet50_788->mUnk_08                = 0x0;
            *(u16 *) &pGet50_788->mUnk_02 &= 0xFFF7;

            this->func_ov058_02146c6c();
            break;
        }

        case ActorLokomo_Embrose: {
            u8 arg1                            = (u8) param1;
            bool var6                          = false;
            UnkStruct_PlayerGet_50 *pGet50_69C = this->mUnk_69C.vfunc_28();
            UnkStruct_PlayerGet_50 *pGet50_788 = this->mUnk_788.vfunc_28();

            if (pGet50_69C->func_01ff8fa8() != 0x0 || pGet50_69C->mUnk_08 == pGet50_69C->mUnk_0C) {
                switch (arg1) {
                    case 0x1:
                        this->mUnk_69C.vfunc_1C(data_ov058_02154cdc[this->func_ov058_02146cec(0x0)], 0x199A, 0x1000, 0x0);
                        pGet50_69C->mUnk_08 = 0x0;
                        var6                = true;
                        break;

                    case 0x2:
                        var6 = true;
                        this->mUnk_69C.vfunc_1C(data_ov058_02154cdc[this->func_ov058_02146cec(0x1)], 0x199A, 0x1000, 0x0);
                        pGet50_69C->mUnk_08 = 0x0;
                        break;

                    default:
                        pGet50_69C->mUnk_04 = 0x0;
                        pGet50_69C->mUnk_08 = 0x0;
                        break;
                }
                *(u16 *) &pGet50_69C->mUnk_02 &= 0xFFF7;
            }

            if (pGet50_788->func_01ff8fa8() != 0x0 || pGet50_788->mUnk_08 == pGet50_788->mUnk_0C) {
                switch (arg1) {
                    case 0x1:
                        this->mUnk_788.vfunc_1C(data_ov058_02154cdc[this->func_ov058_02146d30(0x0)], 0x199A, 0x1000, 0x0);
                        pGet50_788->mUnk_08 = 0x0;
                        var6                = true;
                        break;

                    case 0x2:
                        var6 = true;
                        this->mUnk_788.vfunc_1C(data_ov058_02154cdc[this->func_ov058_02146d30(0x1)], 0x199A, 0x1000, 0x0);
                        pGet50_788->mUnk_08 = 0x0;
                        break;

                    default:
                        pGet50_788->mUnk_04 = 0x0;
                        pGet50_788->mUnk_08 = 0x0;
                        break;
                }
                *(u16 *) &pGet50_788->mUnk_02 &= 0xFFF7;
            }

            if (!var6) {
                break;
            }

            this->func_ov058_02146c6c();
            break;
        }

        default:
            break;
    }
}

extern unk32 data_ov063_021641d0[];

void ActorLokomo_874::vfunc2_00() {
    data_ov063_021641d0[((ActorLokomo *) this->mUnk_04)->func_ov058_021456d8()] = (unk32) this->mUnk_04;
}

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

extern MtxFx43 data_027e0964;

void ActorLokomo::func_ov058_02147860(Actor *param0, G3d_RenderState_ *param1) {
    ActorLokomo *thiz = (ActorLokomo *) param0;

    G3d_RenderObject *renderObj = param1->renderObj;
    s32 val                     = param1->flag & 0x10 ? param1->currentBoneMtxId : -1;

    if (val == thiz->mUnk_8D0) {

        if (renderObj->mUnk_25 == 0x2) {
            param1->callbackSegment[6] = 0x3;
            renderObj->mUnk_25         = 0x3;
        } else {

            if (renderObj->mUnk_25 == 0x3) {
                MtxFx43 spF0;
                MtxFx43 spC0;

                G3d_GetCurrentMtx(&spC0, NULL);

                func_01ffad5c(&spC0, &data_027e0964, &spF0);

                thiz->mUnk_8D4.Set(spF0._30, spF0._31, spF0._32);

                param1->callbackSegment[6] = 0x2;
                renderObj->mUnk_25         = 0x2;
            }
        }
    }

    if (thiz->func_ov058_021456d8() != ActorLokomo_Carben) {
        return;
    }

    if (val == thiz->mUnk_9A4) {
        if (renderObj->mUnk_25 == 0x2) {
            param1->callbackSegment[6] = 0x3;
            renderObj->mUnk_25         = 0x3;
            return;
        }

        if (renderObj->mUnk_25 != 0x3) {
            return;
        }

        MtxFx43 sp90;
        MtxFx43 sp60;

        G3d_GetCurrentMtx(&sp60, NULL);

        func_01ffad5c(&sp60, &data_027e0964, &sp90);

        thiz->mUnk_9AC.Set(sp90._30, sp90._31, sp90._32);

        param1->callbackSegment[6] = 0x2;
        renderObj->mUnk_25         = 0x2;

        return;
    }

    if (val != thiz->mUnk_9A8) {
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

    MtxFx43 sp30;
    MtxFx43 sp00;

    G3d_GetCurrentMtx(&sp00, NULL);

    func_01ffad5c(&sp00, &data_027e0964, &sp30);

    thiz->mUnk_9B8.Set(sp30._30, sp30._31, sp30._32);

    param1->callbackSegment[6] = 0x2;
    renderObj->mUnk_25         = 0x2;
}

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
