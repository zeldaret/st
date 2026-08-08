//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor CAMA ---

class ActorUnkCAMA_C4 : public Actor_C4 {
public:
    ActorUnkCAMA_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
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

class ActorUnkCAMB_C4 : public Actor_C4 {
public:
    ActorUnkCAMB_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
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

class ActorUnkCAMS_C4 : public Actor_C4 {
public:
    ActorUnkCAMS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
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
