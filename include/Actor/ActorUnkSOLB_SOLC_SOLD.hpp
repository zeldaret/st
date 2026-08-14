//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor SOLB ---

class ActorUnkSOLB_C4 : public Actor_C4 {
public:
    ActorUnkSOLB_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkSOLB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOLB();

    /* 4C */ virtual ~ActorUnkSOLB() override;
};

class ActorProfileUnkSOLB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSOLB();
    ~ActorProfileUnkSOLB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOLB *GetProfile();
};

// --- Actor SOLC ---

class ActorUnkSOLC_C4 : public Actor_C4 {
public:
    ActorUnkSOLC_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkSOLC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOLC();

    /* 4C */ virtual ~ActorUnkSOLC() override;
};

class ActorProfileUnkSOLC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSOLC();
    ~ActorProfileUnkSOLC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOLC *GetProfile();
};

// --- Actor SOLD ---

class ActorUnkSOLD_C4 : public Actor_C4 {
public:
    ActorUnkSOLD_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkSOLD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSOLD();

    /* 4C */ virtual ~ActorUnkSOLD() override;
};

class ActorProfileUnkSOLD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSOLD();
    ~ActorProfileUnkSOLD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSOLD *GetProfile();
};
