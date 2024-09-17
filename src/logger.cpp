#include "../include/credis_common.h"
#include <cstdio>
#include <ctime>
#include <cstdarg>

void logger(const char* level, const char* format, ...) {
    time_t now;
    time(&now);
    char time_buf[20];
    strftime(time_buf, sizeof(time_buf), "%Y-%m-%d %H:%M:%S", localtime(&now));

    va_list args;
    va_start(args, format);

    printf("[%s] %s: ", time_buf, level);
    vprintf(format, args);
    printf("\n");

    va_end(args);
}
