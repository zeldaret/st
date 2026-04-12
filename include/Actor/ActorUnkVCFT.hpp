//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkVCFT_c4 : public Actor_c4 {
public:
    ActorUnkVCFT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkVCFT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkVCFT();

    /* 4C */ virtual ~ActorUnkVCFT() override;

    void func_ov066_02158e2c(void);
    void func_ov066_02158eb4(void);
    void func_ov066_02158ec8(void);
    void func_ov066_0215ac68(void);
    void func_ov066_0215ae50(void);
    void func_ov066_0215b2f4(void);
    void func_ov066_0215b448(void);
    void func_ov066_0215b61c(void);
    void func_ov066_0215b67c(void);
    void func_ov066_0215b70c(void);
    void func_ov066_0215b830(void);
    void func_ov066_0215b848(void);
    void func_ov066_0215b864(void);
    void func_ov066_0215b8c4(void);
    void func_ov066_0215b938(void);
    void func_ov066_0215b9ac(void);
    void func_ov066_0215b9f4(void);
};

class ActorProfileUnkVCFT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkVCFT();
    ~ActorProfileUnkVCFT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkVCFT *GetProfile();
};
