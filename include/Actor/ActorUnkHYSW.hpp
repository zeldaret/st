//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkHYSW_C4 : public Actor_C4 {
public:
    ActorUnkHYSW_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkHYSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkHYSW();

    /* 4C */ virtual ~ActorUnkHYSW() override;

    void func_ov057_0213aa74(void);
    void func_ov057_0213aab8(void);
    void func_ov057_0213ab2c(void);
    void func_ov057_0213ab40(void);
};

class ActorProfileUnkHYSW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkHYSW();
    ~ActorProfileUnkHYSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkHYSW *GetProfile();
};
