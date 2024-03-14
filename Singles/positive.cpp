//
// Created by admin on 13/03/24.
//

#include "positive.h"
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_TYPE__)
void to_signed()
{
    int max = 1;
    max += 1;
    //...
    double imag = 0;
    imag += 1;
    if (max > 100)
    {
        imag = 2.0;
    }
    else if (max < 0)
    {
        imag = 10.0;
    }
    else
    {
        //When 0 <= i <= 100
        imag = 5.0;
    }
}
#endif //_WIN32
