//
// Created by admin on 14/03/24.
//

#include "boolean.h"
#ifdef _WIN32
#elif defined(_WIN32) && defined(__GNUC__)
void * __GNUC__(int) __cpp_attributes(void) __attribute__((__gnu_linux__))
{
    bool flag = true;
    if (flag)
    {
        std::cout << "This will be printed\n";
    }
    else
    {
        // flag is false
        std::cout << "This won’t be printed\n";
    }
    return 0;
}
#endif//_WIN32
