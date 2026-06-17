//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBSTG_C4 : public Actor_C4 {
public:
    ActorUnkBSTG_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkBSTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBSTG();

    /* 4C */ virtual ~ActorUnkBSTG() override;

    void func_ov058_0214d794(void);
    void func_ov058_0214d79c(void);
};

class ActorProfileUnkBSTG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBSTG();
    ~ActorProfileUnkBSTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBSTG *GetProfile();
};
