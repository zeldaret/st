#ifndef _C_BUFFER_IO_H
#define _C_BUFFER_IO_H

#include <stddef.h>
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif

int __flush_buffer(FILE *file, size_t *length);
void __prep_buffer(FILE *file);

#ifdef __cplusplus
}
#endif

#endif
