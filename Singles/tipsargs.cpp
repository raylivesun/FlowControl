//
// Created by admin on 14/03/24.
//

#include "tipsargs.h"
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_MIN__)
void WIN(int x)
{
    // This erroneous line has no effect
    x = 2+2;
    // After testing x against the value 4, the true/false
    // answer is discarded.
    x = 3;
    //This erroneous line will alter the value of x
    if (x | 4)
    {
        x = 6;
    }
}
#endif//_WIN32

