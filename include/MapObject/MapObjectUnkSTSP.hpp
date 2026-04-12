//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTSP : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSTSP();

    /* 30 */ virtual ~MapObjectUnkSTSP() override;

    void func_ov031_02109714(void);
    void func_ov031_0210996c(void);
    void func_ov031_02109970(void);
};

class MapObjectProfileUnkSTSP : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTSP();
    ~MapObjectProfileUnkSTSP();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTSP *GetProfile();
};
