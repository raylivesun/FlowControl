//
// Created by admin on 14/03/24.
//

#include "tips.h"
#include <iostream>
using namespace std;
#ifdef _WIN32
#elif defined (__GNUC__) && defined (__GNUC_EXECUTION_CHARSET_NAME)
void tips(const char *)
{
    double x = 2.0;
    for (int i=0; i<5; i++)
    {
        x *= 2.0;
    }
    std::cout << "x = " << x << "\n";
}
#endif //_WIN32