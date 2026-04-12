//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBWT_c4 : public Actor_c4 {
public:
    ActorUnkRBWT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRBWT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBWT();

    /* 4C */ virtual ~ActorUnkRBWT() override;

    void func_ov083_0215b8c0(void);
    void func_ov083_0215b9ac(void);
    void func_ov083_0215bcb8(void);
    void func_ov083_0215bcf0(void);
    void func_ov083_0215bd64(void);
    void func_ov083_0215bd78(void);
    void func_ov083_0215bdac(void);
    void func_ov083_0215bdec(void);
    void func_ov083_0215bdfc(void);
    void func_ov083_0215bec4(void);
    void func_ov083_0215bed8(void);
    void func_ov083_0215bfc4(void);
    void func_ov083_0215c0f4(void);
    void func_ov083_0215c114(void);
    void func_ov083_0215c120(void);
    void func_ov083_0215c144(void);
    void func_ov083_0215c154(void);
    void func_ov083_0215c15c(void);
};

class ActorProfileUnkRBWT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBWT();
    ~ActorProfileUnkRBWT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBWT *GetProfile();
};
