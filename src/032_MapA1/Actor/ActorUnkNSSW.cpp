#include "Actor/ActorUnkNSSW.hpp"

#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkRCHU.hpp"
#include "CommonFuncs.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b4ec4.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

class ActorWithMat4x3pAt154 : public Actor {
public:
    /* 000 (base) */
    /* 094 */ PAD(0x094, 0x154);
    /* 154 */ MtxFx43 mUnk_154;
    /* 184 */
};

class UnkActor_ov032_02120190 : public Actor {
public:
    /* 000 (base) */
    /* 94 */ PAD(0x94, 0xE8);
    /* E8 */ VecFx32 mUnk_E8;
};

class UnkStruct_ov071_0215f92c : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ u16 mUnk_04;
    /* 08 */ UnkStruct_ov031_020e5d18_00 mUnk_08;
    /* 0C */

    UnkStruct_ov071_0215f92c();
};

#if IS_JP
class ActorWithBoolAt17F : public Actor {
public:
    /* 000 (base) */
    /* 094 */ PAD(0x094, 0x17F);
    /* 17F */ bool mUnk_17F;
    /* 180 */
};
#endif

extern fx16 data_02040964[];
extern VecFx32 data_027e0108;
extern unk32 data_ov000_020aecf8;

DECL_PROFILE(ActorProfileUnkNSSW);

extern char data_ov032_02121ee4;

Actor *ActorProfileUnkNSSW::Create() {
    return new(HeapIndex_2) ActorUnkNSSW();
}

ActorProfileUnkNSSW::ActorProfileUnkNSSW() :
    ActorProfile(ActorId_NSSW) {
    this->mUnk_04.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.3f));
}

ActorUnkNSSW::ActorUnkNSSW() :
    mUnk_0B0(
        G3d_GetUnkPtr(((MapObjectProfile_Derived2 *) data_ov000_020b5d34.GetProfileFromId(MapObjectId_SWSW))->mUnk_20.mUnk_50,
                      &data_ov032_02121ee4),
        true),
    mUnk_0BC(0x7),
    mUnk_0E0(this),
    mUnk_104(this),
    mUnk_134(0x0),
#if IS_JP
    mUnk_138_jp(this),
#endif
    mUnk_138_eur(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_144_eur(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_174_eur(0x0),
    mUnk_178_eur(0x0),
    mUnk_17C_eur(0x0),
    mUnk_180_eur(0x1000),
    mUnk_184_eur(NULL),
    mUnk_188_eur(NULL),
    mUnk_18C_eur(0x0),
    mUnk_190_eur(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f)),
    mUnk_19D_eur(false) {
    MtxFx33_InitIdentity(&this->mUnk_150_eur);
    this->mUnk_40 = &this->mUnk_0E0;
}

bool ActorUnkNSSW::Init(unk32 param1) {
    this->mUnk_104.mUnk_04 = this->mRef;
    this->mUnk_0E0.mUnk_1C = 0x1;
    this->mUnk_19D_eur     = false;

    this->func_ov032_02120894(0x0);
    return true;
}

void ActorUnkNSSW::Update() {
    VecFx32Cpp sp10(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f));
    VecFx32Cpp sp04(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f));

    func_01ffa7a0(&sp10.vec, &this->mUnk_150_eur, &sp10.vec);
    func_01ffa7a0(&sp04.vec, &this->mUnk_150_eur, &sp04.vec);

    fx16 z1 = sp10.vec.z;
    fx16 y1 = sp10.vec.y;

    fx16 z2 = sp04.vec.z;
    fx16 y2 = sp04.vec.y;
    fx16 x2 = sp04.vec.x;

    fx16 x1 = sp10.vec.x;

    VecFx16_Init(x1, y1, z1, (VecFx16 *) &this->mUnk_0E0.mUnk_08);
    VecFx16_Init(x2, y2, z2, (VecFx16 *) &this->mUnk_0E0.mUnk_0E);

    this->mUnk_0E0.mUnk_1C = 0x1;

    this->mUnk_190_eur.Set(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f));
    this->mUnk_19C_eur = false;

    switch (this->mUnk_0BC) {
        case 0x0:
            MtxFx33_InitYRotation(&this->mUnk_150_eur, SIN(this->mAngle.angle_u), COS(this->mAngle.angle_u));
            func_ov000_0205f8e8(&this->mUnk_174_eur, &this->mUnk_150_eur);
            this->func_ov032_02120880();
            break;

        case 0x1: {
            this->func_ov032_02120880();
            if (this->mTimer.value <= 0x14) {
                break;
            }

            UnkStruct_027e0cd8_0C_Base *data = data_027e0cd8->mUnk_0C;
            Vec2bCpp sp0;
            func_01ffedac(&sp0, &this->mPos);

            switch (data->func_ov000_02080180(&sp0)) {
                case 0x09:
                case 0x14:
                case 0x17:
                case 0x28:
                case 0x2B:
                    this->func_ov032_02120894(0x5);
                    break;
            }

            break;
        }
        case 0x3:
            this->func_ov032_02120190();
#if IS_JP
            {
                ActorWithBoolAt17F *actor = (ActorWithBoolAt17F *) gpActorManager->func_01fff3b4(this->mUnk_134);
                if (actor != NULL) {
                    actor->mUnk_17F = this->mUnk_19C_eur = true;
                }
            }
#endif
            break;

        case 0x4:
            this->func_ov032_02120880();
            this->func_ov032_021203fc();
            break;

        case 0x6:
            this->func_ov032_021202d8();
            break;

        default:
            break;
    }

    this->mTimer.Update();
