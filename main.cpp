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
  delete k4;
  Counted* k6 = new Counted();
  cout << "k6 " << k6->get_id() << endl;

  delete k1;
  delete k3;

  Counted* k7 = new Counted();
  cout << "k7 " << k7->get_id() << endl;
  Counted* k8 = new Counted();
  cout << "k8 " << k8->get_id() << endl;
  delete k5;
  delete k7;
  delete k8;
  return 0;
}
