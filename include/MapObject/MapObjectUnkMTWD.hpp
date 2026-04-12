//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMTWD : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkMTWD();

    /* 30 */ virtual ~MapObjectUnkMTWD() override;

    void func_ov094_02175c90(void);
    void func_ov094_02175d1c(void);
    void func_ov094_02175ea4(void);
    void func_ov094_02175eb8(void);
};

class MapObjectProfileUnkMTWD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMTWD();
    ~MapObjectProfileUnkMTWD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMTWD *GetProfile();
};
