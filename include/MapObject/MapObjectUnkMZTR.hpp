//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMZTR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkMZTR();

    /* 30 */ virtual ~MapObjectUnkMZTR() override;

    void func_ov091_02167d58(void);
    void func_ov091_02167e3c(void);
    void func_ov091_02167f54(void);
};

class MapObjectProfileUnkMZTR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMZTR();
    ~MapObjectProfileUnkMZTR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMZTR *GetProfile();
};
