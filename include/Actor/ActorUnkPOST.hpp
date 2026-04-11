//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

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
