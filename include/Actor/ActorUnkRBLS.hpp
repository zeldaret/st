#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkRMSV.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_ov063_02163784 : public UnkStruct_ov063_021632e4 {
public:
    /* 00 (base) */
    /* 40 */

    UnkStruct_ov063_02163784(ModelRender *param1, unk32 param2) :
        UnkStruct_ov063_021632e4(param1, param2) {};
};

class ActorUnkRBLS : public Actor {
public:
    /* 00 (base) */
    /* 94 */ ModelRender mUnk_94;
    /* F4 */ UnkStruct_ov063_02163784 mUnk_F4;
    /* 134 */ STRUCT_PAD(0x134, 0x160);
    /* 160 */

    ActorUnkRBLS();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(void) override;
    /* 24 */ virtual void vfunc_24(void) override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

    void func_ov063_0215f3d4(void);
    void func_ov063_0215f500(void);
};

class ActorProfileUnkRBLS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBLS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBLS *GetProfile();
};
