//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM3_c4 : public Actor_c4 {
public:
    ActorUnkRMM3_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMM3 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMM3();

    /* 4C */ virtual ~ActorUnkRMM3() override;

    void func_ov072_0215220c(void);
    void func_ov072_021522dc(void);
    void func_ov072_0215233c(void);
    void func_ov072_02152350(void);
};

class ActorProfileUnkRMM3 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMM3();
    ~ActorProfileUnkRMM3();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMM3 *GetProfile();
};
