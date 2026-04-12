//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMA2_c4 : public Actor_c4 {
public:
    ActorUnkRMA2_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMA2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMA2();

    /* 4C */ virtual ~ActorUnkRMA2() override;

    void func_ov068_021605a0(void);
    void func_ov068_021605c8(void);
    void func_ov068_021605cc(void);
};

class ActorProfileUnkRMA2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMA2();
    ~ActorProfileUnkRMA2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMA2 *GetProfile();
};
