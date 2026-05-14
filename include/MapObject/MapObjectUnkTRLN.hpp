//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRLN : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRLN();

    /* 30 */ virtual ~MapObjectUnkTRLN() override;

    void func_ov057_0213b860(void);
    void func_ov057_0213b864(void);
    void func_ov057_0213b88c(void);
};

class MapObjectProfileUnkTRLN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRLN();
    ~MapObjectProfileUnkTRLN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRLN *GetProfile();
};
