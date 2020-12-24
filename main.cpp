#include <iostream>
#include "counted.h"




int main()
{
    Counted* firstPerson = new Counted();
    Counted* secondPerson = new Counted();
    std::cout << "First Person: " << firstPerson->getID() << std::endl;
    std::cout << "Second Person: " << secondPerson->getID() << std::endl;


    delete firstPerson;
    std::cout << "Delete first person" << std::endl;
    Counted* thirdPerson = new Counted();
    std::cout << "Third Person: " << thirdPerson->getID() << std::endl;

    Counted* fourthPerson = new Counted();
    Counted* fifthPerson = new Counted();
    *fifthPerson = *fourthPerson;

    std::cout << "Fourth Person: " << fourthPerson->getID() << std::endl;
    std::cout << "Fifth Person: " << fifthPerson->getID() << std::endl;

    delete fourthPerson;
    std::cout << "Delete fourth person" << std::endl;
    std::cout<< "Fifth Person: " << fifthPerson->getID() << std::endl;
    delete secondPerson;
    delete fifthPerson;
    delete thirdPerson;
    std::cout << "Delete second, fifth, third persons " << std::endl;
    Counted* sixthPerson = new Counted();
    std::cout << "Sixth person: " << sixthPerson->getID() << std::endl;
    Counted* sevenPerson = new Counted(*sixthPerson);
    std::cout << "Seven Person: " << sevenPerson->getID() << std::endl;
    Counted* eighthPerson = new Counted();
    std::cout << "Eighth person: " << eighthPerson->getID() << std::endl;

    return 0;
}
