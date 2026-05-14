//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRMC : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkDRMC();

    /* 30 */ virtual ~MapObjectUnkDRMC() override;

    void func_ov041_0212d050(void);
    void func_ov041_0212d074(void);
    void func_ov041_0212d08c(void);
    void func_ov041_0212d184(void);
    void func_ov041_0212d1ec(void);
};

class MapObjectProfileUnkDRMC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRMC();
    ~MapObjectProfileUnkDRMC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRMC *GetProfile();
};
