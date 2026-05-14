//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETET : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkETET();

    /* 30 */ virtual ~MapObjectUnkETET() override;

    void func_ov092_02166b7c(void);
    void func_ov092_02166cd8(void);
    void func_ov092_02166d84(void);
    void func_ov092_02166d8c(void);
    void func_ov092_02166d94(void);
    void func_ov092_02166d9c(void);
    void func_ov092_02166da8(void);
    void func_ov092_02166db0(void);
    void func_ov092_02166dd0(void);
};

class MapObjectProfileUnkETET : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETET();
    ~MapObjectProfileUnkETET();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETET *GetProfile();
};
