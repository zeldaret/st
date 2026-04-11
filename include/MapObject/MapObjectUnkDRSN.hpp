//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRSN : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDRSN();

    /* 4C */ virtual ~MapObjectUnkDRSN() override;

    void func_ov079_021569b4(void);
    void func_ov079_02156a90(void);
    void func_ov079_02156b9c(void);
    void func_ov079_02156c0c(void);
    void func_ov079_02156c24(void);
};

class MapObjectProfileUnkDRSN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRSN();
    ~MapObjectProfileUnkDRSN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRSN *GetProfile();
};
