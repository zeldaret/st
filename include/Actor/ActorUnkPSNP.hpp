//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPSNP_c4 : public Actor_c4 {
public:
    ActorUnkPSNP_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkPSNP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPSNP();

    /* 4C */ virtual ~ActorUnkPSNP() override;

    void func_ov059_021604b8(void);
    void func_ov059_021605c8(void);
    void func_ov059_021605d4(void);
    void func_ov059_02160608(void);
    void func_ov059_02160644(void);
    void func_ov059_02160698(void);
    void func_ov059_02160720(void);
    void func_ov059_0216074c(void);
    void func_ov059_0216079c(void);
    void func_ov059_02160908(void);
    void func_ov059_0216091c(void);
    void func_ov059_0216094c(void);
    void func_ov059_02160950(void);
    void func_ov059_02160980(void);
    void func_ov059_021609bc(void);
    void func_ov059_021609ec(void);
    void func_ov059_02160a38(void);
    void func_ov059_02160a68(void);
    void func_ov059_02160a78(void);
    void func_ov059_02160ab0(void);
    void func_ov059_02160b14(void);
    void func_ov059_02160b48(void);
    void func_ov059_02160ba4(void);
    void func_ov059_02160bd4(void);
    void func_ov059_02160c18(void);
    void func_ov059_02160c30(void);
    void func_ov059_02160c48(void);
    void func_ov059_02160cac(void);
    void func_ov059_02160cb0(void);
    void func_ov059_02160cc8(void);
    void func_ov059_02160d08(void);
    void func_ov059_02160db4(void);
};

class ActorProfileUnkPSNP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPSNP();
    ~ActorProfileUnkPSNP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPSNP *GetProfile();
};
