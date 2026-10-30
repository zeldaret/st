#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "MapObject/MapObjectUnkSTAT.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "timer.hpp"
#include "types.h"

class MapObjectUnkSWCR_160 {
public:
    /* 00 (base) */
    /* 04 */ MapObject *mUnk_04;
    /* 08 */

    MapObjectUnkSWCR_160(MapObject *param1);

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
};

enum MapObjectUnkSWCR_168_Enum {
    MapObjectUnkSWCR_168_0 = 0,
    MapObjectUnkSWCR_168_1 = 1,
    MapObjectUnkSWCR_168_2 = 2,
    MapObjectUnkSWCR_168_3 = 3,
    MapObjectUnkSWCR_168_4 = 4,
    MapObjectUnkSWCR_168_5 = 5,
    MapObjectUnkSWCR_168_6 = 6,
    MapObjectUnkSWCR_168_7 = 7,
    MapObjectUnkSWCR_168_8 = 8 // value in ctor, ignored in the code
};

class MapObjectUnkSWCR : public MapObject {
public:
    /* 000 (base) */
    /* 040 */ ModelRender mUnk_40;
    /* 0A0 */ UnkSystem5 mUnk_A0;
    /* 0C0 */ unk32 mUnk_C0;
    /* 0C4 */ PAD(0xC4, 0xE0);
    /* 0E0 */ UnkSystem5 mUnk_E0;
    /* 100 */ unk32 mUnk_100;
    /* 104 */ PAD(0x104, 0x120);
    /* 120 */ UnkSystem5 mUnk_120;
    /* 140 */ unk32 mUnk_140;
    /* 144 */ PAD(0x144, 0x160);
    /* 160 */ MapObjectUnkSWCR_160 mUnk_160;
    /* 168 */ MapObjectUnkSWCR_168_Enum mUnk_168; // Some kind of internal state
    /* 16C */ unk32 mUnk_16C;
    /* 170 */ Timer mUnk_170;
    /* 174 */ unk32 mUnk_174;
    /* 178 */ unk8 mUnk_178;
    /* 179 */ unk8 mUnk_179;

    MapObjectUnkSWCR();

    /* 00 */ virtual bool Init() override;
    /* 04 */ virtual void Setup() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;

    void func_ov063_021614f8(void);
    void func_ov063_0216150c(void);
    void func_ov063_0216151c(void);
    void func_ov063_0216152c(void);
    void func_ov063_0216153c(void);
    bool func_ov063_021615c4(void);
    void func_ov063_02161638(void);
    void func_ov063_02161b08(MapObjectUnkSWCR_168_Enum param1);
};

class MapObjectProfileUnkSWCR : public MapObjectProfileUnkSTAT_Base {
public:
    /* 00 (base) */
    /* F8 */

    MapObjectProfileUnkSWCR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWCR *GetProfile();
};
