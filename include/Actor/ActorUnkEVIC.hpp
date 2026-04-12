#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEVIC : public Actor {
public:
    /* 000 (base) */
    /* 094 */ UnkSubStruct19 mUnk_094; // event icon
    /* 10C */ unk16 mUnk_10C;
    /* 110 */ unk16 mUnk_10E; // pad?

    ActorUnkEVIC();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 30 */ virtual void vfunc_30() override;
    /* 4C */ virtual ~ActorUnkEVIC() override;

    void func_ov000_0209c014(void);
};

class ActorProfileUnkEVIC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkEVIC();
    ~ActorProfileUnkEVIC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEVIC *GetProfile();
};
