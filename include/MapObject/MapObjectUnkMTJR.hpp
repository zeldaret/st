#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObject/MapObjectUnkSTAT.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/Common.hpp"
#include "types.h"

class MapObjectUnkMTJR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ ModelRender mUnk_40;
    /* A0 */ unk32 mUnk_A0;
    /* A4 */ volatile u16 mUnk_A4; // Probably a counter
    /* A6 */ u16 mUnk_A6;          // Counter (mUnk_A4) bound
    /* A8 */ UnkSystem7 mUnk_A8;
    /* AC */ unk32 mUnk_AC;
    /* B0 */ unk32 mUnk_B0;

    MapObjectUnkMTJR();

    /* 00 */ virtual bool vfunc_00() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 1C */ virtual bool vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) override;

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
