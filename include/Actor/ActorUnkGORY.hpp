//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGORY_c4 : public Actor_c4 {
public:
    ActorUnkGORY_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkGORY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGORY();

    /* 4C */ virtual ~ActorUnkGORY() override;

    void func_ov036_0211bc20(void);
    void func_ov036_0211bc84(void);
    void func_ov036_0211bcb0(void);
};

class ActorProfileUnkGORY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGORY();
    ~ActorProfileUnkGORY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGORY *GetProfile();
};
