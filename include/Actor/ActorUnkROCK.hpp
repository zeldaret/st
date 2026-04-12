//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkROCK_c4 : public Actor_c4 {
public:
    ActorUnkROCK_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkROCK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkROCK();

    /* 4C */ virtual ~ActorUnkROCK() override;

    void func_ov031_020e897c(void);
    void func_ov031_020e89ac(void);
    void func_ov031_020e8a48(void);
    void func_ov031_020e8acc(void);
    void func_ov031_020e8afc(void);
    void func_ov031_020e8ba0(void);
    void func_ov031_020e8c08(void);
};

class ActorProfileUnkROCK : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkROCK();
    ~ActorProfileUnkROCK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkROCK *GetProfile();
};
