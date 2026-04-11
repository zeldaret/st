//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRGW : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkTRGW();

    /* 4C */ virtual ~MapObjectUnkTRGW() override;

    void func_ov090_02173198(void);
    void func_ov090_021731e8(void);
    void func_ov090_021732c4(void);
    void func_ov090_02173314(void);
    void func_ov090_02173320(void);
};

class MapObjectProfileUnkTRGW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRGW();
    ~MapObjectProfileUnkTRGW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRGW *GetProfile();
};
