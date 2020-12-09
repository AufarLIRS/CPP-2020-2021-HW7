#include "counted.h"

unsigned int Counted::count;

unsigned int Counted::getId()
{
  return id;
}

Counted::Counted()
{
  count++;
  id = count;
}

Counted::~Counted()
{
  count--;
}

Counted& Counted::operator=(const Counted& next)
{
  count = next.count;
  return *this;
}

Counted::Counted(const Counted& next)
{
  count = next.count;
}