#if IS_JP || IS_EUR1
    if (!func_ov000_02080998(&this->mPos)) {
        return;
    }

    this->func_ov032_02120894(0x5);
#endif
}

void ActorUnkNSSW::func_ov032_02120118() {
    ActorWithMat4x3pAt154 *actor = (ActorWithMat4x3pAt154 *) gpActorManager->func_01fff3b4(this->mUnk_134);
    if (actor == NULL) {
        return;
    }

    CopySingle288(&actor->mUnk_154, &this->mUnk_150_eur);

    MtxFx33 stack;
    MtxFx33_InitYRotation(&stack, data_02040964[0], data_02040964[1]);

    func_01ffa60c(&stack, &this->mUnk_150_eur, &this->mUnk_150_eur);

    func_ov000_0205f8e8(&this->mUnk_174_eur, &this->mUnk_150_eur);
}

void ActorUnkNSSW::func_ov032_02120190() {
    UnkActor_ov032_02120190 *actor = (UnkActor_ov032_02120190 *) gpActorManager->func_01fff3b4(this->mUnk_134);

    if (actor == NULL) {
        this->func_ov032_02120894(0x6);
        return;
    }

    VecFx16_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), (VecFx16 *) &this->mUnk_0E0.mUnk_08);
    VecFx16_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), (VecFx16 *) &this->mUnk_0E0.mUnk_0E);
    VecFx32_Copy(&this->mPos, &this->mPrevPos);

    VecFx32 vec;
    VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(-1.0002f), &vec);

    func_01ffa7a0(&vec, &this->mUnk_150_eur, &vec);

    VecFx32_Add(&vec, &actor->mUnk_E8, &vec);

    VecFx32_Copy(&vec, &this->mPos);

    this->func_ov032_02120118();
}

// non-matching (ctor of sp0C called before sp0C.mUnk_08.mUnk_00 = NULL)
void ActorUnkNSSW::func_ov032_0212025c() {
    UnkStruct_ov031_020e5d18_00 sp14;
    sp14.mUnk_00 = NULL;
    UnkStruct_ov071_0215f92c sp0C;
    sp0C.mUnk_08.mUnk_00 = NULL;

    UnkStruct_ov031_020e5d18_00 *pActor = &sp0C.mUnk_08;
    func_01ffe6c4(&pActor->mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, 0x4, &this->mPos, &sp0C);

    this->mUnk_46 = ((Actor *) pActor)->func_ov000_0207e294(this->mUnk_30);
    if (this->mUnk_46 & 0x4) {
        this->func_ov032_02120894(0x5);
    }
}

