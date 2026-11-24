#include "Player/PlayerGet.hpp"
#include "Player/PlayerLink.hpp"
#include "Player/PlayerSceneChange.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_02090850.hpp"
#include "Unknown/UnkStruct_ov000_020b2cec.hpp"

extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2e60;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2e68;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2e70;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2e78;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2e80;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2e88;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2e90;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2e98;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2ea0;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2ea8;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2eb0;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2eb8;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2ec0;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2ec8;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2ed0;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2ed8;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2ee0;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2ee8;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2ef0;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2ef8;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f00;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f08;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f10;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f18;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f20;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f28;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f30;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f38;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f40;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f48;
extern PTMF<PlayerLinkActor_A0>::PTMFCallback data_ov000_020b2f50;

UnkStruct_ov000_020b2cec data_ov000_020b2cec[] = {
    {OverlayIndex_None, data_ov000_020b2e60},              // PlayerLinkActor_A0::func_ov000_02094404
    {OverlayIndex_None, data_ov000_020b2e68},              // PlayerLinkActor_A0::func_ov000_020943e4
    {OverlayIndex_None, data_ov000_020b2e70},              // PlayerLinkActor_A0::func_ov000_020943c4
    {OverlayIndex_None, data_ov000_020b2e78},              // PlayerLinkActor_A0::func_ov000_020943a4
    {OverlayIndex_None, data_ov000_020b2e80},              // PlayerLinkActor_A0::func_ov000_02094384
    {OverlayIndex_None, data_ov000_020b2e88},              // PlayerLinkActor_A0::func_ov000_02094364, related to player damage
    {OverlayIndex_None, data_ov000_020b2e90},              // PlayerLinkActor_A0::func_ov000_02094344
    {OverlayIndex_None, data_ov000_020b2e98},              // PlayerLinkActor_A0::func_ov000_02094324
    {OverlayIndex_None, data_ov000_020b2ea0},              // PlayerLinkActor_A0::func_ov000_02094304
    {OverlayIndex_None, data_ov000_020b2ea8},              // PlayerLinkActor_A0::func_ov000_020942e4
    {OverlayIndex_None, data_ov000_020b2eb0},              // PlayerLinkActor_A0::func_ov000_020942b4
    {OverlayIndex_PlayerGet, data_ov000_020b2eb8},         // PlayerLinkActor_A0::func_ov000_02094294
    {OverlayIndex_PlayerSceneChange, data_ov000_020b2ec0}, // PlayerLinkActor_A0::func_ov000_02094274
    {OverlayIndex_PlayerSceneChange, data_ov000_020b2ec8}, // PlayerLinkActor_A0::func_ov000_02094254
    {OverlayIndex_PlayerDemo, data_ov000_020b2ed0},        // PlayerLinkActor_A0::func_ov000_02094234
    {OverlayIndex_PlayerDown, data_ov000_020b2ed8},        // PlayerLinkActor_A0::func_ov000_02094214
    {OverlayIndex_PlayerDown, data_ov000_020b2ee0},        // PlayerLinkActor_A0::func_ov000_020941f4
    {OverlayIndex_PlayerPanFlute, data_ov000_020b2ee8},    // PlayerLinkActor_A0::func_ov000_020941d4
    {OverlayIndex_PlayerPanFlute, data_ov000_020b2ef0},    // PlayerLinkActor_A0::func_ov000_020941b4
    {OverlayIndex_PlayerDemo, data_ov000_020b2ef8},        // PlayerLinkActor_A0::func_ov000_02094194
    {OverlayIndex_PlayerDemo, data_ov000_020b2f00},        // PlayerLinkActor_A0::func_ov000_02094174
    {OverlayIndex_None, data_ov000_020b2f08},              // PlayerLinkActor_A0::func_ov000_02094154
    {OverlayIndex_PlayerDemo, data_ov000_020b2f10},        // PlayerLinkActor_A0::func_ov000_02094124
    {OverlayIndex_PlayerTornado, data_ov000_020b2f18},     // PlayerLinkActor_A0::func_ov000_02094104
    {OverlayIndex_PlayerBoomerang, data_ov000_020b2f20},   // PlayerLinkActor_A0::func_ov000_020940e4
    {OverlayIndex_PlayerWhip, data_ov000_020b2f28},        // PlayerLinkActor_A0::func_ov000_020940c4
    {OverlayIndex_PlayerBow, data_ov000_020b2f30},         // PlayerLinkActor_A0::func_ov000_020940a4
    {OverlayIndex_PlayerSandrock, data_ov000_020b2f38},    // PlayerLinkActor_A0::func_ov000_02094084
    {OverlayIndex_PlayerBomb, data_ov000_020b2f40},        // PlayerLinkActor_A0::func_ov000_02094054
    {OverlayIndex_PlayerPanFlute, data_ov000_020b2f48},    // PlayerLinkActor_A0::func_ov000_02094034
    {OverlayIndex_PlayerPanFlute, data_ov000_020b2f50},    // PlayerLinkActor_A0::func_ov000_02094014
};

void PlayerLinkActor_A0::func_ov000_02094014() {}
void PlayerLinkActor_A0::func_ov000_02094034() {}
void PlayerLinkActor_A0::func_ov000_02094054() {}
void PlayerLinkActor_A0::func_ov000_02094084() {}
void PlayerLinkActor_A0::func_ov000_020940a4() {}
void PlayerLinkActor_A0::func_ov000_020940c4() {}
void PlayerLinkActor_A0::func_ov000_020940e4() {}
void PlayerLinkActor_A0::func_ov000_02094104() {}
void PlayerLinkActor_A0::func_ov000_02094124() {}
void PlayerLinkActor_A0::func_ov000_02094154() {}
void PlayerLinkActor_A0::func_ov000_02094174() {}
void PlayerLinkActor_A0::func_ov000_02094194() {}
void PlayerLinkActor_A0::func_ov000_020941b4() {}
void PlayerLinkActor_A0::func_ov000_020941d4() {}
void PlayerLinkActor_A0::func_ov000_020941f4() {}
void PlayerLinkActor_A0::func_ov000_02094214() {}
void PlayerLinkActor_A0::func_ov000_02094234() {}

void PlayerLinkActor_A0::func_ov000_02094254() {
    new(this->mUnk_80) PlayerSceneChange2(&this->mUnk_84);
}

void PlayerLinkActor_A0::func_ov000_02094274() {
    new(this->mUnk_80) PlayerSceneChange(&this->mUnk_84);
}

void PlayerLinkActor_A0::func_ov000_02094294() {
    new(this->mUnk_80) PlayerGet(&this->mUnk_84);
}

void PlayerLinkActor_A0::func_ov000_020942b4() {}
void PlayerLinkActor_A0::func_ov000_020942e4() {}
void PlayerLinkActor_A0::func_ov000_02094304() {}
void PlayerLinkActor_A0::func_ov000_02094324() {}
void PlayerLinkActor_A0::func_ov000_02094344() {}

void PlayerLinkActor_A0::func_ov000_02094364() {
    new(this->mUnk_80) UnkStruct_ov000_02090850(&this->mUnk_84);
}

void PlayerLinkActor_A0::func_ov000_02094384() {}
void PlayerLinkActor_A0::func_ov000_020943a4() {}
void PlayerLinkActor_A0::func_ov000_020943c4() {}
void PlayerLinkActor_A0::func_ov000_020943e4() {}
void PlayerLinkActor_A0::func_ov000_02094404() {}
