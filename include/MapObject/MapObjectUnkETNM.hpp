//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETNM : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkETNM();

    /* 30 */ virtual ~MapObjectUnkETNM() override;

    void func_ov090_021752cc(void);
};

class MapObjectProfileUnkETNM : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETNM();
    ~MapObjectProfileUnkETNM();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETNM *GetProfile();
};
