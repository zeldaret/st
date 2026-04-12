//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFSSF_c4 : public Actor_c4 {
public:
    ActorUnkFSSF_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFSSF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFSSF();

    /* 4C */ virtual ~ActorUnkFSSF() override;

    void func_ov057_02139f24(void);
    void func_ov057_02139fc4(void);
    void func_ov057_0213a0c0(void);
    void func_ov057_0213a0cc(void);
    void func_ov057_0213a124(void);
};

class ActorProfileUnkFSSF : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFSSF();
    ~ActorProfileUnkFSSF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFSSF *GetProfile();
};
