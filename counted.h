#ifndef COUNTED_H
#define COUNTED_H
#include <string>
#include <vector>

class counted
{
private:
  static std::vector<int> used_id;
  int id;
  void SetId(int number);
  static int Number;
  static int LastNumber;

public:
  int getid();
  counted();
  counted(const counted&);
  counted& operator=(const counted&);
  ~counted();
};

#endif  // COUNTED_H
