//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLON_c4 : public Actor_c4 {
public:
    ActorUnkBLON_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBLON : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBLON();

    /* 4C */ virtual ~ActorUnkBLON() override;

    void func_ov093_02177618(void);
    void func_ov093_02177640(void);
    void func_ov093_021776ec(void);
    void func_ov093_02177700(void);
    void func_ov093_02177724(void);
    void func_ov093_021778c4(void);
};

class ActorProfileUnkBLON : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBLON();
    ~ActorProfileUnkBLON();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBLON *GetProfile();
};
