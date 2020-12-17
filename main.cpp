#include <iostream>
#include <counted.h>

int main()
{
  std::vector<Counted*> counteds;
  std::cout << "Result: " << std::endl;

  Counted* k1 = new Counted();
  Counted* k2 = new Counted();
  Counted* k3 = new Counted();
  Counted* k4 = new Counted();
  Counted* k5 = new Counted();
  Counted* k6 = new Counted();

  counteds.push_back(k1);
  counteds.push_back(k2);
  counteds.push_back(k3);
  counteds.push_back(k4);
  counteds.push_back(k5);
  counteds.push_back(k6);

  delete k3;

  Counted* k7 = new Counted();

  std::cout << k1->getId() << std::endl;
  std::cout << k2->getId() << std::endl;
  //  std::cout << k3->getId() << std::endl;
  std::cout << k4->getId() << std::endl;
  std::cout << k5->getId() << std::endl;
  std::cout << k6->getId() << std::endl;
  std::cout << k7->getId() << std::endl;
  std::cout << k8->getId() << std::endl;

  delete k1;
  delete k2;
  delete k4;
  delete k5;
  delete k6;
  delete k7;

  return 0;
}
