#include "Player/PlayerActorBase.hpp"
#include "Player/PlayerLink.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"

PlayerLinkActor::PlayerLinkActor(unk32 param1, unk32 param2, UnkStruct_027e0ce0_40 *param3, bool *param4) :
    PlayerActorBase(PlayerCharacter_Link, param1, param2, param3),
    mUnk_094(param4),
    mUnk_098(0),
    mUnk_09C(new(HeapIndex_1) PlayerLinkActor_9C(param3, *(u32 *) &this->mUnk_50, this->mCharacter)),
    mUnk_0A0(new(HeapIndex_1) PlayerLinkActor_A0(param2, param3, this, this->mUnk_09C)),
    mUnk_0A4(this, this->mUnk_0A0),
    mUnk_0B0(-1),
    mUnk_0B4(false),
    mUnk_0B5(false),
    mUnk_0B6(false),
    mUnk_0B7(false),
    mUnk_0B8(false),
    mUnk_0B9(false),
    mUnk_0BA(false),
    mUnk_0BB(false),
    mUnk_134(param1 == -1 ? new(HeapIndex_1) PlayerLinkActor_134() : NULL) {
    this->mUnk_90 = this->mUnk_09C;

    //! TODO: dark magic
    PlayerLinkActor *new_var   = this;
    PlayerLinkActor **new_var3 = &new_var;
    if ((*new_var3)->mUnk_4C == -1) {
        (*new_var3)->func_ov031_020d96a4(this->mUnk_0A0, this->mUnk_58);
        this->func_ov031_020dccf0();
    } else {
        this->func_ov021_020ebda0();
    }
}

PlayerLinkActor::~PlayerLinkActor() {
    if (data_027e09a4->IsSceneModeAdventure()) {
        UnkStruct_027e0d34::Destroy();
    }

    delete this->mUnk_134;
    delete this->mUnk_0A0;
    delete this->mUnk_09C;
}

void PlayerLinkActor::func_ov001_020bcb60(unk32 param1) {
    this->mUnk_098           = param1;
    this->mUnk_09C->mUnk_0F4 = param1;
}

void PlayerLinkActor::func_ov001_020bcb70() {
    this->func_ov001_020bc96c();
    this->mUnk_0B4 = false;
    this->mUnk_0B5 = false;
    this->mUnk_0B8 = false;
    this->mUnk_0A0->func_ov001_020bd2e0();
    this->mUnk_0A4.mUnk_08 = false;
    this->func_ov000_0208d7f0(false);
}

void PlayerLinkActor::func_ov001_020bcba8() {
    if (this->mUnk_134 != NULL) {
        this->mUnk_134->func_ov031_020db0fc();
    }

    if (!this->mUnk_0B6) {
        this->mUnk_0A0->func_ov001_020bd358();
    }
}

void PlayerLinkActor::func_ov001_020bcbd0(VecFx32 *pVec) {
    this->func_ov000_0208c8f8(pVec);
    this->mUnk_90->mUnk_34.func_ov000_0208efd0(pVec);

    PlayerActorBase_70 *unk_70 = this->mUnk_70;
    unk_70->func_ov001_020bbe18(0, this->mAngleStruct, this->mUnk_0A0->func_ov000_02093718(),
                                this->mUnk_0A0->func_ov000_0209378c());

    bool uVar1 = false;
    if (this->mUnk_094 != 0) {
        uVar1 = *this->mUnk_094;
    }

    this->mUnk_0A0->func_ov001_020bd388(uVar1, this->mUnk_0B6);
    this->mUnk_0B6 = false;

    this->mUnk_0B9 = data_027e0cd8->func_ov000_02082124();
    this->mUnk_0BA = false;
    this->mUnk_0BB = false;

    this->func_ov000_0208d3fc();
}

void UnkStruct_027e0d34::Destroy() {
    if (data_027e0d34 != NULL) {
        delete data_027e0d34;
    }
}

PlayerLinkActor_1B0::PlayerLinkActor_1B0() :
    UnkSystem7(NULL),
    mUnk_04(-1),
    mUnk_08(0) {}

DECL_INSTANCE_DTOR(UnkStruct_027e0d34, data_027e0d34);
