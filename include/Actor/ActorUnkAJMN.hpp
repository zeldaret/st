//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkAJMN_c4 : public Actor_c4 {
public:
    ActorUnkAJMN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkAJMN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkAJMN();

    /* 4C */ virtual ~ActorUnkAJMN() override;

    void func_ov068_021580ec(void);
    void func_ov068_02158124(void);
    void func_ov068_0215815c(void);
    void func_ov068_02158168(void);
    void func_ov068_021581b0(void);
    void func_ov068_021581e8(void);
    void func_ov068_021581ec(void);
    void func_ov068_02158210(void);
    void func_ov068_02158230(void);
    void func_ov068_02158404(void);
    void func_ov068_02158408(void);
    void func_ov068_0215852c(void);
    void func_ov068_02158530(void);
    void func_ov068_02158600(void);
    void func_ov068_02158604(void);
    void func_ov068_0215866c(void);
    void func_ov068_02158718(void);
    void func_ov068_021587cc(void);
    void func_ov068_02158838(void);
    void func_ov068_0215891c(void);
    void func_ov068_0215898c(void);
    void func_ov068_02158a18(void);
};

class ActorProfileUnkAJMN : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkAJMN();
    ~ActorProfileUnkAJMN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkAJMN *GetProfile();
};
