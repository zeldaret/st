//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMSV_c4 : public Actor_c4 {
public:
    ActorUnkRMSV_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMSV : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMSV();

    /* 4C */ virtual ~ActorUnkRMSV() override;

    void func_ov063_0215bd44(void);
    void func_ov063_0215bd58(void);
    void func_ov063_0215bdec(void);
    void func_ov063_0215be10(void);
    void func_ov063_0215be3c(void);
    void func_ov063_0215be50(void);
    void func_ov063_0215be90(void);
    void func_ov063_0215bed0(void);
    void func_ov063_0215bee0(void);
    void func_ov063_0215bf3c(void);
};

class ActorProfileUnkRMSV : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMSV();
    ~ActorProfileUnkRMSV();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSV *GetProfile();
};
