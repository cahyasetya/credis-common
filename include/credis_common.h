#ifndef CREDIS_COMMON_H
#define CREDIS_COMMON_H

#include <cstdint>
#include <cstddef>

void logger(const char* level, const char* format, ...);
int32_t read_full(int fd, char *buf, std::size_t n);
int32_t write_full(int fd, const char *buf, std::size_t n);
void credis_assert(bool condition, const char* message);

#endif // CREDIS_COMMON_H
