#include <iostream>
#include "Counted.h"

int main()
{
  Counted* entityFirst = new Counted();
  Counted* entitySecond = new Counted();
  *entitySecond = *entityFirst;
  std::cout << entityFirst->GetId() << std::endl;
  std::cout << entitySecond->GetId() << std::endl;

  Counted* entityThird = new Counted(*entityFirst);
  std::cout << entityFirst->GetId() << std::endl;
  std::cout << entitySecond->GetId() << std::endl;
  std::cout << entityThird->GetId() << std::endl;

  std::cout << entityThird->GetId() << std::endl;
  std::cout << entityFirst->GetId() << std::endl;
  std::cout << entitySecond->GetId() << std::endl;

  Counted* entityFourth = new Counted();
  std::cout << entityFourth->GetId() << std::endl;

  std::cout << entityFirst->GetId() << std::endl;
  std::cout << entitySecond->GetId() << std::endl;
  std::cout << entityThird->GetId() << std::endl;
  std::cout << entityFourth->GetId() << std::endl;

  delete entityFirst;
  delete entitySecond;
  delete entityThird;
  delete entityFourth;

  return 0;
}
