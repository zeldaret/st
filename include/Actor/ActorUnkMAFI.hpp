//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMAFI_c4 : public Actor_c4 {
public:
    ActorUnkMAFI_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

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
