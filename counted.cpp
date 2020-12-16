#include "counted.h"
#include <algorithm>

void Counted::set_id()
{
  std::vector<bool>::iterator it = std::find(ids_.begin(), ids_.end(), false);
  id_ = std::distance(ids_.begin(), it) + 1;
  if (it == ids_.end())
  {
    ids_.push_back(true);
  }
  else
  {
    ids_.at(id_ - 1) = true;
  }
}
std::vector<bool> Counted::ids_ = std::vector<bool>();
Counted::Counted()
{
  set_id();
}
Counted::Counted(const Counted& counted)
{
  /*
   * if counted is not this
   * then copy to new object with new id_
   * else make new object
   * (which means set_id())
   */
  if (&counted != this)
  {
    set_id();
  }
  else
  {
    set_id();
  }
}
Counted& Counted::operator=(const Counted& counted)
{
  /*
   * if counted is not this
   * then copy to object with new id_
   * else return self reference
   */
  if (&counted != this)
  {
    return *this;
  }
  else
  {
    return *this;
  }
}
Counted::~Counted()
{
  if ((int)ids_.size() == id_)
  {
    ids_.pop_back();
  }
  else
  {
    ids_.at(id_ - 1) = false;
  }
  while (!ids_.back())
  {
    ids_.pop_back();
  }
}
int Counted::get_id()
{
  return id_;
}
