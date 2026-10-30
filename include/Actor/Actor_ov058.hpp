#pragma once

// TODO : remove this file

#include "Actor/ActorCharacter.hpp"
#include "Actor/ActorUnkZLSL_ZSRS.hpp"

// TODO: check if it has to be moved to KOKO
class ActorKenzo_Base_160 : public UnkStruct_ov000_020b31f0 {
public:
    /* 00 (base) */
    /* 2C */ UnkSystem5 mUnk_2C;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ PAD(0x50, 0x8C);
    /* 8C */ UnkSystem5 mUnk_8C;
    /* AC */ unk32 mUnk_AC;
    /* B0 */ PAD(0xB0, 0xEC);
    /* EC */

    ActorKenzo_Base_160(ModelRender *param1, UnkActorFileSystem2 *param2) :
        UnkStruct_ov000_020b31f0(&mUnk_2C, &mUnk_8C, param1, param2),
        mUnk_2C(&mUnk_4C, NULL),
        mUnk_8C(&mUnk_AC, NULL) {

        if (param2 != NULL) {
            this->mUnk_8C.mpModel = this->mUnk_10;
            this->mUnk_2C.mpModel = this->mUnk_10;
        }
    }

    /* 00 */ virtual ~ActorKenzo_Base_160() override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override; // ActorUnkKOKO::func_ov058_02141d30
    /* 3C */ virtual void vfunc_3C() override;                           // ActorUnkKOKO::func_ov058_02141d0c
};

// TODO: to be moved to lokomos' file
class ActorKenzo_Base : public ActorCharacter {
public:
    /* 000 (base) */
    /* 160 */ ActorKenzo_Base_160 mUnk_160;
    /* 24C */

    ActorKenzo_Base(ModelRender *param1, UnkActorFileSystem2 *param2) :
        ActorCharacter(param1, &mUnk_160),
        mUnk_160(param1, param2) {}

    // should be inlined
    /* 4C */ virtual ~ActorKenzo_Base() override;
};
