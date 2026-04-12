//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFWV_c4 : public Actor_c4 {
public:
    ActorUnkEFWV_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkEFWV : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFWV();

    /* 4C */ virtual ~ActorUnkEFWV() override;

    void func_ov098_0218117c(void);
    void func_ov098_02181218(void);
    void func_ov098_0218122c(void);
    void func_ov098_021812dc(void);
    void func_ov098_02181378(void);
    void func_ov098_021813c8(void);
    void func_ov098_021813dc(void);
    void func_ov098_02181410(void);
    void func_ov098_0218142c(void);
    void func_ov098_02181600(void);
    void func_ov098_02181624(void);
    void func_ov098_02181634(void);
    void func_ov098_0218163c(void);
    void func_ov098_02181658(void);
};

class ActorProfileUnkEFWV : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFWV();
    ~ActorProfileUnkEFWV();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFWV *GetProfile();
};
