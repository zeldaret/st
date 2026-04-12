//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOCTA_c4 : public Actor_c4 {
public:
    ActorUnkOCTA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkOCTA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOCTA();

    /* 4C */ virtual ~ActorUnkOCTA() override;

    void func_ov042_02123e4c(void);
    void func_ov042_02123e60(void);
    void func_ov042_02123e88(void);
    void func_ov042_02123ef8(void);
    void func_ov042_02123f18(void);
    void func_ov042_02123f60(void);
    void func_ov042_021241cc(void);
    void func_ov042_02124338(void);
    void func_ov042_021243f4(void);
    void func_ov042_021244d8(void);
    void func_ov042_021245f4(void);
    void func_ov042_021246a8(void);
    void func_ov042_021246e0(void);
    void func_ov042_0212474c(void);
    void func_ov042_02124800(void);
    void func_ov042_0212488c(void);
    void func_ov042_021248b0(void);
    void func_ov042_02124944(void);
    void func_ov042_02124998(void);
    void func_ov042_02124a0c(void);
    void func_ov042_02124c44(void);
    void func_ov042_02124cb0(void);
    void func_ov042_02124dac(void);
    void func_ov042_02124e24(void);
    void func_ov042_02124f60(void);
    void func_ov042_02125028(void);
    void func_ov042_0212504c(void);
    void func_ov042_02125094(void);
    void func_ov042_02125110(void);
};

class ActorProfileUnkOCTA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkOCTA();
    ~ActorProfileUnkOCTA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOCTA *GetProfile();
};
