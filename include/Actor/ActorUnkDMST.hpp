//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMST_c4 : public Actor_c4 {
public:
    ActorUnkDMST_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDMST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMST();

    /* 4C */ virtual ~ActorUnkDMST() override;

    void func_ov088_02171274(void);
    void func_ov088_021712c8(void);
    void func_ov088_021712d8(void);
    void func_ov088_021712ec(void);
    void func_ov088_02171300(void);
    void func_ov088_02171350(void);
};

class ActorProfileUnkDMST : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMST();
    ~ActorProfileUnkDMST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMST *GetProfile();
};
