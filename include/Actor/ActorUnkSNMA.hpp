//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSNMA_c4 : public Actor_c4 {
public:
    ActorUnkSNMA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkSNMA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSNMA();

    /* 4C */ virtual ~ActorUnkSNMA() override;

    void func_ov028_02141a7c(void);
    void func_ov028_02141c10(void);
    void func_ov028_02141c24(void);
    void func_ov028_02141c38(void);
    void func_ov028_02141ca4(void);
    void func_ov028_02141cf0(void);
    void func_ov028_02141ed8(void);
    void func_ov028_02141f1c(void);
    void func_ov028_02141ff8(void);
    void func_ov028_0214201c(void);
    void func_ov028_021420d0(void);
    void func_ov028_02142100(void);
    void func_ov028_0214210c(void);
    void func_ov028_021421b8(void);
    void func_ov028_02142260(void);
    void func_ov028_021423b0(void);
    void func_ov028_02142438(void);
    void func_ov028_02142588(void);
    void func_ov028_02142684(void);
    void func_ov028_0214272c(void);
    void func_ov028_021427e4(void);
    void func_ov028_021429b4(void);
    void func_ov028_02142a30(void);
    void func_ov028_02142a8c(void);
    void func_ov028_02142afc(void);
    void func_ov028_02142b30(void);
    void func_ov028_02142be0(void);
    void func_ov028_02142c5c(void);
    void func_ov028_02142c70(void);
    void func_ov028_02142d90(void);
    void func_ov028_02142e20(void);
    void func_ov028_02142e64(void);
    void func_ov028_02142e70(void);
    void func_ov028_02142f10(void);
    void func_ov028_02142f30(void);
    void func_ov028_02142f8c(void);
    void func_ov028_02142fc8(void);
    void func_ov028_02142ff4(void);
    void func_ov028_02143058(void);
    void func_ov028_0214307c(void);
    void func_ov028_021430c4(void);
    void func_ov028_02143108(void);
};

class ActorProfileUnkSNMA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkSNMA();
    ~ActorProfileUnkSNMA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSNMA *GetProfile();
};
