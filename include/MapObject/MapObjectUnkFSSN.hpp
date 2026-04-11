//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFSSN : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkFSSN();

    /* 4C */ virtual ~MapObjectUnkFSSN() override;

    void func_ov038_0211ef08(void);
    void func_ov038_0211ef88(void);
    void func_ov038_0211efec(void);
    void func_ov038_0211f03c(void);
};

class MapObjectProfileUnkFSSN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFSSN();
    ~MapObjectProfileUnkFSSN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFSSN *GetProfile();
};
