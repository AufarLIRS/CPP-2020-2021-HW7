#ifndef COUNTED_H
#define COUNTED_H

class Counted
{
  unsigned int id;
  static unsigned int count;

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
