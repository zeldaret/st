#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorManager.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWFS;
class ActorUnkNFSP;

class ActorUnkNFSP_C0 : public Actor_C4 {
public:
    ActorUnkNFSP_C0(ActorUnkNFSP *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkNFSP : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ volatile u16 mUnk_98;
    /* 9A */ u16 mUnk_9A;
    /* 9C */ MapObjectUnkSWFS *mUnk_9C;
    /* A0 */ Actor_9C mUnk_A0;
    /* C0 */ ActorUnkNFSP_C0 mUnk_C0;
    /* E4 */ ActorRef mUnk_E4;
    /* E8 */

    ActorUnkNFSP();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 54 */ virtual void vfunc_54(unk32 param1);

    void func_ov031_020fb988();
    Actor *func_ov031_020fb994();
    void func_ov031_020fb9b4();
    void func_ov031_020fba60();
    void func_ov031_020fbb8c();
    void func_ov031_020fbba0(ActorRef ref);
    void func_ov031_020fbbe0();
};

class ActorProfileUnkNFSP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkNFSP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNFSP *GetProfile();
};
