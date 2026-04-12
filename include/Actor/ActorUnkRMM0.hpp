//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMM0_c4 : public Actor_c4 {
public:
    ActorUnkRMM0_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMM0 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMM0();

    /* 4C */ virtual ~ActorUnkRMM0() override;

    void func_ov072_02150ed0(void);
    void func_ov072_02150ee4(void);
    void func_ov072_02150f08(void);
    void func_ov072_02150f1c(void);
    void func_ov072_02151230(void);
    void func_ov072_02151668(void);
    void func_ov072_02151764(void);
    void func_ov072_02151884(void);
    void func_ov072_021519dc(void);
    void func_ov072_02151af0(void);
    void func_ov072_02151b3c(void);
    void func_ov072_02151c98(void);
    void func_ov072_02151dc8(void);
    void func_ov072_02151e10(void);
    void func_ov072_02151e2c(void);
    void func_ov072_02151e58(void);
    void func_ov072_02151fd8(void);
};

class ActorProfileUnkRMM0 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMM0();
    ~ActorProfileUnkRMM0();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMM0 *GetProfile();
};
