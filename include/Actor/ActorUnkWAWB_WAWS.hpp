//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor WAWB ---

class ActorUnkWAWB_c4 : public Actor_c4 {
public:
    ActorUnkWAWB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWAWB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWAWB();

    /* 4C */ virtual ~ActorUnkWAWB() override;
};

class ActorProfileUnkWAWB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWAWB();
    ~ActorProfileUnkWAWB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWAWB *GetProfile();
};

// --- Actor WAWS ---

class ActorUnkWAWS_c4 : public Actor_c4 {
public:
    ActorUnkWAWS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWAWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWAWS();

    /* 4C */ virtual ~ActorUnkWAWS() override;
};

class ActorProfileUnkWAWS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWAWS();
    ~ActorProfileUnkWAWS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWAWS *GetProfile();
};
