//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPTSW_c4 : public Actor_c4 {
public:
    ActorUnkPTSW_c4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkPTSW : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPTSW();

    /* 4C */ virtual ~ActorUnkPTSW() override;

    void func_ov052_0213761c(void);
    void func_ov052_02137650(void);
    void func_ov052_02137684(void);
    void func_ov052_02137698(void);
};

class ActorProfileUnkPTSW : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkPTSW();
    ~ActorProfileUnkPTSW();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPTSW *GetProfile();
};
