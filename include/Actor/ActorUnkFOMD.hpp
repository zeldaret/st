//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFOMD_c4 : public Actor_c4 {
public:
    ActorUnkFOMD_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFOMD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFOMD();

    /* 4C */ virtual ~ActorUnkFOMD() override;

    void func_ov064_021598b8(void);
    void func_ov064_021598cc(void);
    void func_ov064_021598e0(void);
    void func_ov064_0215990c(void);
    void func_ov064_02159924(void);
    void func_ov064_02159934(void);
    void func_ov064_0215998c(void);
    void func_ov064_021599e4(void);
    void func_ov064_02159a60(void);
    void func_ov064_02159a80(void);
    void func_ov064_02159ac0(void);
    void func_ov064_02159afc(void);
    void func_ov064_02159ca0(void);
    void func_ov064_02159cc0(void);
    void func_ov064_02159d04(void);
    void func_ov064_02159d28(void);
    void func_ov064_02159d38(void);
    void func_ov064_02159d8c(void);
    void func_ov064_02159dc4(void);
    void func_ov064_02159de8(void);
    void func_ov064_02159e14(void);
    void func_ov064_02159e30(void);
};

class ActorProfileUnkFOMD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFOMD();
    ~ActorProfileUnkFOMD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFOMD *GetProfile();
};
