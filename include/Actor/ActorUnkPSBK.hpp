//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPSBK_c4 : public Actor_c4 {
public:
    ActorUnkPSBK_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkPSBK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPSBK();

    /* 4C */ virtual ~ActorUnkPSBK() override;

    void func_ov048_02130d64(void);
    void func_ov048_02131000(void);
    void func_ov048_02131014(void);
    void func_ov048_02131094(void);
    void func_ov048_0213111c(void);
    void func_ov048_021311e8(void);
    void func_ov048_02131224(void);
    void func_ov048_02131268(void);
    void func_ov048_021312ac(void);
    void func_ov048_021312e4(void);
    void func_ov048_021312fc(void);
    void func_ov048_0213130c(void);
    void func_ov048_0213138c(void);
    void func_ov048_021314fc(void);
    void func_ov048_02131690(void);
    void func_ov048_02131744(void);
    void func_ov048_021317d8(void);
    void func_ov048_02131818(void);
    void func_ov048_021318c4(void);
    void func_ov048_02131b28(void);
    void func_ov048_02131bac(void);
    void func_ov048_02131c28(void);
    void func_ov048_02131ca8(void);
    void func_ov048_02131d20(void);
    void func_ov048_02131db4(void);
    void func_ov048_02131dbc(void);
    void func_ov048_02131dc8(void);
    void func_ov048_02131e34(void);
    void func_ov048_02131e9c(void);
    void func_ov048_02131f28(void);
    void func_ov048_02131f44(void);
    void func_ov048_02132054(void);
    void func_ov048_021320c0(void);
};

class ActorProfileUnkPSBK : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPSBK();
    ~ActorProfileUnkPSBK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPSBK *GetProfile();
};
