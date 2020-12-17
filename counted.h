#ifndef COUNTED_H
#define COUNTED_H
#include <vector>
#include <iostream>

class Counted
{
  int id;
  static std::vector<int> freeId;
  static int count;

public:
  int getId();
  Counted();
  ~Counted();

  Counted(const Counted&);
  Counted& operator=(const Counted&);

  Counted(Counted&&) = delete;
  Counted& operator=(Counted&&) = delete;
};

#endif  // COUNTED_H
