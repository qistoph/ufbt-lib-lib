#include "demo.h"

#include <mbedtls/sha1.h>

bool calc_sha1(const char data[], uint8_t* hash) {
    mbedtls_sha1((uint8_t*)data, strlen(data), hash);
    return true;
}
