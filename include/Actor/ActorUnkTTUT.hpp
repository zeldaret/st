//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTTUT_C4 : public Actor_C4 {
public:
    ActorUnkTTUT_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkTTUT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTTUT();

    /* 4C */ virtual ~ActorUnkTTUT() override;

    void func_ov091_02175868(void);
    void func_ov091_02175944(void);
    void func_ov091_02175bbc(void);
};

class ActorProfileUnkTTUT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTTUT();
    ~ActorProfileUnkTTUT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTTUT *GetProfile();
};
