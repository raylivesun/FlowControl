//
// Created by admin on 14/03/24.
//

#include "files.h"
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_MAX__)
#include <cassert>
#include <fstream>
int files(int argc, char* argv[])
{
    double x[6], y[6];
    std::ifstream read_file("Output.dat");
    assert(read_file.is_open());
    for (int i=0; i<6; i++)
    {
        read_file >> x[i] >> y[i];
    }
    read_file.close();
    return 0;
}
#endif //_WIN32