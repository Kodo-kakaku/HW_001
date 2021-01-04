#include "lib.h"
#include <iostream>

int main (int, char **)
{
    std::cout << "build " << version() << "\nHello world!" << std::endl;

    return 0;
}