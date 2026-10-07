#pragma once

#include "Actor/ActorId.hpp"
#include "Course/Course.hpp"
#include "Map/MapObjectId.hpp"
#include "Player/PlayerActorBase.hpp"
#include "System/SysNew.hpp"
#include "types.h"

#include <nitro.h>
#include <nns/g3d/g3d.h>
#include <vector>

struct UnkStruct_ov021_02106c5c;
struct ZMBFileInfos;
struct UnkStruct_027e0cd8_0C_Base;
struct UnkStruct_027e0cd8_0C_Base_148_00_Base;
struct EntranceInfo;
struct UnkAngleStruct;
struct ModelRender;
struct Cylinder;
struct UnkStruct_ov031_020eeee8;
struct Actor;
struct ActorRef;
struct UnkStruct_ov031_Items_00;
struct UnkStruct_ov031_Items_00_Base;
struct UnkStruct_027e0ce0;
struct UnkStruct_02011e10_Sub1;
struct UnkResourceStruct2;
struct UnkStruct_027e0cec_18_04;
struct UnkSystem5;
struct UnkStruct_027e0960_TableEntry;
struct BMDSectionModel;
struct UnkStruct_027e09ac_14;
struct UnkStackStruct1;
struct ActorUnkCASE_174;
struct UnkStruct_ov000_0208f820_28;
struct UnkStruct_027e0ce0_30_00;
struct Actor_Derived2;
struct ActorUnkCANS;
struct UnkStruct_ov063_02162e88;
struct UnkStruct_ActorUnkCANS_224;
struct ActorUnkZLSL_AnimationTag;
struct UnkStruct_ov063_02163784;
struct UnkStruct_ov063_021632e4;
struct AdventureModeManager_160_14;
struct GameModeManagerBase_104;
struct AdventureModeManager_160_18;
struct AdventureModeManager_184_10;
struct AdventureModeManager_184_14;
struct AdventureModeManager_190_10;
struct AdventureModeManager_18C_10;
struct UnkStruct_027e0ce0_40_Base_78;
struct UnkStruct_ov070_0214dc74;
struct ActorShotArrow;
struct UnkStruct_027e0960_TableEntry_04_Base;

union Vec2bCpp;
union Vec3s;
union Vec2s;

