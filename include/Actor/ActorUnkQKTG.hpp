//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkQKTG_C4 : public Actor_C4 {
public:
    ActorUnkQKTG_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkQKTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkQKTG();

    /* 4C */ virtual ~ActorUnkQKTG() override;

    void func_ov086_0215dd28(void);
    void func_ov086_0215dd68(void);
    void func_ov086_0215de08(void);
    void func_ov086_0215de1c(void);
};

class ActorProfileUnkQKTG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkQKTG();
    ~ActorProfileUnkQKTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkQKTG *GetProfile();
};
