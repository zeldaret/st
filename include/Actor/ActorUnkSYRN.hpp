//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSYRN_c4 : public Actor_c4 {
public:
    ActorUnkSYRN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSYRN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSYRN();

    /* 4C */ virtual ~ActorUnkSYRN() override;

    void func_ov094_02169854(void);
    void func_ov094_02169868(void);
    void func_ov094_0216994c(void);
    void func_ov094_021699ec(void);
    void func_ov094_02169b24(void);
    void func_ov094_02169c24(void);
    void func_ov094_02169c2c(void);
    void func_ov094_02169c44(void);
    void func_ov094_02169cfc(void);
    void func_ov094_02169dd0(void);
    void func_ov094_02169eb4(void);
    void func_ov094_02169f54(void);
    void func_ov094_02169ffc(void);
    void func_ov094_0216a020(void);
    void func_ov094_0216a030(void);
    void func_ov094_0216a04c(void);
    void func_ov094_0216a070(void);
    void func_ov094_0216a09c(void);
    void func_ov094_0216a0b8(void);
};

class ActorProfileUnkSYRN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSYRN();
    ~ActorProfileUnkSYRN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSYRN *GetProfile();
};
