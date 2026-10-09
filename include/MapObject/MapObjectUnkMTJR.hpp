#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObject/MapObjectUnkSTAT.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/Common.hpp"
#include "timer.hpp"
#include "types.h"

class MapObjectUnkMTJR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ ModelRender mUnk_40;
    /* A0 */ unk32 mUnk_A0;
    /* A4 */ Timer mUnk_A4;
    /* A8 */ UnkSystem7 mUnk_A8;
    /* AC */ unk32 mUnk_AC;
    /* B0 */ unk32 mUnk_B0;

    MapObjectUnkMTJR();

    /* 00 */ virtual bool Init() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 1C */ virtual bool vfunc_1C(RefStruct param1, unk32 param2, VecFx32 *param3) override;

    void func_ov063_02161254(unk32 param1);
    void func_ov063_02161288(void);
};

class MapObjectProfileUnkMTJR : public MapObjectProfileUnkSTAT_Base {
public:
    /* 00 (base) */
    /* F8 */

    MapObjectProfileUnkMTJR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMTJR *GetProfile();
};
