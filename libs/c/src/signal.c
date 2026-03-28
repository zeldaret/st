#include <critical_regions.h>

typedef void (*sig_func)(int sig);
sig_func signal_funcs[7];

int raise(int sig) {
    sig_func temp_r31;

    if (sig < 1 || sig > 7) {
        return -1;
    }

    __begin_critical_region(signal_funcs_access);

    temp_r31 = signal_funcs[sig - 1];

    if ((unsigned int) temp_r31 != 1) {
        signal_funcs[sig - 1] = 0;
    }

    __end_critical_region(signal_funcs_access);

    if ((unsigned int) temp_r31 == 1 || ((int) temp_r31 == 0 && sig == 1)) {
        return 0;
    }

    if ((unsigned int) temp_r31 == 0) {
        exit(0);
    }

    temp_r31(sig);
    return 0;
}
