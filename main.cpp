#include <iostream>
#include "Counted.h"

int main()
{
  // Test 1
  Counted* entityFirst = new Counted();
  Counted* entitySecond = new Counted();
  std::cout << "Test 1" << std::endl << "first " << entityFirst->GetId() << std::endl;
  std::cout << "second " << entitySecond->GetId() << std::endl << "" << std::endl;
  delete entitySecond;

  // Test 2
  Counted* entityThird = new Counted(*entityFirst);
  std::cout << "Test 2" << std::endl << "third " << entityThird->GetId() << std::endl;
  Counted* entityFourth = new Counted();
  std::cout << "fourth " << entityFourth->GetId() << std::endl << "" << std::endl;

  // Test 3
  Counted* entityFifth = new Counted();
  std::cout << "Test 3" << std::endl << "fifth " << entityFifth->GetId() << std::endl;
  *entityFifth = *entityFourth;
  std::cout << "fifth " << entityFifth->GetId() << std::endl;
  std::cout << "fourth " << entityFourth->GetId() << std::endl << "" << std::endl;
  delete entityFourth;

  // Test 4

  delete entityFirst;
  Counted* entitySixth = new Counted();
  std::cout << "Test 4" << std::endl << "sixth " << entitySixth->GetId() << std::endl;
  delete entityThird;
  Counted* entitySeventh = new Counted();
  std::cout << "seventh " << entitySeventh->GetId() << std::endl << "" << std::endl;
  delete entitySixth;
  delete entitySeventh;

  // Test 5
  std::cout << "Test 5" << std::endl << "fifth " << entityFifth->GetId() << std::endl;
  Counted* entityEighth = new Counted(*entitySixth);
  std::cout << "eighth " << entityEighth->GetId() << std::endl << "" << std::endl;
  delete entityFifth;
  delete entityEighth;

  return 0;
}
