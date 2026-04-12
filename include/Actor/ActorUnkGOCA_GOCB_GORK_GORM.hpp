//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor GOCA ---

class ActorUnkGOCA_c4 : public Actor_c4 {
public:
    ActorUnkGOCA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkGOCA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGOCA();

    /* 4C */ virtual ~ActorUnkGOCA() override;
};

class ActorProfileUnkGOCA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGOCA();
    ~ActorProfileUnkGOCA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGOCA *GetProfile();
};

// --- Actor GOCB ---

class ActorUnkGOCB_c4 : public Actor_c4 {
public:
    ActorUnkGOCB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkGOCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGOCB();

    /* 4C */ virtual ~ActorUnkGOCB() override;
};

class ActorProfileUnkGOCB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGOCB();
    ~ActorProfileUnkGOCB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGOCB *GetProfile();
};

// --- Actor GORK ---

class ActorUnkGORK_c4 : public Actor_c4 {
public:
    ActorUnkGORK_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkGORK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGORK();

    /* 4C */ virtual ~ActorUnkGORK() override;
};

class ActorProfileUnkGORK : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGORK();
    ~ActorProfileUnkGORK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGORK *GetProfile();
};

// --- Actor GORM ---

class ActorUnkGORM_c4 : public Actor_c4 {
public:
    ActorUnkGORM_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkGORM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGORM();

    /* 4C */ virtual ~ActorUnkGORM() override;
};

class ActorProfileUnkGORM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkGORM();
    ~ActorProfileUnkGORM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGORM *GetProfile();
};
