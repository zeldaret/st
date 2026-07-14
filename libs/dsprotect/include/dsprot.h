//=================================================================================================
/**
 * dsprot.h
 *
 * Header file for the DS Protect library
 * Version 1.23z
 */
//=================================================================================================

#ifndef DSPROT_H
#define DSPROT_H

#define DSP_VERSION (123)
#define DSP_VERSION_STR "1.23z"

#ifndef SDK_ASM

    #ifndef DSP_NO_NITRO

        #include <types.h> // For u32

    #else /* DSP_NO_NITRO */

// Assumption for convenience-- make sure this is matching if you use it!
typedef unsigned long __dsp_u32;
        #define u32 __dsp_u32

    #endif /* DSP_NO_NITRO */

    #ifdef __cplusplus
extern "C" {
    #endif /* __cplusplus */

//=================================================================================================
/**
 * Detect if the current environment is a flashcart.
 *
 * @param callback Function to be called if the environment is determined to be a flashcart.
 *                 May be NULL.
 *
 * @return 1 if the environment is determined to be a flashcart, 0 otherwise
 */
//=================================================================================================
extern u32 DSProt_DetectFlashcart(void *callback);

//=================================================================================================
/**
 * Detect if the current environment is NOT a flashcart.
 *
 * @param callback Function to be called if the environment is determined to NOT be a flashcart.
 *                 May be NULL.
 *
 * @return 1 if the environment is determined to NOT be a flashcart, 0 otherwise
 */
//=================================================================================================
extern u32 DSProt_DetectNotFlashcart(void *callback);

//=================================================================================================
/**
 * Detect if the current environment is an emulator.
 *
 * @param callback Function to be called if the environment is determined to be an emulator.
 *                 May be NULL.
 *
 * @return 1 if the environment is determined to be an emulator, 0 otherwise
 */
//=================================================================================================
extern u32 DSProt_DetectEmulator(void *callback);

//=================================================================================================
/**
 * Detect if the current environment is NOT an emulator.
 *
 * @param callback Function to be called if the environment is determined to NOT be an emulator.
 *                 May be NULL.
 *
 * @return 1 if the environment is determined to NOT be an emulator, 0 otherwise
 */
//=================================================================================================
extern u32 DSProt_DetectNotEmulator(void *callback);

//=================================================================================================
/**
 * Dummy environment detection function that does not do anything. Will always fail.
 *
 * @param callback Dummy callback function which will never be called. May be NULL.
 *
 * @return 0
 */
//=================================================================================================
extern u32 DSProt_DetectDummy(void *callback);

//=================================================================================================
/**
 * Dummy environment detection function that does not do anything. Will always succeed.
 *
 * @param callback Dummy callback function which will always be called. May be NULL.
 *
 * @return 1
 */
//=================================================================================================
extern u32 DSProt_DetectNotDummy(void *callback);

    #ifdef __cplusplus
}
    #endif /* __cplusplus */

    #ifdef DSP_NO_NITRO

        #undef u32

    #endif /* DSP_NO_NITRO */

#else /* SDK_ASM */

.public DSProt_DetectFlashcart.public DSProt_DetectNotFlashcart.public DSProt_DetectEmulator.public DSProt_DetectNotEmulator
    .public DSProt_DetectDummy.public DSProt_DetectNotDummy

#endif /* SDK_ASM */

#endif /* DSPROT_H */
