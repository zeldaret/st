//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGOVT_c4 : public Actor_c4 {
public:
    ActorUnkGOVT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkGOVT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGOVT();

    /* 4C */ virtual ~ActorUnkGOVT() override;

    void func_ov030_0214cf58(void);
    void func_ov030_0214cf9c(void);
    void func_ov030_0214cfe0(void);
    void func_ov030_0214d018(void);
    void func_ov030_0214d050(void);
    void func_ov030_0214d054(void);
    void func_ov030_0214d078(void);
    void func_ov030_0214d278(void);
    void func_ov030_0214d594(void);
    void func_ov030_0214d5d4(void);
    void func_ov030_0214d5d8(void);
    void func_ov030_0214d604(void);
    void func_ov030_0214d624(void);
};

class ActorProfileUnkGOVT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkGOVT();
    ~ActorProfileUnkGOVT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGOVT *GetProfile();
};
