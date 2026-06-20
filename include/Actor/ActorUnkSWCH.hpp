//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWCH_C4 : public Actor_C4 {
public:
    ActorUnkSWCH_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkSWCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWCH();

    /* 4C */ virtual ~ActorUnkSWCH() override;

    void func_ov031_020f7b0c(void);
    void func_ov031_020f7b20(void);
    void func_ov031_020f7b88(void);
};

class ActorProfileUnkSWCH : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWCH();
    ~ActorProfileUnkSWCH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWCH *GetProfile();
};
