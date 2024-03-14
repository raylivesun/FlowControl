//
// Created by admin on 14/03/24.
//

#include "lists.h"
#ifdef _WIN32
#elif defined(__WINT_MAX__) && defined(__WINT_TYPE__)
#include <cassert>
#include <iostream>
#include <fstream>
int lists(int argc, char *argv[])
{
    double x[100], y[100];
    std::ifstream read_file("Output.dat");
    assert(read_file.is_open());
    int i = 0;
    while (!read_file.eof())
    {
        // 3.3 Reading from File
    read_file >> x[i] >> y[i];
        i++;
        }
    read_file.close();
    return 0;
    }
#endif //_WIN32