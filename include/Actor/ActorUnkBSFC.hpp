//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBSFC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBSFC();

    /* 4C */ virtual ~ActorUnkBSFC() override;

    void func_ov034_021193b0(void);
    void func_ov034_021195a8(void);
    void func_ov034_021195bc(void);
    void func_ov034_02119700(void);
    void func_ov034_02119970(void);
    void func_ov034_02119984(void);
    void func_ov034_02119b24(void);
    void func_ov034_02119c00(void);
    void func_ov034_02119c94(void);
    void func_ov034_02119d54(void);
    void func_ov034_02119d78(void);
    void func_ov034_02119d88(void);
    void func_ov034_02119d90(void);
    void func_ov034_02119e20(void);
};

class ActorProfileUnkBSFC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBSFC();
    ~ActorProfileUnkBSFC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBSFC *GetProfile();
};
