//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkICGR : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkICGR();

    /* 4C */ virtual ~MapObjectUnkICGR() override;

    void func_ov079_02155bdc(void);
    void func_ov079_02155bf0(void);
    void func_ov079_02155ef4(void);
    void func_ov079_02156198(void);
    void func_ov079_021561b4(void);
    void func_ov079_0215628c(void);
    void func_ov079_02156304(void);
    void func_ov079_02156314(void);
};

class MapObjectProfileUnkICGR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkICGR();
    ~MapObjectProfileUnkICGR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkICGR *GetProfile();
};
