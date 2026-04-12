//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFIML_c4 : public Actor_c4 {
public:
    ActorUnkFIML_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFIML : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFIML();

    /* 4C */ virtual ~ActorUnkFIML() override;

    void func_ov035_0211bdf8(void);
    void func_ov035_0211be0c(void);
    void func_ov035_0211bf40(void);
    void func_ov035_0211bf74(void);
    void func_ov035_0211bfe8(void);
    void func_ov035_0211c55c(void);
    void func_ov035_0211c594(void);
    void func_ov035_0211c5c4(void);
    void func_ov035_0211c5e8(void);
    void func_ov035_0211c68c(void);
    void func_ov035_0211c754(void);
    void func_ov035_0211c768(void);
    void func_ov035_0211c780(void);
    void func_ov035_0211c8f0(void);
    void func_ov035_0211cc70(void);
    void func_ov035_0211ccd8(void);
    void func_ov035_0211cd0c(void);
    void func_ov035_0211cdd0(void);
    void func_ov035_0211d128(void);
    void func_ov035_0211d1a8(void);
    void func_ov035_0211d270(void);
    void func_ov035_0211d2d8(void);
    void func_ov035_0211d37c(void);
    void func_ov035_0211d430(void);
    void func_ov035_0211d5a0(void);
    void func_ov035_0211d620(void);
    void func_ov035_0211d7b8(void);
    void func_ov035_0211d7f4(void);
    void func_ov035_0211d814(void);
    void func_ov035_0211d870(void);
    void func_ov035_0211d8fc(void);
    void func_ov035_0211db34(void);
    void func_ov035_0211db48(void);
    void func_ov035_0211db74(void);
    void func_ov035_0211dc10(void);
    void func_ov035_0211dc68(void);
    void func_ov035_0211dcc4(void);
    void func_ov035_0211dd10(void);
    void func_ov035_0211dd2c(void);
    void func_ov035_0211e050(void);
    void func_ov035_0211e05c(void);
    void func_ov035_0211e370(void);
    void func_ov035_0211e460(void);
};

class ActorProfileUnkFIML : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFIML();
    ~ActorProfileUnkFIML();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFIML *GetProfile();
};
