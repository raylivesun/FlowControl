//
// Created by admin on 14/03/24.
//

#include "variables.h"
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_MAX__)
void FILE(double x, double y, double z)
{
    x = 1.2;
    y = 2.2;
    z = 3.2;
    if ((x > y) || (x < 5.0))
    {
        z = 4.0;
    }
    else
    {
        z = 2.0;
    }
}
#endif //_WIN32