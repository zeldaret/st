//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKOAT_C4 : public Actor_C4 {
public:
    ActorUnkKOAT_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkKOAT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKOAT();

    /* 4C */ virtual ~ActorUnkKOAT() override;

    void func_ov058_02141e54(void);
    void func_ov058_0214210c(void);
    void func_ov058_02142228(void);
    void func_ov058_021422f0(void);
};

class ActorProfileUnkKOAT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkKOAT();
    ~ActorProfileUnkKOAT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKOAT *GetProfile();
};
