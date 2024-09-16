#include "../include/credis_common.h"
#include <stdlib.h>

void credis_assert(int condition, const char* message) {
    if (!condition) {
        logger("ERROR", "Assertion failed: %s", message);
        abort();
    }
}
