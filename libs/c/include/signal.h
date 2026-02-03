#ifndef _C_SIGNAL_H
#define _C_SIGNAL_H

#ifdef __cplusplus
extern "C" {
#endif

extern void exit(int);

typedef void (*sig_func)(int sig);

int raise(int sig);

#ifdef __cplusplus
}
#endif

#endif
