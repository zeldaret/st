//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMW0_c4 : public Actor_c4 {
public:
    ActorUnkRMW0_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMW0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMW0();

    /* 4C */ virtual ~ActorUnkRMW0() override;

    void func_ov066_0215c5c0(void);
    void func_ov066_0215c650(void);
    void func_ov066_0215c674(void);
    void func_ov066_0215c688(void);
    void func_ov066_0215c7bc(void);
    void func_ov066_0215c80c(void);
    void func_ov066_0215c868(void);
    void func_ov066_0215c900(void);
    void func_ov066_0215c97c(void);
};

class ActorProfileUnkRMW0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMW0();
    ~ActorProfileUnkRMW0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMW0 *GetProfile();
};
