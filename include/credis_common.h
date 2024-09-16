#ifndef CREDIS_COMMON_H
#define CREDIS_COMMON_H

#include <stdarg.h>
#include <time.h>
#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include <assert.h>

void logger(const char* level, const char* format, ...);
int32_t read_full(int fd, char *buf, size_t n);  // Removed static
int32_t write_full(int fd, const char *buf, size_t n);  // Changed char * to const char *

// Add this line after the existing function declarations
void credis_assert(int condition, const char* message);

#endif // CREDIS_COMMON_H
