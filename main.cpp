#include <iostream>
#include "counted.h"

int main()
{
  Counted* counted1 = new Counted();
  std::cout << counted1->get_id() << std::endl;
  Counted* counted2 = new Counted();
  std::cout << counted2->get_id() << std::endl;
  Counted* counted3 = new Counted();
  std::cout << counted3->get_id() << std::endl;
  delete counted2;
  Counted* counted4 = new Counted();
  *counted4 = *counted3;
  std::cout << counted4->get_id() << std::endl;
  Counted* counted5 = new Counted(*counted3);
  std::cout << counted5->get_id() << std::endl;
  delete counted5;
  delete counted4;
  delete counted3;
  delete counted1;
  // delete counted2;
  // delete counted1;
  return 0;
}
