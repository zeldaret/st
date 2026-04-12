//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBEEE_c4 : public Actor_c4 {
public:
    ActorUnkBEEE_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBEEE : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBEEE();

    /* 4C */ virtual ~ActorUnkBEEE() override;

    void func_ov049_02130514(void);
    void func_ov049_02130638(void);
    void func_ov049_0213073c(void);
    void func_ov049_02130780(void);
    void func_ov049_02130808(void);
    void func_ov049_02130858(void);
    void func_ov049_021308ec(void);
    void func_ov049_02130970(void);
    void func_ov049_02130a54(void);
    void func_ov049_02130b74(void);
    void func_ov049_02130ca0(void);
    void func_ov049_02130cfc(void);
    void func_ov049_02130ea8(void);
    void func_ov049_02130eec(void);
    void func_ov049_02130f00(void);
    void func_ov049_02131208(void);
    void func_ov049_0213123c(void);
    void func_ov049_021312c0(void);
    void func_ov049_02131304(void);
    void func_ov049_0213136c(void);
    void func_ov049_021313b0(void);
};

class ActorProfileUnkBEEE : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBEEE();
    ~ActorProfileUnkBEEE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBEEE *GetProfile();
};
