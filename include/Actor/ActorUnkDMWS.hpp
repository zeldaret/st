//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMWS_c4 : public Actor_c4 {
public:
    ActorUnkDMWS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDMWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMWS();

    /* 4C */ virtual ~ActorUnkDMWS() override;

    void func_ov088_021716d8(void);
    void func_ov088_0217172c(void);
    void func_ov088_0217173c(void);
    void func_ov088_02171750(void);
    void func_ov088_02171764(void);
};

class ActorProfileUnkDMWS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMWS();
    ~ActorProfileUnkDMWS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMWS *GetProfile();
};
