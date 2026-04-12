//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSW_c4 : public Actor_c4 {
public:
    ActorUnkRMSW_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMSW();

    /* 4C */ virtual ~ActorUnkRMSW() override;

    void func_ov063_0215c05c(void);
    void func_ov063_0215c0b0(void);
    void func_ov063_0215c0c8(void);
    void func_ov063_0215c0dc(void);
    void func_ov063_0215c11c(void);
};

class ActorProfileUnkRMSW : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSW();
    ~ActorProfileUnkRMSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSW *GetProfile();
};
