//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBEEH_c4 : public Actor_c4 {
public:
    ActorUnkBEEH_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBEEH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBEEH();

    /* 4C */ virtual ~ActorUnkBEEH() override;

    void func_ov049_021315e8(void);
    void func_ov049_021316bc(void);
    void func_ov049_021317e4(void);
    void func_ov049_02131828(void);
    void func_ov049_021318b8(void);
    void func_ov049_02131908(void);
    void func_ov049_02131940(void);
    void func_ov049_021319bc(void);
    void func_ov049_02131b04(void);
    void func_ov049_02131b08(void);
    void func_ov049_02131b30(void);
    void func_ov049_02131be4(void);
    void func_ov049_02131ca0(void);
    void func_ov049_02131cac(void);
    void func_ov049_02131d94(void);
    void func_ov049_02131dfc(void);
    void func_ov049_02131e2c(void);
    void func_ov049_02131e58(void);
    void func_ov049_02131f60(void);
    void func_ov049_02131fc4(void);
};

class ActorProfileUnkBEEH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBEEH();
    ~ActorProfileUnkBEEH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBEEH *GetProfile();
};
