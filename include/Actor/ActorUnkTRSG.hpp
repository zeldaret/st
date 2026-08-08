//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRSG_C4 : public Actor_C4 {
public:
    ActorUnkTRSG_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkTRSG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRSG();

    /* 4C */ virtual ~ActorUnkTRSG() override;

    void func_ov026_0212369c(void);
    void func_ov026_02123700(void);
    void func_ov026_02123730(void);
    void func_ov026_0212386c(void);
};

class ActorProfileUnkTRSG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTRSG();
    ~ActorProfileUnkTRSG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRSG *GetProfile();
};
