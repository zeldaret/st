//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOCWS_C4 : public Actor_C4 {
public:
    ActorUnkOCWS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkOCWS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOCWS();

    /* 4C */ virtual ~ActorUnkOCWS() override;

    void func_ov079_02155228(void);
    void func_ov079_0215523c(void);
    void func_ov079_021552e8(void);
    void func_ov079_02155530(void);
    void func_ov079_0215564c(void);
    void func_ov079_0215566c(void);
    void func_ov079_02155710(void);
    void func_ov079_02155758(void);
    void func_ov079_02155790(void);
    void func_ov079_0215585c(void);
    void func_ov079_02155898(void);
    void func_ov079_02155928(void);
};

class ActorProfileUnkOCWS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkOCWS();
    ~ActorProfileUnkOCWS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOCWS *GetProfile();
};
