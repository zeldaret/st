//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSTWH_c4 : public Actor_c4 {
public:
    ActorUnkSTWH_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSTWH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSTWH();

    /* 4C */ virtual ~ActorUnkSTWH() override;

    void func_ov052_021331ec(void);
    void func_ov052_02133220(void);
    void func_ov052_0213325c(void);
    void func_ov052_0213327c(void);
    void func_ov052_02133500(void);
    void func_ov052_02133514(void);
    void func_ov052_02133528(void);
    void func_ov052_02133578(void);
    void func_ov052_021335a8(void);
    void func_ov052_0213363c(void);
    void func_ov052_021336c0(void);
    void func_ov052_0213372c(void);
    void func_ov052_02133754(void);
    void func_ov052_021337d8(void);
    void func_ov052_021338ac(void);
    void func_ov052_02133998(void);
    void func_ov052_02133a98(void);
    void func_ov052_02133a9c(void);
    void func_ov052_02133ae8(void);
    void func_ov052_02133aec(void);
    void func_ov052_02133b30(void);
    void func_ov052_02133bc4(void);
    void func_ov052_02133c5c(void);
    void func_ov052_02133ce8(void);
    void func_ov052_02133e3c(void);
    void func_ov052_02133ea0(void);
    void func_ov052_02133ea4(void);
    void func_ov052_02133f20(void);
    void func_ov052_02133ff0(void);
    void func_ov052_0213409c(void);
    void func_ov052_021341d4(void);
    void func_ov052_02134264(void);
    void func_ov052_02134318(void);
    void func_ov052_021343d8(void);
    void func_ov052_02134470(void);
    void func_ov052_02134494(void);
    void func_ov052_02134520(void);
    void func_ov052_021345bc(void);
    void func_ov052_021346fc(void);
    void func_ov052_021347a8(void);
    void func_ov052_021347cc(void);
    void func_ov052_0213482c(void);
    void func_ov052_02134858(void);
    void func_ov052_02134918(void);
    void func_ov052_02134928(void);
    void func_ov052_0213498c(void);
    void func_ov052_02134b88(void);
    void func_ov052_02134bcc(void);
    void func_ov052_02134c74(void);
    void func_ov052_02134c98(void);
    void func_ov052_02134ca8(void);
    void func_ov052_02134ccc(void);
    void func_ov052_02134d28(void);
};

class ActorProfileUnkSTWH : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSTWH();
    ~ActorProfileUnkSTWH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSTWH *GetProfile();
};
