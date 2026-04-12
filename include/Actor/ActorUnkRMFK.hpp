//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMFK_c4 : public Actor_c4 {
public:
    ActorUnkRMFK_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMFK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMFK();

    /* 4C */ virtual ~ActorUnkRMFK() override;

    void func_ov057_0213a1d4(void);
    void func_ov057_0213a1e8(void);
    void func_ov057_0213a43c(void);
    void func_ov057_0213a44c(void);
    void func_ov057_0213a540(void);
    void func_ov057_0213a544(void);
    void func_ov057_0213a558(void);
    void func_ov057_0213a640(void);
    void func_ov057_0213a6b8(void);
    void func_ov057_0213a6f8(void);
};

class ActorProfileUnkRMFK : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRMFK();
    ~ActorProfileUnkRMFK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMFK *GetProfile();
};
