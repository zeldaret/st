//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRLST_c4 : public Actor_c4 {
public:
    ActorUnkRLST_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRLST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRLST();

    /* 4C */ virtual ~ActorUnkRLST() override;

    void func_ov031_020f8354(void);
    void func_ov031_020f83e4(void);
    void func_ov031_020f849c(void);
    void func_ov031_020f8674(void);
    void func_ov031_020f8688(void);
    void func_ov031_020f869c(void);
    void func_ov031_020f878c(void);
    void func_ov031_020f8824(void);
    void func_ov031_020f8880(void);
    void func_ov031_020f8948(void);
    void func_ov031_020f89f4(void);
    void func_ov031_020f8a04(void);
    void func_ov031_020f8a2c(void);
    void func_ov031_020f8a38(void);
    void func_ov031_020f8a3c(void);
    void func_ov031_020f8a58(void);
    void func_ov031_020f8b58(void);
    void func_ov031_020f8bc4(void);
    void func_ov031_020f8de8(void);
    void func_ov031_020f8ed4(void);
    void func_ov031_020f8f0c(void);
    void func_ov031_020f8f10(void);
    void func_ov031_020f8f30(void);
    void func_ov031_020f9018(void);
    void func_ov031_020f9050(void);
    void func_ov031_020f916c(void);
    void func_ov031_020f91ac(void);
    void func_ov031_020f9250(void);
    void func_ov031_020f92cc(void);
    void func_ov031_020f9340(void);
    void func_ov031_020f93bc(void);
    void func_ov031_020f9494(void);
    void func_ov031_020f9554(void);
    void func_ov031_020f97cc(void);
    void func_ov031_020f98e4(void);
    void func_ov031_020f9af4(void);
    void func_ov031_020f9af8(void);
    void func_ov031_020f9ba4(void);
    void func_ov031_020f9cc0(void);
    void func_ov031_020f9cf4(void);
    void func_ov031_020f9d60(void);
};

class ActorProfileUnkRLST : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRLST();
    ~ActorProfileUnkRLST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRLST *GetProfile();
};
