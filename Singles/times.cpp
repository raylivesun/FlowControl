//
// Created by admin on 14/03/24.
//

#include "times.h"
#ifdef _WIN32
#elif defined(_WIN32) && defined(_WIN32)
void times(int argc, char *argv)
{
    for (int i=0; i<100*10; i++)
    {
        std::cout << i << " ";
    }
}
#endif //_WIN32