#include "MWException.h"

#define CALL_DTOR(dtor, obj) (((void (*)(void *, int))(dtor))((obj), -1))

DestructorChain *__global_destructor_chain;

void *__register_global_object(void *object, void *destructor, DestructorChain *link) {
    link->next   = __global_destructor_chain;
    link->dtor   = destructor;
    link->object = object;

    __global_destructor_chain = link;
    return object;
}
