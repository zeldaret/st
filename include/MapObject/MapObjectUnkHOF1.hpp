//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkHOF1 : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkHOF1();

    /* 4C */ virtual ~MapObjectUnkHOF1() override;

    void func_ov064_02159f4c(void);
};

class MapObjectProfileUnkHOF1 : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkHOF1();
    ~MapObjectProfileUnkHOF1();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkHOF1 *GetProfile();
};
