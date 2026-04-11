//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkCRWL : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkCRWL();

    /* 4C */ virtual ~MapObjectUnkCRWL() override;

    void func_ov031_02106ff4(void);
    void func_ov031_02107198(void);
    void func_ov031_021071dc(void);
    void func_ov031_02107208(void);
    void func_ov031_02107250(void);
};

class MapObjectProfileUnkCRWL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkCRWL();
    ~MapObjectProfileUnkCRWL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkCRWL *GetProfile();
};
