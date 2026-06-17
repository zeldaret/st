//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSGMG_C4 : public Actor_C4 {
public:
    ActorUnkSGMG_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkSGMG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSGMG();

    /* 4C */ virtual ~ActorUnkSGMG() override;

    void func_ov030_0214d8d0(void);
    void func_ov030_0214d8e0(void);
    void func_ov030_0214dbb4(void);
    void func_ov030_0214dc30(void);
    void func_ov030_0214dc80(void);
    void func_ov030_0214dc90(void);
};

class ActorProfileUnkSGMG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSGMG();
    ~ActorProfileUnkSGMG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSGMG *GetProfile();
};
