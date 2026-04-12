//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOCGS_c4 : public Actor_c4 {
public:
    ActorUnkOCGS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkOCGS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOCGS();

    /* 4C */ virtual ~ActorUnkOCGS() override;

    void func_ov086_0215b0fc(void);
    void func_ov086_0215b110(void);
    void func_ov086_0215b194(void);
    void func_ov086_0215b3e8(void);
    void func_ov086_0215b504(void);
    void func_ov086_0215b5a8(void);
    void func_ov086_0215b5f0(void);
    void func_ov086_0215b628(void);
    void func_ov086_0215b6f4(void);
    void func_ov086_0215b730(void);
    void func_ov086_0215b7c0(void);
};

class ActorProfileUnkOCGS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkOCGS();
    ~ActorProfileUnkOCGS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOCGS *GetProfile();
};
