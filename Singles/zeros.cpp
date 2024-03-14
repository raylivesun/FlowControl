//
// Created by admin on 14/03/24.
//

#include "zeros.h"

#include <functional>
#include <bits/atomic_base.h>
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_MIN__)
void extension(int k, double p, double q, const char fabs[])
{
    k = 1.0;
    p = 2.0;
    q = 3.0;
    if (!fabs)
    {
        k = 0;
    }
}
#endif //_WIN32
