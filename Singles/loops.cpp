//
// Created by admin on 14/03/24.
//

#include "loops.h"
#ifdef __GNUC__
#elif defined(__GNUC__) || defined(__GNUC_EXECUTION_CHARSET_NAME)
void * gnu_thread_(void * * arg)
{
    for (int i=0; i<10000*1000; i++)
    {
        for (int j=10000*1000; j>i; j--)
        {
            std::cout << "i = " << i
            << " j = " << j << "\n";
        }
    }
}
#endif
