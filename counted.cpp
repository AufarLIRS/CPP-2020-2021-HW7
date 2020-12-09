#include "counted.h"

int Counted::count;
void Counted::set_id(int count)
{
  if (id != count)
  {
    count++;
    id = count;
    this->count = count;
  }
  if (id < 0)
    throw std::exception("Invalid value");
}
int Counted::get_id()
{
  return id;
}
Counted::Counted()
{
  count++;
  id = count;
  set_id(count);
}
Counted::~Counted()
{
  count--;
}
Counted::Counted(const Counted& other)
{
  count = other.count;
  set_id(count);
}
Counted& Counted::operator=(const Counted& other)
{
  count = other.count;
  return *this;
}
