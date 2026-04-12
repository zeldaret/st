//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWPCH_c4 : public Actor_c4 {
public:
    ActorUnkWPCH_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWPCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWPCH();

    /* 4C */ virtual ~ActorUnkWPCH() override;

    void func_ov058_0214d500(void);
    void func_ov058_0214d508(void);
    void func_ov058_0214d540(void);
    void func_ov058_0214d558(void);
    void func_ov058_0214d570(void);
    void func_ov058_0214d684(void);
    void func_ov058_0214d694(void);
};

class ActorProfileUnkWPCH : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkWPCH();
    ~ActorProfileUnkWPCH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWPCH *GetProfile();
};
