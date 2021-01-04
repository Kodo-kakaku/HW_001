#include "lib.h"
#include <iostream>

int main (int, char **)
{
    std::cout << "build " << version() << "\nHello world!" << std::endl;

    int konec;
    std::cin >> konec;

    return 0;
}