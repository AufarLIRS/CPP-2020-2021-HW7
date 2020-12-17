#include <iostream>
#include "counted.h"

int main()
{
  Counted one;
  Counted two;
  for (int i = 0; i < 3; i++)
  {
    Counted z;
  }
  Counted d = one;
  // two = d;
  std::cout << one.getID() << std::endl;
  std::cout << two.getID() << std::endl;
  std::cout << d.getID() << std::endl;
}