void ActorUnkNSSW::func_ov032_021202d8() {
    fx32 newY                = this->mUnk_144_eur.vec.y - data_ov000_020aecf8;
    this->mUnk_1A0_eur       = data_ov000_020aecf8;
    this->mUnk_144_eur.vec.y = newY;

    VecFx32_Copy(&this->mPos, &this->mPrevPos);
    VecFx32_Add(&this->mPos, &this->mUnk_144_eur.vec, &this->mPos);

    VecFx32 vec = this->mPos;
    vec.y += FX_F32_TO_FX32(0.2f);

    fx32 y = data_027e0cd8->mUnk_0C->vfunc_28(&vec, 0x1, 0x0);
    if (this->mPos.y <= y) {
        Vec2bCpp sp00;
        UnkStruct_027e0cd8_0C_Base *data_0C = data_027e0cd8->mUnk_0C;
        func_01ffedac(&sp00, &vec);
        if (data_0C->func_ov000_02080180(&sp00) == 0x14) {
            this->func_ov032_02120894(0x5);
        } else {
            this->mPos.y             = y;
            this->mUnk_144_eur.vec.y = FX_F32_TO_FX32(0.0f);
            this->func_ov032_02120894(0x1);
        }
    }

    if (this->mPos.y >= FX_F32_TO_FX32(-5.0002f)) {
        return;
    }

    this->func_ov032_02120894(0x5);
}

// non-matching
void ActorUnkNSSW::func_ov032_021203fc() {
    /* 90 */ UnkStruct_ov031_020e5d18_00 stack_90;
    /* 84 */ VecFx32Cpp stack_84;
    /* 78 */ VecFx32Cpp stack_78;
    /* 68 */ Cylinder stack_68;
    /* 58 */ Cylinder stack_58;
    /* 40 */ UnkStruct_ov031_020e5d18_00 stack_40;
    /* 34 */ VecFx32Cpp stack_34;
    /* 28 */ VecFx32Cpp stack_28;
    /* 1C */ VecFx32Cpp stack_1C;
    /* 10 */ VecFx32Cpp stack_10;
    /* 0C */ u16 stack_0C;

    if (this->mTimer.value < 0x4) {

        this->func_ov032_02120190();
        stack_90.mUnk_00 = NULL;

        UnkStruct_ov031_020e5d18_00 *pActor = &stack_90;

#if IS_JP
        func_01ffe6c4(&pActor->mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos,
                      &this->mUnk_138_jp);
        ((Actor *) pActor)->func_ov000_0207df88(this->mUnk_30, 0x0A);
#else
        func_01ffe6c4(&pActor->mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos, NULL);
        ((Actor *) pActor)->func_ov000_0207df88(this->mUnk_30, 0x10);
#endif

        if (this->mUnk_0BC == 0x0) {
            MapObjectUnkSWSW *objectSWSW = this->mUnk_188_eur;
            if (objectSWSW == NULL) {
                return;
            }

            fx32 z         = objectSWSW->mPos.z + objectSWSW->mUnk_0EC.vec.z;
            fx32 x         = objectSWSW->mPos.x + objectSWSW->mUnk_0EC.vec.x;
            fx32 y         = objectSWSW->mPos.y + objectSWSW->mUnk_0EC.vec.y;
            stack_34.vec.x = x;
            stack_34.vec.y = y;
            stack_34.vec.z = z;

            stack_1C = stack_34;

            VecFx32_Copy(&stack_1C.vec, &this->mPos);
            VecFx32_Copy(&stack_1C.vec, &this->mPrevPos);
            return;
        }

        this->func_ov032_0212025c();
        return;
    }

    stack_84       = this->mUnk_138_eur;
    stack_84.vec.x = -stack_84.vec.x;
    stack_84.vec.y = -stack_84.vec.y;
    stack_84.vec.z = -stack_84.vec.z;

    if (!stack_84.TryNormalize()) {
        stack_84.vec.y = data_027e0108.y;
        stack_84.vec.x = data_027e0108.x;
        stack_84.vec.z = data_027e0108.z;
        unk16 *ptr     = (unk16 *) &stack_0C;
        func_01fff17c(ptr, data_027e0ce0, stack_84.vec.z);
        func_01ff9638(&stack_84.vec, *ptr);
    }

    stack_78.vec.x = stack_84.vec.x;
    stack_78.vec.y = FX_F32_TO_FX32(0.0f);
    stack_78.vec.z = stack_84.vec.z;
    if (!func_ov000_0205f7d4(&stack_58.pos, &data_027e0108, &stack_78.vec)) {
        stack_58.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f));
    }
    if (!func_ov000_0205f7d4(&stack_68.pos, &stack_78.vec, &stack_84.vec)) {
        stack_68.Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f));
    }

    func_ov000_0205f6e4(&stack_68.pos, &stack_58.pos);

    func_ov000_0205f298(&this->mUnk_174_eur, &stack_68.pos, 0x333);

    func_ov000_0205f4fc(&this->mUnk_174_eur, &this->mUnk_150_eur);

    VecFx32_Copy(&this->mPos, &this->mPrevPos);

    VecFx32_Add(&this->mPos, &this->mUnk_144_eur.vec, &this->mPos);
    stack_40.mUnk_00 = NULL;

    UnkStruct_ov031_020e5d18_00 *pActor = &stack_40;

