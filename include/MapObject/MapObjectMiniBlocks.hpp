#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectMiniBlocks : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectMiniBlocks();

    /* 30 */ virtual ~MapObjectMiniBlocks() override;

    void func_ov000_0209e4b0(void);
    void func_ov000_0209e6ac(void);
};

class MapObjectProfileMiniBlocks : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileMiniBlocks();
    ~MapObjectProfileMiniBlocks();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileMiniBlocks *GetProfile();
};
