#include <iostream>
#include <counted.h>

int main()
{
  std::cout << "Result: " << std::endl;

  Counted k1;
  Counted k2;
  Counted k3;

  std::cout << k1.getId() << std::endl;
  std::cout << k2.getId() << std::endl;
  std::cout << k3.getId() << std::endl;

  return 0;
}
