#ifndef COUNTED_H
#define COUNTED_H

class Counted
{
  int ID = 0;
  static int count;

public:
  int getID();
  Counted();
  ~Counted();

  Counted(const Counted&);
  Counted& operator=(const Counted&);
};

#endif  // COUNTED_H
