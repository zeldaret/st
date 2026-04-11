//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBFSP : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkBFSP();

    /* 4C */ virtual ~MapObjectUnkBFSP() override;

    void func_ov021_020f6308(void);
    void func_ov021_020f6334(void);
    void func_ov021_020f6338(void);
    void func_ov021_020f6358(void);
    void func_ov021_020f63a8(void);
};

class MapObjectProfileUnkBFSP : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBFSP();
    ~MapObjectProfileUnkBFSP();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBFSP *GetProfile();
};
