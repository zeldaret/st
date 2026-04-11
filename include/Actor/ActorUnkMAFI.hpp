//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMAFI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMAFI();

    /* 4C */ virtual ~ActorUnkMAFI() override;

    void func_ov092_02176bf8(void);
    void func_ov092_02176c34(void);
    void func_ov092_02176c70(void);
    void func_ov092_02176d64(void);
    void func_ov092_02176da4(void);
    void func_ov092_02176de0(void);
    void func_ov092_02176de4(void);
    void func_ov092_02176eac(void);
    void func_ov092_02176eb0(void);
    void func_ov092_02176efc(void);
    void func_ov092_02176f78(void);
    void func_ov092_02177000(void);
    void func_ov092_02177040(void);
};

class ActorProfileUnkMAFI : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkMAFI();
    ~ActorProfileUnkMAFI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMAFI *GetProfile();
};
