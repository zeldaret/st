//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSEAT_c4 : public Actor_c4 {
public:
    ActorUnkSEAT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSEAT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSEAT();

    /* 4C */ virtual ~ActorUnkSEAT() override;

    void func_ov098_021820f0(void);
    void func_ov098_02182110(void);
    void func_ov098_0218212c(void);
    void func_ov098_02182140(void);
};

class ActorProfileUnkSEAT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSEAT();
    ~ActorProfileUnkSEAT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSEAT *GetProfile();
};
