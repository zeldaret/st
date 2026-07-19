//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "nns/g3d/g3d.h"
#include "types.h"

class ActorUnkRMSD_C4 : public Actor_C4 {
public:
    ActorUnkRMSD_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRMSBase : public Actor {
public:
    /* 00 (base) */
    /* 94 */ ModelRender mUnk_94;
    /* F4 */ ModelRender mUnk_F4;
    /* 154 */ unk32 mUnk_154;
    /* 158 */

    ActorUnkRMSBase();
};

class ActorUnkRMSD : public ActorUnkRMSBase {
public:
    /* 00 (base) */
    /* 158 */ unk32 mUnk_158;           //! INFO: Some class with a vfunc_34
    /* 15C */ STRUCT_PAD(0x15C, 0x1D4); //! INFO: Force alignment to match ::Create
    /* 1D4 */

    ActorUnkRMSD();

    /* 18 */ virtual unk32 vfunc_18(void) override;
    /* 20 */ virtual void vfunc_20(void) override;
    /* 24 */ virtual void vfunc_24(void) override;
    /* 4C */ virtual ~ActorUnkRMSD() override;
    /* 54 */ virtual G3d_Model *vfunc_54(void);
    /* 58 */ virtual G3d_Model *vfunc_58(void);
};

class ActorProfileUnkRMSD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */
    /* D8 */

    ActorProfileUnkRMSD();
    ~ActorProfileUnkRMSD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMSD *GetProfile();
};
