//
// Created by admin on 14/03/24.
//

#include "first.h"
#ifdef __cplusplus
#elif defined(__GNUC__) && !defined(__GNUC__)
void first()
{
    double x = 0.8;
    int count = 0;
    do
    {
        x *= 0.5;
        std::cout << "x = " << x << ", count = "
        << count << "\n";
        count++;
        std::cout << "x = " << x << ", count = "
        << count << "\n";
        std::cout << "Reached bottom of do-while loop\n";
    } while (x > 1.0);
    std::cout << "count = " << count << "\n";
}
#endif//__cplusplus