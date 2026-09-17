#pragma once

#include "Actor/ActorUnkTLKT.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObject/MapObjectUnkSTAT.hpp"
#include "Player/TouchControl.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_ov000_020b1c10.hpp"
#include "Unknown/UnkStruct_ov094_02177ff8.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_ov063_02163910 : public ActorUnkTLKT_9C_Base {
public:
    UnkStruct_ov063_02163910(void *param1);

    /* 00 */ virtual void vfunc2_00() override;
    /* 04 */ virtual void vfunc2_04() override;
};

class MapObjectUnkWLMS : public UnkStruct_ov094_02177ff8 {
public:
    /* 000 (base) */
    /* 070 */ ModelRender mUnk_70;
    /* 0D0 */ UnkStruct_ov000_020b1c10 mUnk_D0;
    /* 0F4 */ unk32 mUnk_F4;
    /* 0F8 */ STRUCT_PAD(0x0F8, 0x2F4);
    /* 2F4 */ TouchControl mUnk_2F4;
    /* 316 */ unk16 mUnk_316;
    /* 318 */ unk16 mUnk_318;
    /* 31A */ unk16 mUnk_31A;
    /* 31C */ u16 mUnk_31C;
    /* 31E */ u8 mUnk_31E;
    /* 31F */ STRUCT_PAD(0x31F, 0x320);
    /* 320 */ UnkStruct_ov063_02163910 mUnk_320;

    MapObjectUnkWLMS();

    /* 00 */ virtual bool vfunc_00() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18(s8 *param1, s8 param2) override;
    /* 28 */ virtual unk32 vfunc_28(unk32 param1, unk32 param2, unk32 param3) override;
    /* 38 */ virtual void vfunc_38(void) override;
    /* 60 */ virtual void vfunc_60(void);
    /* 64 */ virtual void vfunc_64(unk32 param1, unk32 param2);
    /* 68 */ virtual void vfunc_68(void);
    /* 6C */ virtual void vfunc_6C(unk32 param1);
    /* 70 */ virtual void vfunc_70(unk32 param1, unk32 param2);

    void func_ov063_02160254(void);
    void func_ov063_02160548(void);
    unk32 func_ov063_02160580(unk32 param1, MapObjState param2);
};

class MapObjectProfileUnkWLMS : public MapObjectProfileUnkSTAT_Base {
public:
    /* 00 (base) */

    MapObjectProfileUnkWLMS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkWLMS *GetProfile();
};
