//
// Created by admin on 14/03/24.
//

#include "layout.h"
#ifdef __GNUC__
#elif defined(__GNUC__) && defined(__GNUC_WIDE_EXECUTION_CHARSET_NAME)
void layout()
{
    int i;
    switch(i)
    {
    case 1:
        std::cout << "i = 1\n";
    case 20:
        std::cout << "i = 1 or i = 20\n";
        break;
    default:
        std::cout << "i is not 1 or 20\n";
    }
}
#endif//__GNUC__