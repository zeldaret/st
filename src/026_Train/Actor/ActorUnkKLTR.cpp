//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKLTR.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"

extern "C" {
void func_ov026_02102934(unk32);
bool func_ov026_02132010(u16);
};

ARM DECL_PROFILE(ActorProfileUnkKLTR);

ARM Actor *ActorProfileUnkKLTR::Create() {
    return new(HeapIndex_2) ActorUnkKLTR();
}

ARM ActorProfileUnkKLTR::ActorProfileUnkKLTR() :
    ActorProfile_Derived1(ActorId_KLTR) {
    for (s8 i = 0; i < ARRAY_LEN(this->mUnk_16); i++) {
        this->mUnk_16[i] = 2;
    }

    this->mUnk_04.pos.x = FLOAT_TO_Q20(0.0f);
    this->mUnk_04.pos.y = FLOAT_TO_Q20(0.25f);
    this->mUnk_04.pos.z = FLOAT_TO_Q20(0.0f);
    this->mUnk_04.size  = FLOAT_TO_Q20(0.25f);

    this->mUnk_3C.mUnk_15 = 1;
}

ARM void ActorUnkKLTR::func_ov026_021116e0(void) {
    func_ov026_02102934(1);
}

ARM ActorUnkKLTR::ActorUnkKLTR() :
    mUnk_0A4(&mUnk_0A8),
    mUnk_0A8(1, 0),
    mUnk_300(0) {
    this->mUnk_B14 = 0;
    this->func_ov000_0209862c(4);
    this->mUnk_48 = 5;
    this->mUnk_314.mUnk_10.func_ov026_0210136c(GET_PROFILE(ActorProfileUnkKLTR)->vfunc_04());
    this->mUnk_0A4->func_ov026_020ee538(this->mUnk_314.mUnk_10.mUnk_00);
}

ARM ActorUnkKLTR::~ActorUnkKLTR() {}

ARM bool ActorUnkKLTR::vfunc_18(unk32 param1) {
    return true;
}

ARM void ActorUnkKLTR::vfunc_1c(void) {}

ARM void ActorUnkKLTR::vfunc_20(void) {
    this->func_ov026_02111ac4();
    this->func_ov026_02111c08();
    this->func_ov026_02111d50();
}

ARM void ActorUnkKLTR::vfunc_24(void) {
    this->func_ov026_02111ac4();
    this->func_ov026_02111c08();
    this->func_ov026_02111d50();
}

ARM void ActorUnkKLTR::func_ov026_02111ac4(void) {}
ARM void ActorUnkKLTR::func_ov026_02111c08(void) {}
ARM void ActorUnkKLTR::func_ov026_02111d50(void) {}
ARM void ActorUnkKLTR::vfunc_2c(unk32 param1) {}
ARM void ActorUnkKLTR::vfunc_30(void) {}

ARM void ActorUnkKLTR::func_ov026_0211202c(void) {
    if (!this->mUnk_0A8.mUnk_182) {
        return;
    }
    unk32 tmp = this->mUnk_0A8.func_ov026_020fa7f4();
    this->mUnk_958.func_ov026_02105468(tmp);
}

ARM void ActorUnkKLTR::func_ov026_0211205c(void) {
    if (!this->mUnk_0A8.mUnk_182) {
        return;
    }
    unk32 tmp = this->mUnk_0A8.func_ov026_020fa7f4();
    this->mUnk_314.mUnk_10.func_ov026_021016d8(tmp);
}

ARM void ActorUnkKLTR::func_ov026_02112088(void) {
    this->mUnk_314.mUnk_0C[0] = this->mUnk_314.mUnk_0C[0] & ~0x02;

    for (u32 i = 0; i < 2; i++) {
        unk32 var_r0;
        unk32 value = this->mUnk_0A8.func_ov026_020fac30(this->mRef.Get32(), (i + 1) << 12, 0x333, 1);

        if ((value | ((u32) (this->mUnk_314.mUnk_0C[0] << 0x1E) >> 0x1F)) != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }

        this->mUnk_314.mUnk_0C[0] = (*(volatile u8 *) &this->mUnk_314.mUnk_0C[0] & ~2) | ((u32) (var_r0 << 0x1F) >> 0x1E);
    }
}

ARM void ActorUnkKLTR::func_ov026_0211210c(void) {}

ARM void ActorUnkKLTR::func_ov026_02112328(void) {}

ARM bool ActorUnkKLTR::func_ov026_021127e8(void) {
    bool tmp = this->func_ov000_02098a60(1);
    if (!tmp) {
        tmp = this->func_ov000_02098a60(0);
        if (tmp) {
            return true;
        }
        if (this->mUnk_76 == 0 && (this->mUnk_6E == 0 || func_ov026_02132010(this->mUnk_6E))) {
            return true;
        }
    }
    return false;
}

ARM void ActorUnkKLTR::func_ov026_02112850(void) {}

ARM void ActorUnkKLTR::func_ov026_02112944(void) {}