extern "C" {

// itcm
void FlushGfxQueue();
bool func_01ff916c(fx32 *, unk32, unk32);
void func_01ff91b8(unk16 *, fx32, fx32);
void func_01ff9218(fx32 *, fx32, fx32);
unk32 func_01ff9258(fx32, fx32);
unk32 func_01ff930c(s16 *, s16, unk32);
void func_01ff9318(void *, unk32, unk32);
unk32 func_01ff9364(u16 *, UnkAngleStruct);
void func_01ff93c0(VecFx32 *, fx32);
void func_01ff941c(VecFx32 *, VecFx32 *);
void func_01ff94cc(VecFx32 *, VecFx32 *, VecFx32 *);
void func_01ff95a0(VecFx32 *, unk16);
void func_01ff9638(VecFx32 *vec, s16 angle);
void func_01ff9770(VecFx32 *, unk32);
void func_01ff97c8(VecFx32 *, int);
void func_01ff993c(VecFx32 *, VecFx32 *, unk32);
fx32 func_01ff9a5c(VecFx32 *, VecFx32 *, VecFx32 *);
void func_01ff9fbc(MtxFx22 *, unk32, MtxFx22 *);
void func_01ffa60c(const MtxFx33 *, MtxFx33 *, MtxFx33 *);
void func_01ffa7a0(VecFx32 *, MtxFx33 *, VecFx32 *);
void func_01ffa9e8(MtxFx43 *, MtxFx43 *);
void func_01ffad5c(MtxFx43 *, MtxFx43 *, MtxFx43 *);
void func_01ffaf74(VecFx32 *, MtxFx43 *, VecFx32 *);
fx32 func_01ffb428(unk32, unk32);
fx32 func_01ffb464(fx32);
fx32 func_01ffb66c(unk32, unk32);
unk32 func_01ffb6a8(unk32, unk32);
void func_01ffb6e4(unk32, const void *, void *);
void func_01ffb714(const VecFx32 *, const VecFx32 *, VecFx32 *);
void func_01ffb974(unk32, VecFx32 *, VecFx32 *, VecFx32 *);
fx32 func_01ffb9cc(VecFx32 *, VecFx32 *);
u16 func_01ffbbe0(fx32 x, fx32 z);
void func_01ffc5a0(ModelRender *, unk32, UnkAngleStruct, void *);
void func_01ffcb94(unk16, unk16, MtxFx33 *);
bool func_01ffccf4(Cylinder *, VecFx32 *, VecFx32 *, unk32 *);
void func_01ffce1c(Cylinder *, Cylinder *);
int func_01ffcea0(unk32, UnkStruct_ov031_020eeee8 *);
void func_01ffcfcc(VecFx32 *, VecFx32 *, VecFx32 *);
void func_01ffd054(VecFx32 *, VecFx32 *);
void func_01ffd1b4(VecFx32 *, VecFx32 *);
void func_01ffe6c4(Actor **, ActorRef, VecFx32 *, VecFx32 *, s32, VecFx32 *, UnkStruct_ov031_Items_00_Base *);
fx32 func_01ffe868(VecFx32 *, unk32, unk32);
bool func_01ffecdc(unk32 param1, Cylinder *param2);
void func_01ffedac(Vec2bCpp *, VecFx32 *);
void func_01fff05c(u32 *, UnkStruct_027e0cd8_0C_Base *, VecFx32 *);
void func_01fff17c(unk16 *, UnkStruct_027e0ce0 *, unk32);
void func_01fff6d0(void *, VecFx32 *param1, s32 *param2, s32 *param3);
void func_01ffb644(fx32 x, fx32 y);
unk32 func_01ffb558();

// main
UnkStruct_02011e10_Sub1 *func_02001098(void *, size_t, unk32);
void func_020010b8(void *);
size_t func_020010e0(UnkStruct_02011e10_Sub1 *heapID, void *pFile, unk32 param3);
UnkStruct_02011e10_Sub1 *func_020012e0(void *, size_t, unk32);
void func_02001300(void *);
void *func_02001308(void *, size_t, u32);
unk32 func_020013ac(void *param1);
BOOL func_0200169c(void *, int, int, int, int, void *, int);
void func_0200174c();
void func_0200240c(unk32);
BOOL NNS_SndArcLoadBank(unk32 param1, unk32 param2);
void func_02006aa8(unk32, unk32);
void func_02006d8c(u16, unk32);
void func_0200b578(G3d_RenderObject *, void (*)(), unk32, unk32, unk32);
void func_0200b58c(G3d_RenderObject *);
void G3d_GetCurrentMtx(MtxFx43 *mtx1, MtxFx33 *mtx2);
void func_0200ea38(G3d_Model *, unk32, unk32);
void func_0200eab0(G3d_Model *, unk32, u8);
void func_0200ef9c(G3d_Model *);
UnkResourceStruct2 *func_0200f05c(G3d_NameList *, char *);
unk32 func_0200f218(unk32, const char *);
void *func_02012ec8(unk32, unk16, const char *, size_t *, unk32, u8);
void *func_02012ee4(const char *, unk32, unk32, size_t *, u8);
void *func_02012f6c(const char *, size_t *);
BOOL func_02012fa8(const char *);
unk32 func_02012fc4(unk32);
void func_020131ec();
void func_02013214();
void func_0201328c();
void func_020132c8();
void func_020132dc();
void func_02013354();
unk32 func_020147a8();
void func_02014d38(void *, int);
unk32 func_02014fe0();
void func_02015300(unk32 *);
HeapIndex16 func_02015338();
void func_02015628(char *, char *, unk32, void *, size_t);
void func_02015644(char *);
void func_02015664(char *, unk32);
void func_020156c8(char *, char *, unk32);
void func_020156f4(char *);
unk32 func_02015788(u16 param1);
u8 func_020157c0(unk32 param1, unk32 param2);
u8 func_020157f0(unk32 param1, unk32 param2);
fx32 func_02015a18(u16, unk32, unk32, unk32, u16, unk32, unk32);
void func_02015ea8(u32 resourceId, void *);
void func_0201659c();
unk16 func_02016958(VecFx32 *, VecFx32 *);
void func_020169d4(VecFx32 *, VecFx32 *, unk16 *, const char *);
bool func_02016ae0(VecFx32 *, VecFx32 *, UnkAngleStruct, unk32, unk32);
bool func_02016b8c(VecFx32 *, VecFx32 *, unk32, UnkAngleStruct, u16, unk32);
bool func_02016c68(VecFx32 *, VecFx32 *, ActorRef);
Actor *func_02016fbc(ActorId, VecFx32 *, unk32);
unk32 func_02017158();
bool func_02017930(UnkStruct_027e0960_TableEntry_04_Base *, UnkStruct_027e0960_TableEntry_04_Base *);
unk8 func_02017e8c(unk16 *);
fx32 func_02017f54(s16 *, UnkAngleStruct);
void func_02018114(unk16 *, unk16);
s16 func_020196b0(unk32 param1);
void func_020196fc();
void func_02019a74();
void func_02019b3c();
void func_02019c4c();
void func_02019cec(u16 param1, unk32 param2);
unk16 func_0201a710(unk16);
void func_0201b180(bool, bool);
void func_0201b278(bool, bool);
void *func_02022884(unk32);
void SetBrightColor(void *, int);
void func_020241f4();
void func_02024208();
void func_02024264();
void func_02024278();
void func_0202428c();
void func_020242a0();
void func_020242b4();
void func_020242c8();
u32 func_0202447c();
u32 func_02024494();
void func_02024a84(MtxFx33 *param1);
void func_02024df0(u16 *);
void func_02024fc4(fx16 sin, fx16 cos);
void func_02028450(void *param1);
void CopySingle288(MtxFx43 *, MtxFx33 *);
unk32 func_02032784(unk32 param1);
unk32 func_020328c8(void *, void *, size_t);
u16 func_02032920(void *param1, size_t param2);
unk32 func_02039d60(f32, unk32);
f32 func_02039f04(unk32);
f32 func_0203ab58(unk32, f32);
f32 func_0203ad88(f32, unk32);
void func_02097bb8(void);
void func_02098388(void);
BOOL ZMB_020ba350(ZMBFileInfos *pFileInfos, u8 param2, UnkStruct_027e0cd8_0C_Base *pDst);
void ZMB_020ba388(CustomVector<EntranceInfo> *pVector, size_t param2);
void ZMB_020ba408(CustomVector<UnkStruct_027e0cd8_0C_Base_148_00_Base *> *pVector, size_t param2);
void func_0201245c();
void func_02027a28(void *param1, unk32 param2);
void func_02013184();
void func_020131b0();
void func_02031e48(void *param1);
unk32 func_0202d624(void *param1, unk32 param2);
void *func_02001fd4(void *param1, size_t param2);
unk32 func_020011f4(void *);
void func_0200a7b0(unk32 param1, void *param2, void *param3, void *param4, unk32 param5, unk32 param6, unk32 param7,
                   unk32 param8);
unk32 func_0200e234();
void func_02029058(void *, void *);
u32 func_0202955c(void *, int, void *, int, void *);
void *func_02001654(void *);
void *func_020145b0(UnkId *, s32);
void *func_020010c0(void *, size_t, uint);
UnkId *func_02001488(void);
UnkId *func_02014704();
UnkId *func_020011c8(UnkId *, void *);
UnkId *func_02014630(UnkId *, void *);
UnkId *func_02001684(UnkId *, void *);
void func_020327c8(void *param1, unk32 param2);
void func_0201bdd0();
void NNS_SndInit();
void NNS_SndArcInit(void *param1, const char *soundDataPath, unk32 param2, unk32 param3);
void NNS_SndArcPlayerSetup(unk32 param1);
void func_02004d2c(unk32 param1, unk32 param2);
void func_02001778(unk32 param1);
void func_02003f98(unk32 param1, unk32 param2);
void NNS_SndHeapSaveState(unk32 param1);
void func_0202ee0c();
void func_0202f910(unk32 param1);
void func_0202f958(unk32 param1);
void func_02005030(void *param1);
void NNS_SndHandleInit(void *param1);
void NNS_SndPlayerStopSeq(void *param1, unk32 param2);

// overlay 0
void func_ov000_02052238(void *, void *);
void func_ov000_02052bcc(void *);
void func_ov000_02054548(void *, unk32);
unk32 func_ov000_020545d0(void *, void *);
UnkStruct_027e0cec_18_04 *func_ov000_02054690(void *, unk32, unk32, unk32, unk32, unk32);
void func_ov000_020578a4(UnkSystem5 *);
void func_ov000_02057c98(ModelRender *param1, UnkSystem5 *param2);
void func_ov000_02058c74(void *, int, int, int, int);
s8 func_ov000_02059da4(UnkStruct_027e0960_TableEntry *, VecFx32 *param1);
BMDSectionModel *func_ov000_0205abcc(void *, void *, unk32, unk32, void *);
bool func_ov000_0205adfc(VecFx32 *, VecFx32 *);
bool func_ov000_0205aeac();
unk32 func_ov000_0205b090();
unk32 func_ov000_0205b0ac(s16 param1);
void func_ov000_0205be34(void *thisx, unk16 param1);
void func_ov000_0205be44(void *thisx, Vec2s *param1, Vec2s *param2, bool param3, bool param4);
void func_ov000_0205c1f0(unk32 *, u16);
void func_ov000_0205c204(void *, VecFx32 *, int, int, u8);
unk32 func_ov000_0205c384(VecFx32 *param1, VecFx32 *param2);
void func_ov000_0205c584(void *, int, int);
bool func_ov000_0205c74c(unk32, unk32, unk32, unk32);
unk32 func_ov000_0205c7ac(unk32, unk32);
SceneIndex func_ov000_0205c984();
u32 func_ov000_0205c9b4();
bool func_ov000_0205c9d0(unk32 stationSceneIdx);
bool func_ov000_0205ca18(unk32 param1, unk32 param2);
void func_ov000_0205ca74(unk32);
VecFx32 *func_ov000_0205d524(unk32, unk32);
void func_ov000_0205d65c(void *, VecFx32 *, VecFx32 *, UnkAngleStruct);
void func_ov000_0205db44(void *, void *, unk32);
void func_ov000_0205dbe4(u16);
void func_ov000_02062e44(Vec2s *param1, void *param2);
void *func_ov000_02066294();
unk32 func_ov000_02068504(int);
void func_ov000_02072344(u16 *, UnkStruct_027e09ac_14 *);
void func_ov000_02072fd0(UnkStackStruct1 *);
void func_ov000_02073080(void *);
unk32 func_ov000_02077480();
fx32 func_ov000_020775d8(fx32);
unk32 func_ov000_02078aec();
void func_ov000_0207b6c0();
void func_ov000_0207b70c(ActorUnkCASE_174 *param1, Actor *param2);
unk32 func_ov000_0207df88(unk32 *, Cylinder *, unk32);
void Unknown_func_ov000_0207fd7c(void *, void *, unk32);
fx32 func_ov000_02080068(fx32 x);
fx32 func_ov000_02080080(fx32 x);
unk32 func_ov000_02080098(void *, void *, int, int, int, int);
bool func_ov000_02080998(VecFx32 *);
void func_ov000_020814ec(void *, void *);
void func_ov000_02081520(void *, void *, u8);
void func_ov000_020830a4(unk32, unk32, unk32, unk32, unk32, unk32);
void func_ov000_020830d4(unk32, u16, unk32, unk32, unk32);
void func_ov000_02085d1c(void *);
bool func_ov000_020864f8(void *, UnkAngleStruct, void *, void *);
void func_ov000_02087ee8();
unk32 func_ov000_0208832c(s16, unk32);
void func_ov000_02089bbc(void *, unk32);
void func_ov000_0208a7a4(void *, void *);
void func_ov000_0208abc4(ActorRef *, void *, Vec2s *);
void func_ov000_0208ba10(void *, void *, unk32);
void func_ov000_0208bc00(UnkStruct_027e0ce0 *, unk16, unk16 *);
void func_ov000_0208bd20(UnkStruct_027e0ce0 *param1, unk32 param2, unk32 param3, unk32 param4);
void func_ov000_0208cac8(UnkStruct_ov000_0208f820_28 *, VecFx32 *, unk32);
unk32 func_ov000_0208dc98(unk32);
void func_ov000_0208dd60(void *, UnkStruct_027e0ce0_30_00 *);
const char *func_ov000_0208e830(int);
bool func_ov000_0208e874(const u8 *, int, int, int);
void func_ov000_0208f820();
void func_ov000_020977e4();
void func_ov000_02097d4c(VecFx32 *);
void func_ov000_02097e04(VecFx32 *);
void func_ov000_02097ea0(VecFx32 *);
void func_ov000_02097f38(VecFx32 *);
void func_ov000_02097fcc(VecFx32 *);
void func_ov000_0209807c(void *);
void func_ov000_020980e0(void *);
void func_ov000_02098244(VecFx32 *);
void func_ov000_020986b4(s16 *param1, Actor_Derived2 *param2, unk32 param3);
unk32 func_ov000_02098d7c(ActorUnkCANS *param1, UnkStruct_ov063_02162e88 *param2);
void func_ov000_02099870(UnkStruct_ActorUnkCANS_224 *, VecFx32 *, u16);
void func_ov000_02099e58(UnkStruct_ov063_021632e4 *param1, ActorUnkZLSL_AnimationTag param2, unk32 param8);
void func_ov000_02099f64(UnkStruct_ov063_02163784 *param1, ActorUnkZLSL_AnimationTag param2, unk32 param3);
bool func_ov000_020a0a90(size_t, unk32, size_t);
void func_ov000_020a1330(u16, ActorRef, VecFx32, UnkAngleStruct, unk32, unk32);
void func_ov000_020a14e4(unk8, VecFx32 *);
u8 func_ov000_020a9a50();
void func_ov000_0205bedc(void *param1, void *param2, void *param3, void *param4, unk32 param5, int);
void func_ov000_020623d8(void *param1, unk32 param2);
unk8 func_ov000_02070164(void *); //! TODO: turn to a class
void func_ov000_0205a950(u8 bgType, bool isTopScreen, bool);
void func_ov000_0205a944(u8 bgType, bool isTopScreen, bool);
void *func_ov000_0208ea70(PlayerCharacter, unk32, bool); // returns pointer to .NSBTX

// overlay 2
AdventureModeManager_160_14 *func_ov002_020b6520(void *, void *, int);
unk32 func_ov002_020b6cf4(void *, unk32 param1);
void func_ov002_020b6d50(void *);
void func_ov002_020b6d68(void *);

// overlay 3
GameModeManagerBase_104 *func_ov003_020b6520(void *param1, void *param2);

// overlay 4
unk32 func_ov004_020b697c(void *, unk32 param1);

// overlay 6
AdventureModeManager_160_18 *func_ov006_020b6ab0(void *, void *);

// overlay 7
void func_ov007_02102850(uint **);
void func_ov007_021028a0(uint **);

// overlay 8
GameModeManagerBase_104 *func_ov008_020b6520(void *);

// overlay 10
AdventureModeManager_184_10 *func_ov010_020b6520(void *);
AdventureModeManager_184_10 *func_ov010_020b65fc(void *);
AdventureModeManager_184_14 *func_ov010_020b88c4(void *);

// overlay 11
AdventureModeManager_18C_10 *func_ov011_020b6520(void *, int);
void func_ov011_020b84f0(s16 *param1, void *, unk32 param2);
AdventureModeManager_190_10 *func_ov011_020b8e54(void *, int);

// overlay 14
unk32 func_ov014_020b6520(void *, int, int);

// overlay 20
void func_ov020_020c86d8(void *);

// overlay 21
const UnkStruct_ov021_02106c5c *func_ov021_020ea868(int index);
void func_ov021_020f8818();

// overlay 26
void func_ov026_020e9208();
void func_ov026_020efc40(unk32 param1);
void func_ov026_020f46a8(Actor *param1, VecFx32 *param2, bool param3);
bool func_ov026_020f4be0(int, int);
unk32 func_ov026_020f4c9c(SceneIndex);
u16 func_ov026_02106564(void *);
bool func_ov026_0210d664(SceneIndex sceneIndex, MapObjectId mapObjId);
unk32 func_ov026_0212e54c();

// overlay 31
void func_ov031_020dcea4(void *, UnkStruct_027e0ce0_40_Base_78 *, UnkAngleStruct);
void func_ov031_020e0f30(ActorRef);
unk16 func_ov031_020e3dd0(Actor *param0);
void func_ov031_020f439c(void *, Vec3s *, unk32);
bool func_ov031_020f7538(Actor *param1, unk32 param2);
void func_ov031_020f7574(Actor *param1, unk32 param2);
void func_ov031_0210acd4(Vec2bCpp);
unk32 func_ov031_0210af50(Vec2bCpp, unk32 *);
void func_ov031_0210b0e4(Vec2bCpp, unk32);

// overlay 34
void func_ov034_02121de4(void *);

// overlay 70
UnkStruct_ov070_0214dc74 *func_ov070_02143fe4(int index);

// overlay 71
void func_ov071_0215e8d4();

// overlay 75
void func_ov075_02160864(ActorShotArrow *, unk32);

// overlay 84
void func_ov084_0216122c();
void func_ov084_021612ac();

// overlay 89
void func_ov089_02165b18(void *);
void func_ov089_02165c34(void *);

// overlay 95
void func_ov095_0217aa88(void *, unk16 *, unk32, UnkAngleStruct);
void func_ov095_0217aaa8(void *, unk16 *, unk32);

// overlay 96
bool func_ov096_02179c14();
}
