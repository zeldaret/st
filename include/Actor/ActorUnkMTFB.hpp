//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMTFB_c4 : public Actor_c4 {
public:
    ActorUnkMTFB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkMTFB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMTFB();

    /* 4C */ virtual ~ActorUnkMTFB() override;

    void func_ov092_02171be8(void);
    void func_ov092_02171cb4(void);
    void func_ov092_02171d60(void);
    void func_ov092_02171f14(void);
    void func_ov092_02172070(void);
    void func_ov092_0217207c(void);
    void func_ov092_02172190(void);
    void func_ov092_021722ac(void);
    void func_ov092_021722c0(void);
    void func_ov092_02172420(void);
    void func_ov092_02172544(void);
    void func_ov092_021726e4(void);
    void func_ov092_021728ec(void);
    void func_ov092_02172920(void);
    void func_ov092_02172940(void);
    void func_ov092_02172ca4(void);
    void func_ov092_02172d30(void);
    void func_ov092_02172e38(void);
    void func_ov092_02172eb4(void);
    void func_ov092_021730ac(void);
    void func_ov092_02173294(void);
    void func_ov092_02173324(void);
    void func_ov092_02173354(void);
    void func_ov092_021734cc(void);
    void func_ov092_02173518(void);
    void func_ov092_021735b8(void);
};

class ActorProfileUnkMTFB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMTFB();
    ~ActorProfileUnkMTFB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMTFB *GetProfile();
};
