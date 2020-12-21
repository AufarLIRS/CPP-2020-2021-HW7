#include "counted.h"

unsigned int Counted::count;
unsigned int Counted::max_count;
std::vector<int> Counted::vec_del_id;

void Counted::set_id(unsigned int count)
{
  if (count != max_count)
  {
    unsigned int vec_size = vec_del_id.size();
    unsigned int i = 0;
    while (i < vec_size)
    {
      if (vec_del_id[i] != -1)
      {
        id = vec_del_id[i];
        vec_del_id[i] = -1;
        break;
      }
      i++;
    }
  }
}

unsigned int Counted::getId()
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
  vec_del_id.push_back(id);
  count--;
}

Counted& Counted::operator=(const Counted& next)
{
  if (this == &next)
    return *this;
  count = next.count;
  set_id(count);
  return *this;
}

Counted::Counted(const Counted& next)
{
  count = next.count;
  set_id(count);
}
