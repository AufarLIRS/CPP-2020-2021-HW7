#ifndef COUNTED_H
#define COUNTED_H

#include <vector>
class Counted
{
  unsigned int id;
  static unsigned int count;
  static unsigned int max_count;
  static std::vector<int> vec_del_id;
  void set_id(unsigned int count);

public:
  unsigned int getId();
  Counted();
  ~Counted();
  Counted& operator=(const Counted&);
  Counted(const Counted&);
  Counted& operator=(Counted&&) = delete;
  Counted(Counted&&) = delete;
};

#endif  // COUNTED_H
