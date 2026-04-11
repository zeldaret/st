//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTCBT : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTCBT();

    /* 4C */ virtual ~MapObjectUnkTCBT() override;

    void func_ov029_0214440c(void);
    void func_ov029_02144448(void);
    void func_ov029_02144480(void);
    void func_ov029_021444bc(void);
    void func_ov029_0214463c(void);
    void func_ov029_02144650(void);
    void func_ov029_02144790(void);
    void func_ov029_02144800(void);
    void func_ov029_02144804(void);
    void func_ov029_02144978(void);
    void func_ov029_02144a14(void);
    void func_ov029_02144ab0(void);
    void func_ov029_02144b20(void);
    void func_ov029_02144f94(void);
    void func_ov029_02144ff8(void);
    void func_ov029_021450f4(void);
    void func_ov029_02145174(void);
    void func_ov029_021451f8(void);
    void func_ov029_02145324(void);
};

class MapObjectProfileUnkTCBT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTCBT();
    ~MapObjectProfileUnkTCBT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTCBT *GetProfile();
};
