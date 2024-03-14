//
// Created by admin on 14/03/24.
//

#include "stats.h"
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_MIN__)
void stats()
{
    double vector1[2], vector2[2];
    vector1[0] = 0.5; vector1[1] = -2.3;
    vector2[0] = 34.2; vector2[1] = 0.015;
    double scalar_product = 0.0;
    for (int i=0; i<2; i++)
    {
        scalar_product += vector1[i] * vector2[i];
    }
}
#endif //_WIN32