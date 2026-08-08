//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCLLT_C4 : public Actor_C4 {
public:
    ActorUnkCLLT_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkCLLT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCLLT();

    /* 4C */ virtual ~ActorUnkCLLT() override;

    void func_ov031_020fb38c(void);
    void func_ov031_020fb3c8(void);
    void func_ov031_020fb40c(void);
};

class ActorProfileUnkCLLT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkCLLT();
    ~ActorProfileUnkCLLT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCLLT *GetProfile();
};