#if IS_JP
    func_01ffe6c4(&pActor->mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos,
                  &this->mUnk_138_jp);
    ((Actor *) pActor)->func_ov000_0207df88(this->mUnk_30, 0x0A);
#else
    func_01ffe6c4(&pActor->mUnk_00, this->mRef, &this->mPos, &this->mPrevPos, (s16) this->mUnk_44, &this->mPos, NULL);
    ((Actor *) pActor)->func_ov000_0207df88(this->mUnk_30, 0x10);
#endif

    if (this->mUnk_0BC == 0x0) {
        MapObjectUnkSWSW *objectSWSW = this->mUnk_188_eur;
        if (objectSWSW == NULL) {
            return;
        }

        fx32 z         = objectSWSW->mPos.z + objectSWSW->mUnk_0EC.vec.z;
        fx32 x         = objectSWSW->mPos.x + objectSWSW->mUnk_0EC.vec.x;
        fx32 y         = objectSWSW->mPos.y + objectSWSW->mUnk_0EC.vec.y;
        stack_28.vec.x = x;
        stack_28.vec.y = y;
        stack_28.vec.z = z;

        stack_10 = stack_28;

        VecFx32_Copy(&stack_10.vec, &this->mPos);
        VecFx32_Copy(&stack_10.vec, &this->mPrevPos);
        return;
    }

    VecFx32_Copy(&this->mPos, &this->mUnk_104.mUnk_0C.pos);
    this->mUnk_104.mUnk_0C.size = FX_F32_TO_FX32(0.3f);

    data_027e09c0->func_ov000_0207e58c(this->mRef, 0x8, 0x4, &this->mUnk_104);

    this->func_ov032_0212025c();
}

void ActorUnkNSSW::vfunc_2C(Actor_vfunc_30 *param1) {
    if (!this->Actor::func_01fff5d0(param1, 0x0)) {
        return;
    }

    unk32 val = data_ov000_020b4ec4.func_01ffc768(0x3);
    func_0200ef5c(this->mUnk_0B0.mpModel, val);
    func_0200ef9c(this->mUnk_0B0.mpModel, 0x1F);

    VecFx32 sp24;
    VecFx32 sp18;
    VecFx32 sp0C;
    // VecFx32_Add does not match
    VecFx32_Init(this->mPos.x + this->mUnk_190_eur.vec.x, this->mPos.y + this->mUnk_190_eur.vec.y,
                 this->mPos.z + this->mUnk_190_eur.vec.z, &sp0C);

    this->mUnk_0B0.vfunc_14(&this->mUnk_150_eur, &sp0C);

    VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f), &sp24);

    func_01ffa7a0(&sp24, &this->mUnk_150_eur, &sp24);
    fx16 angle = func_01ffbbe0(sp24.x, sp24.z);

    sp18   = this->mPos;
    sp24.x = FX_F32_TO_FX32(0.1001f);
    sp24.y = FX_F32_TO_FX32(0.0f);
    sp24.z = FX_F32_TO_FX32(0.9f);

    sp18.y += FX_F32_TO_FX32(0.2f);

    data_027e09b4->func_ov017_020c08c4(&sp18, sp24.x, sp24.z, 0x1F, angle, 0x1);
}

void ActorUnkNSSW::func_ov032_02120880() {
    this->mUnk_3C = &this->mUnk_0C0;
    this->Actor::func_ov000_020989e0();
}

