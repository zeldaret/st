//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTRRL_c4 : public Actor_c4 {
public:
    ActorUnkTRRL_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkTRRL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTRRL();

    /* 4C */ virtual ~ActorUnkTRRL() override;

    void func_ov034_0211e5c0(void);
    void func_ov034_0211e790(void);
    void func_ov034_0211e7fc(void);
    void func_ov034_0211e818(void);
    void func_ov034_0211e81c(void);
    void func_ov034_0211e840(void);
    void func_ov034_0211e844(void);
    void func_ov034_0211e868(void);
    void func_ov034_0211e9ec(void);
    void func_ov034_0211ea20(void);
    void func_ov034_0211ea68(void);
    void func_ov034_0211eaa8(void);
    void func_ov034_0211eb0c(void);
    void func_ov034_0211ec20(void);
    void func_ov034_0211ec70(void);
    void func_ov034_0211ecc8(void);
    void func_ov034_0211ed34(void);
    void func_ov034_0211ed48(void);
    void func_ov034_0211edb4(void);
    void func_ov034_0211edcc(void);
    void func_ov034_0211ede4(void);
    void func_ov034_0211edfc(void);
    void func_ov034_0211ee24(void);
    void func_ov034_0211ee84(void);
    void func_ov034_0211eec0(void);
    void func_ov034_0211ef58(void);
    void func_ov034_0211ef94(void);
    void func_ov034_0211f308(void);
    void func_ov034_0211f544(void);
    void func_ov034_0211f56c(void);
    void func_ov034_0211f694(void);
    void func_ov034_0211f7d4(void);
    void func_ov034_0211f808(void);
    void func_ov034_0211fa44(void);
    void func_ov034_021202e4(void);
    void func_ov034_02120334(void);
    void func_ov034_0212044c(void);
    void func_ov034_02120464(void);
    void func_ov034_021204bc(void);
    void func_ov034_02120668(void);
    void func_ov034_0212093c(void);
    void func_ov034_02120a7c(void);
    void func_ov034_02120b34(void);
    void func_ov034_02120bdc(void);
    void func_ov034_02120c9c(void);
    void func_ov034_02120cb4(void);
};

class ActorProfileUnkTRRL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTRRL();
    ~ActorProfileUnkTRRL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTRRL *GetProfile();
};
