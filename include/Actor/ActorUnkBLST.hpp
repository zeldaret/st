#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLST;

class ActorUnkBLST_E8 : public UnkStruct_ov031_Items_00_Base {
public:
    /* 00 (base) */
    /* 04 */ ActorUnkBLST *mUnk_04;
    /* 08 */

    ActorUnkBLST_E8(ActorUnkBLST *param1) :
        mUnk_04(param1) {}

    // data_ov031_02112d4c
    /* 0C */ virtual bool vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 param2) override;
};

class ActorUnkBLST : public Actor {
public:
    /* 00 (base) */
    /* 94 */ fx32 mUnk_94;
    /* 98 */ volatile u16 mUnk_98;
    /* 9A */ u16 mUnk_9A;
    /* 9C */ UnkStruct_ov031_Items_01 mUnk_9C;
    /* C8 */ Cylinder mUnk_C8;
    /* D8 */ Cylinder mUnk_D8;
    /* E8 */ ActorUnkBLST_E8 mUnk_E8;
    /* F0 */ fx32 mUnk_F0;
    /* F4 */ fx32 mUnk_F4;
    /* F8 */

    ActorUnkBLST();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;

    bool IsInternalTimerOut() {
        if (this->mUnk_98 < this->mUnk_9A) {
            ++this->mUnk_98;
            return false;
        }
        return true;
    }

    unk32 func_ov031_020e3b94();
    void func_ov031_020e3b9c(unk16 param1, unk16 param2);
};

class ActorProfileUnkBLST : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBLST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBLST *GetProfile();
};
