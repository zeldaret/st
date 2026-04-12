//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkZELD_c4 : public Actor_c4 {
public:
    ActorUnkZELD_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkZELD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkZELD();

    /* 4C */ virtual ~ActorUnkZELD() override;

    void func_ov039_02119410(void);
    void func_ov039_02119424(void);
    void func_ov039_02119438(void);
    void func_ov039_0211944c(void);
    void func_ov039_021194f8(void);
    void func_ov039_02119524(void);
    void func_ov039_021195b4(void);
    void func_ov039_02119654(void);
    void func_ov039_021196e8(void);
    void func_ov039_02119788(void);
    void func_ov039_02119968(void);
    void func_ov039_021199c0(void);
    void func_ov039_02119b5c(void);
    void func_ov039_02119bb4(void);
    void func_ov039_02119d04(void);
    void func_ov039_02119d28(void);
    void func_ov039_02119d38(void);
    void func_ov039_02119d40(void);
    void func_ov039_02119d5c(void);
    void func_ov039_02119d78(void);
    void func_ov039_02119d94(void);
    void func_ov039_02119db8(void);
    void func_ov039_02119de4(void);
    void func_ov039_02119e00(void);
};

class ActorProfileUnkZELD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkZELD();
    ~ActorProfileUnkZELD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZELD *GetProfile();
};
