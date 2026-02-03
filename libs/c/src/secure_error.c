#include <secure_error.h>
#include <stddef.h>

msl_constraint_handler __msl_constraint_handler;

void secure_error_func_02033e50();

void __msl_runtime_constraint_violation_s(int param1, int param2, int param3) {
    if (__msl_constraint_handler != NULL) {
        __msl_constraint_handler(param1, param2, param3);
        return;
    }

    secure_error_func_02033e50();
}

//! TODO: figure out the real name
void secure_error_func_02033e50() {}
