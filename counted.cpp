#include "counted.h"

int Counted::count;
int Counted::max_count;
std::vector<int> Counted::deleted_id_vec;
void Counted::set_id(int count)
{
  if (count != max_count)
  {
    unsigned int vec_size = deleted_id_vec.size();
    for (unsigned int i = 0; i < vec_size; i++)
    {
      if (deleted_id_vec[i] != -1)
      {
        id = deleted_id_vec[i];
        deleted_id_vec[i] = -1;
        break;
      }
    }
    this->count++;
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
  max_count++;
  id = count;
  set_id(count);
}
Counted::~Counted()
{
  deleted_id_vec.push_back(id);
  count--;
}
Counted::Counted(const Counted& other)
{
  count = other.count;
  set_id(count);
}
Counted& Counted::operator=(const Counted& other)
{
  if (this == &other)
    return *this;
  count = other.count;
  set_id(count);
  return *this;
}
