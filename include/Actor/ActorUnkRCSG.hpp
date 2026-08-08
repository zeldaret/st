//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRCSG_C4 : public Actor_C4 {
public:
    ActorUnkRCSG_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRCSG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRCSG();

    /* 4C */ virtual ~ActorUnkRCSG() override;

    void func_ov070_02143d30(void);
    void func_ov070_02143de0(void);
    void func_ov070_02143e54(void);
    void func_ov070_02143e68(void);
    void func_ov070_02143eac(void);
    void func_ov070_02143f2c(void);
    void func_ov070_02143f34(void);
    void func_ov070_02143f38(void);
    void func_ov070_02143f7c(void);
};

class ActorProfileUnkRCSG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRCSG();
    ~ActorProfileUnkRCSG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRCSG *GetProfile();
};
