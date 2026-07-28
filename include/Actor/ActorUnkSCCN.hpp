#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "MapObject/MapObject.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSCCN_B8 {
public:
    /* 00 (vtable) */
    /* 04 */ ActorRef mUnk_04;
    /* 08 */ VecFx32 *mUnk_08;
    /* 0C */ MapObject_10 *mUnk_0C;
    /* 10 */

    ActorUnkSCCN_B8(); // func_ov000_0207ec88 set all fields to 0

    // data_ov000_020b287c
    /* 00 */ virtual ~ActorUnkSCCN_B8(); // func_ov000_0207eca8 & func_ov000_0207ecd8
    /* 08 */ virtual void vfunc_08();    // func_ov000_0207ed84
};

class ActorUnkSCCN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ MapObject_10 mUnk_94;
    /* B8 */ ActorUnkSCCN_B8 mUnk_B8;
    /* C8 */

    ActorUnkSCCN();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
};

class ActorProfileUnkSCCN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSCCN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSCCN *GetProfile();
};
