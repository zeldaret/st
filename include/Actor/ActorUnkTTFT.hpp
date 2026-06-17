//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTTFT_c4 : public Actor_c4 {
public:
    ActorUnkTTFT_c4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkTTFT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTTFT();

    /* 4C */ virtual ~ActorUnkTTFT() override;

    void func_ov030_0214d6c0(void);
    void func_ov030_0214d710(void);
    void func_ov030_0214d724(void);
};

class ActorProfileUnkTTFT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTTFT();
    ~ActorProfileUnkTTFT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTTFT *GetProfile();
};
