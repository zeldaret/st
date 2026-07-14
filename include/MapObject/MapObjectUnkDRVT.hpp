//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRVT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkDRVT();

    /* 30 */ virtual ~MapObjectUnkDRVT() override;

    void func_ov067_0215c27c(void);
    void func_ov067_0215c318(void);
    void func_ov067_0215c3d0(void);
    void func_ov067_0215c3e4(void);
    void func_ov067_0215c454(void);
};

class MapObjectProfileUnkDRVT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRVT();
    ~MapObjectProfileUnkDRVT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRVT *GetProfile();
};
