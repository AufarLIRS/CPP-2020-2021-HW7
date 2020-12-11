#include <iostream>
#include <counted.h>

using namespace std;

int main()
{
    std::cout << "Answers: " << std::endl;

    Counted count1;
    Counted count2;
    Counted count3;
    Counted count4;

    std::cout << count1.get_id() << std::endl;
    std::cout << count2.get_id() << std::endl;
    std::cout << count3.get_id() << std::endl;
    std::cout << count4.get_id() << std::endl;

    return 0;
}
