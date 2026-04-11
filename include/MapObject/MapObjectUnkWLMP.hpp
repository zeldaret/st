//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkWLMP : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkWLMP();

    /* 4C */ virtual ~MapObjectUnkWLMP() override;

    void func_ov094_02171150(void);
    void func_ov094_021711d0(void);
    void func_ov094_02171318(void);
    void func_ov094_021714a8(void);
    void func_ov094_0217156c(void);
    void func_ov094_02171598(void);
    void func_ov094_02171604(void);
    void func_ov094_02171674(void);
    void func_ov094_02171694(void);
};

class MapObjectProfileUnkWLMP : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkWLMP();
    ~MapObjectProfileUnkWLMP();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkWLMP *GetProfile();
};
