//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTAL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSTAL();

    /* 30 */ virtual ~MapObjectUnkSTAL() override;

    void func_ov071_02161bb8(void);
    void func_ov071_02161d68(void);
    void func_ov071_02161e94(void);
    void func_ov071_02161ed4(void);
    void func_ov071_02161f0c(void);
};

class MapObjectProfileUnkSTAL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTAL();
    ~MapObjectProfileUnkSTAL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTAL *GetProfile();
};
