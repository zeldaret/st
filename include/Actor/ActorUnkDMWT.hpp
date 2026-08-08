//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMWT_C4 : public Actor_C4 {
public:
    ActorUnkDMWT_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkDMWT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMWT();

    /* 4C */ virtual ~ActorUnkDMWT() override;

    void func_ov088_021718ec(void);
    void func_ov088_02171940(void);
    void func_ov088_02171950(void);
    void func_ov088_02171964(void);
    void func_ov088_02171978(void);
    void func_ov088_021719c8(void);
};

class ActorProfileUnkDMWT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMWT();
    ~ActorProfileUnkDMWT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMWT *GetProfile();
};
