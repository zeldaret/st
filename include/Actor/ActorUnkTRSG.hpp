//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRSG_c4 : public Actor_c4 {
public:
    ActorUnkTRSG_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
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
