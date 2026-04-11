//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFSSV : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkFSSV();

    /* 4C */ virtual ~MapObjectUnkFSSV() override;

    void func_ov079_0215704c(void);
    void func_ov079_021570cc(void);
    void func_ov079_02157130(void);
    void func_ov079_02157180(void);
};

class MapObjectProfileUnkFSSV : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFSSV();
    ~MapObjectProfileUnkFSSV();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFSSV *GetProfile();
};
