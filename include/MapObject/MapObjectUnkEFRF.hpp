//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkEFRF : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkEFRF();

    /* 4C */ virtual ~MapObjectUnkEFRF() override;

    void func_ov028_02145b2c(void);
    void func_ov028_02145b7c(void);
};

class MapObjectProfileUnkEFRF : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkEFRF();
    ~MapObjectProfileUnkEFRF();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkEFRF *GetProfile();
};
