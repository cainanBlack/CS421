/* Example code for Think OS.
Copyright 2014 Allen Downey
License: GNU GPLv3
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main ()
{
    union {
        float f;
        uint64_t u;
    } p;

    p.f = -13.0;
    uint64_t sign = (p.u >> 31) & 1ul;
    uint64_t exp = (p.u >> 23) & 0xff;

    uint64_t coef_mask = (1 << 23) - 1ul;
    uint64_t coef = p.u & coef_mask;

    printf("%llu\n", sign);
    printf("%llu\n", exp);
    printf("0x%llu\n", coef);
    
    return 0;
}
