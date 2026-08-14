//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBTIR_C4 : public Actor_C4 {
public:
    ActorUnkBTIR_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkBTIR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBTIR();

    /* 4C */ virtual ~ActorUnkBTIR() override;

    void func_ov021_020f1a84(void);
    void func_ov021_020f1cf0(void);
    void func_ov021_020f1e80(void);
    void func_ov021_020f1e94(void);
    void func_ov021_020f1ecc(void);
    void func_ov021_020f1edc(void);
    void func_ov021_020f1fc4(void);
    void func_ov021_020f1fe4(void);
    void func_ov021_020f2030(void);
    void func_ov021_020f2044(void);
    void func_ov021_020f2074(void);
    void func_ov021_020f20c4(void);
    void func_ov021_020f21e4(void);
    void func_ov021_020f2214(void);
    void func_ov021_020f22d4(void);
    void func_ov021_020f23d4(void);
};

class ActorProfileUnkBTIR : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBTIR();
    ~ActorProfileUnkBTIR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBTIR *GetProfile();
};
