//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkQKTG_c4 : public Actor_c4 {
public:
    ActorUnkQKTG_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
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
