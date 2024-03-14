//
// Created by admin on 14/03/24.
//

#include "examples.h"
#ifdef __extension__
void ex(const char *i, bool flag)
{
    flag = false;
    if (!flag)
    {
        // !flag is true when flag is false
        i += 2;
    }
}
#endif//__extension__