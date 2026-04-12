//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMBD_c4 : public Actor_c4 {
public:
    ActorUnkRMBD_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMBD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMBD();

    /* 4C */ virtual ~ActorUnkRMBD() override;

    void func_ov045_0212352c(void);
    void func_ov045_02123540(void);
    void func_ov045_0212360c(void);
    void func_ov045_02123960(void);
    void func_ov045_02123c0c(void);
    void func_ov045_02123c44(void);
    void func_ov045_02123cac(void);
    void func_ov045_02123cb0(void);
    void func_ov045_02123d44(void);
    void func_ov045_02123e4c(void);
    void func_ov045_02123e5c(void);
    void func_ov045_02123e94(void);
    void func_ov045_02123ec0(void);
    void func_ov045_02123edc(void);
    void func_ov045_02123f08(void);
    void func_ov045_02123ff0(void);
    void func_ov045_0212413c(void);
    void func_ov045_0212415c(void);
};

class ActorProfileUnkRMBD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMBD();
    ~ActorProfileUnkRMBD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMBD *GetProfile();
};
