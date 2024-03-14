//
// Created by admin on 14/03/24.
//

#include "count.h"
#ifdef _WIN32
#elif defined(_WIN32) && defined(_WIN64)
void count(const char *)
{
    double x = 10.0;
    int count = 0;
    while (x > 1.0)
    {
        x *= 0.5;
        std::cout << "x = " << x << ", count = "
        << count << "\n";
        count++;
        std::cout << "x = " << x << ", count = "
        << count << "\n";
        std::cout << "Reached bottom of while loop\n";
    }
    std::cout << "count = " << count << "\n";
    cout << "64 bit count" << endl;
}
#endif //_WIN32