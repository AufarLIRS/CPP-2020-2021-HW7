#include "counted.h"

int Counted::count;
int Counted::getID()
{
  return this->ID;
}

Counted::Counted()
{
  count++;
  ID = count;
}
Counted::~Counted()
{
  count--;
}

Counted::Counted(const Counted& original)
{
  this->count = original.count;
}
Counted& Counted::operator=(const Counted& original)
{
  this->count = original.count;
  return *this;
}
