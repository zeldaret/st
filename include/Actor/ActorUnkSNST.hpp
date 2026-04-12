//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSNST_c4 : public Actor_c4 {
public:
    ActorUnkSNST_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSNST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSNST();

    /* 4C */ virtual ~ActorUnkSNST() override;

    void func_ov026_0211ab1c(void);
    void func_ov026_0211ab30(void);
    void func_ov026_0211abc0(void);
    void func_ov026_0211ac3c(void);
    void func_ov026_0211ac44(void);
    void func_ov026_0211ac70(void);
    void func_ov026_0211ace8(void);
};

class ActorProfileUnkSNST : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSNST();
    ~ActorProfileUnkSNST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSNST *GetProfile();
};
