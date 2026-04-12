//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDLTG_c4 : public Actor_c4 {
public:
    ActorUnkDLTG_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDLTG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDLTG();

    /* 4C */ virtual ~ActorUnkDLTG() override;

    void func_ov047_021357fc(void);
    void func_ov047_02135878(void);
    void func_ov047_021358a4(void);
    void func_ov047_021358c0(void);
};

class ActorProfileUnkDLTG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDLTG();
    ~ActorProfileUnkDLTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDLTG *GetProfile();
};
