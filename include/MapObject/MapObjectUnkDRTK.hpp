//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRTK : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkDRTK();

    /* 30 */ virtual ~MapObjectUnkDRTK() override;

    void func_ov041_0212c96c(void);
    void func_ov041_0212c9e0(void);
    void func_ov041_0212c9f8(void);
    void func_ov041_0212cdac(void);
    void func_ov041_0212cf0c(void);
};

class MapObjectProfileUnkDRTK : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRTK();
    ~MapObjectProfileUnkDRTK();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRTK *GetProfile();
};
