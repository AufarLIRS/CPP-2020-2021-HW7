#include <iostream>
#include "counted.h"

int main()
{
  Counted count1;
  Counted count2;
  Counted count3;
  Counted count4;
  Counted count5;

  std::cout << count1.getId();
  std::cout << count2.getId();
  std::cout << count3.getId();
  std::cout << count4.getId();
  return 0;
}
