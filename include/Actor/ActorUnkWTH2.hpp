//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWTH2_c4 : public Actor_c4 {
public:
    ActorUnkWTH2_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWTH2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWTH2();

    /* 4C */ virtual ~ActorUnkWTH2() override;

    void func_ov046_02125084(void);
    void func_ov046_0212518c(void);
    void func_ov046_02125250(void);
    void func_ov046_021252b8(void);
    void func_ov046_02125378(void);
    void func_ov046_021253a8(void);
    void func_ov046_021253d8(void);
    void func_ov046_02125468(void);
    void func_ov046_021254c8(void);
    void func_ov046_02125528(void);
    void func_ov046_02125570(void);
    void func_ov046_02125630(void);
    void func_ov046_021256ac(void);
    void func_ov046_02125768(void);
    void func_ov046_02125854(void);
    void func_ov046_021258d8(void);
    void func_ov046_021259a4(void);
    void func_ov046_02125a44(void);
    void func_ov046_02125a80(void);
    void func_ov046_02125b10(void);
    void func_ov046_02125b4c(void);
    void func_ov046_02125e00(void);
    void func_ov046_02126244(void);
    void func_ov046_02126270(void);
    void func_ov046_0212631c(void);
    void func_ov046_02126350(void);
    void func_ov046_0212636c(void);
};

class ActorProfileUnkWTH2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWTH2();
    ~ActorProfileUnkWTH2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWTH2 *GetProfile();
};
