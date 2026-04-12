//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWIDT_c4 : public Actor_c4 {
public:
    ActorUnkWIDT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWIDT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWIDT();

    /* 4C */ virtual ~ActorUnkWIDT() override;

    void func_ov084_0215c6d4(void);
    void func_ov084_0215c780(void);
    void func_ov084_0215c910(void);
    void func_ov084_0215c924(void);
    void func_ov084_0215c9a8(void);
    void func_ov084_0215c9e4(void);
    void func_ov084_0215cac0(void);
    void func_ov084_0215caf4(void);
    void func_ov084_0215cb58(void);
    void func_ov084_0215cb74(void);
    void func_ov084_0215cc3c(void);
    void func_ov084_0215cc4c(void);
    void func_ov084_0215ccbc(void);
    void func_ov084_0215cd28(void);
    void func_ov084_0215cdd0(void);
    void func_ov084_0215ce90(void);
    void func_ov084_0215cf74(void);
    void func_ov084_0215cfac(void);
    void func_ov084_0215d044(void);
};

class ActorProfileUnkWIDT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkWIDT();
    ~ActorProfileUnkWIDT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWIDT *GetProfile();
};
