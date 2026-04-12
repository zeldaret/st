//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkIBBA_c4 : public Actor_c4 {
public:
    ActorUnkIBBA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkIBBA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkIBBA();

    /* 4C */ virtual ~ActorUnkIBBA() override;

    void func_ov044_0212a4fc(void);
    void func_ov044_0212a5ec(void);
    void func_ov044_0212a814(void);
    void func_ov044_0212a828(void);
    void func_ov044_0212a83c(void);
    void func_ov044_0212a850(void);
    void func_ov044_0212a980(void);
    void func_ov044_0212aa1c(void);
    void func_ov044_0212aa64(void);
    void func_ov044_0212ad0c(void);
    void func_ov044_0212ad40(void);
    void func_ov044_0212ad44(void);
    void func_ov044_0212add4(void);
    void func_ov044_0212b020(void);
    void func_ov044_0212b374(void);
    void func_ov044_0212b510(void);
    void func_ov044_0212b538(void);
    void func_ov044_0212b54c(void);
    void func_ov044_0212b5d8(void);
    void func_ov044_0212b614(void);
    void func_ov044_0212b670(void);
    void func_ov044_0212b6a8(void);
    void func_ov044_0212b6c4(void);
    void func_ov044_0212b6e0(void);
};

class ActorProfileUnkIBBA : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkIBBA();
    ~ActorProfileUnkIBBA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkIBBA *GetProfile();
};