// non-matching
// eur,usa: regalloc
// eur1,jp: regalloc + accessing actor in spC
void ActorUnkNSSW::func_ov032_02120894(unk32 param1) {
    unk32 oldVal0BC = this->mUnk_0BC;
    unk32 newVal1A0 = data_ov000_020aecf8;
    this->mUnk_0BC  = param1;
    this->mTimer.Reset();
    this->mUnk_1A0_eur = newVal1A0;

    switch (param1) {
        case 0x0:
            this->mUnk_1A0_eur = 0x0;
            this->mUnk_18C_eur = 0x0;
            break;

        case 0x1:
            this->mUnk_1A0_eur = 0x0;
            break;

        case 0x2:
            this->mUnk_1A0_eur = 0x0;
            break;

        case 0x3:
            this->mUnk_1A0_eur = 0x0;

            if (this->mUnk_188_eur != NULL && this == this->mUnk_188_eur->mUnk_114) {
                this->mUnk_188_eur->vfunc_38();
            }

            func_ov000_0205f8e8(&this->mUnk_174_eur, &this->mUnk_150_eur);
            break;

        case 0x4:
            this->mUnk_138_eur.CopyIn(&this->mUnk_144_eur);
            *(s16 *) &this->mUnk_44 &= ~0x20;
            this->mUnk_1A0_eur = 0x0;
            break;

        case 0x5:
            this->mUnk_1A0_eur = 0x0;
            if (oldVal0BC == 0x5) {
                break;
            }

            if (this->mUnk_184_eur != NULL) {
                this->mUnk_184_eur->func_ov032_02121b90();
            }

            if (this->mUnk_19D_eur == 0x0) {
                data_027e0cec->func_ov000_0209feac(0x0822, &this->mPos, 0x2, 0x0, 0x0);
                data_027e0cec->func_ov000_0209feac(0xD09C, &this->mPos, 0x2, 0x0, 0x0);
                data_027e0cec->func_ov000_0209feac(0xD09D, &this->mPos, 0x2, 0x0, 0x0);
                data_027e0cec->func_ov000_0209feac(0xD09E, &this->mPos, 0x2, 0x0, 0x0);
                data_027e0cec->func_ov000_0209feac(0xD09F, &this->mPos, 0x2, 0x0, 0x0);
                data_027e0cec->func_ov000_0209feac(0xD0A0, &this->mPos, 0x2, 0x0, 0x0);
                data_027e09a8->func_ov000_02071b30(0x9927, &this->mPos, 0x0);
            }

            this->Actor::func_ov000_020984d0();
            break;

        case 0x6: {
            this->mUnk_144_eur.Set(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f));
            VecFx32 vec;
            VecFx32_Init(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(1.0f), &vec);

            func_01ffa7a0(&vec, &this->mUnk_150_eur, &vec);

            u16 angle = (u16) (s16) func_01ffbbe0(vec.x, vec.z);

            MtxFx33_InitYRotation(&this->mUnk_150_eur, SIN(angle), COS(angle));

            *(s16 *) &this->mUnk_44 &= ~0x20;

#if IS_JP || IS_EUR1
            UnkStruct_ov031_020e5d18_00 spC;
            spC.mUnk_00   = NULL;
            VecFx32 *vec2 = this->Actor::func_ov000_0209853c(0x0);

            func_01ffe6c4(&spC.mUnk_00, this->mRef, &this->mPos, vec2, (s16) this->mUnk_44, &this->mPos, NULL);

            spC.mUnk_00->func_ov000_0207df88(this->mUnk_30, 0x10);

            spC.mUnk_00->Actor::func_ov000_0207e294(this->mUnk_30);
#endif
            break;
        }

        default:
            break;
    }
}

void ActorUnkNSSW::func_ov032_02120b34(RefStruct ref) {
    if (this->mUnk_0BC == 0x3) {
        return;
    }
    this->mUnk_134 = ref;
    this->func_ov032_02120894(0x2);
}

void ActorUnkNSSW::func_ov032_02120b6c() {
    this->func_ov032_02120894(0x3);
}

void ActorUnkNSSW::func_ov032_02120b7c(VecFx32 *param1) {
    fx32 x = param1->x;
    fx32 y = param1->y;
    fx32 z = param1->z;
    this->mUnk_138_eur.Set(x, y, z);

    if (x == FX_F32_TO_FX32(0.0f) && y == FX_F32_TO_FX32(0.0f) && z == FX_F32_TO_FX32(0.0f)) {
        this->func_ov032_02120894(0x6);
        return;
    }
    this->func_ov032_02120894(0x4);
}

void ActorUnkNSSW::func_ov032_02120bc0() {
    if (this->mUnk_188_eur != NULL && this == this->mUnk_188_eur->mUnk_114) {
        this->mUnk_188_eur->vfunc_38();
    }

    this->func_ov032_02120894(0x6);
}

