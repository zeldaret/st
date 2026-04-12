//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDKCB_c4 : public Actor_c4 {
public:
    ActorUnkDKCB_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDKCB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDKCB();

    /* 4C */ virtual ~ActorUnkDKCB() override;

    void func_ov092_02178db4(void);
    void func_ov092_02178dbc(void);
    void func_ov092_02178e54(void);
    void func_ov092_02178e5c(void);
    void func_ov092_02178f38(void);
    void func_ov092_02179014(void);
    void func_ov092_02179050(void);
    void func_ov092_021791c8(void);
    void func_ov092_021794f0(void);
    void func_ov092_02179650(void);
};

class ActorProfileUnkDKCB : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkDKCB();
    ~ActorProfileUnkDKCB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDKCB *GetProfile();
};
