#include <stdint.h>
#include <unistd.h>
#include "../include/credis_common.h"

int32_t read_full(int fd, char *buf, size_t n) {
  while(n > 0) {
    ssize_t rv = read(fd, buf, n);
    if (rv <= 0) {
      return -1;
    }
    credis_assert((size_t)rv <= n, "Read more bytes than requested");
    n -= (size_t)rv;
    buf += rv;
  }
  return 0;
}
