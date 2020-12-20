#ifndef COUNTED_H
#define COUNTED_H

#include <vector>

class Counted
{
private:
  static std::vector<int> used_id;
  int Id;
  void SetId(int number);
  static int Number;
  static int LastNumber;

public:
  int GetId();
  Counted();
  Counted(const Counted&);
  Counted& operator=(const Counted&);
  ~Counted();
};

#endif  // COUNTED_H
