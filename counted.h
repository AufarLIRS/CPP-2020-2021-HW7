#ifndef COUNTED_H
#define COUNTED_H

#include <vector>

class Counted
{
private:
  static std::vector<Counted*> counteds_;
  int id_ = 0;
  void set_id();

public:
  Counted();
  Counted(const Counted&);
  Counted& operator=(const Counted&);
  int get_id();
  ~Counted();
};

#endif  // COUNTED_H
