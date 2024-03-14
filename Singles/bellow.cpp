//
// Created by admin on 14/03/24.
//

#include "bellow.h"
#ifdef __GNUC__
#pragma GCC diagnostic push_macro(1)
#pragma GCC diagnostic ignored "-Wunused-variable"
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-value"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#pragma GCC diagnostic ignored "-Wunused-but-set-parameter"
#pragma GCC diagnostic ignored "-Wunused-but-set-value"
#pragma GCC diagnostic ignored "-Wunused-variable"

void set(const char *x, const char *z, const char *p, const char * q, const char *y)
{
    if ((x > z) && (p > q) || y)
    {
        //Both conditions have been met
        return;
    }
}
#endif//__GNUC__