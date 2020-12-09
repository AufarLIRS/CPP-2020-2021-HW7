#include "counted.h"

int Counted::Number;

int Counted::GetId()
{
  return Id;
}

Counted::Counted()
{
  Number++;
  Id = Number;
}

Counted::Counted(const Counted& NextId)
{
  Number = NextId.Number;
}

Counted& Counted::operator=(const Counted& NextId)
{
  Number = NextId.Number;
  return *this;
}

Counted::~Counted()
{
  Number--;
}
