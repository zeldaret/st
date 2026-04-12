//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMRDL_c4 : public Actor_c4 {
public:
    ActorUnkMRDL_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkMRDL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMRDL();

    /* 4C */ virtual ~ActorUnkMRDL() override;

    void func_ov075_0215dff4(void);
    void func_ov075_0215e008(void);
    void func_ov075_0215e044(void);
    void func_ov075_0215e050(void);
};

class ActorProfileUnkMRDL : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkMRDL();
    ~ActorProfileUnkMRDL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMRDL *GetProfile();
};
