//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWHI_c4 : public Actor_c4 {
public:
    ActorUnkSWHI_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSWHI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWHI();

    /* 4C */ virtual ~ActorUnkSWHI() override;

    void func_ov066_0215cbac(void);
    void func_ov066_0215cbf0(void);
    void func_ov066_0215cc2c(void);
    void func_ov066_0215cc74(void);
    void func_ov066_0215cc88(void);
    void func_ov066_0215ccb4(void);
    void func_ov066_0215ccf4(void);
    void func_ov066_0215ccf8(void);
    void func_ov066_0215cd14(void);
    void func_ov066_0215cd38(void);
    void func_ov066_0215cd50(void);
    void func_ov066_0215cd58(void);
};

class ActorProfileUnkSWHI : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWHI();
    ~ActorProfileUnkSWHI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWHI *GetProfile();
};
