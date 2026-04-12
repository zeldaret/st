//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSNOW_c4 : public Actor_c4 {
public:
    ActorUnkSNOW_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSNOW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSNOW();

    /* 4C */ virtual ~ActorUnkSNOW() override;

    void func_ov094_0216db6c(void);
    void func_ov094_0216dc1c(void);
    void func_ov094_0216dc4c(void);
    void func_ov094_0216dd08(void);
    void func_ov094_0216dd1c(void);
    void func_ov094_0216dd30(void);
    void func_ov094_0216dd98(void);
    void func_ov094_0216dda8(void);
};

class ActorProfileUnkSNOW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSNOW();
    ~ActorProfileUnkSNOW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSNOW *GetProfile();
};
