//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGTTG_c4 : public Actor_c4 {
public:
    ActorUnkGTTG_c4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkGTTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGTTG();

    /* 4C */ virtual ~ActorUnkGTTG() override;

    void func_ov057_0213a8b8(void);
};

class ActorProfileUnkGTTG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkGTTG();
    ~ActorProfileUnkGTTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGTTG *GetProfile();
};
