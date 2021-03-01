#include <iostream>
#include "task1.h"

using namespace std;

int Counted::uniq = 0;

int main()
{
    Counted counted1;
    Counted counted2;
    Counted counted3;
    Counted* counted4 = new Counted();
    delete counted4;
    Counted counted5;
    return 0;
}
