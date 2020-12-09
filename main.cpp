#include <iostream>
#include "counted.h"
using namespace std;

int main()
{
  Counted* k1 = new Counted();
  cout << "k1 " << k1->get_id() << endl;
  Counted* k2 = new Counted();
  cout << "k2 " << k2->get_id() << endl;
  delete k2;
  Counted* k3 = new Counted(*k1);
  cout << "k3 " << k3->get_id() << endl;
  Counted* k4 = new Counted();
  Counted* k5 = new Counted();
  *k5 = *k4;
  cout << "k4 " << k4->get_id() << endl;
  cout << "k5 " << k5->get_id() << endl;
  delete k1;
  delete k3;
  delete k4;
  delete k5;
  return 0;
}
