//
// Created by admin on 14/03/24.
//

#include "objs.h"
#ifdef __GNUC__
void objs(const char *)
{
    double x = 10.0;
    while (x > 1.0)
    {
        // This loop will execute while x > 1, so if the
        // value of x does not decrease then it will not
        // terminate.
        x *= 0.5;
    }
    // Here we know the guard (x > 1.0) has broken.
    // This means that after the loop, x <= 1.0
}
#endif //__GNUC__