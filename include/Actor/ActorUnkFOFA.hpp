//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOFA_c4 : public Actor_c4 {
public:
    ActorUnkFOFA_c4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkFOFA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFOFA();

    /* 4C */ virtual ~ActorUnkFOFA() override;

    void func_ov021_020f3a34(void);
};

class ActorProfileUnkFOFA : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFOFA();
    ~ActorProfileUnkFOFA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFOFA *GetProfile();
};
