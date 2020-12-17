#ifndef COUNTED_H
#define COUNTED_H
#include <iostream>
#include <set>

class Counted
{
  int ID;
  std::set<int> DeletedID;
  static int count;
  int setID();

public:
  int getID();
  Counted();
  ~Counted();
  Counted(const Counted&);
  Counted& operator=(const Counted&) = delete;  //так как противоречит условию уникальности
};

#endif  // COUNTED_H
