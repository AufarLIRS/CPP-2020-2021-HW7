#include <iostream>
#include "counted.h"

using namespace std;

int main()
{
  counted* counted1 = new counted();
  std::cout << counted1->getid() << std::endl;
  counted* counted2 = new counted();
  std::cout << counted2->getid() << std::endl;
  counted* counted3 = new counted();
  std::cout << counted3->getid() << std::endl;
  delete counted2;
  counted* counted4 = new counted();
  *counted4 = *counted3;
  std::cout << counted4->getid() << std::endl;
  counted* counted5 = new counted(*counted3);
  std::cout << counted5->getid() << std::endl;
  delete counted5;
  delete counted4;
  delete counted3;
  delete counted1;
  // delete counted2;
  // delete counted1;
  return 0;
}
