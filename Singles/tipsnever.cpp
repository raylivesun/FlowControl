//
// Created by admin on 14/03/24.
//

#include "tipsnever.h"

#include <string>
#if _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_MIN__)
void WIN32_WINNT(double positive_numbers, double max, int count)
{
    positive_numbers = 1.0;
    max = 0.0;
    count = 0;
    if (positive_numbers > max)
    {
        max = count;
    }
}
#endif //_WIN32