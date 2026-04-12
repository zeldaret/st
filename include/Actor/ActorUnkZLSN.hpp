//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkZLSN_c4 : public Actor_c4 {
public:
    ActorUnkZLSN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkZLSN : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkZLSN();

    /* 4C */ virtual ~ActorUnkZLSN() override;

    void func_ov060_0215f148(void);
    void func_ov060_0215f15c(void);
    void func_ov060_0215f170(void);
    void func_ov060_0215f184(void);
    void func_ov060_0215f2ec(void);
    void func_ov060_0215f330(void);
    void func_ov060_0215f4ec(void);
    void func_ov060_0215f55c(void);
    void func_ov060_0215f5d0(void);
    void func_ov060_0215f78c(void);
    void func_ov060_0215f7c4(void);
    void func_ov060_0215f7d0(void);
    void func_ov060_0215f80c(void);
    void func_ov060_0215f814(void);
    void func_ov060_0215f924(void);
    void func_ov060_0215f9e0(void);
    void func_ov060_0215fba8(void);
    void func_ov060_0215fc80(void);
    void func_ov060_0215fd38(void);
    void func_ov060_0215fe7c(void);
    void func_ov060_0215ff48(void);
    void func_ov060_021600c0(void);
    void func_ov060_021600cc(void);
    void func_ov060_021600e8(void);
    void func_ov060_02160104(void);
};

class ActorProfileUnkZLSN : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkZLSN();
    ~ActorProfileUnkZLSN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZLSN *GetProfile();
};
