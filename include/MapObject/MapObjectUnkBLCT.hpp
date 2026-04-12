//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBLCT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkBLCT();

    /* 30 */ virtual ~MapObjectUnkBLCT() override;

    void func_ov071_021630e8(void);
    void func_ov071_0216322c(void);
    void func_ov071_021632b8(void);
    void func_ov071_021632d0(void);
    void func_ov071_02163348(void);
    void func_ov071_021634ac(void);
};

class MapObjectProfileUnkBLCT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBLCT();
    ~MapObjectProfileUnkBLCT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBLCT *GetProfile();
};
