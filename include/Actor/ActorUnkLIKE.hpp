//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkLIKE_c4 : public Actor_c4 {
public:
    ActorUnkLIKE_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkLIKE : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkLIKE();

    /* 4C */ virtual ~ActorUnkLIKE() override;

    void func_ov053_02138628(void);
    void func_ov053_02138690(void);
    void func_ov053_02138ab4(void);
    void func_ov053_02138ac8(void);
    void func_ov053_02138adc(void);
    void func_ov053_02138af0(void);
    void func_ov053_02138bb0(void);
    void func_ov053_02138c78(void);
    void func_ov053_02138cf8(void);
    void func_ov053_021392c4(void);
    void func_ov053_0213942c(void);
    void func_ov053_02139434(void);
    void func_ov053_021394a8(void);
    void func_ov053_021395f4(void);
    void func_ov053_0213985c(void);
    void func_ov053_021398d4(void);
    void func_ov053_02139a5c(void);
    void func_ov053_02139ad4(void);
    void func_ov053_02139c30(void);
    void func_ov053_02139c9c(void);
    void func_ov053_02139cf8(void);
    void func_ov053_02139e34(void);
    void func_ov053_0213a0f8(void);
    void func_ov053_0213a188(void);
    void func_ov053_0213a1bc(void);
    void func_ov053_0213a220(void);
    void func_ov053_0213a254(void);
    void func_ov053_0213a364(void);
    void func_ov053_0213a46c(void);
    void func_ov053_0213a50c(void);
    void func_ov053_0213a6b0(void);
    void func_ov053_0213a760(void);
    void func_ov053_0213a7bc(void);
    void func_ov053_0213a834(void);
    void func_ov053_0213a8b8(void);
    void func_ov053_0213a958(void);
    void func_ov053_0213a9ac(void);
    void func_ov053_0213aa38(void);
    void func_ov053_0213aa80(void);
    void func_ov053_0213ab44(void);
    void func_ov053_0213ad24(void);
    void func_ov053_0213aeac(void);
    void func_ov053_0213af04(void);
    void func_ov053_0213af54(void);
    void func_ov053_0213afe4(void);
    void func_ov053_0213affc(void);
    void func_ov053_0213b108(void);
    void func_ov053_0213b1b4(void);
    void func_ov053_0213b1d8(void);
    void func_ov053_0213b1e8(void);
    void func_ov053_0213b1f0(void);
    void func_ov053_0213b214(void);
    void func_ov053_0213b240(void);
    void func_ov053_0213b25c(void);
    void func_ov053_0213b278(void);
};

class ActorProfileUnkLIKE : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkLIKE();
    ~ActorProfileUnkLIKE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkLIKE *GetProfile();
};
