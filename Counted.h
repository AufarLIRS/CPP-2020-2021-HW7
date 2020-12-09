#ifndef COUNTED_H
#define COUNTED_H

#include <vector>

class Counted
{
private:
  static std::vector<Counted*> entities;
  int Id = 0;
  static int Number;

public:
  int GetId();
  Counted();
  Counted(const Counted&);
  Counted& operator=(const Counted&);
  ~Counted();
};

#endif  // COUNTED_H
