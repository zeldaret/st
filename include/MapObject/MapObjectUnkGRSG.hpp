//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGRSG : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkGRSG();

    /* 30 */ virtual ~MapObjectUnkGRSG() override;

    void func_ov086_0215e398(void);
    void func_ov086_0215e534(void);
    void func_ov086_0215e584(void);
    void func_ov086_0215e5e0(void);
};

class MapObjectProfileUnkGRSG : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGRSG();
    ~MapObjectProfileUnkGRSG();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGRSG *GetProfile();
};
