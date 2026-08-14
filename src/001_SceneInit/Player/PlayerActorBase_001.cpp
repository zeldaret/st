#define VECFX32_CTORS //! TODO: remove this hack

#include "Player/PlayerActorBase.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

extern "C" u16 *func_ov021_020ea868(int);
extern "C" void func_ov000_0205c584(void *, int, int);

static const char data_ov001_020c264c[][16] = {
    "swA", "sheath", "swB", "sheathB", "belt", "cap", "body_all",
};

static const char data_ov001_020c26bc[][16] = {
    "center", "body_chn", "waist_chn", "cl_podA", "cl_LhandA", "cl_RhandA", "LlegB_jnt", "RlegB_jnt", "head_jnt",
};

ModelRender_Derived4::ModelRender_Derived4(PlayerCharacter character, unk32 param2, G3d_Model *pModel,
                                           G3d_BoneMtxStruct *pCacheJntAnm) :
    ModelRender_Derived3(character, pModel),
    mUnk_78(param2),
    mUnk_BC(0) {

    if (pCacheJntAnm == NULL) {
        this->func_ov000_02057d20(this->func_ov000_02057ee0()->numBones);
    } else {
        this->func_ov000_02057d3c(pCacheJntAnm);
    }

    for (u32 i = 0; i < ARRAY_LEN(this->mUnk_7C); i++) {
        this->mUnk_7C[i] = this->func_ov000_02057f18(&data_ov001_020c26bc[i]);
    }

    for (u32 i = 0; i < ARRAY_LEN(this->mUnk_A0); i++) {
        this->mUnk_A0[i] = this->func_ov000_02057f40(&data_ov001_020c264c[i]);
    }

    this->func_ov000_0208c058(this->mUnk_7C[1]);
}

PlayerActorBase::PlayerActorBase(PlayerCharacter character, unk32 param2, ItemManager *pItemMgr,
                                 UnkStruct_027e0ce0_40 *param4) :
    mPos(0, 0, 0),
    mPrevPos(0, 0, 0),
    mVel(0, 0, 0),
    mAccel(0, 0, 0),
    mAngle(0),
    mInvincibilityTimer(0),
    mInvincibilityIconTimer(0),
    mGrabActor(0),
    mUnk_38(&this->mGrabActor),
    mUnk_44(PlayerCharacter_IsNotLink(character)),
    mCharacter(character),
    mUnk_4C(param2),
    mUnk_50(param2, this->mUnk_44),
    mUnk_54(pItemMgr),
    mUnk_58(param4) {
    this->mUnk_5C.mUnk_04 = 0;
    this->mUnk_5C.mUnk_10 = &this->mUnk_5C.mUnk_08;
    this->mUnk_5C.func_ov000_02089dc4();

    this->mUnk_70 = new(HeapIndex_1) PlayerActorBase_70(character, param2);
    this->mUnk_74 = data_027e09a4->IsLand() ? new(HeapIndex_1) PlayerActorBase_74() : NULL;

    const UnkStruct_ov000_020ab4dc *ptr      = &data_ov000_020ab4dc[(u32) this->mCharacter];
    s32 sVar1                                = ptr->mUnk_74;
    const UnkStruct_ov000_020ab4dc *new_var5 = &data_ov000_020ab4dc[this->mCharacter];
    func_ov000_0205c584(&this->mUnk_78, sVar1, new_var5->mUnk_66 / 2);

    this->mUnk_84.Init();
    this->mUnk_90 = 0;

    if (this->mUnk_4C == -1) {
        this->func_ov000_0208c914();
    } else {
        u16 temp = func_ov021_020ea868(this->mUnk_4C)[8];
        this->mUnk_84.func_ov000_0205fc20(0x78, temp, NULL, NULL);
    }
}

PlayerActorBase::~PlayerActorBase() {
    delete this->mUnk_74;
    delete this->mUnk_70;
}

void PlayerActorBase::func_ov001_020bc96c() {
    STACK_PAD(0x04);
    this->mUnk_38.Reset();
    this->mUnk_5C.func_ov000_02089dc4();
    new(this->mUnk_74) PlayerActorBase_74();
    this->mGrabActor.Reset();
}
