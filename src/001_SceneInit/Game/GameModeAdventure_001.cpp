#include "Game/Game.hpp"
#include "Game/GameModeAdventure.hpp"
#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"

extern "C" void func_0201659c();

GameModeAdventure::GameModeAdventure() {
    func_0201659c();
    gGame.func_02013370(2);
    data_0204a110.func_ov001_020bd514(0, AdventureModeManager::Create, 0, 1);
    gSaveManager.func_ov001_020ba670();
    gSaveManager.func_ov001_020ba7a8();
    UnkStruct_027e09a4::Create(0);
    UnkStruct_ov024_020d8660::func_ov024_020c4ac0();
}
