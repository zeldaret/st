//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMLVC : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkMLVC();

    /* 30 */ virtual ~MapObjectUnkMLVC() override;

    void func_ov084_0215dc7c(void);
    void func_ov084_0215de2c(void);
    void func_ov084_0215de80(void);
    void func_ov084_0215dec0(void);
};

class MapObjectProfileUnkMLVC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMLVC();
    ~MapObjectProfileUnkMLVC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMLVC *GetProfile();
};
