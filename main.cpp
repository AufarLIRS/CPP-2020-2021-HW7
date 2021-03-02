#include <iostream>
#include "counted.h"

int main()
{
  Counted* one = new Counted();
  Counted* two = new Counted();
  Counted* three = new Counted();
  Counted* four = new Counted();

  std::cout << one->getId() << " count 1 id" << std::endl;
  std::cout << two->getId() << " count 2 id" << std::endl;
  std::cout << three->getId() << " count 3 id" << std::endl;
  std::cout << four->getId() << " count 4 id" << std::endl;

  one = two;
  two = three;
  delete four;

  std::cout << "minus 4" << std::endl;

  std::cout << three->getId() << " count 3 id" << std::endl;

  delete three;

  std::cout << "minus 3" << std::endl;

  delete two;

  std::cout << "minus 2" << std::endl;


  return 0;
}
