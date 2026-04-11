//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETMW : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkETMW();

    /* 4C */ virtual ~MapObjectUnkETMW() override;

    void func_ov092_021673e4(void);
    void func_ov092_021674a8(void);
    void func_ov092_021674d8(void);
    void func_ov092_021674e0(void);
    void func_ov092_021674e8(void);
    void func_ov092_021674f0(void);
    void func_ov092_021674fc(void);
    void func_ov092_02167504(void);
    void func_ov092_02167518(void);
};

class MapObjectProfileUnkETMW : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETMW();
    ~MapObjectProfileUnkETMW();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETMW *GetProfile();
};
