//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMABC_c4 : public Actor_c4 {
public:
    ActorUnkMABC_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkMABC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMABC();

    /* 4C */ virtual ~ActorUnkMABC() override;

    void func_ov092_02174670(void);
    void func_ov092_02174730(void);
    void func_ov092_02174798(void);
    void func_ov092_021748b8(void);
    void func_ov092_021748e4(void);
    void func_ov092_02174ab4(void);
    void func_ov092_02174be8(void);
    void func_ov092_02174d9c(void);
    void func_ov092_02174f18(void);
    void func_ov092_02175134(void);
};

class ActorProfileUnkMABC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMABC();
    ~ActorProfileUnkMABC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMABC *GetProfile();
};
