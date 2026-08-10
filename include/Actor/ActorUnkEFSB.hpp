#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorUnkZLSL_ZSRS.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFSB : public Actor {
public:
    /* 000 (base) */
    /* 094 */ unk32 mUnk_094;
    /* 098 */ ModelRender mUnk_098;
    /* 0F8 */ ActorUnkZLSL_27CC mUnk_0F8;
    /* 154 */ ActorUnkZLSL_27CC mUnk_154;
    /* 1B0 */ unk32 mUnk_1B0;
    /* 1B4 */

    ActorUnkEFSB();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 54 */ virtual void vfunc_54(unk32 param1);
};

class ActorProfileUnkEFSB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFSB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFSB *GetProfile();
};
