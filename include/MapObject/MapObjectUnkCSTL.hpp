//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkCSTL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkCSTL();

    /* 30 */ virtual ~MapObjectUnkCSTL() override;

    void func_ov027_02143c70(void);
    void func_ov027_02143d5c(void);
    void func_ov027_02143dc8(void);
    void func_ov027_02143de0(void);
    void func_ov027_02143de8(void);
    void func_ov027_02143e28(void);
    void func_ov027_02143e48(void);
};

class MapObjectProfileUnkCSTL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkCSTL();
    ~MapObjectProfileUnkCSTL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkCSTL *GetProfile();
};
