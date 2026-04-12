//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkITTD_c4 : public Actor_c4 {
public:
    ActorUnkITTD_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkITTD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkITTD();

    /* 4C */ virtual ~ActorUnkITTD() override;

    void func_ov031_020e5b20(void);
    void func_ov031_020e5b34(void);
    void func_ov031_020e5c00(void);
    void func_ov031_020e5d18(void);
    void func_ov031_020e6148(void);
    void func_ov031_020e6158(void);
    void func_ov031_020e619c(void);
    void func_ov031_020e62c0(void);
    void func_ov031_020e6314(void);
    void func_ov031_020e6340(void);
    void func_ov031_020e6398(void);
    void func_ov031_020e6474(void);
};

class ActorProfileUnkITTD : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkITTD();
    ~ActorProfileUnkITTD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkITTD *GetProfile();
};
