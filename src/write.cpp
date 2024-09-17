#include "../include/credis_common.h"
#include <cstdint>
#include <unistd.h>

int32_t write_full(int fd, const char *buf, std::size_t n) {
    std::size_t bytesWritten = 0;
    while (bytesWritten < n) {
        ssize_t result = write(fd, buf + bytesWritten, n - bytesWritten);
        if (result <= 0) {
            return -1;
        }
        bytesWritten += static_cast<std::size_t>(result);
    }
    return 0;
}