ARM bool ActorUnkKLTR::func_ov026_02112bd4(void) {
    if (this->mUnk_300 != 0) {
        bool res1 = this->mUnk_0A8.func_ov026_020fa55c();
        if (!res1) {
            this->mUnk_300 = 0;
            return false;
        }
        return res1;
    }

    bool res2 = this->mUnk_0A8.func_ov026_020fa55c();
    if (!res2) {
        return res2;
    }

    u32 randomHighWord = gRandom.ConditionalNext32(0);

    if (randomHighWord & 0x80000000) {
        this->mUnk_0A4->mUnk_03C = 1;
    } else {
        this->mUnk_0A4->mUnk_03C = 3;
    }

    if (this->mUnk_0A8.func_ov026_020fa358()) {
        if (!this->mUnk_0A8.func_ov026_020fa46c(this->mUnk_0A8.func_ov026_020fa73c(), this->mUnk_70)) {
            this->mUnk_0A8.func_ov026_020fa77c(!this->mUnk_0A8.func_ov026_020fa73c());
        }
    }

    this->mUnk_300 = 1;
    return true;
}

ARM bool ActorUnkKLTR::func_ov026_02112ca8(void) {
    *(u8 *) &this->mUnk_314.mUnk_0C[0] |= 0x18;
    return true;
}

ARM void ActorUnkKLTR::func_ov026_02112cbc(void) {}

ARM void ActorUnkKLTR::func_ov026_02112cc0(void) {}

ARM void ActorUnkKLTR::func_ov026_02112e28(void) {}

ARM bool ActorUnkKLTR::func_ov026_02112ecc(void) {
    unk32 tmp = this->mUnk_0A8.func_ov026_020fa7c0();
    this->mUnk_314.mUnk_10.func_ov026_02101890(7, tmp);
    u8 tmp2                   = this->mUnk_314.mUnk_0C[0] & ~0x8;
    this->mUnk_314.mUnk_0C[0] = tmp2 & ~0x10;
    return true;
}

ARM void ActorUnkKLTR::func_ov026_02112f08(void) {}

ARM bool ActorUnkKLTR::func_ov026_02112fb0(void) {
    unk32 tmp = this->mUnk_0A8.func_ov026_020fa7c0();
    this->mUnk_314.mUnk_10.func_ov026_02101890(0, tmp);
    u8 tmp2                   = this->mUnk_314.mUnk_0C[0] & ~0x8;
    this->mUnk_314.mUnk_0C[0] = tmp2 & ~0x10;
    return true;
}

ARM void ActorUnkKLTR::func_ov026_02112fec(void) {
    this->func_ov026_02112328();
}

ARM bool ActorUnkKLTR::func_ov026_02112ff8(void) {
    this->mUnk_314.mUnk_10.func_ov026_02101890(1, !this->mUnk_0A8.mUnk_1D4_0);
    u8 tmp2                   = this->mUnk_314.mUnk_0C[0] & ~0x8;
    this->mUnk_314.mUnk_0C[0] = tmp2 & ~0x10;
    return true;
}

ARM void ActorUnkKLTR::func_ov026_02113040(void) {}

ARM bool ActorUnkKLTR::func_ov026_02113118(void) {}

ARM void ActorUnkKLTR::func_ov026_02113204(void) {}

ARM void ActorUnkKLTR::func_ov026_021132c0(void) {}

ARM void ActorUnkKLTR::func_ov026_02113304(void) {}

ARM bool ActorUnkKLTR::func_ov026_021133b0(void) {
    unk32 tmp = this->mUnk_0A8.func_ov026_020fa7c0();
    this->mUnk_314.mUnk_10.func_ov026_02101890(2, tmp);
    data_027e09a8->func_ov000_02071b30(0x9c03, &this->mPos, 0);
    u8 tmp2                   = this->mUnk_314.mUnk_0C[0] & ~0x8;
    this->mUnk_314.mUnk_0C[0] = tmp2 & ~0x10;
    return true;
}

ARM void ActorUnkKLTR::func_ov026_0211340c(void) {}

ARM bool ActorUnkKLTR::func_ov026_021134c8(void) {
    this->mUnk_48 = 5;
    unk32 tmp     = this->mUnk_0A8.func_ov026_020fa7c0();
    this->mUnk_314.mUnk_10.func_ov026_02101890(6, tmp);
    u8 bVar1                  = this->mUnk_314.mUnk_0C[0] & ~0x8;
    this->mUnk_314.mUnk_0C[0] = bVar1 | 0x10;
    return true;
}

ARM void ActorUnkKLTR::func_ov026_0211350c(void) {}

ARM bool ActorUnkKLTR::func_ov026_021135b8(void) {
    u8 bVar1                  = this->mUnk_314.mUnk_0C[0] & ~0x8;
    this->mUnk_314.mUnk_0C[0] = bVar1 | 0x10;
    this->mUnk_0A8.func_ov026_020fa838(0, this->mUnk_314.mUnk_0C[0]);
    return true;
}

ARM void ActorUnkKLTR::func_ov026_021135e4(void) {}

ARM bool ActorUnkKLTR::func_ov026_02113704(void) {
    this->mUnk_314.mUnk_0C[0] |= 0x18;
    return true;
}

ARM void ActorUnkKLTR::func_ov026_02113718(void) {}

ARM void ActorUnkKLTR::func_ov026_02113784(void) {}

ARM void ActorUnkKLTR::func_ov026_0211391c(void) {}

ARM bool ActorUnkKLTR::func_ov026_02113a40(void) {
    u8 tmp                    = this->mUnk_314.mUnk_0C[0] & ~0x8;
    this->mUnk_314.mUnk_0C[0] = tmp | 0x10;
    return true;
}

ARM void ActorUnkKLTR::func_ov026_02113a5c(void) {}
ARM void ActorUnkKLTR::func_ov026_02113b5c(void) {}
ARM void ActorUnkKLTR::func_ov026_02113b98(void) {}

ARM ActorProfileUnkKLTR::~ActorProfileUnkKLTR() {}
