#include <stdint.h>
#include <unistd.h>
#include "../include/credis_common.h"

int32_t write_full(int fd, const char *buf, size_t n) {
  while(n > 0) {
    ssize_t rv = write(fd, buf, n);
    if(rv <= 0) {
      return -1;
    }
    credis_assert((size_t)rv <= n, "Wrote more bytes than requested");
    n -= (size_t)rv;
    buf += rv;
  }
  return 0;
}
