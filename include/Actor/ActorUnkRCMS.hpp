//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRCMS_c4 : public Actor_c4 {
public:
    ActorUnkRCMS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRCMS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRCMS();

    /* 4C */ virtual ~ActorUnkRCMS() override;

    void func_ov055_0213bef0(void);
    void func_ov055_0213bf24(void);
    void func_ov055_0213bf60(void);
    void func_ov055_0213bf7c(void);
    void func_ov055_0213bf98(void);
    void func_ov055_0213bfd4(void);
    void func_ov055_0213bff8(void);
    void func_ov055_0213c01c(void);
    void func_ov055_0213c214(void);
    void func_ov055_0213c228(void);
    void func_ov055_0213c2a4(void);
    void func_ov055_0213c2f4(void);
    void func_ov055_0213c34c(void);
    void func_ov055_0213c350(void);
    void func_ov055_0213c354(void);
    void func_ov055_0213c358(void);
    void func_ov055_0213c39c(void);
    void func_ov055_0213c3b0(void);
    void func_ov055_0213c478(void);
    void func_ov055_0213c498(void);
    void func_ov055_0213c630(void);
    void func_ov055_0213c640(void);
    void func_ov055_0213c6a4(void);
    void func_ov055_0213c6b8(void);
    void func_ov055_0213c6bc(void);
    void func_ov055_0213c6fc(void);
    void func_ov055_0213c808(void);
    void func_ov055_0213ca5c(void);
    void func_ov055_0213ca80(void);
    void func_ov055_0213cb78(void);
    void func_ov055_0213cd34(void);
    void func_ov055_0213ce94(void);
    void func_ov055_0213cf58(void);
    void func_ov055_0213cfb4(void);
    void func_ov055_0213cff0(void);
    void func_ov055_0213d068(void);
    void func_ov055_0213d06c(void);
    void func_ov055_0213d120(void);
    void func_ov055_0213d1a0(void);
    void func_ov055_0213d20c(void);
    void func_ov055_0213d228(void);
};

class ActorProfileUnkRCMS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRCMS();
    ~ActorProfileUnkRCMS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRCMS *GetProfile();
};
