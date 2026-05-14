//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTDBR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTDBR();

    /* 30 */ virtual ~MapObjectUnkTDBR() override;

    void func_ov092_02166700(void);
    void func_ov092_02166718(void);
    void func_ov092_02166724(void);
};

class MapObjectProfileUnkTDBR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTDBR();
    ~MapObjectProfileUnkTDBR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTDBR *GetProfile();
};
