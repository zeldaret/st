#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

class MapObjectMiniBlocks : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ UnkSystem6 mUnk_40;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ unk8 mUnk_48;
    /* 49 */ unk8 mUnk_49; // pad?
    /* 4A */ unk16 mUnk_4A; // pad?
    /* 4C */

    MapObjectMiniBlocks();

    /* 00 */ virtual bool vfunc_00() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 30 */ virtual ~MapObjectMiniBlocks() override;
};

class MapObjectProfileMiniBlocks : public MapObjectProfile_Derived1 {
public:
    /* 00 (base) */

    MapObjectProfileMiniBlocks();

    /* 00 */ virtual MapObject *Create();
    /* 1C */ virtual ~MapObjectProfileMiniBlocks() override;

    static MapObjectProfileMiniBlocks *GetProfile();
};
