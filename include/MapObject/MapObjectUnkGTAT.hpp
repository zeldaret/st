//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGTAT : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkGTAT();

    /* 4C */ virtual ~MapObjectUnkGTAT() override;

    void func_ov039_0211c7ac(void);
    void func_ov039_0211c960(void);
    void func_ov039_0211c964(void);
};

class MapObjectProfileUnkGTAT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGTAT();
    ~MapObjectProfileUnkGTAT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGTAT *GetProfile();
};
