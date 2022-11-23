#include <stdio.h>

unsigned int is_set(unsigned int value, unsigned char n)
{
    unsigned int v = 0;
    v = 1 << (n - 1);
    unsigned int var = value & v;
    if (var == v)
        return 1;
    return 0;
}
