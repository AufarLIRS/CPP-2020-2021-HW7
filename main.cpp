#include <iostream>
#include "Counted.h"

using namespace std;


int main()
{
    Counted a;
    cout << a << endl;

    Counted b;
    cout << b << endl;

    Counted c(b);
    cout << c << endl;

    Counted d = c;
    cout << d << endl;

    return 0;
}
