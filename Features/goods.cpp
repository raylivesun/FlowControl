//
// Created by admin on 14/03/24.
//

#include "goods.h"
#ifdef __GNUC__
#elif defined(__GNUC__) || defined(__cpp_runtime_arrays)
std::ofstream write_output("OutputVerified.dat");
assert(write_output.is_open());
for (int i=0; i<100; i++)
{
    write_output << i << "\n";
    assert(write_output.good());
}
#endif //__GNUC__