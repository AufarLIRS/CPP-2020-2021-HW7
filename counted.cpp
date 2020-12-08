#include "counted.h"
#include <algorithm>

void Counted::set_id()
{
  std::vector<Counted*>::iterator it = std::find(counteds_.begin(), counteds_.end(), nullptr);
  id_ = std::distance(counteds_.begin(), it) + 1;
  if (it == counteds_.end())
  {
    counteds_.push_back(this);
  }
  else
  {
    counteds_.at(id_ - 1) = this;
  }
}
std::vector<Counted*> Counted::counteds_ = std::vector<Counted*>();
Counted::Counted()
{
  set_id();
}
Counted::Counted(const Counted&)
{
  set_id();
}
Counted& Counted::operator=(const Counted&)
{
  return *this;
}
Counted::~Counted()
{
  counteds_.at(id_ - 1) = nullptr;
}
int Counted::get_id()
{
  return id_;
}
