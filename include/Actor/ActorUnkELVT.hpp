//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkELVT_c4 : public Actor_c4 {
public:
    ActorUnkELVT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkELVT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkELVT();

    /* 4C */ virtual ~ActorUnkELVT() override;

    void func_ov057_0213ac6c(void);
    void func_ov057_0213acc4(void);
    void func_ov057_0213ad14(void);
    void func_ov057_0213af30(void);
    void func_ov057_0213af44(void);
    void func_ov057_0213b080(void);
    void func_ov057_0213b274(void);
    void func_ov057_0213b2b4(void);
    void func_ov057_0213b4d0(void);
    void func_ov057_0213b51c(void);
    void func_ov057_0213b53c(void);
    void func_ov057_0213b5cc(void);
    void func_ov057_0213b5f8(void);
    void func_ov057_0213b698(void);
    void func_ov057_0213b6a8(void);
    void func_ov057_0213b6b0(void);
    void func_ov057_0213b6cc(void);
    void func_ov057_0213b70c(void);
};

class ActorProfileUnkELVT : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkELVT();
    ~ActorProfileUnkELVT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkELVT *GetProfile();
};
