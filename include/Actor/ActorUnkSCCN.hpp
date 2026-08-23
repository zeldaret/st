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
    /* 0C */ MapObject_10_Base *mUnk_0C;
    /* 10 */

    ActorUnkSCCN_B8();

    // data_ov000_020b287c
    /* 00 */ virtual ~ActorUnkSCCN_B8();
    /* 08 */ virtual void vfunc_08();
};

class MapObject_10_SCCN : public MapObject_10 {
public:
    /* 00 (base) */
    /* 24 */

    MapObject_10_SCCN() {}
};

class ActorUnkSCCN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ MapObject_10_SCCN mUnk_94;
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
