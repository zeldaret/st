//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

// --- Actor SPAR ---

class ActorUnkSPAR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPAR();

    /* 4C */ virtual ~ActorUnkSPAR() override;
};

class ActorProfileUnkSPAR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSPAR();
    ~ActorProfileUnkSPAR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPAR *GetProfile();
};

// --- Actor SPBM ---

class ActorUnkSPBM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPBM();

    /* 4C */ virtual ~ActorUnkSPBM() override;
};

class ActorProfileUnkSPBM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSPBM();
    ~ActorProfileUnkSPBM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPBM *GetProfile();
};

// --- Actor SPDR ---

class ActorUnkSPDR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPDR();

    /* 4C */ virtual ~ActorUnkSPDR() override;
};

class ActorProfileUnkSPDR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSPDR();
    ~ActorProfileUnkSPDR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPDR *GetProfile();
};

// --- Actor SPTR ---

class ActorUnkSPTR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSPTR();

    /* 4C */ virtual ~ActorUnkSPTR() override;
};

class ActorProfileUnkSPTR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSPTR();
    ~ActorProfileUnkSPTR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSPTR *GetProfile();
};
