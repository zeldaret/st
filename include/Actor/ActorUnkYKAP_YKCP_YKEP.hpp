//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor YKAP ---

class ActorUnkYKAP_C4 : public Actor_C4 {
public:
    ActorUnkYKAP_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkYKAP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkYKAP();

    /* 4C */ virtual ~ActorUnkYKAP() override;
};

class ActorProfileUnkYKAP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkYKAP();
    ~ActorProfileUnkYKAP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkYKAP *GetProfile();
};

// --- Actor YKCP ---

class ActorUnkYKCP_C4 : public Actor_C4 {
public:
    ActorUnkYKCP_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkYKCP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkYKCP();

    /* 4C */ virtual ~ActorUnkYKCP() override;
};

class ActorProfileUnkYKCP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkYKCP();
    ~ActorProfileUnkYKCP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkYKCP *GetProfile();
};

// --- Actor YKEP ---

class ActorUnkYKEP_C4 : public Actor_C4 {
public:
    ActorUnkYKEP_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkYKEP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkYKEP();

    /* 4C */ virtual ~ActorUnkYKEP() override;
};

class ActorProfileUnkYKEP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkYKEP();
    ~ActorProfileUnkYKEP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkYKEP *GetProfile();
};
