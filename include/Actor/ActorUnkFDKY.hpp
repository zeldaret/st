//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFDKY_c4 : public Actor_c4 {
public:
    ActorUnkFDKY_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFDKY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFDKY();

    /* 4C */ virtual ~ActorUnkFDKY() override;

    void func_ov030_0214c3b4(void);
    void func_ov030_0214c3e4(void);
    void func_ov030_0214c4dc(void);
    void func_ov030_0214c884(void);
    void func_ov030_0214ca24(void);
    void func_ov030_0214ca34(void);
    void func_ov030_0214cab0(void);
    void func_ov030_0214caf0(void);
    void func_ov030_0214cb28(void);
    void func_ov030_0214cb44(void);
    void func_ov030_0214cb50(void);
    void func_ov030_0214cc68(void);
    void func_ov030_0214cdc0(void);
};

class ActorProfileUnkFDKY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFDKY();
    ~ActorProfileUnkFDKY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFDKY *GetProfile();
};
