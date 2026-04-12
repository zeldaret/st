//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCNBL_c4 : public Actor_c4 {
public:
    ActorUnkCNBL_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkCNBL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCNBL();

    /* 4C */ virtual ~ActorUnkCNBL() override;

    void func_ov026_0210f264(void);
    void func_ov026_0210f26c(void);
    void func_ov026_0210f304(void);
    void func_ov026_0210f30c(void);
    void func_ov026_0210f3e8(void);
    void func_ov026_0210f4c4(void);
    void func_ov026_0210f500(void);
    void func_ov026_0210f678(void);
    void func_ov026_0210fa04(void);
    void func_ov026_0210fc14(void);
};

class ActorProfileUnkCNBL : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkCNBL();
    ~ActorProfileUnkCNBL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCNBL *GetProfile();
};
