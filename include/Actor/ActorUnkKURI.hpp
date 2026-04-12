//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkKURI_c4 : public Actor_c4 {
public:
    ActorUnkKURI_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkKURI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkKURI();

    /* 4C */ virtual ~ActorUnkKURI() override;

    void func_ov032_02119248(void);
    void func_ov032_0211925c(void);
    void func_ov032_02119270(void);
    void func_ov032_02119390(void);
    void func_ov032_02119458(void);
    void func_ov032_021194dc(void);
    void func_ov032_0211953c(void);
    void func_ov032_02119584(void);
    void func_ov032_021198dc(void);
    void func_ov032_02119990(void);
    void func_ov032_02119a0c(void);
    void func_ov032_02119be8(void);
    void func_ov032_02119c80(void);
    void func_ov032_02119d7c(void);
    void func_ov032_02119df4(void);
    void func_ov032_02119e90(void);
    void func_ov032_02119f40(void);
    void func_ov032_0211a140(void);
    void func_ov032_0211a20c(void);
    void func_ov032_0211a484(void);
    void func_ov032_0211a52c(void);
    void func_ov032_0211a7b8(void);
    void func_ov032_0211a86c(void);
    void func_ov032_0211a950(void);
    void func_ov032_0211a9c8(void);
    void func_ov032_0211aa40(void);
    void func_ov032_0211aac8(void);
    void func_ov032_0211ab20(void);
    void func_ov032_0211abc0(void);
    void func_ov032_0211ac20(void);
    void func_ov032_0211ac94(void);
    void func_ov032_0211ad40(void);
    void func_ov032_0211adf4(void);
    void func_ov032_0211b024(void);
    void func_ov032_0211b064(void);
    void func_ov032_0211b114(void);
    void func_ov032_0211b17c(void);
    void func_ov032_0211b190(void);
    void func_ov032_0211b1e0(void);
    void func_ov032_0211b298(void);
    void func_ov032_0211b37c(void);
    void func_ov032_0211b3b0(void);
    void func_ov032_0211b408(void);
    void func_ov032_0211b570(void);
    void func_ov032_0211b5b4(void);
    void func_ov032_0211b5d0(void);
    void func_ov032_0211b5f4(void);
    void func_ov032_0211b618(void);
    void func_ov032_0211b628(void);
    void func_ov032_0211b630(void);
    void func_ov032_0211b654(void);
    void func_ov032_0211b680(void);
    void func_ov032_0211b69c(void);
};

class ActorProfileUnkKURI : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkKURI();
    ~ActorProfileUnkKURI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkKURI *GetProfile();
};
