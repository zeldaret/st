//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMMS_c4 : public Actor_c4 {
public:
    ActorUnkDMMS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkDMMS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMMS();

    /* 4C */ virtual ~ActorUnkDMMS() override;

    void func_ov088_02171c28(void);
    void func_ov088_02171c7c(void);
    void func_ov088_02171c8c(void);
    void func_ov088_02171ca0(void);
    void func_ov088_02171cb4(void);
};

class ActorProfileUnkDMMS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMMS();
    ~ActorProfileUnkDMMS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMMS *GetProfile();
};
