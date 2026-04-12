//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPOST_c4 : public Actor_c4 {
public:
    ActorUnkPOST_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkPOST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPOST();

    /* 4C */ virtual ~ActorUnkPOST() override;

    void func_ov049_02134854(void);
    void func_ov049_02134c34(void);
    void func_ov049_02134ce8(void);
    void func_ov049_02134d4c(void);
    void func_ov049_02134d98(void);
    void func_ov049_02134dcc(void);
    void func_ov049_02134de0(void);
    void func_ov049_02134e20(void);
    void func_ov049_02134e24(void);
    void func_ov049_02134e48(void);
    void func_ov049_02134e54(void);
    void func_ov049_02134ed8(void);
    void func_ov049_02134f6c(void);
    void func_ov049_02135074(void);
    void func_ov049_02135100(void);
    void func_ov049_021351cc(void);
};

class ActorProfileUnkPOST : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPOST();
    ~ActorProfileUnkPOST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPOST *GetProfile();
};
