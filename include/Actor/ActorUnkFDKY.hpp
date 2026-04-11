//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFDKY : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFDKY();

    /* 4C */ virtual ~ActorUnkFDKY() override;

    void func_ov030_0214c3b4(void);
    void func_ov030_0214c3e4(void);
    void func_ov030_0214c4dc(void);
    void func_ov030_0214c884(void);
    void func_ov030_0214ca24(void);
    void func_ov030_0214ca34(void);
    void func_ov030_0214cab0(void);
    void func_ov030_0214caf0(void);
    void func_ov030_0214cb28(void);
    void func_ov030_0214cb44(void);
    void func_ov030_0214cb50(void);
    void func_ov030_0214cc68(void);
    void func_ov030_0214cdc0(void);
};

class ActorProfileUnkFDKY : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkFDKY();
    ~ActorProfileUnkFDKY();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFDKY *GetProfile();
};
