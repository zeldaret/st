#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNTUB_C4 : public Actor_C4 {
public:
    ActorUnkNTUB_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorPot : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorPot();

    /* 4C */ virtual ~ActorPot() override;

    void func_ov031_020f0cf0();
    void func_ov031_020f0d04();
    void func_ov031_020f0d2c();
    void func_ov031_020f0d80();
    void func_ov031_020f0db8();
    void func_ov031_020f0de8();
    void func_ov031_020f0df4();
    void func_ov031_020f0e00();
    void func_ov031_020f0e0c();
    void func_ov031_020f0e18();
    void func_ov031_020f0e24();
    void func_ov031_020f0e30();
    void func_ov031_020f0e3c();
    void func_ov031_020f0e48();
    void func_ov031_020f0e5c();
    void func_ov031_020f0e70();
    void func_ov031_020f0f44();
};

class ActorProfilePot : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfilePot();
    ~ActorProfilePot();

    /* 0C */ virtual Actor *Create();

    static ActorProfilePot *GetProfile();
};
