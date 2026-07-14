#pragma once

#include "MapObject/MapObjectChestBase.hpp"
#include "MapObject/MapObjectProfile.hpp"

class MapObjectTreasureSpawned : public MapObjectChestBase {
public:
    /* 00 (base) */

    MapObjectTreasureSpawned();

    // data_ov031_021157dc
    /* 30 */ virtual ~MapObjectTreasureSpawned() override;
    /* 3C */ virtual unk32 vfunc_3C() override;
    /* 40 */ virtual bool vfunc_40() override;
    /* 54 */ virtual Vec2p *vfunc_54() override;

    void func_ov031_02102f64(void);
    void func_ov031_02102f90(void);
    void func_ov031_02102f98(void);
};

class MapObjectProfileTreasureSpawned : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */

    MapObjectProfileTreasureSpawned();
    ~MapObjectProfileTreasureSpawned();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileTreasureSpawned *GetProfile();
};
