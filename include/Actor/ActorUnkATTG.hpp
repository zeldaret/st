//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkATTG_C4 : public Actor_C4 {
public:
    ActorUnkATTG_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkATTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkATTG();

    /* 4C */ virtual ~ActorUnkATTG() override;

    void func_ov031_020f3dfc(void);
    void func_ov031_020f3e50(void);
    void func_ov031_020f3eac(void);
    void func_ov031_020f3eec(void);
    void func_ov031_020f4014(void);
};

class ActorProfileUnkATTG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkATTG();
    ~ActorProfileUnkATTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkATTG *GetProfile();
};
