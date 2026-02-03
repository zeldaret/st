#include <MWException.h>
#include <abort_exit_arm_eabi.h>
#include <critical_regions.h>
#include <file_io.h>
#include <signal.h>

extern void _ExitProcess(void);

static void (*__atexit_funcs[64])(void);
bool __aborting               = false;
static int __atexit_curr_func = 0;
void (*__stdio_exit)(void)    = NULL;
void (*__console_exit)(void)  = NULL;

void abort(void) {
    raise(SIGABRT);
    __aborting = true;
    exit(EXIT_FAILURE);
}

void exit(int status) {
    if (__aborting == false) {
        __destroy_global_chain();

        if (__stdio_exit != NULL) {
            __stdio_exit();
            __stdio_exit = NULL;
        }
    }

    __exit(status);
}

void __exit(int status) {
    __begin_critical_region(atexit_funcs_access);

    while (__atexit_curr_func > 0) {
        __atexit_funcs[--__atexit_curr_func]();
    }

    __end_critical_region(atexit_funcs_access);

    if (__console_exit != NULL) {
        __console_exit();
        __console_exit = NULL;
    }

    fflush(NULL);

    _ExitProcess();
}
