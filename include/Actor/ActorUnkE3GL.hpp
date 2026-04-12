//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkE3GL_c4 : public Actor_c4 {
public:
    ActorUnkE3GL_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkE3GL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkE3GL();

    /* 4C */ virtual ~ActorUnkE3GL() override;

    void func_ov090_02171054(void);
    void func_ov090_02171064(void);
    void func_ov090_02171074(void);
};

class ActorProfileUnkE3GL : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkE3GL();
    ~ActorProfileUnkE3GL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkE3GL *GetProfile();
};
