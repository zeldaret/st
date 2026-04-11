//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFSVC : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkFSVC();

    /* 4C */ virtual ~MapObjectUnkFSVC() override;

    void func_ov056_0213aacc(void);
    void func_ov056_0213ab1c(void);
};

class MapObjectProfileUnkFSVC : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFSVC();
    ~MapObjectProfileUnkFSVC();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFSVC *GetProfile();
};
