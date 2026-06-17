//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkE3TT_C4 : public Actor_C4 {
public:
    ActorUnkE3TT_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkE3TT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkE3TT();

    /* 4C */ virtual ~ActorUnkE3TT() override;

    void func_ov090_021711a4(void);
    void func_ov090_021711d4(void);
};

class ActorProfileUnkE3TT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkE3TT();
    ~ActorProfileUnkE3TT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkE3TT *GetProfile();
};
