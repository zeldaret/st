//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVRGN_c4 : public Actor_c4 {
public:
    ActorUnkVRGN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkVRGN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkVRGN();

    /* 4C */ virtual ~ActorUnkVRGN() override;

    void func_ov094_02168468(void);
    void func_ov094_0216849c(void);
    void func_ov094_02168588(void);
    void func_ov094_021685bc(void);
    void func_ov094_02168624(void);
};

class ActorProfileUnkVRGN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkVRGN();
    ~ActorProfileUnkVRGN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkVRGN *GetProfile();
};
