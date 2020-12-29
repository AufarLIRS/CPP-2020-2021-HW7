#include <iostream>
#include <counted.h>

using namespace std;

int main()
{
    std::cout << "Answers: " << std::endl;

    Counted* count1 = new Counted();
    std::cout << count1->get_id() << std::endl;
    Counted* count2 = new Counted();
    std::cout << count2->get_id() << std::endl;
    Counted* count3 = new Counted();
    std::cout << count3->get_id() << std::endl;

    Counted* count4 = new Counted();
    Counted* count5 = new Counted();

    *count5 = *count4;

    std::cout << count4->get_id() << std::endl;
    std::cout << count5->get_id() << std::endl;

    delete count5;

    Counted* count6 = new Counted();
    cout << count6->get_id() << endl;

    delete count1;
    delete count2;
    delete count3;

    return 0;
}
