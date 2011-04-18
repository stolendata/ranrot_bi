/*
    RANROT-BI (type B improved)

    https://github.com/stolendata/ranrot_bi

    this implementation is released into the public domain
*/

#include <stdint.h>

static uint64_t hi, lo;

void ranrot_seed( uint64_t s )
{
    hi = ~s;
    lo = s;
}

uint64_t ranrot()
{
    hi = ( hi << 19 ) + ( hi >> 23 );
    lo = ( lo << 29 ) + ( lo >> 31 );

    hi += lo;
    lo += hi;

    return hi;
}
