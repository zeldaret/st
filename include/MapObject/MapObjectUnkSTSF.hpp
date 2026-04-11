//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTSF : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSTSF();

    /* 4C */ virtual ~MapObjectUnkSTSF() override;

    void func_ov078_0215d0a0(void);
    void func_ov078_0215d0f4(void);
};

class MapObjectProfileUnkSTSF : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTSF();
    ~MapObjectProfileUnkSTSF();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTSF *GetProfile();
};
