#include "Game/Game.hpp"
#include "Game/GameModeAdventure.hpp"
#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"

extern "C" {
void func_ov020_020c4ac0(void *);
void func_0201659c();
}

extern int data_ov001_020c27a8;
extern int data_ov001_020c276c;

GameModeAdventure::GameModeAdventure() {
    func_0201659c();
    gGame.func_02013370(2);
    data_0204a110.func_ov001_020bd514(0, AdventureModeManager::Create, 0, 1);
    gSaveManager.func_ov001_020ba670();
    gSaveManager.func_ov001_020ba7a8();
    func_ov020_020c4ac0(UnkStruct_027e09a4::Create(0));
}
