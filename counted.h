#ifndef COUNTED_H
#define COUNTED_H

#include <exception>
#include <vector>
class Counted
{
private:
  int id;
  static int count;
  static int max_count;
  static std::vector<int> deleted_id_vec;
  void set_id(int count);

public:
  Counted();
  int get_id();

  ~Counted();

  Counted(const Counted&);
  Counted(Counted&&) = delete;

  Counted& operator=(const Counted&);
  Counted& operator=(Counted&&) = delete;
};

#endif  // COUNTED_H
