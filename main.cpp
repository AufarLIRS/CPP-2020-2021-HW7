#include <iostream>
#include "counted.h"

int main()
{
  Counted* count1 = new Counted();
  Counted* count2 = new Counted();
  Counted* count3 = new Counted();
  Counted* count4 = new Counted();
  Counted* count5 = new Counted();

  std::cout << count1->getId() << " count 1 id" << std::endl;
  std::cout << count2->getId() << " count 2 id" << std::endl;
  std::cout << count3->getId() << " count 3 id" << std::endl;
  std::cout << count4->getId() << " count 4 id" << std::endl;
  std::cout << count5->getId() << " count 5 id" << std::endl;

  count1 = count2;
  count2 = count3;
  delete count4;
  delete count1;

  std::cout << "Deleted 1 and 4" << std::endl;

  std::cout << count3->getId() << " count 3 id" << std::endl;
  std::cout << count5->getId() << " count 5 id" << std::endl;

  delete count3;

  std::cout << "Deleted 3" << std::endl;

  std::cout << count5->getId() << " count 5 id" << std::endl;

  delete count2;

  std::cout << "Deleted 2" << std::endl;

  std::cout << count5->getId() << " count 5 id" << std::endl;

  return 0;
}
