//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor CAMA ---

class ActorUnkCAMA_c4 : public Actor_c4 {
public:
    ActorUnkCAMA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCAMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCAMA();

    /* 4C */ virtual ~ActorUnkCAMA() override;
};

class ActorProfileUnkCAMA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCAMA();
    ~ActorProfileUnkCAMA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCAMA *GetProfile();
};

// --- Actor CAMB ---

class ActorUnkCAMB_c4 : public Actor_c4 {
public:
    ActorUnkCAMB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCAMB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCAMB();

    /* 4C */ virtual ~ActorUnkCAMB() override;
};

class ActorProfileUnkCAMB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCAMB();
    ~ActorProfileUnkCAMB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCAMB *GetProfile();
};

// --- Actor CAMS ---

class ActorUnkCAMS_c4 : public Actor_c4 {
public:
    ActorUnkCAMS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCAMS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCAMS();

    /* 4C */ virtual ~ActorUnkCAMS() override;
};

class ActorProfileUnkCAMS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCAMS();
    ~ActorProfileUnkCAMS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCAMS *GetProfile();
};
