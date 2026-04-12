//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor SIRO ---

class ActorUnkSIRO_c4 : public Actor_c4 {
public:
    ActorUnkSIRO_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSIRO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSIRO();

    /* 4C */ virtual ~ActorUnkSIRO() override;
};

class ActorProfileUnkSIRO : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSIRO();
    ~ActorProfileUnkSIRO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSIRO *GetProfile();
};

// --- Actor SIRS ---

class ActorUnkSIRS_c4 : public Actor_c4 {
public:
    ActorUnkSIRS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSIRS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSIRS();

    /* 4C */ virtual ~ActorUnkSIRS() override;
};

class ActorProfileUnkSIRS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSIRS();
    ~ActorProfileUnkSIRS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSIRS *GetProfile();
};

// --- Actor SRNM ---

class ActorUnkSRNM_c4 : public Actor_c4 {
public:
    ActorUnkSRNM_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSRNM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSRNM();

    /* 4C */ virtual ~ActorUnkSRNM() override;
};

class ActorProfileUnkSRNM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSRNM();
    ~ActorProfileUnkSRNM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSRNM *GetProfile();
};

// --- Actor SRSL ---

class ActorUnkSRSL_c4 : public Actor_c4 {
public:
    ActorUnkSRSL_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSRSL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSRSL();

    /* 4C */ virtual ~ActorUnkSRSL() override;
};

class ActorProfileUnkSRSL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSRSL();
    ~ActorProfileUnkSRSL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSRSL *GetProfile();
};
