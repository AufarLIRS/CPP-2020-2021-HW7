#ifndef COUNTED_H
#define COUNTED_H

#include <exception>
class Counted
{
private:
  int id;
  static int count;

public:
  Counted();
  int get_id();
  void set_id(int count);
  ~Counted();

  Counted(const Counted&);
  Counted(Counted&&) = delete;

  Counted& operator=(const Counted&);
  Counted& operator=(Counted&&) = delete;
};

#endif  // COUNTED_H
