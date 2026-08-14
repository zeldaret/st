//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFSSF_C4 : public Actor_C4 {
public:
    ActorUnkFSSF_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
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
