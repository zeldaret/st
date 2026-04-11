//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRRS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDRRS();

    /* 4C */ virtual ~MapObjectUnkDRRS() override;

    void func_ov086_0215e778(void);
    void func_ov086_0215e78c(void);
    void func_ov086_0215e8b8(void);
    void func_ov086_0215e8fc(void);
    void func_ov086_0215e918(void);
    void func_ov086_0215e940(void);
    void func_ov086_0215e998(void);
    void func_ov086_0215e9c0(void);
    void func_ov086_0215e9cc(void);
    void func_ov086_0215ea3c(void);
    void func_ov086_0215eba0(void);
};

class MapObjectProfileUnkDRRS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRRS();
    ~MapObjectProfileUnkDRRS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRRS *GetProfile();
};
