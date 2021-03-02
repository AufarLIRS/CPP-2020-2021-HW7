#ifndef COUNTED_H
#define COUNTED_H

#include <vector>
class Counted
{
  int id;
  static int count;
  static int max_count;
  static std::vector<int> vecOfDelIDs;
  void set_id(int count);

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
