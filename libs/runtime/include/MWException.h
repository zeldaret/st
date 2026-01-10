#ifndef _RUNTIME_MWEXCEPTION_H
#define _RUNTIME_MWEXCEPTION_H

#include <types.h>

typedef void (*DestructorFunc)(void *);

typedef short vbase_ctor_arg_type;
typedef u8 local_cond_type;

typedef struct CatchInfo {
    void *location;
    void *typeinfo;
    void *dtor;
    void *sublocation;
    long pointercopy;
    void *stacktop;
} CatchInfo;

typedef struct DestructorChain {
    /* 0x00 */ struct DestructorChain *next;
    /* 0x04 */ DestructorFunc dtor;
    /* 0x08 */ void *object;
} DestructorChain;

void __end_catch(CatchInfo *catchinfo);

extern DestructorChain *__global_destructor_chain;

void *__register_global_object(void *object, void *destructor, DestructorChain *link);

/**
 * @brief Call all static initializers
 */
extern void __call_static_initializers(void);

/**
 * @brief Destroy all constructed global objects
 */
extern void __destroy_global_chain(void);

extern void __throw(char *throwtype, void *location, void *dtor);
extern void __rethrow(void);
extern char __throw_catch_compare(const u8 *throwtype, const u8 *catchtype, s32 *offset_result);

#define DTORARG_TYPE short
#define DTORARG_PARTIAL (0)  //	destroy non-virtual bases
#define DTORARG_COMPLETE (-1) //	destroy all bases
#define DTORARG_DELETE (1)  //	destroy all bases and delete object

#define DTORCALL_COMPLETE(dtor, objptr) (((void (*)(void *, DTORARG_TYPE)) dtor)(objptr, DTORARG_COMPLETE))
#define DTORCALL_PARTIAL(dtor, objptr) (((void (*)(void *, DTORARG_TYPE)) dtor)(objptr, DTORARG_PARTIAL))
#define DTORCALL_VTTOBJECT(dtor, objptr, vttptr) (((void (*)(void *, void *)) dtor)(objptr, vttptr))

#endif
