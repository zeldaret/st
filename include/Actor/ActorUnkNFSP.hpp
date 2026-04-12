//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNFSP_c4 : public Actor_c4 {
public:
    ActorUnkNFSP_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkNFSP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNFSP();

    /* 4C */ virtual ~ActorUnkNFSP() override;

    void func_ov031_020fb8d8(void);
    void func_ov031_020fb920(void);
    void func_ov031_020fb988(void);
    void func_ov031_020fb994(void);
    void func_ov031_020fb9b4(void);
    void func_ov031_020fba60(void);
    void func_ov031_020fbaec(void);
    void func_ov031_020fbb88(void);
    void func_ov031_020fbb8c(void);
    void func_ov031_020fbba0(void);
    void func_ov031_020fbbe0(void);
    void func_ov031_020fbc04(void);
    void func_ov031_020fbc3c(void);
    void func_ov031_020fbc94(void);
    void func_ov031_020fbcc0(void);
    void func_ov031_020fbcf0(void);
};

class ActorProfileUnkNFSP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkNFSP();
    ~ActorProfileUnkNFSP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNFSP *GetProfile();
};
