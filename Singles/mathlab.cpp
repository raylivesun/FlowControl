//
// Created by admin on 14/03/24.
//

#include "mathlab.h"
#ifdef __cplusplus
#elif defined(__GNUC__) && !defined(__cplusplus)
void mathlab(float x, float y)
{
    // This loop is natural for MATLAB programmers
    for (int j=1; j<=4; j++)
    {
        std::cout << "j = " << j << "\n";
    }
    // This loop is natural for C++ programmers
    for (int j=0; j<4; j++)
    {
        std::cout << "j = " << j << "\n";
    }
}
#endif //__cplusplus