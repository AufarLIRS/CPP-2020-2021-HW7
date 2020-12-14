#include <iostream>
#include "Counted.h"

using namespace std;


int main()
{
    Counted a;
    cout << a.get_id() << endl;

    Counted b;
    cout << b.get_id() << endl;

    return 0;
}
