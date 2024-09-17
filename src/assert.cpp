#include "../include/credis_common.h"
#include <cstdlib>
#include <cstdio>

void credis_assert(bool condition, const char* message) {
    if (!condition) {
        fprintf(stderr, "Assertion failed: %s\n", message);
        std::abort();
    }
}