void ActorUnkNSSW::func_ov032_02120bfc(Actor *actor) {
#if IS_EUR1
    if (this->mUnk_0BC != 0x4) {
        return;
    }
#endif
    this->mUnk_19D_eur = true;
    if (actor != NULL) {
        switch (actor->GetActorId()) {
            case ActorId_RCMS:
                this->mUnk_19D_eur = false;
                break;
            case ActorId_RCHU:
                if (((ActorUnkRCHU *) actor)->mUnk_268 != 0x0) {
                    this->mUnk_19D_eur = false;
                }
                break;
#if IS_JP
            case ActorId_NSSW:
            case ActorId_FRTN:
                this->mUnk_19D_eur = false;
                break;
#endif
            default:
                break;
        }
    }

    this->func_ov032_02120894(0x5);
}

#if IS_JP
void ActorUnkNSSW::func_ov032_02122b0c(MapObject *mapObject) {
    if (mapObject == NULL) {
        return;
    }

    MapObjectId id = mapObject->GetMapObjectId();
    // Weird branching, I think that there is a better way
    if (id <= MapObjectId_FSPS) {
        if (id < MapObjectId_FSPS && id != MapObjectId_FLSP) {
            return;
        }
    } else if (id > MapObjectId_GTTN || id != MapObjectId_GTTN) {
        return;
    }
    this->mUnk_19D_eur = false;
    this->func_ov032_02120894(0x5);
}
#endif

// non-matching
void ActorUnkNSSW::func_ov032_02120c64(MapObjectUnkSWSW *param1) {
    if (this->mUnk_0BC != 0x4) {
        return;
    }

    VecFx32 vec = param1->mPos;
    VecFx32_Copy(&vec, &this->mPrevPos);
    VecFx32_Copy(&vec, &this->mPos); // non-matching

    this->mUnk_18C_eur = 0x0;
    MtxFx33_InitIdentity(&this->mUnk_150_eur);

    this->mUnk_138_eur.Set(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f));

    this->func_ov032_02120894(0x0);
    this->mUnk_188_eur = param1;
}

ActorUnkNSSW_0E0::ActorUnkNSSW_0E0(ActorUnkNSSW *actor) :
    Actor_C4(actor, 0x1) {
    this->mUnk_20 = actor;
    this->mUnk_04 = 0x1;
}

bool ActorUnkNSSW_0E0::vfunc_00(RefStruct ref, unk32 param2) {
    if (param2 != 0x0) {
        ActorUnkNSSW *actor = this->GetActorPtr<ActorUnkNSSW>();
        actor->func_ov032_02120b34(ref);
    }

    return this->Actor_C4::vfunc_00(ref, param2);
}

bool ActorUnkNSSW_0E0::vfunc_04() {
    this->GetActorPtr<ActorUnkNSSW>()->func_ov032_02120b6c();

    return this->Actor_C4::vfunc_04();
}

void ActorUnkNSSW_0E0::vfunc_0C(VecFx32 *param1) {
    if (VecFx32_Length(param1) < FX_F32_TO_FX32(0.01f)) {
        this->GetActorPtr<ActorUnkNSSW>()->func_ov032_02120bc0();
    } else {
        this->GetActorPtr<ActorUnkNSSW>()->func_ov032_02120b7c(param1);
    }

    return this->Actor_C4::vfunc_0C(param1);
}

ActorUnkNSSW_104::ActorUnkNSSW_104(ActorUnkNSSW *actor) :
    mUnk_2C(actor) {}

void ActorUnkNSSW_104::vfunc_10(Actor *actor) {
    this->mUnk_2C->func_ov032_02120bfc(actor);
}

#if IS_JP
// non-matching
bool ActorUnkNSSW_138::vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                const VecFx32 *param4) {

    if ((s32) ref.moRef.unk_00_u16 & 0x1000) {
        Vec2bCpp vec(FX_F32_TO_FX32(0.0f), FX_F32_TO_FX32(0.0f));
        MapObject *mapObject = gpMapObjManager->func_01fff498(vec);

        if (mapObject != NULL) {
            this->mUnk_08->func_ov032_02122b0c(mapObject);
        }
    }

    this->UnkStruct_027e0ce0_38_Base::vfunc_0C(ref, param2, param3, param4);
}
#endif
