//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFSWT : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkFSWT();

    /* 4C */ virtual ~MapObjectUnkFSWT() override;

    void func_ov066_0215ca5c(void);
    void func_ov066_0215caac(void);
};

class MapObjectProfileUnkFSWT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFSWT();
    ~MapObjectProfileUnkFSWT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFSWT *GetProfile();
};
