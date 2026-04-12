//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEVIC_c4 : public Actor_c4 {
public:
    ActorUnkEVIC_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkEVIC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEVIC();

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
