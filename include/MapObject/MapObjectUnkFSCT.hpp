//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFSCT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkFSCT();

    /* 30 */ virtual ~MapObjectUnkFSCT() override;

    void func_ov061_021594d0(void);
    void func_ov061_02159520(void);
};

class MapObjectProfileUnkFSCT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFSCT();
    ~MapObjectProfileUnkFSCT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFSCT *GetProfile();
};
