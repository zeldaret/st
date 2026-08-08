//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFBRG_C4 : public Actor_C4 {
public:
    ActorUnkFBRG_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkFBRG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFBRG();

    /* 4C */ virtual ~ActorUnkFBRG() override;

    void func_ov094_0216df94(void);
    void func_ov094_0216dfa8(void);
    void func_ov094_0216e290(void);
    void func_ov094_0216e2a4(void);
    void func_ov094_0216e2ac(void);
    void func_ov094_0216e2d4(void);
    void func_ov094_0216e2f4(void);
    void func_ov094_0216e34c(void);
};

class ActorProfileUnkFBRG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFBRG();
    ~ActorProfileUnkFBRG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFBRG *GetProfile();
};
