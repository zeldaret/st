//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkALEV_c4 : public Actor_c4 {
public:
    ActorUnkALEV_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkALEV : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkALEV();

    /* 4C */ virtual ~ActorUnkALEV() override;

    void func_ov070_0213f828(void);
    void func_ov070_0213f848(void);
    void func_ov070_0213f858(void);
    void func_ov070_0213f86c(void);
    void func_ov070_0213f8dc(void);
};

class ActorProfileUnkALEV : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkALEV();
    ~ActorProfileUnkALEV();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkALEV *GetProfile();
};
