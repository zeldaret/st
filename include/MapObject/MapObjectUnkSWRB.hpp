//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWRB : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSWRB();

    /* 30 */ virtual ~MapObjectUnkSWRB() override;

    void func_ov070_02145e98(void);
    void func_ov070_02145f10(void);
    void func_ov070_02145fd0(void);
    void func_ov070_02145ff0(void);
    void func_ov070_02146054(void);
    void func_ov070_021460a0(void);
};

class MapObjectProfileUnkSWRB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWRB();
    ~MapObjectProfileUnkSWRB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWRB *GetProfile();
};
