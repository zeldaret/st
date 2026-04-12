//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTSCN_c4 : public Actor_c4 {
public:
    ActorUnkTSCN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTSCN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTSCN();

    /* 4C */ virtual ~ActorUnkTSCN() override;

    void func_ov068_0215a8c4(void);
    void func_ov068_0215a8e0(void);
};

class ActorProfileUnkTSCN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTSCN();
    ~ActorProfileUnkTSCN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTSCN *GetProfile();
};
