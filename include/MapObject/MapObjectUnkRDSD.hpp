//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRDSD : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkRDSD();

    /* 4C */ virtual ~MapObjectUnkRDSD() override;

    void func_ov045_02129124(void);
    void func_ov045_0212918c(void);
    void func_ov045_021291d0(void);
    void func_ov045_021291e4(void);
    void func_ov045_0212922c(void);
    void func_ov045_0212925c(void);
    void func_ov045_0212927c(void);
    void func_ov045_021292d0(void);
};

class MapObjectProfileUnkRDSD : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRDSD();
    ~MapObjectProfileUnkRDSD();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRDSD *GetProfile();
};
