#ifndef _C_ABORT_EXIT_ARM_EABI_H
#define _C_ABORT_EXIT_ARM_EABI_H

#ifdef __cplusplus
extern "C" {
#endif

#define SIGABRT 1
#define EXIT_FAILURE 1

void abort(void);
void exit(int status);
void __exit(int status);

#ifdef __cplusplus
}
#endif

#endif
