#include "Player/PlayerActorBase.hpp"
#include "Player/PlayerLink.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

PlayerLinkActor::PlayerLinkActor(unk32 param1, unk32 param2, UnkStruct_027e0ce0_40 *param3, unk32 param4) :
    PlayerActorBase(PlayerCharacter_Link, param1, param2, param3),
    mUnk_94(param4),
    mUnk_98(0),
    mUnk_9C(new(HeapIndex_1) PlayerLinkActor_9C(param3, *(u32 *) &this->mUnk_50, this->mCharacter)),
    mUnk_A0(new(HeapIndex_1) PlayerLinkActor_A0(param2, param3, this, this->mUnk_9C)),
    mUnk_A4(this, this->mUnk_A0),
    mUnk_B0(-1),
    mUnk_B4(false),
    mUnk_B5(false),
    mUnk_B6(false),
    mUnk_B7(false),
    mUnk_B8(false),
    mUnk_B9(false),
    mUnk_BA(false),
    mUnk_BB(false),
    mUnk_134(param1 == -1 ? new(HeapIndex_1) PlayerLinkActor_134() : NULL) {
    this->mUnk_90 = this->mUnk_9C;

    //! TODO: dark magic
    PlayerLinkActor *new_var   = this;
    PlayerLinkActor **new_var3 = &new_var;
    if ((*new_var3)->mUnk_4C == -1) {
        (*new_var3)->func_ov031_020d96a4(this->mUnk_A0, this->mUnk_58);
        this->func_ov031_020dccf0();
    } else {
        this->func_ov021_020ebda0();
    }
}
