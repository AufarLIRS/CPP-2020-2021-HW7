#include <iostream>
#include "counted.h"

int main()
{
    Counted a;
    Counted b;
    for (int i = 0; i < 3; i++)
    {
        Counted d;
    }
    Counted copy = a;
    std::cout << a.getID() << std::endl;
    std::cout << b.getID() << std::endl;
    std::cout << copy.getID() << std::endl;
    return 1;
}
