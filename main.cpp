#include <iostream>
#include "counted.h"

int main()
{
  Counted one;
  Counted two;
  Counted free;
  Counted four;

  std::cout << one.getID() << std::endl;
  std::cout << two.getID() << std::endl;
  std::cout << free.getID() << std::endl;
  std::cout << four.getID() << std::endl;
}
