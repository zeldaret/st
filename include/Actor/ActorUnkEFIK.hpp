#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFIK : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ UnkSystem7 mUnk_98;
    /* 9C */ unk32 mUnk_9C;
    /* A0 */ unk32 mUnk_A0;

    ActorUnkEFIK();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 4C */ virtual ~ActorUnkEFIK() override;
    /* 54 */ virtual void vfunc_54(unk32 param1);
};

class ActorProfileUnkEFIK : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkEFIK();
    ~ActorProfileUnkEFIK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFIK *GetProfile();
};
