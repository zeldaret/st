//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRHS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDRHS();

    /* 4C */ virtual ~MapObjectUnkDRHS() override;

    void func_ov058_0214f964(void);
    void func_ov058_0214f9f4(void);
    void func_ov058_0214fc24(void);
    void func_ov058_0214fc7c(void);
    void func_ov058_0214fc90(void);
};

class MapObjectProfileUnkDRHS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRHS();
    ~MapObjectProfileUnkDRHS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRHS *GetProfile();
};
