#include "Actor/ActorUnkLBCK.hpp"
#include "Actor/Actor_Derived1.hpp"

#include <dsprot.h>

static ActorUnkLBCK *data_ov001_020c46f8 = NULL;

void func_ov001_020bfeec(void) {
    data_ov001_020c46f8->func_ov000_020984d0();
}

void func_ov001_020bfefc(void) {
    data_ov001_020c46f8->func_ov000_020984d0();
}

void func_ov001_020bff0c(void) {
    data_ov001_020c46f8->func_ov001_020bff2c();
}

void func_ov001_020bff1c(void) {
    data_ov001_020c46f8->func_ov000_020984d0();
}

void Actor_Derived1::func_ov001_020bff2c(void) {
    this->Actor_Derived1::vfunc_1C();
}

void ActorUnkLBCK::func_ov001_020bff34() {
    data_ov001_020c46f8 = this;

    DSProt_DetectFlashcart(func_ov001_020bfeec);

    if (DSProt_DetectNotEmulator(func_ov001_020bff0c) != true) {
        func_ov001_020bfefc();
    }

    DSProt_DetectDummy(func_ov001_020bff1c);
    data_ov001_020c46f8 = NULL;
    this->func_ov062_02159618();
}
