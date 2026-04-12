//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNTTZ_c4 : public Actor_c4 {
public:
    ActorUnkNTTZ_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkNTTZ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNTTZ();

    /* 4C */ virtual ~ActorUnkNTTZ() override;

    void func_ov031_020f6190(void);
    void func_ov031_020f6198(void);
    void func_ov031_020f619c(void);
    void func_ov031_020f61a0(void);
    void func_ov031_020f61f0(void);
};

class ActorProfileUnkNTTZ : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNTTZ();
    ~ActorProfileUnkNTTZ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNTTZ *GetProfile();
};
