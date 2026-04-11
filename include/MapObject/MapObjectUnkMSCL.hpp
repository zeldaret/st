//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMSCL : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkMSCL();

    /* 4C */ virtual ~MapObjectUnkMSCL() override;

    void func_ov058_021512c0(void);
    void func_ov058_02151350(void);
    void func_ov058_0215136c(void);
    void func_ov058_02151420(void);
};

class MapObjectProfileUnkMSCL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMSCL();
    ~MapObjectProfileUnkMSCL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMSCL *GetProfile();
};
