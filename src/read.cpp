#include "../include/credis_common.h"
#include <cstdint>
#include <unistd.h>

int32_t read_full(int fd, char *buf, std::size_t n) {
    std::size_t bytesRead = 0;
    while (bytesRead < n) {
        ssize_t result = read(fd, buf + bytesRead, n - bytesRead);
        if (result <= 0) {
            return -1;
        }
        bytesRead += static_cast<std::size_t>(result);
    }
    return 0;
}
