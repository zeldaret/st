//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLBCK_c4 : public Actor_c4 {
public:
    ActorUnkLBCK_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkLBCK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkLBCK();

    /* 4C */ virtual ~ActorUnkLBCK() override;

    void func_ov062_02159044(void);
    void func_ov062_02159078(void);
    void func_ov062_02159248(void);
    void func_ov062_0215925c(void);
    void func_ov062_02159270(void);
    void func_ov062_0215927c(void);
    void func_ov062_02159618(void);
    void func_ov062_0215963c(void);
    void func_ov062_021596e0(void);
    void func_ov062_0215995c(void);
    void func_ov062_021599a8(void);
};

class ActorProfileUnkLBCK : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkLBCK();
    ~ActorProfileUnkLBCK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkLBCK *GetProfile();
};
